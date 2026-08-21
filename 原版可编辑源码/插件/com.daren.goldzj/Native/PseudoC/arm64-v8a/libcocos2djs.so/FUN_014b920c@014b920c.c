
undefined8 FUN_014b920c(int param_1,undefined8 param_2,long param_3)

{
  byte *pbVar1;
  long *plVar2;
  undefined8 uVar3;
  byte **local_a0;
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
    v8::internal::RuntimeCallStats::Enter(local_80,(ulong)&local_80 | 8,0x2d6);
  }
  if (DAT_01d46400 == (byte *)0x0) {
    plVar2 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d46400 = (byte *)(**(code **)(*plVar2 + 0x10))(plVar2,"disabled-by-default-v8.runtime");
  }
  pbVar1 = DAT_01d46400;
  local_a0 = (byte **)0x0;
  if ((*DAT_01d46400 & 5) != 0) {
    local_50 = (long *)0x0;
    local_48 = (long *)0x0;
    plVar2 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar3 = (**(code **)(*plVar2 + 0x18))
                      (plVar2,0x58,pbVar1,"V8.Builtin_DataViewConstructor",0,0,0,0,0,0,0,&local_50,0
                      );
    plVar2 = local_48;
    local_48 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar2 = local_50;
    local_50 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    local_a0 = &local_98;
    local_90 = "V8.Builtin_DataViewConstructor";
    local_98 = pbVar1;
    local_88 = uVar3;
  }
  uVar3 = FUN_014b93bc((long)param_1,param_2,param_3);
  if ((local_a0 != (byte **)0x0) && (*local_98 != 0)) {
    plVar2 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar2 + 0x28))(plVar2,local_98,local_90,local_88);
  }
  if (local_80 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_80,(RuntimeCallTimer *)((ulong)&local_80 | 8));
  }
  return uVar3;
}

