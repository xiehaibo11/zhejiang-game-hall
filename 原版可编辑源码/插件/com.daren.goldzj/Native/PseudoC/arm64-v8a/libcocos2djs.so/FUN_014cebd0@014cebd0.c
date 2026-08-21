
undefined8 FUN_014cebd0(int param_1,long param_2,long param_3)

{
  ulong *puVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  long *plVar4;
  undefined8 uVar5;
  byte **ppbVar6;
  ulong uVar7;
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
    v8::internal::RuntimeCallStats::Enter(local_80,(ulong)&local_80 | 8,0x31c);
  }
  if (DAT_01d46650 == (byte *)0x0) {
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d46650 = (byte *)(**(code **)(*plVar4 + 0x10))(plVar4,"disabled-by-default-v8.runtime");
  }
  pbVar3 = DAT_01d46650;
  if ((*DAT_01d46650 & 5) == 0) {
    ppbVar6 = (byte **)0x0;
  }
  else {
    local_50 = (long *)0x0;
    local_48 = (long *)0x0;
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar5 = (**(code **)(*plVar4 + 0x18))
                      (plVar4,0x58,pbVar3,"V8.Builtin_IsPromise",0,0,0,0,0,0,0,&local_50,0);
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
    ppbVar6 = &local_98;
    local_90 = "V8.Builtin_IsPromise";
    local_98 = pbVar3;
    local_88 = uVar5;
  }
  puVar1 = (ulong *)(param_2 + -8);
  if (param_1 < 6) {
    puVar1 = (ulong *)(param_3 + 0xa0);
  }
  uVar7 = *puVar1;
  if ((uVar7 & 1) == 0) {
    uVar5 = *(undefined8 *)(param_3 + 0xc0);
  }
  else {
    puVar2 = (undefined8 *)(param_3 + 0xb8);
    if (*(short *)((uVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar7 - 1)) != 0x42d) {
      puVar2 = (undefined8 *)(param_3 + 0xc0);
    }
    uVar5 = *puVar2;
  }
  if ((ppbVar6 != (byte **)0x0) && (*local_98 != 0)) {
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar4 + 0x28))(plVar4,local_98,local_90,local_88);
  }
  if (local_80 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_80,(RuntimeCallTimer *)((ulong)&local_80 | 8));
  }
  return uVar5;
}

