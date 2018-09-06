import fs from "fs";

import pkg from "../package.json";

import generateAST from "./generators/ast";
import generateCalls from "./generators/calls";
import generateEnums from "./generators/enums";
import generateIndex from "./generators/index";
import generateStructs from "./generators/structs";
import generateHandles from "./generators/handles";
import generateGyp from "./generators/gyp";
import generatePackage from "./generators/package";
import generateUtils from "./generators/utils";

// bridged to only change the change data of a file if it's really necessary
// (the compiler seems to re-compile based on file changes..)
function writeFile(path, data, encoding, includeNotice = false) {
  let source = null;
  try {
    source = fs.readFileSync(path, encoding);
  } catch(e) {};
  if (source !== data) {
    if (includeNotice) data = GEN_FILE_NOTICE + data;
    fs.writeFileSync(path, data, encoding);
  }
};

function ignoreStruct(struct) {
  return !structWhiteList.includes(struct.name + ".h");
};

// input vars
let argsVersion = null;

let args = process.argv;
for (let ii = 2; ii < args.length; ++ii) {
  if (args[ii].charAt(0) === "-") {
    let cmd = args[ii + 0].substr(1, 2);
    let value = args[ii + 1];
    switch (cmd) {
      case "v":
      case "version":
        argsVersion = value || null;
        ii++;
      break;
    };
  }
};

// args error handling
if (!argsVersion) throw `No specification version -v specified!`;

const baseGeneratePath = pkg.config.GEN_OUT_DIR;
const generatePath = `${baseGeneratePath}/${argsVersion}`;
const generateSrcPath = `${generatePath}/src`;
const baseIncludePath = `"./generated/<(vkVersion)`;

const GEN_FILE_NOTICE = `/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY ${pkg.name} v${pkg.version}
 */
`;

// generated/
if (!fs.existsSync(baseGeneratePath)) fs.mkdirSync(baseGeneratePath);
// generated/version/
if (!fs.existsSync(generatePath)) fs.mkdirSync(generatePath);
// generated/version/src/
if (!fs.existsSync(generateSrcPath)) fs.mkdirSync(generateSrcPath);

let ast = null;
let includes = [];
let includeNames = [];

let structWhiteList = [
  "VkPhysicalDeviceFeatures.h",
  "VkDeviceQueueCreateInfo.h",
  "VkDeviceCreateInfo.h",
  "VkBindImagePlaneMemoryInfo.h",
  "VkImageSubresourceRange.h",
  "VkApplicationInfo.h",
  "VkInstanceCreateInfo.h",
  "VkBufferCreateInfo.h",
  "VkExtent2D.h",
  "VkOffset2D.h",
  "VkRect2D.h",
  "VkClearRect.h",
  "VkImageMemoryBarrier.h"
];

console.log(`Generating bindings based on ${argsVersion}.xml`);

// generate AST
{
  console.log(`Generating Vk ast..`);
  let xmlInput = fs.readFileSync(`${pkg.config.SPEC_DIR}/${argsVersion}.xml`, "utf-8");
  ast = generateAST(xmlInput);
  let str = JSON.stringify(ast, null, 2);
  writeFile(`${generateSrcPath}/ast.json`, str, "utf-8");
}

// filter out ast nodes by their types
let calls = ast.filter(node => node.kind === "COMMAND_PROTO");
let enums = ast.filter(node => node.kind === "ENUM");
let structs = ast.filter(node => node.kind === "STRUCT");
let handles = ast.filter(node => node.kind === "HANDLES")[0].children;

// generate structs
{
  console.log("Generating Vk structs..");
  structs.map(struct => {
    if (ignoreStruct(struct)) return;
    let result = generateStructs(struct);
    result.includes.map(incl => includes.push(incl));
    if (includes.indexOf(struct.name) <= -1) includes.push({ name: struct.name, include: "" });
    writeFile(`${generateSrcPath}/${struct.name}.h`, result.header, "utf-8", true);
    writeFile(`${generateSrcPath}/${struct.name}.cpp`, result.source, "utf-8", true);
  });
}

// generate handles
{
  console.log("Generating Vk handles..");
  handles.map(handle => {
    let result = generateHandles(handle);
    if (includes.indexOf(handle) <= -1) includes.push({ name: handle, include: "" });
    writeFile(`${generateSrcPath}/${handle}.h`, result.header, "utf-8", true);
    writeFile(`${generateSrcPath}/${handle}.cpp`, result.source, "utf-8", true);
  });
}

// generate enums
{
  console.log("Generating Vk enums..");
  let name = `enums`;
  let result = generateEnums(enums);
  writeFile(`${generateSrcPath}/${name}.h`, result.source, "utf-8", true);
}

// generate calls
{
  console.log("Generating Vk calls..");
  let name = `calls`;
  let result = generateCalls(calls);
  writeFile(`${generateSrcPath}/${name}.h`, result.source, "utf-8", true);
}

// generate includes
{
  console.log("Generating Vk includes..");
  structs.map(struct => {
    if (ignoreStruct(struct)) return;
    includeNames.push(`"./src/${struct.name}.cpp"`);
  });
  handles.map(handle => {
    includeNames.push(`"./src/${handle}.cpp"`);
  });
  // also add the index.cpp
  includeNames.push(`"./src/index.cpp"`);
}

// generate binding.gyp
{
  console.log("Generating binding.gyp..");
  let result = generateGyp(argsVersion, includeNames);
  writeFile(`${generatePath}/binding.gyp`, result.gyp, "utf-8");
}

// generate package.json
{
  console.log("Generating package.json..");
  let result = generatePackage(argsVersion);
  writeFile(`${generatePath}/package.json`, result.json, "utf-8");
}

// generate utils
{
  console.log("Generating utils..");
  let utilsFile = generateUtils(includes, calls);
  writeFile(`${generateSrcPath}/utils.h`, utilsFile.header, "utf-8", true);
}

// generate indices
{
  console.log("Generating indices..");
  let indexFile = generateIndex(includes, calls);
  writeFile(`${generateSrcPath}/index.h`, indexFile.header, "utf-8", true);
  writeFile(`${generateSrcPath}/index.cpp`, indexFile.source, "utf-8", true);
}
