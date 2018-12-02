/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.9
 */
#include "utils.h"
#include "index.h"
#include "VkBindBufferMemoryDeviceGroupInfo.h"

Nan::Persistent<v8::FunctionTemplate> _VkBindBufferMemoryDeviceGroupInfo::constructor;

_VkBindBufferMemoryDeviceGroupInfo::_VkBindBufferMemoryDeviceGroupInfo() {
  instance.sType = VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_DEVICE_GROUP_INFO;
  
}

_VkBindBufferMemoryDeviceGroupInfo::~_VkBindBufferMemoryDeviceGroupInfo() {
  //printf("VkBindBufferMemoryDeviceGroupInfo deconstructed!!\n");
  
  
  pNext.Reset();
  
  
  pDeviceIndices.Reset();
  
}

void _VkBindBufferMemoryDeviceGroupInfo::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkBindBufferMemoryDeviceGroupInfo::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkBindBufferMemoryDeviceGroupInfo").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("pNext").ToLocalChecked(), GetpNext, SetpNext, ctor);
  SetPrototypeAccessor(proto, Nan::New("deviceIndexCount").ToLocalChecked(), GetdeviceIndexCount, SetdeviceIndexCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("pDeviceIndices").ToLocalChecked(), GetpDeviceIndices, SetpDeviceIndices, ctor);
  Nan::Set(target, Nan::New("VkBindBufferMemoryDeviceGroupInfo").ToLocalChecked(), ctor->GetFunction());
}

bool _VkBindBufferMemoryDeviceGroupInfo::flush() {
  _VkBindBufferMemoryDeviceGroupInfo *self = this;
  
  return true;
}

NAN_METHOD(_VkBindBufferMemoryDeviceGroupInfo::New) {
  if (info.IsConstructCall()) {
    _VkBindBufferMemoryDeviceGroupInfo* self = new _VkBindBufferMemoryDeviceGroupInfo();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess1 = Nan::New("pNext").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("deviceIndexCount").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("pDeviceIndices").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess1)) info.This()->Set(sAccess1, obj->Get(sAccess1));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      if (obj->Has(sAccess3)) info.This()->Set(sAccess3, obj->Get(sAccess3));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkBindBufferMemoryDeviceGroupInfo constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkBindBufferMemoryDeviceGroupInfo::GetsType) {
  _VkBindBufferMemoryDeviceGroupInfo *self = Nan::ObjectWrap::Unwrap<_VkBindBufferMemoryDeviceGroupInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkBindBufferMemoryDeviceGroupInfo::SetsType) {
  _VkBindBufferMemoryDeviceGroupInfo *self = Nan::ObjectWrap::Unwrap<_VkBindBufferMemoryDeviceGroupInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkBindBufferMemoryDeviceGroupInfo.sType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// pNext
NAN_GETTER(_VkBindBufferMemoryDeviceGroupInfo::GetpNext) {
  _VkBindBufferMemoryDeviceGroupInfo *self = Nan::ObjectWrap::Unwrap<_VkBindBufferMemoryDeviceGroupInfo>(info.This());
}NAN_SETTER(_VkBindBufferMemoryDeviceGroupInfo::SetpNext) {
  _VkBindBufferMemoryDeviceGroupInfo *self = Nan::ObjectWrap::Unwrap<_VkBindBufferMemoryDeviceGroupInfo>(info.This());
}// deviceIndexCount
NAN_GETTER(_VkBindBufferMemoryDeviceGroupInfo::GetdeviceIndexCount) {
  _VkBindBufferMemoryDeviceGroupInfo *self = Nan::ObjectWrap::Unwrap<_VkBindBufferMemoryDeviceGroupInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.deviceIndexCount));
}NAN_SETTER(_VkBindBufferMemoryDeviceGroupInfo::SetdeviceIndexCount) {
  _VkBindBufferMemoryDeviceGroupInfo *self = Nan::ObjectWrap::Unwrap<_VkBindBufferMemoryDeviceGroupInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.deviceIndexCount = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkBindBufferMemoryDeviceGroupInfo.deviceIndexCount' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// pDeviceIndices
NAN_GETTER(_VkBindBufferMemoryDeviceGroupInfo::GetpDeviceIndices) {
  _VkBindBufferMemoryDeviceGroupInfo *self = Nan::ObjectWrap::Unwrap<_VkBindBufferMemoryDeviceGroupInfo>(info.This());
  if (self->pDeviceIndices.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pDeviceIndices);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkBindBufferMemoryDeviceGroupInfo::SetpDeviceIndices) {
  _VkBindBufferMemoryDeviceGroupInfo *self = Nan::ObjectWrap::Unwrap<_VkBindBufferMemoryDeviceGroupInfo>(info.This());
  
    // js
    if (value->IsArrayBufferView()) {
      if (value->IsUint32Array()) {
        self->pDeviceIndices.Reset<v8::Array>(value.As<v8::Array>());
      } else {
        
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Uint32Array' for 'VkBindBufferMemoryDeviceGroupInfo.pDeviceIndices' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
        return;
      }
    } else if (value->IsNull()) {
      self->pDeviceIndices.Reset();
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Uint32Array' for 'VkBindBufferMemoryDeviceGroupInfo.pDeviceIndices' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  
  
  // vulkan
  if (value->IsArrayBufferView()) {
    self->instance.pDeviceIndices = getTypedArrayData<uint32_t>(Nan::To<v8::Object>(value).ToLocalChecked(), nullptr);
  } else {
    self->instance.pDeviceIndices = nullptr;
  }
}