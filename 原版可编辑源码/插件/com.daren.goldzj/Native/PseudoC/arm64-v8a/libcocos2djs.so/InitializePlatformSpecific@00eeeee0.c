
/* v8::internal::StoreWithVectorDescriptor::InitializePlatformSpecific(v8::internal::CallInterfaceDescriptorData*)
    */

void __thiscall
v8::internal::StoreWithVectorDescriptor::InitializePlatformSpecific
          (StoreWithVectorDescriptor *this,CallInterfaceDescriptorData *param_1)

{
  Register local_60 [12];
  undefined1 local_54 [12];
  undefined1 local_48 [12];
  undefined1 local_3c [12];
  undefined1 local_30 [12];
  
  local_60 = (Register  [12])StoreDescriptor::ReceiverRegister();
  local_54 = StoreDescriptor::NameRegister();
  local_48 = StoreDescriptor::ValueRegister();
  local_3c = StoreDescriptor::SlotRegister();
  local_30 = VectorRegister();
  CallInterfaceDescriptorData::InitializePlatformSpecific(param_1,5,local_60);
  return;
}

