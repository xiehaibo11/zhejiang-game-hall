
undefined8 FUN_01569088(undefined8 param_1,undefined8 param_2,Isolate *param_3)

{
  byte *pbVar1;
  Isolate *pIVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  byte **local_b0;
  byte *local_a8;
  char *local_a0;
  undefined8 local_98;
  RuntimeCallStats *local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  byte **local_60;
  byte *local_58;
  char *local_50;
  undefined8 local_48;
  Isolate *local_40;
  long *local_38;
  
  local_70 = 0;
  uStack_88 = 0;
  local_90 = (RuntimeCallStats *)0x0;
  uStack_78 = 0;
  uStack_80 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_90 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_90,(ulong)&local_90 | 8,0x15b);
  }
  if (DAT_01d47000 == (byte *)0x0) {
    plVar3 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d47000 = (byte *)(**(code **)(*plVar3 + 0x10))(plVar3,"disabled-by-default-v8.runtime");
  }
  pbVar1 = DAT_01d47000;
  local_b0 = (byte **)0x0;
  if ((*DAT_01d47000 & 5) != 0) {
    local_40 = (Isolate *)0x0;
    local_38 = (long *)0x0;
    plVar3 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar4 = (**(code **)(*plVar3 + 0x18))
                      (plVar3,0x58,pbVar1,"V8.Runtime_Runtime_StackGuard",0,0,0,0,0,0,0,&local_40,0)
    ;
    plVar3 = local_38;
    local_38 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    pIVar2 = local_40;
    local_40 = (Isolate *)0x0;
    if (pIVar2 != (Isolate *)0x0) {
      (**(code **)(*(long *)pIVar2 + 8))();
    }
    local_b0 = &local_a8;
    local_a0 = "V8.Runtime_Runtime_StackGuard";
    local_a8 = pbVar1;
    local_98 = uVar4;
  }
  if (DAT_01d47008 == (byte *)0x0) {
    plVar3 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d47008 = (byte *)(**(code **)(*plVar3 + 0x10))(plVar3,"v8.execute");
  }
  pbVar1 = DAT_01d47008;
  local_60 = (byte **)0x0;
  if ((*DAT_01d47008 & 5) != 0) {
    local_40 = (Isolate *)0x0;
    local_38 = (long *)0x0;
    plVar3 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar4 = (**(code **)(*plVar3 + 0x18))
                      (plVar3,0x58,pbVar1,"V8.StackGuard",0,0,0,0,0,0,0,&local_40,0);
    plVar3 = local_38;
    local_38 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    pIVar2 = local_40;
    local_40 = (Isolate *)0x0;
    if (pIVar2 != (Isolate *)0x0) {
      (**(code **)(*(long *)pIVar2 + 8))();
    }
    local_60 = &local_58;
    local_50 = "V8.StackGuard";
    local_58 = pbVar1;
    local_48 = uVar4;
  }
  local_40 = param_3;
  uVar5 = v8::internal::StackLimitCheck::JsHasOverflowed((StackLimitCheck *)&local_40,0);
  if ((uVar5 & 1) == 0) {
    uVar4 = v8::internal::StackGuard::HandleInterrupts((StackGuard *)(param_3 + 0x48));
  }
  else {
    uVar4 = v8::internal::Isolate::StackOverflow(param_3);
  }
  if ((local_60 != (byte **)0x0) && (*local_58 != 0)) {
    plVar3 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar3 + 0x28))(plVar3,local_58,local_50,local_48);
  }
  if ((local_b0 != (byte **)0x0) && (*local_a8 != 0)) {
    plVar3 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar3 + 0x28))(plVar3,local_a8,local_a0,local_98);
  }
  if (local_90 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_90,(RuntimeCallTimer *)((ulong)&local_90 | 8));
  }
  return uVar4;
}

