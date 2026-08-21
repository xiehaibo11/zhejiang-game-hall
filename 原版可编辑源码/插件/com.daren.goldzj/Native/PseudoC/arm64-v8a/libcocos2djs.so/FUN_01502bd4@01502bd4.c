
undefined8 FUN_01502bd4(undefined8 param_1,long param_2,Isolate *param_3)

{
  long lVar1;
  int iVar2;
  Isolate *pIVar3;
  long lVar4;
  byte *pbVar5;
  undefined **ppuVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong *puVar10;
  Isolate *pIVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
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
  uint local_bc;
  undefined8 local_b8;
  void *pvStack_b0;
  void *local_a8;
  undefined8 uStack_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 *puStack_88;
  undefined8 local_80;
  int local_78;
  undefined4 local_74;
  undefined8 local_70 [2];
  
  local_e0 = 0;
  uStack_f8 = 0;
  local_100 = (RuntimeCallStats *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_100 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_100,(ulong)&local_100 | 8,0x134);
  }
  if (DAT_01d46be0 == (byte *)0x0) {
    plVar7 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d46be0 = (byte *)(**(code **)(*plVar7 + 0x10))(plVar7,"disabled-by-default-v8.runtime");
  }
  pbVar5 = DAT_01d46be0;
  local_120 = (byte **)0x0;
  if ((*DAT_01d46be0 & 5) != 0) {
    local_d8 = (undefined **)0x0;
    local_d0 = (Isolate *)0x0;
    plVar7 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar8 = (**(code **)(*plVar7 + 0x18))
                      (plVar7,0x58,pbVar5,"V8.Runtime_Runtime_LoadIC_Miss",0,0,0,0,0,0,0,&local_d8,0
                      );
    pIVar11 = local_d0;
    local_d0 = (Isolate *)0x0;
    if (pIVar11 != (Isolate *)0x0) {
      (**(code **)(*(long *)pIVar11 + 8))();
    }
    ppuVar6 = local_d8;
    local_d8 = (undefined **)0x0;
    if (ppuVar6 != (undefined **)0x0) {
      (**(code **)(*ppuVar6 + 8))();
    }
    local_120 = &local_118;
    local_110 = "V8.Runtime_Runtime_LoadIC_Miss";
    local_118 = pbVar5;
    local_108 = uVar8;
  }
  uVar8 = *(undefined8 *)(param_3 + 0x95a0);
  lVar4 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  puVar13 = (undefined8 *)(param_2 + -0x18);
  local_d8 = (undefined **)*puVar13;
  iVar2 = *(int *)(param_2 + -0x10) >> 1;
  lVar1 = param_2 + -8;
  local_bc = v8::internal::FeedbackVector::GetKind((FeedbackVector *)&local_d8,iVar2);
  puStack_88 = puVar13;
  local_78 = iVar2;
  if (local_bc == 5) {
    local_bc = 5;
    local_d8 = &PTR__IC_01cc6ed8;
    local_c8 = 0;
    local_90 = 0;
    local_98 = 0;
    local_80 = 0;
    uStack_a0 = 0;
    local_a8 = (void *)0x0;
    pvStack_b0 = (void *)0x0;
    local_b8 = 0;
    if (puVar13 == (undefined8 *)0x0) {
      local_c4 = 0;
      local_74 = 0;
      local_d0 = param_3;
    }
    else {
      local_70[0] = *puVar13;
      local_d0 = param_3;
      local_74 = v8::internal::FeedbackVector::GetKind((FeedbackVector *)local_70,iVar2);
      local_c4 = v8::internal::FeedbackNexus::ic_state((FeedbackNexus *)&puStack_88);
    }
    local_d8 = &PTR__IC_01cc6ef8;
    uStack_c0 = local_c4;
    v8::internal::IC::UpdateState((IC *)&local_d8,param_2,lVar1);
    pIVar11 = (Isolate *)v8::internal::LoadIC::Load((LoadIC *)&local_d8,param_2,lVar1,1);
  }
  else if ((local_bc | 1) == 7) {
    local_d8 = *(undefined ***)(param_3 + 0x2bc8);
    uVar9 = v8::internal::Context::global_object((Context *)&local_d8);
    if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar10 = *(ulong **)(param_3 + 0x95a0);
      if (puVar10 == *(ulong **)(param_3 + 0x95a8)) {
        puVar10 = (ulong *)v8::internal::HandleScope::Extend(param_3);
      }
      *(ulong **)(param_3 + 0x95a0) = puVar10 + 1;
      *puVar10 = uVar9;
    }
    else {
      puVar10 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                   (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar9);
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
    if (puVar13 == (undefined8 *)0x0) {
      local_c4 = 0;
      local_74 = 0;
      local_d0 = param_3;
    }
    else {
      local_70[0] = *puVar13;
      local_d0 = param_3;
      local_74 = v8::internal::FeedbackVector::GetKind((FeedbackVector *)local_70,iVar2);
      local_c4 = v8::internal::FeedbackNexus::ic_state((FeedbackNexus *)&puStack_88);
    }
    local_d8 = &PTR__IC_01cc6f18;
    uStack_c0 = local_c4;
    v8::internal::IC::UpdateState((IC *)&local_d8,puVar10,lVar1);
    pIVar11 = (Isolate *)v8::internal::LoadGlobalIC::Load((LoadGlobalIC *)&local_d8,lVar1,1);
  }
  else {
    local_c8 = 0;
    local_d8 = &PTR__IC_01cc6ed8;
    local_90 = 0;
    local_98 = 0;
    local_80 = 0;
    uStack_a0 = 0;
    local_a8 = (void *)0x0;
    pvStack_b0 = (void *)0x0;
    local_b8 = 0;
    if (puVar13 == (undefined8 *)0x0) {
      local_c4 = 0;
      local_74 = 0;
      local_d0 = param_3;
    }
    else {
      local_70[0] = *puVar13;
      local_d0 = param_3;
      local_74 = v8::internal::FeedbackVector::GetKind((FeedbackVector *)local_70,iVar2);
      local_c4 = v8::internal::FeedbackNexus::ic_state((FeedbackNexus *)&puStack_88);
    }
    local_d8 = &PTR__IC_01cc6f38;
    uStack_c0 = local_c4;
    v8::internal::IC::UpdateState((IC *)&local_d8,param_2,lVar1);
    pIVar11 = (Isolate *)v8::internal::KeyedLoadIC::Load((KeyedLoadIC *)&local_d8,param_2,lVar1);
  }
  pIVar3 = param_3 + 0x180;
  if (pIVar11 != (Isolate *)0x0) {
    pIVar3 = pIVar11;
  }
  uVar12 = *(undefined8 *)pIVar3;
  local_d8 = &PTR__IC_01cc6ed8;
  if (pvStack_b0 != (void *)0x0) {
    local_a8 = pvStack_b0;
    operator_delete(pvStack_b0);
  }
  *(undefined8 *)(param_3 + 0x95a0) = uVar8;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar4) {
    *(long *)(param_3 + 0x95a8) = lVar4;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  if ((local_120 != (byte **)0x0) && (*local_118 != 0)) {
    plVar7 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar7 + 0x28))(plVar7,local_118,local_110,local_108);
  }
  if (local_100 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_100,(RuntimeCallTimer *)((ulong)&local_100 | 8));
  }
  return uVar12;
}

