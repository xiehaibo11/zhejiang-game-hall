
/* v8::internal::FastNewFunctionContextDescriptor::InitializePlatformSpecific(v8::internal::CallInterfaceDescriptorData*)
    */

void __thiscall
v8::internal::FastNewFunctionContextDescriptor::InitializePlatformSpecific
          (FastNewFunctionContextDescriptor *this,CallInterfaceDescriptorData *param_1)

{
  Register local_38 [12];
  undefined1 local_2c [12];
  
  local_38 = (Register  [12])ScopeInfoRegister();
  local_2c = SlotsRegister();
  CallInterfaceDescriptorData::InitializePlatformSpecific(param_1,2,local_38);
  return;
}

