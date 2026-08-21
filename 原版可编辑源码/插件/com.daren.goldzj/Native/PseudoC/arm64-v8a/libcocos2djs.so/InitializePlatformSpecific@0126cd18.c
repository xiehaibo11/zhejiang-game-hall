
/* v8::internal::ApiCallbackDescriptor::InitializePlatformSpecific(v8::internal::CallInterfaceDescriptorData*)
    */

void __thiscall
v8::internal::ApiCallbackDescriptor::InitializePlatformSpecific
          (ApiCallbackDescriptor *this,CallInterfaceDescriptorData *param_1)

{
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  uStack_38 = 0x200000000;
  local_40 = 0x4000000001;
  uStack_28 = 0x4000000003;
  uStack_30 = 0x40;
  uStack_18 = 0x40;
  local_20 = 0;
  CallInterfaceDescriptorData::InitializePlatformSpecific(param_1,4,(Register *)&local_40);
  return;
}

