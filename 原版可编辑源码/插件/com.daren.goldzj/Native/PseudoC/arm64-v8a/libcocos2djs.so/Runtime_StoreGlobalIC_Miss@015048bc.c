
/* v8::internal::Runtime_StoreGlobalIC_Miss(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_StoreGlobalIC_Miss(int param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  int iVar2;
  Isolate *pIVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong *puVar7;
  Isolate *pIVar8;
  undefined8 uVar9;
  undefined **local_d0;
  Isolate *pIStack_c8;
  undefined1 local_c0;
  undefined4 local_bc;
  undefined4 uStack_b8;
  undefined4 local_b4;
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
    pIVar1 = param_3 + 0x95a0;
    lVar4 = *(long *)pIVar1;
    lVar5 = *(long *)(param_3 + 0x95a8);
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
    puVar7 = param_2 + -2;
    local_d0 = (undefined **)*puVar7;
    iVar2 = (int)param_2[-1] >> 1;
    local_b4 = FeedbackVector::GetKind((FeedbackVector *)&local_d0,iVar2);
    local_c0 = 0;
    local_d0 = &PTR__IC_01cc6ed8;
    local_88 = 0;
    local_90 = 0;
    local_78 = 0;
    pvStack_a8 = (void *)0x0;
    local_b0 = 0;
    uStack_98 = 0;
    local_a0 = (void *)0x0;
    pIStack_c8 = param_3;
    puStack_80 = puVar7;
    local_70 = iVar2;
    if (puVar7 == (ulong *)0x0) {
      local_bc = 0;
      local_6c = 0;
    }
    else {
      local_68 = *puVar7;
      local_6c = FeedbackVector::GetKind((FeedbackVector *)&local_68,iVar2);
      local_bc = FeedbackNexus::ic_state((FeedbackNexus *)&puStack_80);
    }
    local_d0 = &PTR__IC_01cc6f78;
    local_68 = *(ulong *)(param_3 + 0x2bc8);
    uStack_b8 = local_bc;
    uVar6 = Context::global_object((Context *)&local_68);
    if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar7 = *(ulong **)pIVar1;
      if (puVar7 == *(ulong **)(param_3 + 0x95a8)) {
        puVar7 = (ulong *)HandleScope::Extend(param_3);
      }
      *(ulong **)pIVar1 = puVar7 + 1;
      *puVar7 = uVar6;
    }
    else {
      puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar6);
    }
    IC::UpdateState((IC *)&local_d0,puVar7,param_2 + -3);
    pIVar8 = (Isolate *)StoreGlobalIC::Store((StoreGlobalIC *)&local_d0,param_2 + -3,param_2);
    pIVar3 = param_3 + 0x180;
    if (pIVar8 != (Isolate *)0x0) {
      pIVar3 = pIVar8;
    }
    uVar9 = *(undefined8 *)pIVar3;
    local_d0 = &PTR__IC_01cc6ed8;
    if (pvStack_a8 != (void *)0x0) {
      local_a0 = pvStack_a8;
      operator_delete(pvStack_a8);
    }
    *(long *)pIVar1 = lVar4;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar5) {
      *(long *)(param_3 + 0x95a8) = lVar5;
      HandleScope::DeleteExtensions(param_3);
    }
    return uVar9;
  }
  uVar9 = FUN_01504ab8(param_1,param_2,param_3);
  return uVar9;
}

