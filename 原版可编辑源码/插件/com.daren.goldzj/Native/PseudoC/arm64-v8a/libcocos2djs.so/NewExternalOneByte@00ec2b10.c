
/* v8::String::NewExternalOneByte(v8::Isolate*, v8::String::ExternalOneByteStringResource*) */

Isolate * v8::String::NewExternalOneByte(Isolate *param_1,ExternalOneByteStringResource *param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  Isolate *pIVar4;
  Logger *this;
  RuntimeCallStats *local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  if (param_2 == (ExternalOneByteStringResource *)0x0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","(resource) != nullptr");
  }
  uVar2 = (**(code **)(*(long *)param_2 + 0x38))(param_2);
  if (uVar2 < 0xffffff1) {
    uVar1 = *(undefined4 *)(param_1 + 0x2c60);
    *(undefined4 *)(param_1 + 0x2c60) = 5;
    local_40 = 0;
    uStack_58 = 0;
    local_60 = (RuntimeCallStats *)0x0;
    uStack_48 = 0;
    uStack_50 = 0;
    if (internal::TracingFlags::runtime_stats != 0) {
      local_60 = (RuntimeCallStats *)(*(long *)(param_1 + 0x9520) + 0x58a0);
      internal::RuntimeCallStats::Enter(local_60,(ulong)&local_60 | 8,0x3d4);
    }
    this = *(Logger **)(param_1 + 0x9558);
    uVar2 = internal::Logger::is_logging(this);
    if ((uVar2 & 1) != 0) {
      internal::Logger::ApiEntryCall(this,"v8::String::NewExternalOneByte");
    }
    lVar3 = (**(code **)(*(long *)param_2 + 0x38))(param_2);
    if (lVar3 == 0) {
      (**(code **)(*(long *)param_2 + 0x18))(param_2);
      pIVar4 = param_1 + 200;
    }
    else {
      lVar3 = (**(code **)(*(long *)param_2 + 0x30))(param_2);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","(resource->data()) != nullptr");
      }
      pIVar4 = (Isolate *)
               internal::Factory::NewExternalStringFromOneByte((Factory *)param_1,param_2);
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

