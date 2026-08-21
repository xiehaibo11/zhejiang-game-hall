
/* v8::internal::GrowArrayElementsDescriptor::InitializePlatformSpecific(v8::internal::CallInterfaceDescriptorData*)
    */

void __thiscall
v8::internal::GrowArrayElementsDescriptor::InitializePlatformSpecific
          (GrowArrayElementsDescriptor *this,CallInterfaceDescriptorData *param_1)

{
  Register local_38 [12];
  undefined1 local_2c [12];
  
  local_38 = (Register  [12])ObjectRegister();
  local_2c = KeyRegister();
  CallInterfaceDescriptorData::InitializePlatformSpecific(param_1,2,local_38);
  return;
}

