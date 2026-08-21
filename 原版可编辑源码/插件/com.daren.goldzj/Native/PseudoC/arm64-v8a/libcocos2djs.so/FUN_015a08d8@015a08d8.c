
undefined8 FUN_015a08d8(undefined8 param_1,undefined8 param_2,long param_3)

{
  byte *pbVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
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
    v8::internal::RuntimeCallStats::Enter(local_70,(ulong)&local_70 | 8,0x265);
  }
  if (DAT_01d47530 == (byte *)0x0) {
    plVar2 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d47530 = (byte *)(**(code **)(*plVar2 + 0x10))(plVar2,"disabled-by-default-v8.runtime");
  }
  pbVar1 = DAT_01d47530;
  if ((*DAT_01d47530 & 5) == 0) {
    uVar4 = *(undefined8 *)(param_3 + 0xa0);
  }
  else {
    local_40 = (long *)0x0;
    local_38 = (long *)0x0;
    plVar2 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar3 = (**(code **)(*plVar2 + 0x18))
                      (plVar2,0x58,pbVar1,"V8.Runtime_Runtime_SetAllocationTimeout",0,0,0,0,0,0,0,
                       &local_40,0);
    plVar2 = local_38;
    local_38 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar2 = local_40;
    local_40 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    uVar4 = *(undefined8 *)(param_3 + 0xa0);
    if (*pbVar1 != 0) {
      plVar2 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
      (**(code **)(*plVar2 + 0x28))(plVar2,pbVar1,"V8.Runtime_Runtime_SetAllocationTimeout",uVar3);
    }
  }
  if (local_70 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_70,(RuntimeCallTimer *)((ulong)&local_70 | 8));
  }
  return uVar4;
}

