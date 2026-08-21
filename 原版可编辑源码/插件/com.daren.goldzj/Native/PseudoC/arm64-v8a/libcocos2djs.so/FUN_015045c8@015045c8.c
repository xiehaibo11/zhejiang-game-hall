
undefined8 FUN_015045c8(undefined8 param_1,long param_2,Isolate *param_3)

{
  int iVar1;
  Isolate *pIVar2;
  long lVar3;
  byte *pbVar4;
  undefined **ppuVar5;
  long *plVar6;
  undefined8 uVar7;
  Isolate *pIVar8;
  undefined8 uVar9;
  ulong *puVar10;
  byte **local_120;
  byte *local_118;
  char *local_110;
  undefined8 local_108;
  RuntimeCallStats *local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined **local_d8;
  Isolate *local_d0;
  undefined1 local_c8;
  undefined4 local_c4;
  undefined4 uStack_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  void *pvStack_b0;
  void *local_a8;
  undefined8 uStack_a0;
  undefined1 local_98;
  undefined8 local_90;
  ulong *puStack_88;
  undefined8 local_80;
  int local_78;
  undefined4 local_74;
  ulong local_70 [2];
  
  local_e0 = 0;
  uStack_f8 = 0;
  local_100 = (RuntimeCallStats *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_100 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_100,(ulong)&local_100 | 8,0x13b);
  }
  if (DAT_01d46c08 == (byte *)0x0) {
    plVar6 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d46c08 = (byte *)(**(code **)(*plVar6 + 0x10))(plVar6,"disabled-by-default-v8.runtime");
  }
  pbVar4 = DAT_01d46c08;
  local_120 = (byte **)0x0;
  if ((*DAT_01d46c08 & 5) != 0) {
    local_d8 = (undefined **)0x0;
    local_d0 = (Isolate *)0x0;
    plVar6 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar7 = (**(code **)(*plVar6 + 0x18))
                      (plVar6,0x58,pbVar4,"V8.Runtime_Runtime_StoreIC_Miss",0,0,0,0,0,0,0,&local_d8,
                       0);
    pIVar2 = local_d0;
    local_d0 = (Isolate *)0x0;
    if (pIVar2 != (Isolate *)0x0) {
      (**(code **)(*(long *)pIVar2 + 8))();
    }
    ppuVar5 = local_d8;
    local_d8 = (undefined **)0x0;
    if (ppuVar5 != (undefined **)0x0) {
      (**(code **)(*ppuVar5 + 8))();
    }
    local_120 = &local_118;
    local_110 = "V8.Runtime_Runtime_StoreIC_Miss";
    local_118 = pbVar4;
    local_108 = uVar7;
  }
  uVar7 = *(undefined8 *)(param_3 + 0x95a0);
  lVar3 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  puVar10 = (ulong *)(param_2 + -0x10);
  local_d8 = (undefined **)*puVar10;
  iVar1 = *(int *)(param_2 + -8) >> 1;
  if ((int)local_d8 == *(int *)(((ulong)local_d8 & 0xffffffff00000000) + 0xa0)) {
    puVar10 = (ulong *)0x0;
    local_bc = 0xb;
  }
  else {
    local_bc = v8::internal::FeedbackVector::GetKind((FeedbackVector *)&local_d8,iVar1);
  }
  local_c8 = 0;
  local_d8 = &PTR__IC_01cc6ed8;
  local_90 = 0;
  local_98 = 0;
  local_80 = 0;
  uStack_a0 = 0;
  local_a8 = (void *)0x0;
  pvStack_b0 = (void *)0x0;
  local_b8 = 0;
  local_d0 = param_3;
  puStack_88 = puVar10;
  local_78 = iVar1;
  if (puVar10 == (ulong *)0x0) {
    local_c4 = 0;
    local_74 = 0;
  }
  else {
    local_70[0] = *puVar10;
    local_74 = v8::internal::FeedbackVector::GetKind((FeedbackVector *)local_70,iVar1);
    local_c4 = v8::internal::FeedbackNexus::ic_state((FeedbackNexus *)&puStack_88);
  }
  local_d8 = &PTR__IC_01cc6f58;
  uStack_c0 = local_c4;
  v8::internal::IC::UpdateState((IC *)&local_d8,param_2 + -0x18,param_2 + -0x20);
  pIVar8 = (Isolate *)
           v8::internal::StoreIC::Store
                     ((StoreIC *)&local_d8,param_2 + -0x18,param_2 + -0x20,param_2,1);
  pIVar2 = param_3 + 0x180;
  if (pIVar8 != (Isolate *)0x0) {
    pIVar2 = pIVar8;
  }
  uVar9 = *(undefined8 *)pIVar2;
  local_d8 = &PTR__IC_01cc6ed8;
  if (pvStack_b0 != (void *)0x0) {
    local_a8 = pvStack_b0;
    operator_delete(pvStack_b0);
  }
  *(undefined8 *)(param_3 + 0x95a0) = uVar7;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar3) {
    *(long *)(param_3 + 0x95a8) = lVar3;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  if ((local_120 != (byte **)0x0) && (*local_118 != 0)) {
    plVar6 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar6 + 0x28))(plVar6,local_118,local_110,local_108);
  }
  if (local_100 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_100,(RuntimeCallTimer *)((ulong)&local_100 | 8));
  }
  return uVar9;
}

