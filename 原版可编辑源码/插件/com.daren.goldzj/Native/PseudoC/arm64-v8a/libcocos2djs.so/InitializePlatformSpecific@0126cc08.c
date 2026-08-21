
/* v8::internal::AbortDescriptor::InitializePlatformSpecific(v8::internal::CallInterfaceDescriptorData*)
    */

void __thiscall
v8::internal::AbortDescriptor::InitializePlatformSpecific
          (AbortDescriptor *this,CallInterfaceDescriptorData *param_1)

{
  undefined8 local_20;
  undefined4 local_18;
  
  local_20 = 0x4000000001;
  local_18 = 0;
  CallInterfaceDescriptorData::InitializePlatformSpecific(param_1,1,(Register *)&local_20);
  return;
}

