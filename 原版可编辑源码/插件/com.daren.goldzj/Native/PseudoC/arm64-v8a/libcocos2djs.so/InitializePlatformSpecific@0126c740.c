
/* v8::internal::RecordWriteDescriptor::InitializePlatformSpecific(v8::internal::CallInterfaceDescriptorData*)
    */

void __thiscall
v8::internal::RecordWriteDescriptor::InitializePlatformSpecific
          (RecordWriteDescriptor *this,CallInterfaceDescriptorData *param_1)

{
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined8 uStack_1c;
  
  uStack_48 = 0x100000000;
  local_50 = 0x4000000000;
  uStack_38 = 0x4000000002;
  uStack_40 = 0x40;
  uStack_28 = 0x40;
  local_30 = 0x300000000;
  uStack_1c = 0x40;
  uStack_24 = 0;
  uStack_20 = 4;
  *(ulong *)(param_1 + 0x10) = *(ulong *)(param_1 + 0x10) | 0x1f;
  CallInterfaceDescriptorData::InitializePlatformSpecific(param_1,4,(Register *)&local_50);
  return;
}

