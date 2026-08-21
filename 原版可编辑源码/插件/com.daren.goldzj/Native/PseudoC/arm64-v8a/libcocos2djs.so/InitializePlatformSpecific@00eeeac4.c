
/* v8::internal::LoadDescriptor::InitializePlatformSpecific(v8::internal::CallInterfaceDescriptorData*)
    */

void __thiscall
v8::internal::LoadDescriptor::InitializePlatformSpecific
          (LoadDescriptor *this,CallInterfaceDescriptorData *param_1)

{
  Register local_48 [12];
  undefined1 local_3c [12];
  undefined1 local_30 [12];
  
  local_48 = (Register  [12])ReceiverRegister();
  local_3c = NameRegister();
  local_30 = SlotRegister();
  CallInterfaceDescriptorData::InitializePlatformSpecific(param_1,3,local_48);
  return;
}

