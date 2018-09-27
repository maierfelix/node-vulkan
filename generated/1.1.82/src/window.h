/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.1
 */
#ifndef __VK_WINDOW_H__
#define __VK_WINDOW_H__

#include <nan.h>

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class VulkanWindow: public Nan::ObjectWrap {

  public:

    static NAN_METHOD(New);

    int width = 480;
    int height = 320;
    std::string title = "undefined";

    Nan::Persistent<v8::Function, v8::CopyablePersistentTraits<v8::Function>> onresize;

    GLFWwindow* instance;

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);

    static NAN_METHOD(pollEvents);
    static NAN_METHOD(shouldClose);
    static NAN_METHOD(createSurface);
    static NAN_METHOD(getRequiredInstanceExtensions);

    static NAN_GETTER(Gettitle);
    static NAN_SETTER(Settitle);

    static NAN_GETTER(Getwidth);
    static NAN_SETTER(Setwidth);

    static NAN_GETTER(Getheight);
    static NAN_SETTER(Setheight);

    static NAN_GETTER(Getonresize);
    static NAN_SETTER(Setonresize);

    static void onWindowResize(GLFWwindow*, int, int);

  private:
    VulkanWindow();
    ~VulkanWindow();

};

Nan::Persistent<v8::FunctionTemplate> VulkanWindow::constructor;

VulkanWindow::VulkanWindow() {}
VulkanWindow::~VulkanWindow() {}

void VulkanWindow::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(VulkanWindow::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VulkanWindow").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();

  Nan::SetPrototypeMethod(ctor, "pollEvents", pollEvents);
  Nan::SetPrototypeMethod(ctor, "shouldClose", shouldClose);
  Nan::SetPrototypeMethod(ctor, "createSurface", createSurface);
  Nan::SetPrototypeMethod(ctor, "getRequiredInstanceExtensions", getRequiredInstanceExtensions);

  SetPrototypeAccessor(proto, Nan::New("title").ToLocalChecked(), Gettitle, Settitle, ctor);
  SetPrototypeAccessor(proto, Nan::New("width").ToLocalChecked(), Getwidth, Setwidth, ctor);
  SetPrototypeAccessor(proto, Nan::New("height").ToLocalChecked(), Getheight, Setheight, ctor);

  SetPrototypeAccessor(proto, Nan::New("onresize").ToLocalChecked(), Getonresize, Setonresize, ctor);

  Nan::Set(target, Nan::New("VulkanWindow").ToLocalChecked(), ctor->GetFunction());
}

void VulkanWindow::onWindowResize(GLFWwindow* window, int w, int h) {
  VulkanWindow* self = static_cast<VulkanWindow*>(glfwGetWindowUserPointer(window));
  self->width = w;
  self->height = h;
  v8::Local<v8::Object> out = Nan::New<v8::Object>();
  out->Set(Nan::New("width").ToLocalChecked(), Nan::New(self->width));
  out->Set(Nan::New("height").ToLocalChecked(), Nan::New(self->height));
  const unsigned argc = 1;
  v8::Local<v8::Value> argv[argc] = { out };
  Nan::MakeCallback(Nan::GetCurrentContext()->Global(), Nan::New(self->onresize), argc, argv);
}

NAN_METHOD(VulkanWindow::New) {
  VulkanWindow* self = new VulkanWindow();
  self->Wrap(info.Holder());
  // create glfw window
  if (info.IsConstructCall()) {
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = info[0]->ToObject();
      v8::Local<v8::Value> argWidth = obj->Get(Nan::New("width").ToLocalChecked());
      v8::Local<v8::Value> argHeight = obj->Get(Nan::New("height").ToLocalChecked());
      v8::Local<v8::Value> argTitle = obj->Get(Nan::New("title").ToLocalChecked());
      if (!argWidth->IsUndefined()) self->width = argWidth->Uint32Value();
      if (!argHeight->IsUndefined()) self->height = argHeight->Uint32Value();
      if (!argTitle->IsUndefined()) self->title = *v8::String::Utf8Value(v8::Isolate::GetCurrent(), argTitle);
    }
    if (glfwInit() != GLFW_TRUE) return Nan::ThrowError("Failed to create GLFW!");
    glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
    glfwWindowHint(GLFW_RESIZABLE, GLFW_TRUE);
    GLFWwindow* window = glfwCreateWindow(self->width, self->height, self->title.c_str(), nullptr, nullptr);
    glfwSetWindowUserPointer(window, self);
    glfwSetWindowSizeCallback(window, VulkanWindow::onWindowResize);
    self->instance = window;
  }
  info.GetReturnValue().Set(info.Holder());
}

NAN_METHOD(VulkanWindow::shouldClose) {
  VulkanWindow *self = Nan::ObjectWrap::Unwrap<VulkanWindow>(info.This());
  info.GetReturnValue().Set(Nan::New(glfwWindowShouldClose(self->instance)));
}

NAN_METHOD(VulkanWindow::pollEvents) {
  VulkanWindow *self = Nan::ObjectWrap::Unwrap<VulkanWindow>(info.This());
  if (!glfwWindowShouldClose(self->instance)) {
    glfwPollEvents();
  }
}

NAN_METHOD(VulkanWindow::createSurface) {
  VulkanWindow *self = Nan::ObjectWrap::Unwrap<VulkanWindow>(info.This());

  v8::Local<v8::Object> arg0;
  v8::Local<v8::Object> arg1;
  v8::Local<v8::Object> arg2;

  if (info[0]->IsObject()) arg0 = info[0]->ToObject();
  if (info[1]->IsObject()) arg1 = info[1]->ToObject();
  if (info[2]->IsObject()) arg2 = info[2]->ToObject();

  _VkInstance* instance = Nan::ObjectWrap::Unwrap<_VkInstance>(arg0);
  _VkSurfaceKHR* surface = Nan::ObjectWrap::Unwrap<_VkSurfaceKHR>(arg2);

  VkResult out = glfwCreateWindowSurface(
    instance->instance,
    self->instance,
    nullptr,
    &surface->instance
  );

  info.GetReturnValue().Set(Nan::New(static_cast<int32_t>(out)));
}

NAN_METHOD(VulkanWindow::getRequiredInstanceExtensions) {
  v8::Isolate *isolate = info.GetIsolate();
  VulkanWindow *self = Nan::ObjectWrap::Unwrap<VulkanWindow>(info.This());

  uint32_t glfwExtensionCount = 0;
  const char** glfwExtensions = glfwGetRequiredInstanceExtensions(&glfwExtensionCount);

  v8::Local<v8::Array> out = v8::Array::New(isolate, glfwExtensionCount);
  for (unsigned int ii = 0; ii < glfwExtensionCount; ++ii) {
    v8::Local<v8::String> str = v8::String::NewFromUtf8(isolate, glfwExtensions[ii]);
    out->Set(ii, str);
  };

  info.GetReturnValue().Set(out);
}

// title
NAN_GETTER(VulkanWindow::Gettitle) {
  v8::Isolate *isolate = info.GetIsolate();
  VulkanWindow *self = Nan::ObjectWrap::Unwrap<VulkanWindow>(info.This());
  v8::Local<v8::String> str = v8::String::NewFromUtf8(isolate, self->title.c_str());
  info.GetReturnValue().Set(str);
}
NAN_SETTER(VulkanWindow::Settitle) {
  VulkanWindow *self = Nan::ObjectWrap::Unwrap<VulkanWindow>(info.This());
  GLFWwindow* window = self->instance;

  v8::Local<v8::Value> argTitle = value;
  std::string title = *v8::String::Utf8Value(v8::Isolate::GetCurrent(), argTitle);
  glfwSetWindowTitle(window, title.c_str());
  self->title = title;
}

// width
NAN_GETTER(VulkanWindow::Getwidth) {
  VulkanWindow *self = Nan::ObjectWrap::Unwrap<VulkanWindow>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->width));
}
NAN_SETTER(VulkanWindow::Setwidth) {
  VulkanWindow *self = Nan::ObjectWrap::Unwrap<VulkanWindow>(info.This());
  self->width = static_cast<int>(value->NumberValue());
  glfwSetWindowSize(self->instance, self->width, self->height);
  VulkanWindow::onWindowResize(self->instance, self->width, self->height);
}

// height
NAN_GETTER(VulkanWindow::Getheight) {
  VulkanWindow *self = Nan::ObjectWrap::Unwrap<VulkanWindow>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->height));
}
NAN_SETTER(VulkanWindow::Setheight) {
  VulkanWindow *self = Nan::ObjectWrap::Unwrap<VulkanWindow>(info.This());
  self->height = static_cast<int>(value->NumberValue());
  glfwSetWindowSize(self->instance, self->width, self->height);
  VulkanWindow::onWindowResize(self->instance, self->width, self->height);
}

// onresize
NAN_GETTER(VulkanWindow::Getonresize) {
  VulkanWindow *self = Nan::ObjectWrap::Unwrap<VulkanWindow>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Function>(self->onresize));
}
NAN_SETTER(VulkanWindow::Setonresize) {
  VulkanWindow *self = Nan::ObjectWrap::Unwrap<VulkanWindow>(info.This());
  self->onresize = Nan::Persistent<v8::Function, v8::CopyablePersistentTraits<v8::Function>>(value.As<v8::Function>());
}

#endif
