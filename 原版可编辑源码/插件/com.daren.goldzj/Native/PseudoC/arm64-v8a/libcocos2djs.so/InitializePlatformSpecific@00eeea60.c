
/* v8::internal::FastNewObjectDescriptor::InitializePlatformSpecific(v8::internal::CallInterfaceDescriptorData*)
    */

void __thiscall
v8::internal::FastNewObjectDescriptor::InitializePlatformSpecific
          (FastNewObjectDescriptor *this,CallInterfaceDescriptorData *param_1)

{
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_1c;
  undefined4 local_14;
  
  local_28 = 0x4000000001;
  local_20 = 0;
  local_1c = 0x4000000003;
  local_14 = 0;
  CallInterfaceDescriptorData::InitializePlatformSpecific(param_1,2,(Register *)&local_28);
  return;
}

