/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.1.0
 */
#include "utils.h"
#include "index.h"
#include "VkDescriptorUpdateTemplateEntryKHR.h"

Nan::Persistent<v8::FunctionTemplate> _VkDescriptorUpdateTemplateEntryKHR::constructor;

_VkDescriptorUpdateTemplateEntryKHR::_VkDescriptorUpdateTemplateEntryKHR() {
  
  
}

_VkDescriptorUpdateTemplateEntryKHR::~_VkDescriptorUpdateTemplateEntryKHR() {
  //printf("VkDescriptorUpdateTemplateEntryKHR deconstructed!!\n");
  
}

void _VkDescriptorUpdateTemplateEntryKHR::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkDescriptorUpdateTemplateEntryKHR::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkDescriptorUpdateTemplateEntryKHR").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  Nan::Set(target, Nan::New("VkDescriptorUpdateTemplateEntryKHR").ToLocalChecked(), ctor->GetFunction());
}

bool _VkDescriptorUpdateTemplateEntryKHR::flush() {
  _VkDescriptorUpdateTemplateEntryKHR *self = this;
  
  return true;
}

NAN_METHOD(_VkDescriptorUpdateTemplateEntryKHR::New) {
  if (info.IsConstructCall()) {
    _VkDescriptorUpdateTemplateEntryKHR* self = new _VkDescriptorUpdateTemplateEntryKHR();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkDescriptorUpdateTemplateEntryKHR constructor cannot be invoked without 'new'");
  }
};
