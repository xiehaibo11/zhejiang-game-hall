
undefined8 FUN_0159c588(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  bool bVar2;
  byte *pbVar3;
  long *plVar4;
  undefined8 uVar5;
  byte *local_88;
  char *local_80;
  undefined8 local_78;
  RuntimeCallStats *local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long *local_40;
  long *local_38;
  
  local_50 = 0;
  uStack_68 = 0;
  local_70 = (RuntimeCallStats *)0x0;
  uStack_58 = 0;
  uStack_60 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_70 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_70,(ulong)&local_70 | 8,0x24e);
  }
  if (DAT_01d47468 == (byte *)0x0) {
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d47468 = (byte *)(**(code **)(*plVar4 + 0x10))(plVar4,"disabled-by-default-v8.runtime");
  }
  pbVar3 = DAT_01d47468;
  if ((*DAT_01d47468 & 5) == 0) {
    bVar2 = true;
  }
  else {
    local_40 = (long *)0x0;
    local_38 = (long *)0x0;
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    local_78 = (**(code **)(*plVar4 + 0x18))
                         (plVar4,0x58,pbVar3,"V8.Runtime_Runtime_ICsAreEnabled",0,0,0,0,0,0,0,
                          &local_40,0);
    plVar4 = local_38;
    local_38 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    plVar4 = local_40;
    local_40 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    bVar2 = false;
    local_80 = "V8.Runtime_Runtime_ICsAreEnabled";
    local_88 = pbVar3;
  }
  lVar1 = 0xc0;
  if (v8::internal::FLAG_use_ic != '\0') {
    lVar1 = 0xb8;
  }
  uVar5 = *(undefined8 *)(param_3 + lVar1);
  if ((!bVar2) && (*local_88 != 0)) {
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar4 + 0x28))(plVar4,local_88,local_80,local_78);
  }
  if (local_70 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_70,(RuntimeCallTimer *)((ulong)&local_70 | 8));
  }
  return uVar5;
}

