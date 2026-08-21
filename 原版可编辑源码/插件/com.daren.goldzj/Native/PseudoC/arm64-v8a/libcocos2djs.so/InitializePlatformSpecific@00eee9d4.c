
/* v8::internal::InterpreterCEntry2Descriptor::InitializePlatformSpecific(v8::internal::CallInterfaceDescriptorData*)
    */

void __thiscall
v8::internal::InterpreterCEntry2Descriptor::InitializePlatformSpecific
          (InterpreterCEntry2Descriptor *this,CallInterfaceDescriptorData *param_1)

{
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined4 local_20;
  
  uStack_38 = 0xb00000000;
  local_40 = 0x4000000000;
  uStack_28 = 0x4000000001;
  uStack_30 = 0x40;
  local_20 = 0;
  CallInterfaceDescriptorData::InitializePlatformSpecific(param_1,3,(Register *)&local_40);
  return;
}

