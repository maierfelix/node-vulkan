/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.1
 */
#include "utils.h"
#include "VkFramebuffer.h"

Nan::Persistent<v8::FunctionTemplate> _VkFramebuffer::constructor;

_VkFramebuffer::_VkFramebuffer() {
  instance = (VkFramebuffer*) malloc(sizeof(VkFramebuffer));
}

_VkFramebuffer::~_VkFramebuffer() { }

void _VkFramebuffer::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // Constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkFramebuffer::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkFramebuffer").ToLocalChecked());

  // Prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();

  Nan::Set(target, Nan::New("VkFramebuffer").ToLocalChecked(), ctor->GetFunction());
}

NAN_METHOD(_VkFramebuffer::New) {
  _VkFramebuffer* self = new _VkFramebuffer();
  self->Wrap(info.Holder());
  info.GetReturnValue().Set(info.Holder());
};
