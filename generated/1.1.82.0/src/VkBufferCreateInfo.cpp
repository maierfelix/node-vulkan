/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.1
 */
#include "utils.h"
#include "index.h"
#include "VkBufferCreateInfo.h"

Nan::Persistent<v8::FunctionTemplate> _VkBufferCreateInfo::constructor;

_VkBufferCreateInfo::_VkBufferCreateInfo() {
}

_VkBufferCreateInfo::~_VkBufferCreateInfo() { }

void _VkBufferCreateInfo::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkBufferCreateInfo::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkBufferCreateInfo").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("size").ToLocalChecked(), Getsize, Setsize, ctor);
  SetPrototypeAccessor(proto, Nan::New("usage").ToLocalChecked(), Getusage, Setusage, ctor);
  SetPrototypeAccessor(proto, Nan::New("sharingMode").ToLocalChecked(), GetsharingMode, SetsharingMode, ctor);
  SetPrototypeAccessor(proto, Nan::New("queueFamilyIndexCount").ToLocalChecked(), GetqueueFamilyIndexCount, SetqueueFamilyIndexCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("pQueueFamilyIndices").ToLocalChecked(), GetpQueueFamilyIndices, SetpQueueFamilyIndices, ctor);
  Nan::Set(target, Nan::New("VkBufferCreateInfo").ToLocalChecked(), ctor->GetFunction());
}

NAN_METHOD(_VkBufferCreateInfo::New) {
  _VkBufferCreateInfo* self = new _VkBufferCreateInfo();
  self->Wrap(info.Holder());
  info.GetReturnValue().Set(info.Holder());
};

// sType
NAN_GETTER(_VkBufferCreateInfo::GetsType) {
  _VkBufferCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkBufferCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkBufferCreateInfo::SetsType) {
  _VkBufferCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkBufferCreateInfo>(info.This());
  self->instance.sType = static_cast<VkStructureType>(value->Uint32Value());
}// size
NAN_GETTER(_VkBufferCreateInfo::Getsize) {
  _VkBufferCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkBufferCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.size));
}NAN_SETTER(_VkBufferCreateInfo::Setsize) {
  _VkBufferCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkBufferCreateInfo>(info.This());
  self->instance.size = static_cast<uint64_t>(value->NumberValue());
}// usage
NAN_GETTER(_VkBufferCreateInfo::Getusage) {
  _VkBufferCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkBufferCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(static_cast<uint8_t>(self->instance.usage)));
}NAN_SETTER(_VkBufferCreateInfo::Setusage) {
  _VkBufferCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkBufferCreateInfo>(info.This());
  self->instance.usage = static_cast<VkBufferUsageFlags>(value->Uint32Value());
}// sharingMode
NAN_GETTER(_VkBufferCreateInfo::GetsharingMode) {
  _VkBufferCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkBufferCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sharingMode));
}NAN_SETTER(_VkBufferCreateInfo::SetsharingMode) {
  _VkBufferCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkBufferCreateInfo>(info.This());
  self->instance.sharingMode = static_cast<VkSharingMode>(value->Uint32Value());
}// queueFamilyIndexCount
NAN_GETTER(_VkBufferCreateInfo::GetqueueFamilyIndexCount) {
  _VkBufferCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkBufferCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.queueFamilyIndexCount));
}NAN_SETTER(_VkBufferCreateInfo::SetqueueFamilyIndexCount) {
  _VkBufferCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkBufferCreateInfo>(info.This());
  self->instance.queueFamilyIndexCount = static_cast<uint32_t>(value->NumberValue());
}// pQueueFamilyIndices
NAN_GETTER(_VkBufferCreateInfo::GetpQueueFamilyIndices) {
  _VkBufferCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkBufferCreateInfo>(info.This());
  v8::Local<v8::Object> obj = Nan::New(self->pQueueFamilyIndices);
  info.GetReturnValue().Set(obj);
}NAN_SETTER(_VkBufferCreateInfo::SetpQueueFamilyIndices) {
  _VkBufferCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkBufferCreateInfo>(info.This());
  
    // js
    {
      v8::Handle<v8::Array> arr = v8::Handle<v8::Array>::Cast(value);
      Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> obj(arr);
      self->pQueueFamilyIndices = obj;
    }
  
  // vulkan
  {
    self->instance.pQueueFamilyIndices = createArrayOfV8Numbers<uint32_t>(value);
  }
}