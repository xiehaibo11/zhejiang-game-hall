
/* v8::String::NewExternalTwoByte(v8::Isolate*, v8::String::ExternalStringResource*) */

Isolate * v8::String::NewExternalTwoByte(Isolate *param_1,ExternalStringResource *param_2)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  Isolate *pIVar4;
  Logger *this;
  RuntimeCallStats *local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  if ((param_2 != (ExternalStringResource *)0x0) &&
     (lVar2 = (**(code **)(*(long *)param_2 + 0x30))(param_2), lVar2 != 0)) {
    uVar3 = (**(code **)(*(long *)param_2 + 0x38))(param_2);
    if (uVar3 < 0xffffff1) {
      uVar1 = *(undefined4 *)(param_1 + 0x2c60);
      *(undefined4 *)(param_1 + 0x2c60) = 5;
      local_40 = 0;
      uStack_58 = 0;
      local_60 = (RuntimeCallStats *)0x0;
      uStack_48 = 0;
      uStack_50 = 0;
      if (internal::TracingFlags::runtime_stats != 0) {
        local_60 = (RuntimeCallStats *)(*(long *)(param_1 + 0x9520) + 0x58a0);
        internal::RuntimeCallStats::Enter(local_60,(ulong)&local_60 | 8,0x3d5);
      }
      this = *(Logger **)(param_1 + 0x9558);
      uVar3 = internal::Logger::is_logging(this);
      if ((uVar3 & 1) != 0) {
        internal::Logger::ApiEntryCall(this,"v8::String::NewExternalTwoByte");
      }
      lVar2 = (**(code **)(*(long *)param_2 + 0x38))(param_2);
      if (lVar2 == 0) {
        (**(code **)(*(long *)param_2 + 0x18))(param_2);
        pIVar4 = param_1 + 200;
      }
      else {
        pIVar4 = (Isolate *)
                 internal::Factory::NewExternalStringFromTwoByte((Factory *)param_1,param_2);
        if (pIVar4 == (Isolate *)0x0) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","(location_) != nullptr");
        }
      }
      if (local_60 != (RuntimeCallStats *)0x0) {
        internal::RuntimeCallStats::Leave(local_60,(RuntimeCallTimer *)((ulong)&local_60 | 8));
      }
      *(undefined4 *)(param_1 + 0x2c60) = uVar1;
    }
    else {
      pIVar4 = (Isolate *)0x0;
    }
    return pIVar4;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","resource && resource->data()");
}

