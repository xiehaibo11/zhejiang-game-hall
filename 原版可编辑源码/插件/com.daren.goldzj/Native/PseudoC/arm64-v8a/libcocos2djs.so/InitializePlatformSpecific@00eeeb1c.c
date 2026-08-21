
/* v8::internal::LoadNoFeedbackDescriptor::InitializePlatformSpecific(v8::internal::CallInterfaceDescriptorData*)
    */

void __thiscall
v8::internal::LoadNoFeedbackDescriptor::InitializePlatformSpecific
          (LoadNoFeedbackDescriptor *this,CallInterfaceDescriptorData *param_1)

{
  Register local_48 [12];
  undefined1 local_3c [12];
  undefined1 local_30 [12];
  
  local_48 = (Register  [12])LoadDescriptor::ReceiverRegister();
  local_3c = LoadDescriptor::NameRegister();
  local_30 = LoadDescriptor::SlotRegister();
  CallInterfaceDescriptorData::InitializePlatformSpecific(param_1,3,local_48);
  return;
}

