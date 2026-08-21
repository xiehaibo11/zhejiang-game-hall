
/* v8::internal::TypeofDescriptor::InitializePlatformSpecific(v8::internal::CallInterfaceDescriptorData*)
    */

void __thiscall
v8::internal::TypeofDescriptor::InitializePlatformSpecific
          (TypeofDescriptor *this,CallInterfaceDescriptorData *param_1)

{
  undefined8 local_20;
  undefined4 local_18;
  
  local_20 = 0x4000000003;
  local_18 = 0;
  CallInterfaceDescriptorData::InitializePlatformSpecific(param_1,1,(Register *)&local_20);
  return;
}

