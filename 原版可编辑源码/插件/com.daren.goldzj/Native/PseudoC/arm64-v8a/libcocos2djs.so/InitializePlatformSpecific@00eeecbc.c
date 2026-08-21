
/* v8::internal::StoreGlobalWithVectorDescriptor::InitializePlatformSpecific(v8::internal::CallInterfaceDescriptorData*)
    */

void __thiscall
v8::internal::StoreGlobalWithVectorDescriptor::InitializePlatformSpecific
          (StoreGlobalWithVectorDescriptor *this,CallInterfaceDescriptorData *param_1)

{
  Register local_50 [12];
  undefined1 local_44 [12];
  undefined1 local_38 [12];
  undefined1 local_2c [12];
  
  local_50 = (Register  [12])StoreDescriptor::NameRegister();
  local_44 = StoreDescriptor::ValueRegister();
  local_38 = StoreDescriptor::SlotRegister();
  local_2c = StoreWithVectorDescriptor::VectorRegister();
  CallInterfaceDescriptorData::InitializePlatformSpecific(param_1,4,local_50);
  return;
}

