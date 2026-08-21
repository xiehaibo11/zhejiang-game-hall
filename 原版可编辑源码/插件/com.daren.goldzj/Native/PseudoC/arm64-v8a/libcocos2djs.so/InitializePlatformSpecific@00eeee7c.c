
/* v8::internal::LoadWithVectorDescriptor::InitializePlatformSpecific(v8::internal::CallInterfaceDescriptorData*)
    */

void __thiscall
v8::internal::LoadWithVectorDescriptor::InitializePlatformSpecific
          (LoadWithVectorDescriptor *this,CallInterfaceDescriptorData *param_1)

{
  Register local_50 [12];
  undefined1 local_44 [12];
  undefined1 local_38 [12];
  undefined1 local_2c [12];
  
  local_50 = (Register  [12])LoadDescriptor::ReceiverRegister();
  local_44 = LoadDescriptor::NameRegister();
  local_38 = LoadDescriptor::SlotRegister();
  local_2c = VectorRegister();
  CallInterfaceDescriptorData::InitializePlatformSpecific(param_1,4,local_50);
  return;
}

