
/* v8::internal::ResumeGeneratorDescriptor::InitializePlatformSpecific(v8::internal::CallInterfaceDescriptorData*)
    */

void __thiscall
v8::internal::ResumeGeneratorDescriptor::InitializePlatformSpecific
          (ResumeGeneratorDescriptor *this,CallInterfaceDescriptorData *param_1)

{
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  uStack_28 = 0x100000000;
  local_30 = 0x4000000000;
  local_20 = 0x40;
  CallInterfaceDescriptorData::InitializePlatformSpecific(param_1,2,(Register *)&local_30);
  return;
}

