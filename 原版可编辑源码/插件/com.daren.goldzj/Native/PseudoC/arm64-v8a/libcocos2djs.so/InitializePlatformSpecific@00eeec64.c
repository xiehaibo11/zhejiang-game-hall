
/* v8::internal::StoreGlobalDescriptor::InitializePlatformSpecific(v8::internal::CallInterfaceDescriptorData*)
    */

void __thiscall
v8::internal::StoreGlobalDescriptor::InitializePlatformSpecific
          (StoreGlobalDescriptor *this,CallInterfaceDescriptorData *param_1)

{
  Register local_48 [12];
  undefined1 local_3c [12];
  undefined1 local_30 [12];
  
  local_48 = (Register  [12])StoreDescriptor::NameRegister();
  local_3c = StoreDescriptor::ValueRegister();
  local_30 = StoreDescriptor::SlotRegister();
  CallInterfaceDescriptorData::InitializePlatformSpecific(param_1,3,local_48);
  return;
}

