
/* v8::internal::CallInterfaceDescriptor::DefaultInitializePlatformSpecific(v8::internal::CallInterfaceDescriptorData*,
   int) */

void v8::internal::CallInterfaceDescriptor::DefaultInitializePlatformSpecific
               (CallInterfaceDescriptorData *param_1,int param_2)

{
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined8 uStack_1c;
  
  uStack_48 = 0x100000000;
  local_50 = 0x4000000000;
  uStack_38 = 0x4000000002;
  uStack_40 = 0x40;
  uStack_28 = 0x40;
  local_30 = 0x300000000;
  uStack_1c = 0x40;
  uStack_24 = 0;
  uStack_20 = 4;
  if ((uint)param_2 < 6) {
    CallInterfaceDescriptorData::InitializePlatformSpecific(param_1,param_2,(Register *)&local_50);
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.",
           "static_cast<size_t>(register_parameter_count) <= (sizeof(ArraySizeHelper(default_stub_registers)))"
          );
}

