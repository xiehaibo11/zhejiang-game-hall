
undefined8 FUN_015751b8(undefined8 param_1,byte *param_2,long param_3)

{
  long lVar1;
  bool bVar2;
  byte *pbVar3;
  long *plVar4;
  undefined8 uVar5;
  byte *local_98;
  char *local_90;
  undefined8 local_88;
  RuntimeCallStats *local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long *local_50;
  long *local_48;
  
  local_60 = 0;
  uStack_78 = 0;
  local_80 = (RuntimeCallStats *)0x0;
  uStack_68 = 0;
  uStack_70 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_80 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_80,(ulong)&local_80 | 8,0x17e);
  }
  if (DAT_01d47140 == (byte *)0x0) {
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d47140 = (byte *)(**(code **)(*plVar4 + 0x10))(plVar4,"disabled-by-default-v8.runtime");
  }
  pbVar3 = DAT_01d47140;
  if ((*DAT_01d47140 & 5) == 0) {
    bVar2 = true;
  }
  else {
    local_50 = (long *)0x0;
    local_48 = (long *)0x0;
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    local_88 = (**(code **)(*plVar4 + 0x18))
                         (plVar4,0x58,pbVar3,"V8.Runtime_Runtime_IsSmi",0,0,0,0,0,0,0,&local_50,0);
    plVar4 = local_48;
    local_48 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    plVar4 = local_50;
    local_50 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    bVar2 = false;
    local_90 = "V8.Runtime_Runtime_IsSmi";
    local_98 = pbVar3;
  }
  lVar1 = 0xb8;
  if ((*param_2 & 1) != 0) {
    lVar1 = 0xc0;
  }
  uVar5 = *(undefined8 *)(param_3 + lVar1);
  if ((!bVar2) && (*local_98 != 0)) {
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar4 + 0x28))(plVar4,local_98,local_90,local_88);
  }
  if (local_80 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_80,(RuntimeCallTimer *)((ulong)&local_80 | 8));
  }
  return uVar5;
}

