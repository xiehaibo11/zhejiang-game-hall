
/* v8::internal::StoreDescriptor::InitializePlatformSpecific(v8::internal::CallInterfaceDescriptorData*)
    */

void __thiscall
v8::internal::StoreDescriptor::InitializePlatformSpecific
          (StoreDescriptor *this,CallInterfaceDescriptorData *param_1)

{
  Register local_50 [12];
  undefined1 local_44 [12];
  undefined1 local_38 [12];
  undefined1 local_2c [12];
  
  local_50 = (Register  [12])ReceiverRegister();
  local_44 = NameRegister();
  local_38 = ValueRegister();
  local_2c = SlotRegister();
  CallInterfaceDescriptorData::InitializePlatformSpecific(param_1,4,local_50);
  return;
}

