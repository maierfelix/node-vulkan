/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.4
 */
#include "utils.h"
#include "index.h"
#include "VkSwapchainCreateInfoKHR.h"

Nan::Persistent<v8::FunctionTemplate> _VkSwapchainCreateInfoKHR::constructor;

_VkSwapchainCreateInfoKHR::_VkSwapchainCreateInfoKHR() {
  instance.sType = VK_STRUCTURE_TYPE_SWAPCHAIN_CREATE_INFO_KHR;
}

_VkSwapchainCreateInfoKHR::~_VkSwapchainCreateInfoKHR() {
  //printf("VkSwapchainCreateInfoKHR deconstructed!!\n");
}

void _VkSwapchainCreateInfoKHR::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkSwapchainCreateInfoKHR::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkSwapchainCreateInfoKHR").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("pNext").ToLocalChecked(), GetpNext, SetpNext, ctor);
  SetPrototypeAccessor(proto, Nan::New("flags").ToLocalChecked(), Getflags, Setflags, ctor);
  SetPrototypeAccessor(proto, Nan::New("surface").ToLocalChecked(), Getsurface, Setsurface, ctor);
  SetPrototypeAccessor(proto, Nan::New("minImageCount").ToLocalChecked(), GetminImageCount, SetminImageCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("imageFormat").ToLocalChecked(), GetimageFormat, SetimageFormat, ctor);
  SetPrototypeAccessor(proto, Nan::New("imageColorSpace").ToLocalChecked(), GetimageColorSpace, SetimageColorSpace, ctor);
  SetPrototypeAccessor(proto, Nan::New("imageExtent").ToLocalChecked(), GetimageExtent, SetimageExtent, ctor);
  SetPrototypeAccessor(proto, Nan::New("imageArrayLayers").ToLocalChecked(), GetimageArrayLayers, SetimageArrayLayers, ctor);
  SetPrototypeAccessor(proto, Nan::New("imageUsage").ToLocalChecked(), GetimageUsage, SetimageUsage, ctor);
  SetPrototypeAccessor(proto, Nan::New("imageSharingMode").ToLocalChecked(), GetimageSharingMode, SetimageSharingMode, ctor);
  SetPrototypeAccessor(proto, Nan::New("queueFamilyIndexCount").ToLocalChecked(), GetqueueFamilyIndexCount, SetqueueFamilyIndexCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("pQueueFamilyIndices").ToLocalChecked(), GetpQueueFamilyIndices, SetpQueueFamilyIndices, ctor);
  SetPrototypeAccessor(proto, Nan::New("preTransform").ToLocalChecked(), GetpreTransform, SetpreTransform, ctor);
  SetPrototypeAccessor(proto, Nan::New("compositeAlpha").ToLocalChecked(), GetcompositeAlpha, SetcompositeAlpha, ctor);
  SetPrototypeAccessor(proto, Nan::New("presentMode").ToLocalChecked(), GetpresentMode, SetpresentMode, ctor);
  SetPrototypeAccessor(proto, Nan::New("clipped").ToLocalChecked(), Getclipped, Setclipped, ctor);
  SetPrototypeAccessor(proto, Nan::New("oldSwapchain").ToLocalChecked(), GetoldSwapchain, SetoldSwapchain, ctor);
  Nan::Set(target, Nan::New("VkSwapchainCreateInfoKHR").ToLocalChecked(), ctor->GetFunction());
}

NAN_METHOD(_VkSwapchainCreateInfoKHR::New) {
  if (info.IsConstructCall()) {
    _VkSwapchainCreateInfoKHR* self = new _VkSwapchainCreateInfoKHR();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = info[0]->ToObject();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess1 = Nan::New("pNext").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("flags").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("surface").ToLocalChecked();
      v8::Local<v8::String> sAccess4 = Nan::New("minImageCount").ToLocalChecked();
      v8::Local<v8::String> sAccess5 = Nan::New("imageFormat").ToLocalChecked();
      v8::Local<v8::String> sAccess6 = Nan::New("imageColorSpace").ToLocalChecked();
      v8::Local<v8::String> sAccess7 = Nan::New("imageExtent").ToLocalChecked();
      v8::Local<v8::String> sAccess8 = Nan::New("imageArrayLayers").ToLocalChecked();
      v8::Local<v8::String> sAccess9 = Nan::New("imageUsage").ToLocalChecked();
      v8::Local<v8::String> sAccess10 = Nan::New("imageSharingMode").ToLocalChecked();
      v8::Local<v8::String> sAccess11 = Nan::New("queueFamilyIndexCount").ToLocalChecked();
      v8::Local<v8::String> sAccess12 = Nan::New("pQueueFamilyIndices").ToLocalChecked();
      v8::Local<v8::String> sAccess13 = Nan::New("preTransform").ToLocalChecked();
      v8::Local<v8::String> sAccess14 = Nan::New("compositeAlpha").ToLocalChecked();
      v8::Local<v8::String> sAccess15 = Nan::New("presentMode").ToLocalChecked();
      v8::Local<v8::String> sAccess16 = Nan::New("clipped").ToLocalChecked();
      v8::Local<v8::String> sAccess17 = Nan::New("oldSwapchain").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess1)) info.This()->Set(sAccess1, obj->Get(sAccess1));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      if (obj->Has(sAccess3)) info.This()->Set(sAccess3, obj->Get(sAccess3));
      if (obj->Has(sAccess4)) info.This()->Set(sAccess4, obj->Get(sAccess4));
      if (obj->Has(sAccess5)) info.This()->Set(sAccess5, obj->Get(sAccess5));
      if (obj->Has(sAccess6)) info.This()->Set(sAccess6, obj->Get(sAccess6));
      if (obj->Has(sAccess7)) info.This()->Set(sAccess7, obj->Get(sAccess7));
      if (obj->Has(sAccess8)) info.This()->Set(sAccess8, obj->Get(sAccess8));
      if (obj->Has(sAccess9)) info.This()->Set(sAccess9, obj->Get(sAccess9));
      if (obj->Has(sAccess10)) info.This()->Set(sAccess10, obj->Get(sAccess10));
      if (obj->Has(sAccess11)) info.This()->Set(sAccess11, obj->Get(sAccess11));
      if (obj->Has(sAccess12)) info.This()->Set(sAccess12, obj->Get(sAccess12));
      if (obj->Has(sAccess13)) info.This()->Set(sAccess13, obj->Get(sAccess13));
      if (obj->Has(sAccess14)) info.This()->Set(sAccess14, obj->Get(sAccess14));
      if (obj->Has(sAccess15)) info.This()->Set(sAccess15, obj->Get(sAccess15));
      if (obj->Has(sAccess16)) info.This()->Set(sAccess16, obj->Get(sAccess16));
      if (obj->Has(sAccess17)) info.This()->Set(sAccess17, obj->Get(sAccess17));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkSwapchainCreateInfoKHR constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkSwapchainCreateInfoKHR::GetsType) {
  _VkSwapchainCreateInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkSwapchainCreateInfoKHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkSwapchainCreateInfoKHR::SetsType) {
  _VkSwapchainCreateInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkSwapchainCreateInfoKHR>(info.This());
  self->instance.sType = static_cast<VkStructureType>((int32_t)value->NumberValue());
}// pNext
NAN_GETTER(_VkSwapchainCreateInfoKHR::GetpNext) {
  _VkSwapchainCreateInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkSwapchainCreateInfoKHR>(info.This());
}NAN_SETTER(_VkSwapchainCreateInfoKHR::SetpNext) {
  _VkSwapchainCreateInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkSwapchainCreateInfoKHR>(info.This());
}// flags
NAN_GETTER(_VkSwapchainCreateInfoKHR::Getflags) {
  _VkSwapchainCreateInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkSwapchainCreateInfoKHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.flags));
}NAN_SETTER(_VkSwapchainCreateInfoKHR::Setflags) {
  _VkSwapchainCreateInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkSwapchainCreateInfoKHR>(info.This());
  self->instance.flags = static_cast<VkSwapchainCreateFlagsKHR>((int32_t)value->NumberValue());
}// surface
NAN_GETTER(_VkSwapchainCreateInfoKHR::Getsurface) {
  _VkSwapchainCreateInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkSwapchainCreateInfoKHR>(info.This());
  if (self->surface.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->surface);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkSwapchainCreateInfoKHR::Setsurface) {
  _VkSwapchainCreateInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkSwapchainCreateInfoKHR>(info.This());
  // js
  if (!(value->IsNull())) {
    Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> obj(value->ToObject());
    self->surface = obj;
  } else {
    //self->surface = Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>>(Nan::Null());
  }
  // vulkan
  if (!(value->IsNull())) {
    _VkSurfaceKHR* obj = Nan::ObjectWrap::Unwrap<_VkSurfaceKHR>(value->ToObject());
    self->instance.surface = obj->instance;
  } else {
    self->instance.surface = VK_NULL_HANDLE;
  }
}// minImageCount
NAN_GETTER(_VkSwapchainCreateInfoKHR::GetminImageCount) {
  _VkSwapchainCreateInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkSwapchainCreateInfoKHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.minImageCount));
}NAN_SETTER(_VkSwapchainCreateInfoKHR::SetminImageCount) {
  _VkSwapchainCreateInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkSwapchainCreateInfoKHR>(info.This());
  self->instance.minImageCount = static_cast<uint32_t>(value->NumberValue());
}// imageFormat
NAN_GETTER(_VkSwapchainCreateInfoKHR::GetimageFormat) {
  _VkSwapchainCreateInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkSwapchainCreateInfoKHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.imageFormat));
}NAN_SETTER(_VkSwapchainCreateInfoKHR::SetimageFormat) {
  _VkSwapchainCreateInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkSwapchainCreateInfoKHR>(info.This());
  self->instance.imageFormat = static_cast<VkFormat>((int32_t)value->NumberValue());
}// imageColorSpace
NAN_GETTER(_VkSwapchainCreateInfoKHR::GetimageColorSpace) {
  _VkSwapchainCreateInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkSwapchainCreateInfoKHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.imageColorSpace));
}NAN_SETTER(_VkSwapchainCreateInfoKHR::SetimageColorSpace) {
  _VkSwapchainCreateInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkSwapchainCreateInfoKHR>(info.This());
  self->instance.imageColorSpace = static_cast<VkColorSpaceKHR>((int32_t)value->NumberValue());
}// imageExtent
NAN_GETTER(_VkSwapchainCreateInfoKHR::GetimageExtent) {
  _VkSwapchainCreateInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkSwapchainCreateInfoKHR>(info.This());
  if (self->imageExtent.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->imageExtent);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkSwapchainCreateInfoKHR::SetimageExtent) {
  _VkSwapchainCreateInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkSwapchainCreateInfoKHR>(info.This());
  // js
  if (!(value->IsNull())) {
    Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> obj(value->ToObject());
    self->imageExtent = obj;
  } else {
    //self->imageExtent = Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>>(Nan::Null());
  }
  // vulkan
  if (!(value->IsNull())) {
    _VkExtent2D* obj = Nan::ObjectWrap::Unwrap<_VkExtent2D>(value->ToObject());
    self->instance.imageExtent = obj->instance;
  } else {
    memset(&self->instance.imageExtent, 0, sizeof(VkExtent2D));
  }
}// imageArrayLayers
NAN_GETTER(_VkSwapchainCreateInfoKHR::GetimageArrayLayers) {
  _VkSwapchainCreateInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkSwapchainCreateInfoKHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.imageArrayLayers));
}NAN_SETTER(_VkSwapchainCreateInfoKHR::SetimageArrayLayers) {
  _VkSwapchainCreateInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkSwapchainCreateInfoKHR>(info.This());
  self->instance.imageArrayLayers = static_cast<uint32_t>(value->NumberValue());
}// imageUsage
NAN_GETTER(_VkSwapchainCreateInfoKHR::GetimageUsage) {
  _VkSwapchainCreateInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkSwapchainCreateInfoKHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.imageUsage));
}NAN_SETTER(_VkSwapchainCreateInfoKHR::SetimageUsage) {
  _VkSwapchainCreateInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkSwapchainCreateInfoKHR>(info.This());
  self->instance.imageUsage = static_cast<VkImageUsageFlags>((int32_t)value->NumberValue());
}// imageSharingMode
NAN_GETTER(_VkSwapchainCreateInfoKHR::GetimageSharingMode) {
  _VkSwapchainCreateInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkSwapchainCreateInfoKHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.imageSharingMode));
}NAN_SETTER(_VkSwapchainCreateInfoKHR::SetimageSharingMode) {
  _VkSwapchainCreateInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkSwapchainCreateInfoKHR>(info.This());
  self->instance.imageSharingMode = static_cast<VkSharingMode>((int32_t)value->NumberValue());
}// queueFamilyIndexCount
NAN_GETTER(_VkSwapchainCreateInfoKHR::GetqueueFamilyIndexCount) {
  _VkSwapchainCreateInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkSwapchainCreateInfoKHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.queueFamilyIndexCount));
}NAN_SETTER(_VkSwapchainCreateInfoKHR::SetqueueFamilyIndexCount) {
  _VkSwapchainCreateInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkSwapchainCreateInfoKHR>(info.This());
  self->instance.queueFamilyIndexCount = static_cast<uint32_t>(value->NumberValue());
}// pQueueFamilyIndices
NAN_GETTER(_VkSwapchainCreateInfoKHR::GetpQueueFamilyIndices) {
  _VkSwapchainCreateInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkSwapchainCreateInfoKHR>(info.This());
  if (self->pQueueFamilyIndices.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pQueueFamilyIndices);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkSwapchainCreateInfoKHR::SetpQueueFamilyIndices) {
  _VkSwapchainCreateInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkSwapchainCreateInfoKHR>(info.This());
  
    // js
    if (value->IsArray() || value->IsArrayBufferView()) {
      v8::Handle<v8::Array> arr = v8::Handle<v8::Array>::Cast(value);
      Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> obj(arr);
      self->pQueueFamilyIndices = obj;
    } else {
      if (!self->pQueueFamilyIndices.IsEmpty()) self->pQueueFamilyIndices.Empty();
    }
  
  
  // vulkan
  if (value->IsArrayBufferView()) {
    self->instance.pQueueFamilyIndices = getTypedArrayData<uint32_t>(value->ToObject(), nullptr);
  } else {
    self->instance.pQueueFamilyIndices = nullptr;
  }
}// preTransform
NAN_GETTER(_VkSwapchainCreateInfoKHR::GetpreTransform) {
  _VkSwapchainCreateInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkSwapchainCreateInfoKHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.preTransform));
}NAN_SETTER(_VkSwapchainCreateInfoKHR::SetpreTransform) {
  _VkSwapchainCreateInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkSwapchainCreateInfoKHR>(info.This());
  self->instance.preTransform = static_cast<VkSurfaceTransformFlagBitsKHR>((int32_t)value->NumberValue());
}// compositeAlpha
NAN_GETTER(_VkSwapchainCreateInfoKHR::GetcompositeAlpha) {
  _VkSwapchainCreateInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkSwapchainCreateInfoKHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.compositeAlpha));
}NAN_SETTER(_VkSwapchainCreateInfoKHR::SetcompositeAlpha) {
  _VkSwapchainCreateInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkSwapchainCreateInfoKHR>(info.This());
  self->instance.compositeAlpha = static_cast<VkCompositeAlphaFlagBitsKHR>((int32_t)value->NumberValue());
}// presentMode
NAN_GETTER(_VkSwapchainCreateInfoKHR::GetpresentMode) {
  _VkSwapchainCreateInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkSwapchainCreateInfoKHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.presentMode));
}NAN_SETTER(_VkSwapchainCreateInfoKHR::SetpresentMode) {
  _VkSwapchainCreateInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkSwapchainCreateInfoKHR>(info.This());
  self->instance.presentMode = static_cast<VkPresentModeKHR>((int32_t)value->NumberValue());
}// clipped
NAN_GETTER(_VkSwapchainCreateInfoKHR::Getclipped) {
  _VkSwapchainCreateInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkSwapchainCreateInfoKHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.clipped));
}NAN_SETTER(_VkSwapchainCreateInfoKHR::Setclipped) {
  _VkSwapchainCreateInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkSwapchainCreateInfoKHR>(info.This());
  self->instance.clipped = static_cast<uint32_t>(value->NumberValue());
}// oldSwapchain
NAN_GETTER(_VkSwapchainCreateInfoKHR::GetoldSwapchain) {
  _VkSwapchainCreateInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkSwapchainCreateInfoKHR>(info.This());
  if (self->oldSwapchain.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->oldSwapchain);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkSwapchainCreateInfoKHR::SetoldSwapchain) {
  _VkSwapchainCreateInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkSwapchainCreateInfoKHR>(info.This());
  // js
  if (!(value->IsNull())) {
    Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> obj(value->ToObject());
    self->oldSwapchain = obj;
  } else {
    //self->oldSwapchain = Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>>(Nan::Null());
  }
  // vulkan
  if (!(value->IsNull())) {
    _VkSwapchainKHR* obj = Nan::ObjectWrap::Unwrap<_VkSwapchainKHR>(value->ToObject());
    self->instance.oldSwapchain = obj->instance;
  } else {
    self->instance.oldSwapchain = VK_NULL_HANDLE;
  }
}