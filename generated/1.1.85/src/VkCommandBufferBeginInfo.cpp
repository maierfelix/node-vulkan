/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.8
 */
#include "utils.h"
#include "index.h"
#include "VkCommandBufferBeginInfo.h"

Nan::Persistent<v8::FunctionTemplate> _VkCommandBufferBeginInfo::constructor;

_VkCommandBufferBeginInfo::_VkCommandBufferBeginInfo() {
  instance.sType = VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO;
  
}

_VkCommandBufferBeginInfo::~_VkCommandBufferBeginInfo() {
  //printf("VkCommandBufferBeginInfo deconstructed!!\n");
  
  
  pNext.Reset();
  
  
  pInheritanceInfo.Reset();
  
}

void _VkCommandBufferBeginInfo::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkCommandBufferBeginInfo::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkCommandBufferBeginInfo").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("pNext").ToLocalChecked(), GetpNext, SetpNext, ctor);
  SetPrototypeAccessor(proto, Nan::New("flags").ToLocalChecked(), Getflags, Setflags, ctor);
  SetPrototypeAccessor(proto, Nan::New("pInheritanceInfo").ToLocalChecked(), GetpInheritanceInfo, SetpInheritanceInfo, ctor);
  Nan::Set(target, Nan::New("VkCommandBufferBeginInfo").ToLocalChecked(), ctor->GetFunction());
}

bool _VkCommandBufferBeginInfo::flush() {
  _VkCommandBufferBeginInfo *self = this;
  
  return true;
}

NAN_METHOD(_VkCommandBufferBeginInfo::New) {
  if (info.IsConstructCall()) {
    _VkCommandBufferBeginInfo* self = new _VkCommandBufferBeginInfo();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess1 = Nan::New("pNext").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("flags").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("pInheritanceInfo").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess1)) info.This()->Set(sAccess1, obj->Get(sAccess1));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      if (obj->Has(sAccess3)) info.This()->Set(sAccess3, obj->Get(sAccess3));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkCommandBufferBeginInfo constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkCommandBufferBeginInfo::GetsType) {
  _VkCommandBufferBeginInfo *self = Nan::ObjectWrap::Unwrap<_VkCommandBufferBeginInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkCommandBufferBeginInfo::SetsType) {
  _VkCommandBufferBeginInfo *self = Nan::ObjectWrap::Unwrap<_VkCommandBufferBeginInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkCommandBufferBeginInfo.sType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// pNext
NAN_GETTER(_VkCommandBufferBeginInfo::GetpNext) {
  _VkCommandBufferBeginInfo *self = Nan::ObjectWrap::Unwrap<_VkCommandBufferBeginInfo>(info.This());
}NAN_SETTER(_VkCommandBufferBeginInfo::SetpNext) {
  _VkCommandBufferBeginInfo *self = Nan::ObjectWrap::Unwrap<_VkCommandBufferBeginInfo>(info.This());
}// flags
NAN_GETTER(_VkCommandBufferBeginInfo::Getflags) {
  _VkCommandBufferBeginInfo *self = Nan::ObjectWrap::Unwrap<_VkCommandBufferBeginInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.flags));
}NAN_SETTER(_VkCommandBufferBeginInfo::Setflags) {
  _VkCommandBufferBeginInfo *self = Nan::ObjectWrap::Unwrap<_VkCommandBufferBeginInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.flags = static_cast<VkCommandBufferUsageFlags>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkCommandBufferBeginInfo.flags' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// pInheritanceInfo
NAN_GETTER(_VkCommandBufferBeginInfo::GetpInheritanceInfo) {
  _VkCommandBufferBeginInfo *self = Nan::ObjectWrap::Unwrap<_VkCommandBufferBeginInfo>(info.This());
  if (self->pInheritanceInfo.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pInheritanceInfo);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkCommandBufferBeginInfo::SetpInheritanceInfo) {
  _VkCommandBufferBeginInfo *self = Nan::ObjectWrap::Unwrap<_VkCommandBufferBeginInfo>(info.This());
  // js
  if (!value->IsNull()) {
    v8::Local<v8::Object> obj = Nan::To<v8::Object>(value).ToLocalChecked();
    if (Nan::New(_VkCommandBufferInheritanceInfo::constructor)->HasInstance(obj)) {
      self->pInheritanceInfo.Reset<v8::Object>(value.As<v8::Object>());
      _VkCommandBufferInheritanceInfo* inst = Nan::ObjectWrap::Unwrap<_VkCommandBufferInheritanceInfo>(obj);
      inst->flush();
      self->instance.pInheritanceInfo = &inst->instance;
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkCommandBufferInheritanceInfo]' for 'VkCommandBufferBeginInfo.pInheritanceInfo' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  } else if (value->IsNull()) {
    self->pInheritanceInfo.Reset();
    self->instance.pInheritanceInfo = nullptr;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkCommandBufferInheritanceInfo]' for 'VkCommandBufferBeginInfo.pInheritanceInfo' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}