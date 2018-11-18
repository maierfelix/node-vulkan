/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.4
 */
#include "utils.h"
#include "index.h"
#include "VkSubpassDescription.h"

Nan::Persistent<v8::FunctionTemplate> _VkSubpassDescription::constructor;

_VkSubpassDescription::_VkSubpassDescription() {
  
}

_VkSubpassDescription::~_VkSubpassDescription() {
  //printf("VkSubpassDescription deconstructed!!\n");
}

void _VkSubpassDescription::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkSubpassDescription::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkSubpassDescription").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("flags").ToLocalChecked(), Getflags, Setflags, ctor);
  SetPrototypeAccessor(proto, Nan::New("pipelineBindPoint").ToLocalChecked(), GetpipelineBindPoint, SetpipelineBindPoint, ctor);
  SetPrototypeAccessor(proto, Nan::New("inputAttachmentCount").ToLocalChecked(), GetinputAttachmentCount, SetinputAttachmentCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("pInputAttachments").ToLocalChecked(), GetpInputAttachments, SetpInputAttachments, ctor);
  SetPrototypeAccessor(proto, Nan::New("colorAttachmentCount").ToLocalChecked(), GetcolorAttachmentCount, SetcolorAttachmentCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("pColorAttachments").ToLocalChecked(), GetpColorAttachments, SetpColorAttachments, ctor);
  SetPrototypeAccessor(proto, Nan::New("pResolveAttachments").ToLocalChecked(), GetpResolveAttachments, SetpResolveAttachments, ctor);
  SetPrototypeAccessor(proto, Nan::New("pDepthStencilAttachment").ToLocalChecked(), GetpDepthStencilAttachment, SetpDepthStencilAttachment, ctor);
  SetPrototypeAccessor(proto, Nan::New("preserveAttachmentCount").ToLocalChecked(), GetpreserveAttachmentCount, SetpreserveAttachmentCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("pPreserveAttachments").ToLocalChecked(), GetpPreserveAttachments, SetpPreserveAttachments, ctor);
  Nan::Set(target, Nan::New("VkSubpassDescription").ToLocalChecked(), ctor->GetFunction());
}

NAN_METHOD(_VkSubpassDescription::New) {
  if (info.IsConstructCall()) {
    _VkSubpassDescription* self = new _VkSubpassDescription();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = info[0]->ToObject();
      v8::Local<v8::String> sAccess0 = Nan::New("flags").ToLocalChecked();
      v8::Local<v8::String> sAccess1 = Nan::New("pipelineBindPoint").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("inputAttachmentCount").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("pInputAttachments").ToLocalChecked();
      v8::Local<v8::String> sAccess4 = Nan::New("colorAttachmentCount").ToLocalChecked();
      v8::Local<v8::String> sAccess5 = Nan::New("pColorAttachments").ToLocalChecked();
      v8::Local<v8::String> sAccess6 = Nan::New("pResolveAttachments").ToLocalChecked();
      v8::Local<v8::String> sAccess7 = Nan::New("pDepthStencilAttachment").ToLocalChecked();
      v8::Local<v8::String> sAccess8 = Nan::New("preserveAttachmentCount").ToLocalChecked();
      v8::Local<v8::String> sAccess9 = Nan::New("pPreserveAttachments").ToLocalChecked();
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
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkSubpassDescription constructor cannot be invoked without 'new'");
  }
};

// flags
NAN_GETTER(_VkSubpassDescription::Getflags) {
  _VkSubpassDescription *self = Nan::ObjectWrap::Unwrap<_VkSubpassDescription>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.flags));
}NAN_SETTER(_VkSubpassDescription::Setflags) {
  _VkSubpassDescription *self = Nan::ObjectWrap::Unwrap<_VkSubpassDescription>(info.This());
  self->instance.flags = static_cast<VkSubpassDescriptionFlags>((int32_t)value->NumberValue());
}// pipelineBindPoint
NAN_GETTER(_VkSubpassDescription::GetpipelineBindPoint) {
  _VkSubpassDescription *self = Nan::ObjectWrap::Unwrap<_VkSubpassDescription>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.pipelineBindPoint));
}NAN_SETTER(_VkSubpassDescription::SetpipelineBindPoint) {
  _VkSubpassDescription *self = Nan::ObjectWrap::Unwrap<_VkSubpassDescription>(info.This());
  self->instance.pipelineBindPoint = static_cast<VkPipelineBindPoint>((int32_t)value->NumberValue());
}// inputAttachmentCount
NAN_GETTER(_VkSubpassDescription::GetinputAttachmentCount) {
  _VkSubpassDescription *self = Nan::ObjectWrap::Unwrap<_VkSubpassDescription>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.inputAttachmentCount));
}NAN_SETTER(_VkSubpassDescription::SetinputAttachmentCount) {
  _VkSubpassDescription *self = Nan::ObjectWrap::Unwrap<_VkSubpassDescription>(info.This());
  self->instance.inputAttachmentCount = static_cast<uint32_t>(value->NumberValue());
}// pInputAttachments
NAN_GETTER(_VkSubpassDescription::GetpInputAttachments) {
  _VkSubpassDescription *self = Nan::ObjectWrap::Unwrap<_VkSubpassDescription>(info.This());
  if (self->pInputAttachments.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pInputAttachments);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkSubpassDescription::SetpInputAttachments) {
  _VkSubpassDescription *self = Nan::ObjectWrap::Unwrap<_VkSubpassDescription>(info.This());
  
    // js
    if (value->IsArray() || value->IsArrayBufferView()) {
      v8::Handle<v8::Array> arr = v8::Handle<v8::Array>::Cast(value);
      Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> obj(arr);
      self->pInputAttachments = obj;
    } else {
      if (!self->pInputAttachments.IsEmpty()) self->pInputAttachments.Empty();
    }
  
  // vulkan
  if (!(value->IsNull())) {
    self->instance.pInputAttachments = copyArrayOfV8Objects<VkAttachmentReference, _VkAttachmentReference>(value);
  } else {
    self->instance.pInputAttachments = nullptr;
  }
}// colorAttachmentCount
NAN_GETTER(_VkSubpassDescription::GetcolorAttachmentCount) {
  _VkSubpassDescription *self = Nan::ObjectWrap::Unwrap<_VkSubpassDescription>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.colorAttachmentCount));
}NAN_SETTER(_VkSubpassDescription::SetcolorAttachmentCount) {
  _VkSubpassDescription *self = Nan::ObjectWrap::Unwrap<_VkSubpassDescription>(info.This());
  self->instance.colorAttachmentCount = static_cast<uint32_t>(value->NumberValue());
}// pColorAttachments
NAN_GETTER(_VkSubpassDescription::GetpColorAttachments) {
  _VkSubpassDescription *self = Nan::ObjectWrap::Unwrap<_VkSubpassDescription>(info.This());
  if (self->pColorAttachments.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pColorAttachments);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkSubpassDescription::SetpColorAttachments) {
  _VkSubpassDescription *self = Nan::ObjectWrap::Unwrap<_VkSubpassDescription>(info.This());
  
    // js
    if (value->IsArray() || value->IsArrayBufferView()) {
      v8::Handle<v8::Array> arr = v8::Handle<v8::Array>::Cast(value);
      Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> obj(arr);
      self->pColorAttachments = obj;
    } else {
      if (!self->pColorAttachments.IsEmpty()) self->pColorAttachments.Empty();
    }
  
  // vulkan
  if (!(value->IsNull())) {
    self->instance.pColorAttachments = copyArrayOfV8Objects<VkAttachmentReference, _VkAttachmentReference>(value);
  } else {
    self->instance.pColorAttachments = nullptr;
  }
}// pResolveAttachments
NAN_GETTER(_VkSubpassDescription::GetpResolveAttachments) {
  _VkSubpassDescription *self = Nan::ObjectWrap::Unwrap<_VkSubpassDescription>(info.This());
  if (self->pResolveAttachments.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pResolveAttachments);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkSubpassDescription::SetpResolveAttachments) {
  _VkSubpassDescription *self = Nan::ObjectWrap::Unwrap<_VkSubpassDescription>(info.This());
  
    // js
    if (value->IsArray() || value->IsArrayBufferView()) {
      v8::Handle<v8::Array> arr = v8::Handle<v8::Array>::Cast(value);
      Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> obj(arr);
      self->pResolveAttachments = obj;
    } else {
      if (!self->pResolveAttachments.IsEmpty()) self->pResolveAttachments.Empty();
    }
  
  // vulkan
  if (!(value->IsNull())) {
    self->instance.pResolveAttachments = copyArrayOfV8Objects<VkAttachmentReference, _VkAttachmentReference>(value);
  } else {
    self->instance.pResolveAttachments = nullptr;
  }
}// pDepthStencilAttachment
NAN_GETTER(_VkSubpassDescription::GetpDepthStencilAttachment) {
  _VkSubpassDescription *self = Nan::ObjectWrap::Unwrap<_VkSubpassDescription>(info.This());
  if (self->pDepthStencilAttachment.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pDepthStencilAttachment);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkSubpassDescription::SetpDepthStencilAttachment) {
  _VkSubpassDescription *self = Nan::ObjectWrap::Unwrap<_VkSubpassDescription>(info.This());
  // js
  if (!(value->IsNull())) {
    Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> obj(value->ToObject());
    self->pDepthStencilAttachment = obj;
  } else {
    //self->pDepthStencilAttachment = Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>>(Nan::Null());
  }
  // vulkan
  if (!(value->IsNull())) {
    _VkAttachmentReference* obj = Nan::ObjectWrap::Unwrap<_VkAttachmentReference>(value->ToObject());
    self->instance.pDepthStencilAttachment = &obj->instance;
  } else {
    self->instance.pDepthStencilAttachment = nullptr;
  }
}// preserveAttachmentCount
NAN_GETTER(_VkSubpassDescription::GetpreserveAttachmentCount) {
  _VkSubpassDescription *self = Nan::ObjectWrap::Unwrap<_VkSubpassDescription>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.preserveAttachmentCount));
}NAN_SETTER(_VkSubpassDescription::SetpreserveAttachmentCount) {
  _VkSubpassDescription *self = Nan::ObjectWrap::Unwrap<_VkSubpassDescription>(info.This());
  self->instance.preserveAttachmentCount = static_cast<uint32_t>(value->NumberValue());
}// pPreserveAttachments
NAN_GETTER(_VkSubpassDescription::GetpPreserveAttachments) {
  _VkSubpassDescription *self = Nan::ObjectWrap::Unwrap<_VkSubpassDescription>(info.This());
  if (self->pPreserveAttachments.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pPreserveAttachments);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkSubpassDescription::SetpPreserveAttachments) {
  _VkSubpassDescription *self = Nan::ObjectWrap::Unwrap<_VkSubpassDescription>(info.This());
  
    // js
    if (value->IsArray() || value->IsArrayBufferView()) {
      v8::Handle<v8::Array> arr = v8::Handle<v8::Array>::Cast(value);
      Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> obj(arr);
      self->pPreserveAttachments = obj;
    } else {
      if (!self->pPreserveAttachments.IsEmpty()) self->pPreserveAttachments.Empty();
    }
  
  
  // vulkan
  if (value->IsArrayBufferView()) {
    self->instance.pPreserveAttachments = getTypedArrayData<uint32_t>(value->ToObject(), nullptr);
  } else {
    self->instance.pPreserveAttachments = nullptr;
  }
}