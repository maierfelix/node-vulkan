/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.4
 */
#ifndef __VK_VKSURFACECAPABILITIESKHR_H__
#define __VK_VKSURFACECAPABILITIESKHR_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkSurfaceCapabilitiesKHR: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetminImageCount);
    static NAN_GETTER(GetmaxImageCount);
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> currentExtent;
      static NAN_GETTER(GetcurrentExtent);
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> minImageExtent;
      static NAN_GETTER(GetminImageExtent);
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> maxImageExtent;
      static NAN_GETTER(GetmaxImageExtent);
    static NAN_GETTER(GetmaxImageArrayLayers);
    static NAN_GETTER(GetsupportedTransforms);
    static NAN_GETTER(GetcurrentTransform);
    static NAN_GETTER(GetsupportedCompositeAlpha);
    static NAN_GETTER(GetsupportedUsageFlags);

    // real instance
    VkSurfaceCapabilitiesKHR instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);

  private:
    _VkSurfaceCapabilitiesKHR();
    ~_VkSurfaceCapabilitiesKHR();

};

#endif