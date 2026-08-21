
/* v8::internal::CallInterfaceDescriptor::JSDefaultInitializePlatformSpecific(v8::internal::CallInterfaceDescriptorData*,
   int) */

void v8::internal::CallInterfaceDescriptor::JSDefaultInitializePlatformSpecific
               (CallInterfaceDescriptorData *param_1,int param_2)

{
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  uStack_38 = 0x300000000;
  local_40 = 0x4000000001;
  uStack_28 = 0x4000000000;
  uStack_30 = 0x40;
  uStack_18 = 0x40;
  local_20 = 0x200000000;
  if (param_2 + 3U < 5) {
    CallInterfaceDescriptorData::InitializePlatformSpecific
              (param_1,param_2 + 3U,(Register *)&local_40);
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.",
           "static_cast<size_t>(register_parameter_count) <= (sizeof(ArraySizeHelper(default_js_stub_registers)))"
          );
}

