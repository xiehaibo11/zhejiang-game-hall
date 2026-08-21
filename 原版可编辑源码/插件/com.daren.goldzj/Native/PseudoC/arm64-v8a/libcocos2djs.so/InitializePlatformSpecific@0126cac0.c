
/* v8::internal::ConstructVarargsDescriptor::InitializePlatformSpecific(v8::internal::CallInterfaceDescriptorData*)
    */

void __thiscall
v8::internal::ConstructVarargsDescriptor::InitializePlatformSpecific
          (ConstructVarargsDescriptor *this,CallInterfaceDescriptorData *param_1)

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
  
  uStack_48 = 0x300000000;
  local_50 = 0x4000000001;
  uStack_38 = 0x4000000000;
  uStack_40 = 0x40;
  uStack_28 = 0x40;
  local_30 = 0x400000000;
  uStack_1c = 0x40;
  uStack_24 = 0;
  uStack_20 = 2;
  CallInterfaceDescriptorData::InitializePlatformSpecific(param_1,5,(Register *)&local_50);
  return;
}

