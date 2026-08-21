
undefined8 FUN_01576c50(undefined8 param_1,long param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  Isolate *pIVar2;
  long lVar3;
  bool bVar4;
  byte *pbVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  uint uVar9;
  undefined8 uVar10;
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
    v8::internal::RuntimeCallStats::Enter(local_80,(ulong)&local_80 | 8,0x1c6);
  }
  if (DAT_01d47190 == (byte *)0x0) {
    plVar6 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d47190 = (byte *)(**(code **)(*plVar6 + 0x10))(plVar6,"disabled-by-default-v8.runtime");
  }
  pbVar5 = DAT_01d47190;
  local_a0 = (byte **)0x0;
  if ((*DAT_01d47190 & 5) != 0) {
    local_50 = (long *)0x0;
    local_48 = (long *)0x0;
    plVar6 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar7 = (**(code **)(*plVar6 + 0x18))
                      (plVar6,0x58,pbVar5,"V8.Runtime_Runtime_LessThanOrEqual",0,0,0,0,0,0,0,
                       &local_50,0);
    plVar6 = local_48;
    local_48 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
    plVar6 = local_50;
    local_50 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
    local_a0 = &local_98;
    local_90 = "V8.Runtime_Runtime_LessThanOrEqual";
    local_98 = pbVar5;
    local_88 = uVar7;
  }
  uVar7 = *(undefined8 *)(param_3 + 0x95a0);
  lVar3 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar8 = v8::internal::Object::Compare(param_3,param_2,param_2 + -8);
  if (((uVar8 & 0xff) == 0) || (3 < (uint)(uVar8 >> 0x20))) {
    bVar4 = true;
    uVar9 = 1;
  }
  else {
    bVar4 = false;
    uVar9 = 0xcU >> (uVar8 >> 0x20 & 0xf) & 1;
  }
  pIVar1 = param_3 + 0xc0;
  if (uVar9 == 0) {
    pIVar1 = param_3 + 0xb8;
  }
  pIVar2 = param_3 + 0x180;
  if (!bVar4) {
    pIVar2 = pIVar1;
  }
  uVar10 = *(undefined8 *)pIVar2;
  *(undefined8 *)(param_3 + 0x95a0) = uVar7;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar3) {
    *(long *)(param_3 + 0x95a8) = lVar3;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  if ((local_a0 != (byte **)0x0) && (*local_98 != 0)) {
    plVar6 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar6 + 0x28))(plVar6,local_98,local_90,local_88);
  }
  if (local_80 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_80,(RuntimeCallTimer *)((ulong)&local_80 | 8));
  }
  return uVar10;
}

