
/* v8::internal::Runtime_LoadIC_Miss(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_LoadIC_Miss(int param_1,ulong *param_2,Isolate *param_3)

{
  ulong *puVar1;
  Isolate *pIVar2;
  int iVar3;
  Isolate *pIVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong *puVar8;
  Isolate *pIVar9;
  undefined8 uVar10;
  ulong *puVar11;
  undefined **local_d0;
  Isolate *pIStack_c8;
  undefined1 local_c0;
  undefined4 local_bc;
  undefined4 uStack_b8;
  uint local_b4;
  undefined8 local_b0;
  void *pvStack_a8;
  void *local_a0;
  undefined8 uStack_98;
  undefined1 local_90;
  undefined8 local_88;
  ulong *puStack_80;
  undefined8 local_78;
  int local_70;
  undefined4 local_6c;
  ulong local_68;
  
  if (TracingFlags::runtime_stats == 0) {
    pIVar2 = param_3 + 0x95a0;
    lVar5 = *(long *)pIVar2;
    lVar6 = *(long *)(param_3 + 0x95a8);
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
    puVar11 = param_2 + -3;
    local_d0 = (undefined **)*puVar11;
    iVar3 = (int)param_2[-2] >> 1;
    puVar1 = param_2 + -1;
    local_b4 = FeedbackVector::GetKind((FeedbackVector *)&local_d0,iVar3);
    pIStack_c8 = param_3;
    puStack_80 = puVar11;
    local_70 = iVar3;
    if (local_b4 == 5) {
      local_b4 = 5;
      local_d0 = &PTR__IC_01cc6ed8;
      local_c0 = 0;
      local_88 = 0;
      local_90 = 0;
      local_78 = 0;
      pvStack_a8 = (void *)0x0;
      local_b0 = 0;
      uStack_98 = 0;
      local_a0 = (void *)0x0;
      if (puVar11 == (ulong *)0x0) {
        local_bc = 0;
        local_6c = 0;
      }
      else {
        local_68 = *puVar11;
        local_6c = FeedbackVector::GetKind((FeedbackVector *)&local_68,iVar3);
        local_bc = FeedbackNexus::ic_state((FeedbackNexus *)&puStack_80);
      }
      local_d0 = &PTR__IC_01cc6ef8;
      uStack_b8 = local_bc;
      IC::UpdateState((IC *)&local_d0,param_2,puVar1);
      pIVar9 = (Isolate *)LoadIC::Load((LoadIC *)&local_d0,param_2,puVar1,1);
    }
    else if ((local_b4 | 1) == 7) {
      local_d0 = *(undefined ***)(param_3 + 0x2bc8);
      uVar7 = Context::global_object((Context *)&local_d0);
      if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar8 = *(ulong **)pIVar2;
        if (puVar8 == *(ulong **)(param_3 + 0x95a8)) {
          puVar8 = (ulong *)HandleScope::Extend(param_3);
        }
        *(ulong **)pIVar2 = puVar8 + 1;
        *puVar8 = uVar7;
      }
      else {
        puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar7);
      }
      local_c0 = 0;
      local_d0 = &PTR__IC_01cc6ed8;
      local_88 = 0;
      local_90 = 0;
      local_78 = 0;
      pvStack_a8 = (void *)0x0;
      local_b0 = 0;
      uStack_98 = 0;
      local_a0 = (void *)0x0;
      if (puVar11 == (ulong *)0x0) {
        local_bc = 0;
        local_6c = 0;
      }
      else {
        local_68 = *puVar11;
        local_6c = FeedbackVector::GetKind((FeedbackVector *)&local_68,iVar3);
        local_bc = FeedbackNexus::ic_state((FeedbackNexus *)&puStack_80);
      }
      local_d0 = &PTR__IC_01cc6f18;
      uStack_b8 = local_bc;
      IC::UpdateState((IC *)&local_d0,puVar8,puVar1);
      pIVar9 = (Isolate *)LoadGlobalIC::Load((LoadGlobalIC *)&local_d0,puVar1,1);
    }
    else {
      local_c0 = 0;
      local_d0 = &PTR__IC_01cc6ed8;
      local_88 = 0;
      local_90 = 0;
      local_78 = 0;
      pvStack_a8 = (void *)0x0;
      local_b0 = 0;
      uStack_98 = 0;
      local_a0 = (void *)0x0;
      if (puVar11 == (ulong *)0x0) {
        local_bc = 0;
        local_6c = 0;
      }
      else {
        local_68 = *puVar11;
        local_6c = FeedbackVector::GetKind((FeedbackVector *)&local_68,iVar3);
        local_bc = FeedbackNexus::ic_state((FeedbackNexus *)&puStack_80);
      }
      local_d0 = &PTR__IC_01cc6f38;
      uStack_b8 = local_bc;
      IC::UpdateState((IC *)&local_d0,param_2,puVar1);
      pIVar9 = (Isolate *)KeyedLoadIC::Load((KeyedLoadIC *)&local_d0,param_2,puVar1);
    }
    pIVar4 = param_3 + 0x180;
    if (pIVar9 != (Isolate *)0x0) {
      pIVar4 = pIVar9;
    }
    uVar10 = *(undefined8 *)pIVar4;
    local_d0 = &PTR__IC_01cc6ed8;
    if (pvStack_a8 != (void *)0x0) {
      local_a0 = pvStack_a8;
      operator_delete(pvStack_a8);
    }
    *(long *)pIVar2 = lVar5;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar6) {
      *(long *)(param_3 + 0x95a8) = lVar6;
      HandleScope::DeleteExtensions(param_3);
    }
    return uVar10;
  }
  uVar10 = FUN_01502bd4(param_1,param_2,param_3);
  return uVar10;
}

