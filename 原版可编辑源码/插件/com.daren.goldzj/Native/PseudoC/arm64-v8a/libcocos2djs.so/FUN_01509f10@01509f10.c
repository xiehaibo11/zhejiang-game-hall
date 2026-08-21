
undefined8 FUN_01509f10(undefined8 param_1,long param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  long lVar2;
  byte *pbVar3;
  undefined **ppuVar4;
  long *plVar5;
  undefined8 uVar6;
  Isolate *pIVar7;
  ulong uVar8;
  undefined8 uVar9;
  byte **local_110;
  byte *local_108;
  char *local_100;
  undefined8 local_f8;
  RuntimeCallStats *local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined **local_c8;
  Isolate *local_c0;
  undefined1 local_b8;
  undefined4 local_b4;
  undefined4 uStack_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  void *pvStack_a0;
  void *local_98;
  undefined8 uStack_90;
  undefined1 local_88;
  undefined8 local_80;
  ulong *puStack_78;
  undefined8 local_70;
  int local_68;
  undefined4 local_64;
  ulong local_48;
  
  local_d0 = 0;
  uStack_e8 = 0;
  local_f0 = (RuntimeCallStats *)0x0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_f0 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_f0,(ulong)&local_f0 | 8,0x13f);
  }
  if (DAT_01d46c78 == (byte *)0x0) {
    plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d46c78 = (byte *)(**(code **)(*plVar5 + 0x10))(plVar5,"disabled-by-default-v8.runtime");
  }
  pbVar3 = DAT_01d46c78;
  local_110 = (byte **)0x0;
  if ((*DAT_01d46c78 & 5) != 0) {
    local_c8 = (undefined **)0x0;
    local_c0 = (Isolate *)0x0;
    plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar6 = (**(code **)(*plVar5 + 0x18))
                      (plVar5,0x58,pbVar3,"V8.Runtime_Runtime_KeyedHasIC_Miss",0,0,0,0,0,0,0,
                       &local_c8,0);
    pIVar1 = local_c0;
    local_c0 = (Isolate *)0x0;
    if (pIVar1 != (Isolate *)0x0) {
      (**(code **)(*(long *)pIVar1 + 8))();
    }
    ppuVar4 = local_c8;
    local_c8 = (undefined **)0x0;
    if (ppuVar4 != (undefined **)0x0) {
      (**(code **)(*ppuVar4 + 8))();
    }
    local_110 = &local_108;
    local_100 = "V8.Runtime_Runtime_KeyedHasIC_Miss";
    local_108 = pbVar3;
    local_f8 = uVar6;
  }
  uVar6 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar8 = *(ulong *)(param_2 + -0x18);
  local_c8 = &PTR__IC_01cc6ed8;
  puStack_78 = (ulong *)0x0;
  if ((int)uVar8 != *(int *)((uVar8 & 0xffffffff00000000) + 0xa0)) {
    puStack_78 = (ulong *)(param_2 + -0x18);
  }
  local_68 = *(int *)(param_2 + -0x10) >> 1;
  local_b8 = 0;
  local_ac = 9;
  uStack_90 = 0;
  local_98 = (void *)0x0;
  pvStack_a0 = (void *)0x0;
  local_a8 = 0;
  local_88 = 0;
  local_70 = 0;
  local_80 = 0;
  local_c0 = param_3;
  if (puStack_78 == (ulong *)0x0) {
    local_b4 = 0;
    local_64 = 0;
  }
  else {
    local_48 = *puStack_78;
    local_64 = v8::internal::FeedbackVector::GetKind((FeedbackVector *)&local_48);
    local_b4 = v8::internal::FeedbackNexus::ic_state((FeedbackNexus *)&puStack_78);
  }
  local_c8 = &PTR__IC_01cc6f38;
  uStack_b0 = local_b4;
  v8::internal::IC::UpdateState((IC *)&local_c8,param_2,param_2 + -8);
  pIVar7 = (Isolate *)v8::internal::KeyedLoadIC::Load((KeyedLoadIC *)&local_c8,param_2,param_2 + -8)
  ;
  pIVar1 = param_3 + 0x180;
  if (pIVar7 != (Isolate *)0x0) {
    pIVar1 = pIVar7;
  }
  uVar9 = *(undefined8 *)pIVar1;
  local_c8 = &PTR__IC_01cc6ed8;
  if (pvStack_a0 != (void *)0x0) {
    local_98 = pvStack_a0;
    operator_delete(pvStack_a0);
  }
  *(undefined8 *)(param_3 + 0x95a0) = uVar6;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar2) {
    *(long *)(param_3 + 0x95a8) = lVar2;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  if ((local_110 != (byte **)0x0) && (*local_108 != 0)) {
    plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar5 + 0x28))(plVar5,local_108,local_100,local_f8);
  }
  if (local_f0 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_f0,(RuntimeCallTimer *)((ulong)&local_f0 | 8));
  }
  return uVar9;
}

