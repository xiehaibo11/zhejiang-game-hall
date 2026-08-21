
/* v8::internal::StoreTransitionDescriptor::InitializePlatformSpecific(v8::internal::CallInterfaceDescriptorData*)
    */

void __thiscall
v8::internal::StoreTransitionDescriptor::InitializePlatformSpecific
          (StoreTransitionDescriptor *this,CallInterfaceDescriptorData *param_1)

{
  Register local_68 [12];
  undefined1 local_5c [12];
  undefined1 local_50 [12];
  undefined1 local_44 [12];
  undefined1 local_38 [12];
  undefined1 local_2c [12];
  
  local_68 = (Register  [12])StoreDescriptor::ReceiverRegister();
  local_5c = StoreDescriptor::NameRegister();
  local_50 = MapRegister();
  local_44 = StoreDescriptor::ValueRegister();
  local_38 = SlotRegister();
  local_2c = VectorRegister();
  CallInterfaceDescriptorData::InitializePlatformSpecific(param_1,6,local_68);
  return;
}

