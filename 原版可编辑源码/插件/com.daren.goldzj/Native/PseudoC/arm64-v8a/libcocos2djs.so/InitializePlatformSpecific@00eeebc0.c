
/* v8::internal::LoadGlobalNoFeedbackDescriptor::InitializePlatformSpecific(v8::internal::CallInterfaceDescriptorData*)
    */

void __thiscall
v8::internal::LoadGlobalNoFeedbackDescriptor::InitializePlatformSpecific
          (LoadGlobalNoFeedbackDescriptor *this,CallInterfaceDescriptorData *param_1)

{
  Register local_38 [12];
  undefined1 local_2c [12];
  
  local_38 = (Register  [12])LoadDescriptor::NameRegister();
  local_2c = LoadDescriptor::SlotRegister();
  CallInterfaceDescriptorData::InitializePlatformSpecific(param_1,2,local_38);
  return;
}

