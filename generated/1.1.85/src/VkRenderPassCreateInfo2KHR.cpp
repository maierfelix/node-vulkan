/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.9
 */
#include "utils.h"
#include "index.h"
#include "VkRenderPassCreateInfo2KHR.h"

Nan::Persistent<v8::FunctionTemplate> _VkRenderPassCreateInfo2KHR::constructor;

_VkRenderPassCreateInfo2KHR::_VkRenderPassCreateInfo2KHR() {
  instance.sType = VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO_2_KHR;
  vpAttachments = new std::vector<VkAttachmentDescription2KHR>;
  vpSubpasses = new std::vector<VkSubpassDescription2KHR>;
  vpDependencies = new std::vector<VkSubpassDependency2KHR>;
  
}

_VkRenderPassCreateInfo2KHR::~_VkRenderPassCreateInfo2KHR() {
  //printf("VkRenderPassCreateInfo2KHR deconstructed!!\n");
  
  
  pNext.Reset();
  
  
  
  vpAttachments->clear();
  delete vpAttachments;
  
  pAttachments.Reset();
  
  
  vpSubpasses->clear();
  delete vpSubpasses;
  
  pSubpasses.Reset();
  
  
  vpDependencies->clear();
  delete vpDependencies;
  
  pDependencies.Reset();
  
  
  pCorrelatedViewMasks.Reset();
  
}

void _VkRenderPassCreateInfo2KHR::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkRenderPassCreateInfo2KHR::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkRenderPassCreateInfo2KHR").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("pNext").ToLocalChecked(), GetpNext, SetpNext, ctor);
  SetPrototypeAccessor(proto, Nan::New("flags").ToLocalChecked(), Getflags, Setflags, ctor);
  SetPrototypeAccessor(proto, Nan::New("attachmentCount").ToLocalChecked(), GetattachmentCount, SetattachmentCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("pAttachments").ToLocalChecked(), GetpAttachments, SetpAttachments, ctor);
  SetPrototypeAccessor(proto, Nan::New("subpassCount").ToLocalChecked(), GetsubpassCount, SetsubpassCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("pSubpasses").ToLocalChecked(), GetpSubpasses, SetpSubpasses, ctor);
  SetPrototypeAccessor(proto, Nan::New("dependencyCount").ToLocalChecked(), GetdependencyCount, SetdependencyCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("pDependencies").ToLocalChecked(), GetpDependencies, SetpDependencies, ctor);
  SetPrototypeAccessor(proto, Nan::New("correlatedViewMaskCount").ToLocalChecked(), GetcorrelatedViewMaskCount, SetcorrelatedViewMaskCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("pCorrelatedViewMasks").ToLocalChecked(), GetpCorrelatedViewMasks, SetpCorrelatedViewMasks, ctor);
  Nan::Set(target, Nan::New("VkRenderPassCreateInfo2KHR").ToLocalChecked(), ctor->GetFunction());
}

bool _VkRenderPassCreateInfo2KHR::flush() {
  _VkRenderPassCreateInfo2KHR *self = this;
  if (!(self->pAttachments.IsEmpty())) {
    v8::Local<v8::Value> value = Nan::New(self->pAttachments);
    
    v8::Local<v8::Array> array = v8::Local<v8::Array>::Cast(value);
    // validate length
    if (array->Length() != self->instance.attachmentCount) {
      Nan::ThrowRangeError("Invalid array length, expected array length of 'attachmentCount' for 'VkRenderPassCreateInfo2KHR.pAttachments'");
      return false;
    }
    std::vector<VkAttachmentDescription2KHR>* data = self->vpAttachments;
    data->clear();
    for (unsigned int ii = 0; ii < array->Length(); ++ii) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(Nan::Get(array, ii).ToLocalChecked()).ToLocalChecked();
      if (!(Nan::New(_VkAttachmentDescription2KHR::constructor)->HasInstance(obj))) {
        
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkAttachmentDescription2KHR]' for 'VkRenderPassCreateInfo2KHR.pAttachments' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
        return false;
      }
      _VkAttachmentDescription2KHR* result = Nan::ObjectWrap::Unwrap<_VkAttachmentDescription2KHR>(obj);
      if (!result->flush()) return false;
      data->push_back(result->instance);
    };
    self->instance.pAttachments = data->data();
  }if (!(self->pSubpasses.IsEmpty())) {
    v8::Local<v8::Value> value = Nan::New(self->pSubpasses);
    
    v8::Local<v8::Array> array = v8::Local<v8::Array>::Cast(value);
    // validate length
    if (array->Length() != self->instance.subpassCount) {
      Nan::ThrowRangeError("Invalid array length, expected array length of 'subpassCount' for 'VkRenderPassCreateInfo2KHR.pSubpasses'");
      return false;
    }
    std::vector<VkSubpassDescription2KHR>* data = self->vpSubpasses;
    data->clear();
    for (unsigned int ii = 0; ii < array->Length(); ++ii) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(Nan::Get(array, ii).ToLocalChecked()).ToLocalChecked();
      if (!(Nan::New(_VkSubpassDescription2KHR::constructor)->HasInstance(obj))) {
        
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkSubpassDescription2KHR]' for 'VkRenderPassCreateInfo2KHR.pSubpasses' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
        return false;
      }
      _VkSubpassDescription2KHR* result = Nan::ObjectWrap::Unwrap<_VkSubpassDescription2KHR>(obj);
      if (!result->flush()) return false;
      data->push_back(result->instance);
    };
    self->instance.pSubpasses = data->data();
  }if (!(self->pDependencies.IsEmpty())) {
    v8::Local<v8::Value> value = Nan::New(self->pDependencies);
    
    v8::Local<v8::Array> array = v8::Local<v8::Array>::Cast(value);
    // validate length
    if (array->Length() != self->instance.dependencyCount) {
      Nan::ThrowRangeError("Invalid array length, expected array length of 'dependencyCount' for 'VkRenderPassCreateInfo2KHR.pDependencies'");
      return false;
    }
    std::vector<VkSubpassDependency2KHR>* data = self->vpDependencies;
    data->clear();
    for (unsigned int ii = 0; ii < array->Length(); ++ii) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(Nan::Get(array, ii).ToLocalChecked()).ToLocalChecked();
      if (!(Nan::New(_VkSubpassDependency2KHR::constructor)->HasInstance(obj))) {
        
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkSubpassDependency2KHR]' for 'VkRenderPassCreateInfo2KHR.pDependencies' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
        return false;
      }
      _VkSubpassDependency2KHR* result = Nan::ObjectWrap::Unwrap<_VkSubpassDependency2KHR>(obj);
      if (!result->flush()) return false;
      data->push_back(result->instance);
    };
    self->instance.pDependencies = data->data();
  }
  return true;
}

NAN_METHOD(_VkRenderPassCreateInfo2KHR::New) {
  if (info.IsConstructCall()) {
    _VkRenderPassCreateInfo2KHR* self = new _VkRenderPassCreateInfo2KHR();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess1 = Nan::New("pNext").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("flags").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("attachmentCount").ToLocalChecked();
      v8::Local<v8::String> sAccess4 = Nan::New("pAttachments").ToLocalChecked();
      v8::Local<v8::String> sAccess5 = Nan::New("subpassCount").ToLocalChecked();
      v8::Local<v8::String> sAccess6 = Nan::New("pSubpasses").ToLocalChecked();
      v8::Local<v8::String> sAccess7 = Nan::New("dependencyCount").ToLocalChecked();
      v8::Local<v8::String> sAccess8 = Nan::New("pDependencies").ToLocalChecked();
      v8::Local<v8::String> sAccess9 = Nan::New("correlatedViewMaskCount").ToLocalChecked();
      v8::Local<v8::String> sAccess10 = Nan::New("pCorrelatedViewMasks").ToLocalChecked();
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
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkRenderPassCreateInfo2KHR constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkRenderPassCreateInfo2KHR::GetsType) {
  _VkRenderPassCreateInfo2KHR *self = Nan::ObjectWrap::Unwrap<_VkRenderPassCreateInfo2KHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkRenderPassCreateInfo2KHR::SetsType) {
  _VkRenderPassCreateInfo2KHR *self = Nan::ObjectWrap::Unwrap<_VkRenderPassCreateInfo2KHR>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkRenderPassCreateInfo2KHR.sType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// pNext
NAN_GETTER(_VkRenderPassCreateInfo2KHR::GetpNext) {
  _VkRenderPassCreateInfo2KHR *self = Nan::ObjectWrap::Unwrap<_VkRenderPassCreateInfo2KHR>(info.This());
}NAN_SETTER(_VkRenderPassCreateInfo2KHR::SetpNext) {
  _VkRenderPassCreateInfo2KHR *self = Nan::ObjectWrap::Unwrap<_VkRenderPassCreateInfo2KHR>(info.This());
}// flags
NAN_GETTER(_VkRenderPassCreateInfo2KHR::Getflags) {
  _VkRenderPassCreateInfo2KHR *self = Nan::ObjectWrap::Unwrap<_VkRenderPassCreateInfo2KHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.flags));
}NAN_SETTER(_VkRenderPassCreateInfo2KHR::Setflags) {
  _VkRenderPassCreateInfo2KHR *self = Nan::ObjectWrap::Unwrap<_VkRenderPassCreateInfo2KHR>(info.This());
  if (value->IsNumber()) {
    self->instance.flags = static_cast<VkRenderPassCreateFlags>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkRenderPassCreateInfo2KHR.flags' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// attachmentCount
NAN_GETTER(_VkRenderPassCreateInfo2KHR::GetattachmentCount) {
  _VkRenderPassCreateInfo2KHR *self = Nan::ObjectWrap::Unwrap<_VkRenderPassCreateInfo2KHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.attachmentCount));
}NAN_SETTER(_VkRenderPassCreateInfo2KHR::SetattachmentCount) {
  _VkRenderPassCreateInfo2KHR *self = Nan::ObjectWrap::Unwrap<_VkRenderPassCreateInfo2KHR>(info.This());
  if (value->IsNumber()) {
    self->instance.attachmentCount = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkRenderPassCreateInfo2KHR.attachmentCount' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// pAttachments
NAN_GETTER(_VkRenderPassCreateInfo2KHR::GetpAttachments) {
  _VkRenderPassCreateInfo2KHR *self = Nan::ObjectWrap::Unwrap<_VkRenderPassCreateInfo2KHR>(info.This());
  if (self->pAttachments.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pAttachments);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkRenderPassCreateInfo2KHR::SetpAttachments) {
  _VkRenderPassCreateInfo2KHR *self = Nan::ObjectWrap::Unwrap<_VkRenderPassCreateInfo2KHR>(info.This());
  
    // js
    if (value->IsArray()) {
      self->pAttachments.Reset<v8::Array>(value.As<v8::Array>());
    } else if (value->IsNull()) {
      self->pAttachments.Reset();
      self->instance.pAttachments = nullptr;
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkAttachmentDescription2KHR]' for 'VkRenderPassCreateInfo2KHR.pAttachments' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  
  // vulkan
  if (value->IsArray()) {
    
  } else if (value->IsNull()) {
    self->instance.pAttachments = nullptr;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkAttachmentDescription2KHR]' for 'VkRenderPassCreateInfo2KHR.pAttachments' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// subpassCount
NAN_GETTER(_VkRenderPassCreateInfo2KHR::GetsubpassCount) {
  _VkRenderPassCreateInfo2KHR *self = Nan::ObjectWrap::Unwrap<_VkRenderPassCreateInfo2KHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.subpassCount));
}NAN_SETTER(_VkRenderPassCreateInfo2KHR::SetsubpassCount) {
  _VkRenderPassCreateInfo2KHR *self = Nan::ObjectWrap::Unwrap<_VkRenderPassCreateInfo2KHR>(info.This());
  if (value->IsNumber()) {
    self->instance.subpassCount = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkRenderPassCreateInfo2KHR.subpassCount' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// pSubpasses
NAN_GETTER(_VkRenderPassCreateInfo2KHR::GetpSubpasses) {
  _VkRenderPassCreateInfo2KHR *self = Nan::ObjectWrap::Unwrap<_VkRenderPassCreateInfo2KHR>(info.This());
  if (self->pSubpasses.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pSubpasses);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkRenderPassCreateInfo2KHR::SetpSubpasses) {
  _VkRenderPassCreateInfo2KHR *self = Nan::ObjectWrap::Unwrap<_VkRenderPassCreateInfo2KHR>(info.This());
  
    // js
    if (value->IsArray()) {
      self->pSubpasses.Reset<v8::Array>(value.As<v8::Array>());
    } else if (value->IsNull()) {
      self->pSubpasses.Reset();
      self->instance.pSubpasses = nullptr;
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkSubpassDescription2KHR]' for 'VkRenderPassCreateInfo2KHR.pSubpasses' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  
  // vulkan
  if (value->IsArray()) {
    
  } else if (value->IsNull()) {
    self->instance.pSubpasses = nullptr;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkSubpassDescription2KHR]' for 'VkRenderPassCreateInfo2KHR.pSubpasses' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// dependencyCount
NAN_GETTER(_VkRenderPassCreateInfo2KHR::GetdependencyCount) {
  _VkRenderPassCreateInfo2KHR *self = Nan::ObjectWrap::Unwrap<_VkRenderPassCreateInfo2KHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.dependencyCount));
}NAN_SETTER(_VkRenderPassCreateInfo2KHR::SetdependencyCount) {
  _VkRenderPassCreateInfo2KHR *self = Nan::ObjectWrap::Unwrap<_VkRenderPassCreateInfo2KHR>(info.This());
  if (value->IsNumber()) {
    self->instance.dependencyCount = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkRenderPassCreateInfo2KHR.dependencyCount' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// pDependencies
NAN_GETTER(_VkRenderPassCreateInfo2KHR::GetpDependencies) {
  _VkRenderPassCreateInfo2KHR *self = Nan::ObjectWrap::Unwrap<_VkRenderPassCreateInfo2KHR>(info.This());
  if (self->pDependencies.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pDependencies);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkRenderPassCreateInfo2KHR::SetpDependencies) {
  _VkRenderPassCreateInfo2KHR *self = Nan::ObjectWrap::Unwrap<_VkRenderPassCreateInfo2KHR>(info.This());
  
    // js
    if (value->IsArray()) {
      self->pDependencies.Reset<v8::Array>(value.As<v8::Array>());
    } else if (value->IsNull()) {
      self->pDependencies.Reset();
      self->instance.pDependencies = nullptr;
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkSubpassDependency2KHR]' for 'VkRenderPassCreateInfo2KHR.pDependencies' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  
  // vulkan
  if (value->IsArray()) {
    
  } else if (value->IsNull()) {
    self->instance.pDependencies = nullptr;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkSubpassDependency2KHR]' for 'VkRenderPassCreateInfo2KHR.pDependencies' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// correlatedViewMaskCount
NAN_GETTER(_VkRenderPassCreateInfo2KHR::GetcorrelatedViewMaskCount) {
  _VkRenderPassCreateInfo2KHR *self = Nan::ObjectWrap::Unwrap<_VkRenderPassCreateInfo2KHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.correlatedViewMaskCount));
}NAN_SETTER(_VkRenderPassCreateInfo2KHR::SetcorrelatedViewMaskCount) {
  _VkRenderPassCreateInfo2KHR *self = Nan::ObjectWrap::Unwrap<_VkRenderPassCreateInfo2KHR>(info.This());
  if (value->IsNumber()) {
    self->instance.correlatedViewMaskCount = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkRenderPassCreateInfo2KHR.correlatedViewMaskCount' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// pCorrelatedViewMasks
NAN_GETTER(_VkRenderPassCreateInfo2KHR::GetpCorrelatedViewMasks) {
  _VkRenderPassCreateInfo2KHR *self = Nan::ObjectWrap::Unwrap<_VkRenderPassCreateInfo2KHR>(info.This());
  if (self->pCorrelatedViewMasks.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pCorrelatedViewMasks);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkRenderPassCreateInfo2KHR::SetpCorrelatedViewMasks) {
  _VkRenderPassCreateInfo2KHR *self = Nan::ObjectWrap::Unwrap<_VkRenderPassCreateInfo2KHR>(info.This());
  
    // js
    if (value->IsArrayBufferView()) {
      if (value->IsUint32Array()) {
        self->pCorrelatedViewMasks.Reset<v8::Array>(value.As<v8::Array>());
      } else {
        
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Uint32Array' for 'VkRenderPassCreateInfo2KHR.pCorrelatedViewMasks' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
        return;
      }
    } else if (value->IsNull()) {
      self->pCorrelatedViewMasks.Reset();
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Uint32Array' for 'VkRenderPassCreateInfo2KHR.pCorrelatedViewMasks' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  
  
  // vulkan
  if (value->IsArrayBufferView()) {
    self->instance.pCorrelatedViewMasks = getTypedArrayData<uint32_t>(Nan::To<v8::Object>(value).ToLocalChecked(), nullptr);
  } else {
    self->instance.pCorrelatedViewMasks = nullptr;
  }
}