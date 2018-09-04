#ifndef __VK_CALLS_H__
#define __VK_CALLS_H__

#include <nan.h>

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#include <map>
#include <string>

void _vkCreateInstance(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  


  info.GetReturnValue().Set(Nan::New(0));
};

void _vkDestroyInstance(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  

  info.GetReturnValue().Set(Nan::New(0));
};

void _vkEnumeratePhysicalDevices(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  


  info.GetReturnValue().Set(Nan::New(0));
};

void _vkGetDeviceProcAddr(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  

  info.GetReturnValue().Set(Nan::New(0));
};

void _vkGetInstanceProcAddr(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  

  info.GetReturnValue().Set(Nan::New(0));
};

void _vkGetPhysicalDeviceProperties(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  

  info.GetReturnValue().Set(Nan::New(0));
};

void _vkGetPhysicalDeviceQueueFamilyProperties(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  


  info.GetReturnValue().Set(Nan::New(0));
};

void _vkGetPhysicalDeviceMemoryProperties(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  

  info.GetReturnValue().Set(Nan::New(0));
};

void _vkGetPhysicalDeviceFeatures(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  

  info.GetReturnValue().Set(Nan::New(0));
};

void _vkGetPhysicalDeviceFormatProperties(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  


  info.GetReturnValue().Set(Nan::New(0));
};

void _vkGetPhysicalDeviceImageFormatProperties(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  






  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCreateDevice(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  



  info.GetReturnValue().Set(Nan::New(0));
};

void _vkDestroyDevice(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  

  info.GetReturnValue().Set(Nan::New(0));
};

void _vkEnumerateInstanceVersion(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  
  info.GetReturnValue().Set(Nan::New(0));
};

void _vkEnumerateInstanceLayerProperties(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  

  info.GetReturnValue().Set(Nan::New(0));
};

void _vkEnumerateInstanceExtensionProperties(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  


  info.GetReturnValue().Set(Nan::New(0));
};

void _vkEnumerateDeviceLayerProperties(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  


  info.GetReturnValue().Set(Nan::New(0));
};

void _vkEnumerateDeviceExtensionProperties(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  



  info.GetReturnValue().Set(Nan::New(0));
};

void _vkGetDeviceQueue(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  



  info.GetReturnValue().Set(Nan::New(0));
};

void _vkQueueSubmit(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  



  info.GetReturnValue().Set(Nan::New(0));
};

void _vkQueueWaitIdle(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  
  info.GetReturnValue().Set(Nan::New(0));
};

void _vkDeviceWaitIdle(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  
  info.GetReturnValue().Set(Nan::New(0));
};

void _vkAllocateMemory(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  



  info.GetReturnValue().Set(Nan::New(0));
};

void _vkFreeMemory(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  


  info.GetReturnValue().Set(Nan::New(0));
};

void _vkMapMemory(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  





  info.GetReturnValue().Set(Nan::New(0));
};

void _vkUnmapMemory(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  

  info.GetReturnValue().Set(Nan::New(0));
};

void _vkFlushMappedMemoryRanges(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  


  info.GetReturnValue().Set(Nan::New(0));
};

void _vkInvalidateMappedMemoryRanges(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  


  info.GetReturnValue().Set(Nan::New(0));
};

void _vkGetDeviceMemoryCommitment(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  


  info.GetReturnValue().Set(Nan::New(0));
};

void _vkGetBufferMemoryRequirements(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  


  info.GetReturnValue().Set(Nan::New(0));
};

void _vkBindBufferMemory(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  



  info.GetReturnValue().Set(Nan::New(0));
};

void _vkGetImageMemoryRequirements(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  


  info.GetReturnValue().Set(Nan::New(0));
};

void _vkBindImageMemory(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  



  info.GetReturnValue().Set(Nan::New(0));
};

void _vkGetImageSparseMemoryRequirements(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  



  info.GetReturnValue().Set(Nan::New(0));
};

void _vkGetPhysicalDeviceSparseImageFormatProperties(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  







  info.GetReturnValue().Set(Nan::New(0));
};

void _vkQueueBindSparse(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  



  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCreateFence(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  



  info.GetReturnValue().Set(Nan::New(0));
};

void _vkDestroyFence(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  


  info.GetReturnValue().Set(Nan::New(0));
};

void _vkResetFences(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  


  info.GetReturnValue().Set(Nan::New(0));
};

void _vkGetFenceStatus(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  

  info.GetReturnValue().Set(Nan::New(0));
};

void _vkWaitForFences(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  




  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCreateSemaphore(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  



  info.GetReturnValue().Set(Nan::New(0));
};

void _vkDestroySemaphore(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  


  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCreateEvent(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  



  info.GetReturnValue().Set(Nan::New(0));
};

void _vkDestroyEvent(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  


  info.GetReturnValue().Set(Nan::New(0));
};

void _vkGetEventStatus(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  

  info.GetReturnValue().Set(Nan::New(0));
};

void _vkSetEvent(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  

  info.GetReturnValue().Set(Nan::New(0));
};

void _vkResetEvent(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  

  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCreateQueryPool(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  



  info.GetReturnValue().Set(Nan::New(0));
};

void _vkDestroyQueryPool(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  


  info.GetReturnValue().Set(Nan::New(0));
};

void _vkGetQueryPoolResults(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  







  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCreateBuffer(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  



  info.GetReturnValue().Set(Nan::New(0));
};

void _vkDestroyBuffer(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  


  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCreateBufferView(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  



  info.GetReturnValue().Set(Nan::New(0));
};

void _vkDestroyBufferView(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  


  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCreateImage(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  



  info.GetReturnValue().Set(Nan::New(0));
};

void _vkDestroyImage(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  


  info.GetReturnValue().Set(Nan::New(0));
};

void _vkGetImageSubresourceLayout(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  



  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCreateImageView(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  



  info.GetReturnValue().Set(Nan::New(0));
};

void _vkDestroyImageView(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  


  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCreateShaderModule(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  



  info.GetReturnValue().Set(Nan::New(0));
};

void _vkDestroyShaderModule(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  


  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCreatePipelineCache(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  



  info.GetReturnValue().Set(Nan::New(0));
};

void _vkDestroyPipelineCache(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  


  info.GetReturnValue().Set(Nan::New(0));
};

void _vkGetPipelineCacheData(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  



  info.GetReturnValue().Set(Nan::New(0));
};

void _vkMergePipelineCaches(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  



  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCreateGraphicsPipelines(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  





  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCreateComputePipelines(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  





  info.GetReturnValue().Set(Nan::New(0));
};

void _vkDestroyPipeline(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  


  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCreatePipelineLayout(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  



  info.GetReturnValue().Set(Nan::New(0));
};

void _vkDestroyPipelineLayout(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  


  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCreateSampler(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  



  info.GetReturnValue().Set(Nan::New(0));
};

void _vkDestroySampler(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  


  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCreateDescriptorSetLayout(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  



  info.GetReturnValue().Set(Nan::New(0));
};

void _vkDestroyDescriptorSetLayout(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  


  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCreateDescriptorPool(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  



  info.GetReturnValue().Set(Nan::New(0));
};

void _vkDestroyDescriptorPool(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  


  info.GetReturnValue().Set(Nan::New(0));
};

void _vkResetDescriptorPool(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  


  info.GetReturnValue().Set(Nan::New(0));
};

void _vkAllocateDescriptorSets(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  


  info.GetReturnValue().Set(Nan::New(0));
};

void _vkFreeDescriptorSets(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  



  info.GetReturnValue().Set(Nan::New(0));
};

void _vkUpdateDescriptorSets(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  




  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCreateFramebuffer(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  



  info.GetReturnValue().Set(Nan::New(0));
};

void _vkDestroyFramebuffer(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  


  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCreateRenderPass(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  



  info.GetReturnValue().Set(Nan::New(0));
};

void _vkDestroyRenderPass(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  


  info.GetReturnValue().Set(Nan::New(0));
};

void _vkGetRenderAreaGranularity(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  


  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCreateCommandPool(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  



  info.GetReturnValue().Set(Nan::New(0));
};

void _vkDestroyCommandPool(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  


  info.GetReturnValue().Set(Nan::New(0));
};

void _vkResetCommandPool(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  


  info.GetReturnValue().Set(Nan::New(0));
};

void _vkAllocateCommandBuffers(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  


  info.GetReturnValue().Set(Nan::New(0));
};

void _vkFreeCommandBuffers(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  



  info.GetReturnValue().Set(Nan::New(0));
};

void _vkBeginCommandBuffer(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  

  info.GetReturnValue().Set(Nan::New(0));
};

void _vkEndCommandBuffer(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  
  info.GetReturnValue().Set(Nan::New(0));
};

void _vkResetCommandBuffer(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  

  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCmdBindPipeline(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  


  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCmdSetViewport(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  



  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCmdSetScissor(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  



  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCmdSetLineWidth(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  

  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCmdSetDepthBias(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  



  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCmdSetBlendConstants(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  

  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCmdSetDepthBounds(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  


  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCmdSetStencilCompareMask(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  


  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCmdSetStencilWriteMask(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  


  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCmdSetStencilReference(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  


  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCmdBindDescriptorSets(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  







  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCmdBindIndexBuffer(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  



  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCmdBindVertexBuffers(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  




  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCmdDraw(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  




  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCmdDrawIndexed(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  





  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCmdDrawIndirect(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  




  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCmdDrawIndexedIndirect(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  




  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCmdDispatch(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  



  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCmdDispatchIndirect(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  


  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCmdCopyBuffer(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  




  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCmdCopyImage(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  






  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCmdBlitImage(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  







  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCmdCopyBufferToImage(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  





  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCmdCopyImageToBuffer(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  





  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCmdUpdateBuffer(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  




  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCmdFillBuffer(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  




  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCmdClearColorImage(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  





  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCmdClearDepthStencilImage(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  





  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCmdClearAttachments(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  




  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCmdResolveImage(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  






  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCmdSetEvent(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  


  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCmdResetEvent(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  


  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCmdWaitEvents(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  










  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCmdPipelineBarrier(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  









  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCmdBeginQuery(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  



  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCmdEndQuery(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  


  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCmdBeginConditionalRenderingEXT(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  

  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCmdEndConditionalRenderingEXT(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  
  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCmdResetQueryPool(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  



  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCmdWriteTimestamp(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  



  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCmdCopyQueryPoolResults(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  







  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCmdPushConstants(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  





  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCmdBeginRenderPass(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  


  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCmdNextSubpass(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  

  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCmdEndRenderPass(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  
  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCmdExecuteCommands(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  


  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCreateAndroidSurfaceKHR(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  



  info.GetReturnValue().Set(Nan::New(0));
};

void _vkGetPhysicalDeviceDisplayPropertiesKHR(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  


  info.GetReturnValue().Set(Nan::New(0));
};

void _vkGetPhysicalDeviceDisplayPlanePropertiesKHR(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  


  info.GetReturnValue().Set(Nan::New(0));
};

void _vkGetDisplayPlaneSupportedDisplaysKHR(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  



  info.GetReturnValue().Set(Nan::New(0));
};

void _vkGetDisplayModePropertiesKHR(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  



  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCreateDisplayModeKHR(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  




  info.GetReturnValue().Set(Nan::New(0));
};

void _vkGetDisplayPlaneCapabilitiesKHR(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  



  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCreateDisplayPlaneSurfaceKHR(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  



  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCreateSharedSwapchainsKHR(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  




  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCreateMirSurfaceKHR(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  



  info.GetReturnValue().Set(Nan::New(0));
};

void _vkGetPhysicalDeviceMirPresentationSupportKHR(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  


  info.GetReturnValue().Set(Nan::New(0));
};

void _vkDestroySurfaceKHR(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  


  info.GetReturnValue().Set(Nan::New(0));
};

void _vkGetPhysicalDeviceSurfaceSupportKHR(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  



  info.GetReturnValue().Set(Nan::New(0));
};

void _vkGetPhysicalDeviceSurfaceCapabilitiesKHR(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  


  info.GetReturnValue().Set(Nan::New(0));
};

void _vkGetPhysicalDeviceSurfaceFormatsKHR(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  



  info.GetReturnValue().Set(Nan::New(0));
};

void _vkGetPhysicalDeviceSurfacePresentModesKHR(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  



  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCreateSwapchainKHR(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  



  info.GetReturnValue().Set(Nan::New(0));
};

void _vkDestroySwapchainKHR(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  


  info.GetReturnValue().Set(Nan::New(0));
};

void _vkGetSwapchainImagesKHR(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  



  info.GetReturnValue().Set(Nan::New(0));
};

void _vkAcquireNextImageKHR(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  





  info.GetReturnValue().Set(Nan::New(0));
};

void _vkQueuePresentKHR(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  

  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCreateViSurfaceNN(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  



  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCreateWaylandSurfaceKHR(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  



  info.GetReturnValue().Set(Nan::New(0));
};

void _vkGetPhysicalDeviceWaylandPresentationSupportKHR(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  


  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCreateWin32SurfaceKHR(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  



  info.GetReturnValue().Set(Nan::New(0));
};

void _vkGetPhysicalDeviceWin32PresentationSupportKHR(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  

  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCreateXlibSurfaceKHR(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  



  info.GetReturnValue().Set(Nan::New(0));
};

void _vkGetPhysicalDeviceXlibPresentationSupportKHR(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  



  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCreateXcbSurfaceKHR(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  



  info.GetReturnValue().Set(Nan::New(0));
};

void _vkGetPhysicalDeviceXcbPresentationSupportKHR(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  



  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCreateDebugReportCallbackEXT(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  



  info.GetReturnValue().Set(Nan::New(0));
};

void _vkDestroyDebugReportCallbackEXT(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  


  info.GetReturnValue().Set(Nan::New(0));
};

void _vkDebugReportMessageEXT(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  







  info.GetReturnValue().Set(Nan::New(0));
};

void _vkDebugMarkerSetObjectNameEXT(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  

  info.GetReturnValue().Set(Nan::New(0));
};

void _vkDebugMarkerSetObjectTagEXT(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  

  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCmdDebugMarkerBeginEXT(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  

  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCmdDebugMarkerEndEXT(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  
  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCmdDebugMarkerInsertEXT(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  

  info.GetReturnValue().Set(Nan::New(0));
};

void _vkGetPhysicalDeviceExternalImageFormatPropertiesNV(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  







  info.GetReturnValue().Set(Nan::New(0));
};

void _vkGetMemoryWin32HandleNV(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  



  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCmdDrawIndirectCountAMD(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  






  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCmdDrawIndexedIndirectCountAMD(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  






  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCmdProcessCommandsNVX(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  

  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCmdReserveSpaceForCommandsNVX(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  

  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCreateIndirectCommandsLayoutNVX(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  



  info.GetReturnValue().Set(Nan::New(0));
};

void _vkDestroyIndirectCommandsLayoutNVX(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  


  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCreateObjectTableNVX(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  



  info.GetReturnValue().Set(Nan::New(0));
};

void _vkDestroyObjectTableNVX(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  


  info.GetReturnValue().Set(Nan::New(0));
};

void _vkRegisterObjectsNVX(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  




  info.GetReturnValue().Set(Nan::New(0));
};

void _vkUnregisterObjectsNVX(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  




  info.GetReturnValue().Set(Nan::New(0));
};

void _vkGetPhysicalDeviceGeneratedCommandsPropertiesNVX(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  


  info.GetReturnValue().Set(Nan::New(0));
};

void _vkGetPhysicalDeviceFeatures2(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  

  info.GetReturnValue().Set(Nan::New(0));
};

void _vkGetPhysicalDeviceProperties2(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  

  info.GetReturnValue().Set(Nan::New(0));
};

void _vkGetPhysicalDeviceFormatProperties2(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  


  info.GetReturnValue().Set(Nan::New(0));
};

void _vkGetPhysicalDeviceImageFormatProperties2(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  


  info.GetReturnValue().Set(Nan::New(0));
};

void _vkGetPhysicalDeviceQueueFamilyProperties2(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  


  info.GetReturnValue().Set(Nan::New(0));
};

void _vkGetPhysicalDeviceMemoryProperties2(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  

  info.GetReturnValue().Set(Nan::New(0));
};

void _vkGetPhysicalDeviceSparseImageFormatProperties2(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  



  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCmdPushDescriptorSetKHR(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  





  info.GetReturnValue().Set(Nan::New(0));
};

void _vkTrimCommandPool(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  


  info.GetReturnValue().Set(Nan::New(0));
};

void _vkGetPhysicalDeviceExternalBufferProperties(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  


  info.GetReturnValue().Set(Nan::New(0));
};

void _vkGetMemoryWin32HandleKHR(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  


  info.GetReturnValue().Set(Nan::New(0));
};

void _vkGetMemoryWin32HandlePropertiesKHR(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  



  info.GetReturnValue().Set(Nan::New(0));
};

void _vkGetMemoryFdKHR(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  


  info.GetReturnValue().Set(Nan::New(0));
};

void _vkGetMemoryFdPropertiesKHR(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  



  info.GetReturnValue().Set(Nan::New(0));
};

void _vkGetPhysicalDeviceExternalSemaphoreProperties(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  


  info.GetReturnValue().Set(Nan::New(0));
};

void _vkGetSemaphoreWin32HandleKHR(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  


  info.GetReturnValue().Set(Nan::New(0));
};

void _vkImportSemaphoreWin32HandleKHR(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  

  info.GetReturnValue().Set(Nan::New(0));
};

void _vkGetSemaphoreFdKHR(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  


  info.GetReturnValue().Set(Nan::New(0));
};

void _vkImportSemaphoreFdKHR(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  

  info.GetReturnValue().Set(Nan::New(0));
};

void _vkGetPhysicalDeviceExternalFenceProperties(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  


  info.GetReturnValue().Set(Nan::New(0));
};

void _vkGetFenceWin32HandleKHR(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  


  info.GetReturnValue().Set(Nan::New(0));
};

void _vkImportFenceWin32HandleKHR(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  

  info.GetReturnValue().Set(Nan::New(0));
};

void _vkGetFenceFdKHR(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  


  info.GetReturnValue().Set(Nan::New(0));
};

void _vkImportFenceFdKHR(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  

  info.GetReturnValue().Set(Nan::New(0));
};

void _vkReleaseDisplayEXT(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  

  info.GetReturnValue().Set(Nan::New(0));
};

void _vkAcquireXlibDisplayEXT(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  


  info.GetReturnValue().Set(Nan::New(0));
};

void _vkGetRandROutputDisplayEXT(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  



  info.GetReturnValue().Set(Nan::New(0));
};

void _vkDisplayPowerControlEXT(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  


  info.GetReturnValue().Set(Nan::New(0));
};

void _vkRegisterDeviceEventEXT(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  



  info.GetReturnValue().Set(Nan::New(0));
};

void _vkRegisterDisplayEventEXT(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  




  info.GetReturnValue().Set(Nan::New(0));
};

void _vkGetSwapchainCounterEXT(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  



  info.GetReturnValue().Set(Nan::New(0));
};

void _vkGetPhysicalDeviceSurfaceCapabilities2EXT(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  


  info.GetReturnValue().Set(Nan::New(0));
};

void _vkEnumeratePhysicalDeviceGroups(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  


  info.GetReturnValue().Set(Nan::New(0));
};

void _vkGetDeviceGroupPeerMemoryFeatures(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  




  info.GetReturnValue().Set(Nan::New(0));
};

void _vkBindBufferMemory2(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  


  info.GetReturnValue().Set(Nan::New(0));
};

void _vkBindImageMemory2(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  


  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCmdSetDeviceMask(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  

  info.GetReturnValue().Set(Nan::New(0));
};

void _vkGetDeviceGroupPresentCapabilitiesKHR(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  

  info.GetReturnValue().Set(Nan::New(0));
};

void _vkGetDeviceGroupSurfacePresentModesKHR(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  


  info.GetReturnValue().Set(Nan::New(0));
};

void _vkAcquireNextImage2KHR(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  


  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCmdDispatchBase(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  






  info.GetReturnValue().Set(Nan::New(0));
};

void _vkGetPhysicalDevicePresentRectanglesKHR(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  



  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCreateDescriptorUpdateTemplate(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  



  info.GetReturnValue().Set(Nan::New(0));
};

void _vkDestroyDescriptorUpdateTemplate(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  


  info.GetReturnValue().Set(Nan::New(0));
};

void _vkUpdateDescriptorSetWithTemplate(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  



  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCmdPushDescriptorSetWithTemplateKHR(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  




  info.GetReturnValue().Set(Nan::New(0));
};

void _vkSetHdrMetadataEXT(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  



  info.GetReturnValue().Set(Nan::New(0));
};

void _vkGetSwapchainStatusKHR(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  

  info.GetReturnValue().Set(Nan::New(0));
};

void _vkGetRefreshCycleDurationGOOGLE(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  


  info.GetReturnValue().Set(Nan::New(0));
};

void _vkGetPastPresentationTimingGOOGLE(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  



  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCreateIOSSurfaceMVK(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  



  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCreateMacOSSurfaceMVK(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  



  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCmdSetViewportWScalingNV(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  



  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCmdSetDiscardRectangleEXT(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  



  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCmdSetSampleLocationsEXT(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  

  info.GetReturnValue().Set(Nan::New(0));
};

void _vkGetPhysicalDeviceMultisamplePropertiesEXT(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  


  info.GetReturnValue().Set(Nan::New(0));
};

void _vkGetPhysicalDeviceSurfaceCapabilities2KHR(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  


  info.GetReturnValue().Set(Nan::New(0));
};

void _vkGetPhysicalDeviceSurfaceFormats2KHR(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  



  info.GetReturnValue().Set(Nan::New(0));
};

void _vkGetPhysicalDeviceDisplayProperties2KHR(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  


  info.GetReturnValue().Set(Nan::New(0));
};

void _vkGetPhysicalDeviceDisplayPlaneProperties2KHR(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  


  info.GetReturnValue().Set(Nan::New(0));
};

void _vkGetDisplayModeProperties2KHR(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  



  info.GetReturnValue().Set(Nan::New(0));
};

void _vkGetDisplayPlaneCapabilities2KHR(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  


  info.GetReturnValue().Set(Nan::New(0));
};

void _vkGetBufferMemoryRequirements2(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  


  info.GetReturnValue().Set(Nan::New(0));
};

void _vkGetImageMemoryRequirements2(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  


  info.GetReturnValue().Set(Nan::New(0));
};

void _vkGetImageSparseMemoryRequirements2(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  



  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCreateSamplerYcbcrConversion(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  



  info.GetReturnValue().Set(Nan::New(0));
};

void _vkDestroySamplerYcbcrConversion(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  


  info.GetReturnValue().Set(Nan::New(0));
};

void _vkGetDeviceQueue2(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  


  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCreateValidationCacheEXT(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  



  info.GetReturnValue().Set(Nan::New(0));
};

void _vkDestroyValidationCacheEXT(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  


  info.GetReturnValue().Set(Nan::New(0));
};

void _vkGetValidationCacheDataEXT(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  



  info.GetReturnValue().Set(Nan::New(0));
};

void _vkMergeValidationCachesEXT(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  



  info.GetReturnValue().Set(Nan::New(0));
};

void _vkGetDescriptorSetLayoutSupport(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  


  info.GetReturnValue().Set(Nan::New(0));
};

void _vkGetSwapchainGrallocUsageANDROID(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  



  info.GetReturnValue().Set(Nan::New(0));
};

void _vkAcquireImageANDROID(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  




  info.GetReturnValue().Set(Nan::New(0));
};

void _vkQueueSignalReleaseImageANDROID(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  




  info.GetReturnValue().Set(Nan::New(0));
};

void _vkGetShaderInfoAMD(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  





  info.GetReturnValue().Set(Nan::New(0));
};

void _vkSetDebugUtilsObjectNameEXT(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  

  info.GetReturnValue().Set(Nan::New(0));
};

void _vkSetDebugUtilsObjectTagEXT(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  

  info.GetReturnValue().Set(Nan::New(0));
};

void _vkQueueBeginDebugUtilsLabelEXT(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  

  info.GetReturnValue().Set(Nan::New(0));
};

void _vkQueueEndDebugUtilsLabelEXT(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  
  info.GetReturnValue().Set(Nan::New(0));
};

void _vkQueueInsertDebugUtilsLabelEXT(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  

  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCmdBeginDebugUtilsLabelEXT(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  

  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCmdEndDebugUtilsLabelEXT(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  
  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCmdInsertDebugUtilsLabelEXT(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  

  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCreateDebugUtilsMessengerEXT(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  



  info.GetReturnValue().Set(Nan::New(0));
};

void _vkDestroyDebugUtilsMessengerEXT(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  


  info.GetReturnValue().Set(Nan::New(0));
};

void _vkSubmitDebugUtilsMessageEXT(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  



  info.GetReturnValue().Set(Nan::New(0));
};

void _vkGetMemoryHostPointerPropertiesEXT(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  



  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCmdWriteBufferMarkerAMD(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  




  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCreateRenderPass2KHR(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  



  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCmdBeginRenderPass2KHR(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  


  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCmdNextSubpass2KHR(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  


  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCmdEndRenderPass2KHR(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  

  info.GetReturnValue().Set(Nan::New(0));
};

void _vkGetAndroidHardwareBufferPropertiesANDROID(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  


  info.GetReturnValue().Set(Nan::New(0));
};

void _vkGetMemoryAndroidHardwareBufferANDROID(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  


  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCmdDrawIndirectCountKHR(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  






  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCmdDrawIndexedIndirectCountKHR(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  






  info.GetReturnValue().Set(Nan::New(0));
};

void _vkCmdSetCheckpointNV(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  

  info.GetReturnValue().Set(Nan::New(0));
};

void _vkGetQueueCheckpointDataNV(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  


  info.GetReturnValue().Set(Nan::New(0));
};



#endif
