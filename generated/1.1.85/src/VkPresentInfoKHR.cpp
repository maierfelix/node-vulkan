/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.4
 */
#include "utils.h"
#include "index.h"
#include "VkPresentInfoKHR.h"

Nan::Persistent<v8::FunctionTemplate> _VkPresentInfoKHR::constructor;

_VkPresentInfoKHR::_VkPresentInfoKHR() {
  instance.sType = VK_STRUCTURE_TYPE_PRESENT_INFO_KHR;
}

_VkPresentInfoKHR::~_VkPresentInfoKHR() {
  //printf("VkPresentInfoKHR deconstructed!!\n");
}

void _VkPresentInfoKHR::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkPresentInfoKHR::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkPresentInfoKHR").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("pNext").ToLocalChecked(), GetpNext, SetpNext, ctor);
  SetPrototypeAccessor(proto, Nan::New("waitSemaphoreCount").ToLocalChecked(), GetwaitSemaphoreCount, SetwaitSemaphoreCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("pWaitSemaphores").ToLocalChecked(), GetpWaitSemaphores, SetpWaitSemaphores, ctor);
  SetPrototypeAccessor(proto, Nan::New("swapchainCount").ToLocalChecked(), GetswapchainCount, SetswapchainCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("pSwapchains").ToLocalChecked(), GetpSwapchains, SetpSwapchains, ctor);
  SetPrototypeAccessor(proto, Nan::New("pImageIndices").ToLocalChecked(), GetpImageIndices, SetpImageIndices, ctor);
  SetPrototypeAccessor(proto, Nan::New("pResults").ToLocalChecked(), GetpResults, SetpResults, ctor);
  Nan::Set(target, Nan::New("VkPresentInfoKHR").ToLocalChecked(), ctor->GetFunction());
}

NAN_METHOD(_VkPresentInfoKHR::New) {
  if (info.IsConstructCall()) {
    _VkPresentInfoKHR* self = new _VkPresentInfoKHR();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = info[0]->ToObject();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess1 = Nan::New("pNext").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("waitSemaphoreCount").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("pWaitSemaphores").ToLocalChecked();
      v8::Local<v8::String> sAccess4 = Nan::New("swapchainCount").ToLocalChecked();
      v8::Local<v8::String> sAccess5 = Nan::New("pSwapchains").ToLocalChecked();
      v8::Local<v8::String> sAccess6 = Nan::New("pImageIndices").ToLocalChecked();
      v8::Local<v8::String> sAccess7 = Nan::New("pResults").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess1)) info.This()->Set(sAccess1, obj->Get(sAccess1));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      if (obj->Has(sAccess3)) info.This()->Set(sAccess3, obj->Get(sAccess3));
      if (obj->Has(sAccess4)) info.This()->Set(sAccess4, obj->Get(sAccess4));
      if (obj->Has(sAccess5)) info.This()->Set(sAccess5, obj->Get(sAccess5));
      if (obj->Has(sAccess6)) info.This()->Set(sAccess6, obj->Get(sAccess6));
      if (obj->Has(sAccess7)) info.This()->Set(sAccess7, obj->Get(sAccess7));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkPresentInfoKHR constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkPresentInfoKHR::GetsType) {
  _VkPresentInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkPresentInfoKHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkPresentInfoKHR::SetsType) {
  _VkPresentInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkPresentInfoKHR>(info.This());
  self->instance.sType = static_cast<VkStructureType>((int32_t)value->NumberValue());
}// pNext
NAN_GETTER(_VkPresentInfoKHR::GetpNext) {
  _VkPresentInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkPresentInfoKHR>(info.This());
}NAN_SETTER(_VkPresentInfoKHR::SetpNext) {
  _VkPresentInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkPresentInfoKHR>(info.This());
}// waitSemaphoreCount
NAN_GETTER(_VkPresentInfoKHR::GetwaitSemaphoreCount) {
  _VkPresentInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkPresentInfoKHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.waitSemaphoreCount));
}NAN_SETTER(_VkPresentInfoKHR::SetwaitSemaphoreCount) {
  _VkPresentInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkPresentInfoKHR>(info.This());
  self->instance.waitSemaphoreCount = static_cast<uint32_t>(value->NumberValue());
}// pWaitSemaphores
NAN_GETTER(_VkPresentInfoKHR::GetpWaitSemaphores) {
  _VkPresentInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkPresentInfoKHR>(info.This());
  if (self->pWaitSemaphores.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pWaitSemaphores);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkPresentInfoKHR::SetpWaitSemaphores) {
  _VkPresentInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkPresentInfoKHR>(info.This());
  
    // js
    if (value->IsArray() || value->IsArrayBufferView()) {
      v8::Handle<v8::Array> arr = v8::Handle<v8::Array>::Cast(value);
      Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> obj(arr);
      self->pWaitSemaphores = obj;
    } else {
      if (!self->pWaitSemaphores.IsEmpty()) self->pWaitSemaphores.Empty();
    }
  
  // vulkan
  if (!(value->IsNull())) {
    self->instance.pWaitSemaphores = copyArrayOfV8Objects<VkSemaphore, _VkSemaphore>(value);
  } else {
    self->instance.pWaitSemaphores = VK_NULL_HANDLE;
  }
}// swapchainCount
NAN_GETTER(_VkPresentInfoKHR::GetswapchainCount) {
  _VkPresentInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkPresentInfoKHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.swapchainCount));
}NAN_SETTER(_VkPresentInfoKHR::SetswapchainCount) {
  _VkPresentInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkPresentInfoKHR>(info.This());
  self->instance.swapchainCount = static_cast<uint32_t>(value->NumberValue());
}// pSwapchains
NAN_GETTER(_VkPresentInfoKHR::GetpSwapchains) {
  _VkPresentInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkPresentInfoKHR>(info.This());
  if (self->pSwapchains.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pSwapchains);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkPresentInfoKHR::SetpSwapchains) {
  _VkPresentInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkPresentInfoKHR>(info.This());
  
    // js
    if (value->IsArray() || value->IsArrayBufferView()) {
      v8::Handle<v8::Array> arr = v8::Handle<v8::Array>::Cast(value);
      Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> obj(arr);
      self->pSwapchains = obj;
    } else {
      if (!self->pSwapchains.IsEmpty()) self->pSwapchains.Empty();
    }
  
  // vulkan
  if (!(value->IsNull())) {
    self->instance.pSwapchains = copyArrayOfV8Objects<VkSwapchainKHR, _VkSwapchainKHR>(value);
  } else {
    self->instance.pSwapchains = VK_NULL_HANDLE;
  }
}// pImageIndices
NAN_GETTER(_VkPresentInfoKHR::GetpImageIndices) {
  _VkPresentInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkPresentInfoKHR>(info.This());
  if (self->pImageIndices.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pImageIndices);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkPresentInfoKHR::SetpImageIndices) {
  _VkPresentInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkPresentInfoKHR>(info.This());
  
    // js
    if (value->IsArray() || value->IsArrayBufferView()) {
      v8::Handle<v8::Array> arr = v8::Handle<v8::Array>::Cast(value);
      Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> obj(arr);
      self->pImageIndices = obj;
    } else {
      if (!self->pImageIndices.IsEmpty()) self->pImageIndices.Empty();
    }
  
  
  // vulkan
  if (value->IsArrayBufferView()) {
    self->instance.pImageIndices = getTypedArrayData<uint32_t>(value->ToObject(), nullptr);
  } else {
    self->instance.pImageIndices = nullptr;
  }
}// pResults
NAN_GETTER(_VkPresentInfoKHR::GetpResults) {
  _VkPresentInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkPresentInfoKHR>(info.This());
  if (self->pResults.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pResults);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkPresentInfoKHR::SetpResults) {
  _VkPresentInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkPresentInfoKHR>(info.This());
  
    // js
    if (value->IsArray() || value->IsArrayBufferView()) {
      v8::Handle<v8::Array> arr = v8::Handle<v8::Array>::Cast(value);
      Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> obj(arr);
      self->pResults = obj;
    } else {
      if (!self->pResults.IsEmpty()) self->pResults.Empty();
    }
  
  
  // vulkan
  if (value->IsArrayBufferView()) {
    self->instance.pResults = reinterpret_cast<VkResult *>(getTypedArrayData<int32_t>(value->ToObject(), nullptr));
  } else {
    self->instance.pResults = nullptr;
  }
}