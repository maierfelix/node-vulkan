/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.4
 */
#ifndef __VK_VKDEVICEQUEUECREATEINFO_H__
#define __VK_VKDEVICEQUEUECREATEINFO_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkDeviceQueueCreateInfo: public Nan::ObjectWrap {

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
    
    static NAN_GETTER(GetqueueFamilyIndex);
    static NAN_SETTER(SetqueueFamilyIndex);
    
    static NAN_GETTER(GetqueueCount);
    static NAN_SETTER(SetqueueCount);
    
    Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> pQueuePriorities;
    static NAN_GETTER(GetpQueuePriorities);
    static NAN_SETTER(SetpQueuePriorities);
    

    // real instance
    VkDeviceQueueCreateInfo instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);

  private:
    _VkDeviceQueueCreateInfo();
    ~_VkDeviceQueueCreateInfo();

};

#endif