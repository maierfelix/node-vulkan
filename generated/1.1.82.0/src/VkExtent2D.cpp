/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.1
 */
#include "utils.h"
#include "index.h"
#include "VkExtent2D.h"

Nan::Persistent<v8::FunctionTemplate> _VkExtent2D::constructor;

_VkExtent2D::_VkExtent2D() {
  instance = (VkExtent2D*) malloc(sizeof(VkExtent2D));
}

_VkExtent2D::~_VkExtent2D() { }

void _VkExtent2D::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // Constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkExtent2D::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkExtent2D").ToLocalChecked());

  // Prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  SetPrototypeAccessor(proto, Nan::New("width").ToLocalChecked(), Getwidth, Setwidth, ctor);
  SetPrototypeAccessor(proto, Nan::New("height").ToLocalChecked(), Getheight, Setheight, ctor);
  
  Nan::Set(target, Nan::New("VkExtent2D").ToLocalChecked(), ctor->GetFunction());
}

NAN_METHOD(_VkExtent2D::New) {
  _VkExtent2D* self = new _VkExtent2D();
  self->Wrap(info.Holder());
  info.GetReturnValue().Set(info.Holder());
};

// width
NAN_GETTER(_VkExtent2D::Getwidth) {
  _VkExtent2D *self = Nan::ObjectWrap::Unwrap<_VkExtent2D>(info.This());
  VkExtent2D *instance = self->instance;
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance->width));
}
NAN_SETTER(_VkExtent2D::Setwidth) {
  _VkExtent2D *self = Nan::ObjectWrap::Unwrap<_VkExtent2D>(info.This());
  VkExtent2D *instance = self->instance;
  self->instance->width = static_cast<uint32_t>(value->NumberValue());
}// height
NAN_GETTER(_VkExtent2D::Getheight) {
  _VkExtent2D *self = Nan::ObjectWrap::Unwrap<_VkExtent2D>(info.This());
  VkExtent2D *instance = self->instance;
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance->height));
}
NAN_SETTER(_VkExtent2D::Setheight) {
  _VkExtent2D *self = Nan::ObjectWrap::Unwrap<_VkExtent2D>(info.This());
  VkExtent2D *instance = self->instance;
  self->instance->height = static_cast<uint32_t>(value->NumberValue());
}