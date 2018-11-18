/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.4
 */
#ifndef __VK_VKPIPELINELAYOUTCREATEINFO_H__
#define __VK_VKPIPELINELAYOUTCREATEINFO_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkPipelineLayoutCreateInfo: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetsType);
    static NAN_SETTER(SetsType);
    
    Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> pNext;
    static NAN_GETTER(GetpNext);
    static NAN_SETTER(SetpNext);
    
    static NAN_GETTER(Getflags);
    static NAN_SETTER(Setflags);
    
    static NAN_GETTER(GetsetLayoutCount);
    static NAN_SETTER(SetsetLayoutCount);
    
    Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> pSetLayouts;
    static NAN_GETTER(GetpSetLayouts);
    static NAN_SETTER(SetpSetLayouts);
    
    static NAN_GETTER(GetpushConstantRangeCount);
    static NAN_SETTER(SetpushConstantRangeCount);
    
    Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> pPushConstantRanges;
    static NAN_GETTER(GetpPushConstantRanges);
    static NAN_SETTER(SetpPushConstantRanges);
    

    // real instance
    VkPipelineLayoutCreateInfo instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);

  private:
    _VkPipelineLayoutCreateInfo();
    ~_VkPipelineLayoutCreateInfo();

};

#endif