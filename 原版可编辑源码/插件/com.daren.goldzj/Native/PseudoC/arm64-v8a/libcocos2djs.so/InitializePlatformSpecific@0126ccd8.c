
/* v8::internal::ArgumentsAdaptorDescriptor::InitializePlatformSpecific(v8::internal::CallInterfaceDescriptorData*)
    */

void __thiscall
v8::internal::ArgumentsAdaptorDescriptor::InitializePlatformSpecific
          (ArgumentsAdaptorDescriptor *this,CallInterfaceDescriptorData *param_1)

{
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  uStack_38 = 0x300000000;
  local_40 = 0x4000000001;
  uStack_28 = 0x4000000000;
  uStack_30 = 0x40;
  uStack_18 = 0x40;
  local_20 = 0x200000000;
  CallInterfaceDescriptorData::InitializePlatformSpecific(param_1,4,(Register *)&local_40);
  return;
}

