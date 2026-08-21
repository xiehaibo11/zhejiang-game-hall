
/* v8::internal::Runtime_KeyedStoreIC_Miss(int, unsigned long*, v8::internal::Isolate*) */

ulong v8::internal::Runtime_KeyedStoreIC_Miss(int param_1,ulong *param_2,Isolate *param_3)

{
  int iVar1;
  Isolate *pIVar2;
  undefined8 uVar3;
  long lVar4;
  Isolate *pIVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  undefined **local_d0;
  Isolate *pIStack_c8;
  undefined1 local_c0;
  undefined4 local_bc;
  undefined4 uStack_b8;
  int local_b4;
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
  
  if (TracingFlags::runtime_stats != 0) {
    uVar6 = FUN_01505c88(param_1,param_2,param_3);
    return uVar6;
  }
  uVar3 = *(undefined8 *)(param_3 + 0x95a0);
  lVar4 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  puVar9 = param_2 + -2;
  local_d0 = (undefined **)*puVar9;
  puVar8 = param_2 + -3;
  puVar7 = param_2 + -4;
  iVar1 = (int)param_2[-1] >> 1;
  pIStack_c8 = param_3;
  local_70 = iVar1;
  if ((int)local_d0 == *(int *)(((ulong)local_d0 & 0xffffffff00000000) + 0xa0)) {
    puVar9 = (ulong *)0x0;
    local_b4 = 0xd;
  }
  else {
    local_b4 = FeedbackVector::GetKind((FeedbackVector *)&local_d0,iVar1);
    if ((local_b4 != 0xd) && (local_b4 != 3)) {
      local_b4 = 0xe;
      local_d0 = &PTR__IC_01cc6ed8;
      local_c0 = 0;
      local_88 = 0;
      local_90 = 0;
      local_78 = 0;
      pvStack_a8 = (void *)0x0;
      local_b0 = 0;
      uStack_98 = 0;
      local_a0 = (void *)0x0;
      puStack_80 = puVar9;
      if (puVar9 == (ulong *)0x0) {
        local_bc = 0;
        local_6c = 0;
      }
      else {
        local_68 = *puVar9;
        local_6c = FeedbackVector::GetKind((FeedbackVector *)&local_68,iVar1);
        local_bc = FeedbackNexus::ic_state((FeedbackNexus *)&puStack_80);
      }
      local_d0 = &PTR__IC_01cc6fb8;
      uStack_b8 = local_bc;
      IC::UpdateState((IC *)&local_d0,puVar8,puVar7);
      StoreInArrayLiteralIC::Store((StoreInArrayLiteralIC *)&local_d0,puVar8,puVar7,param_2);
      uVar6 = *param_2;
      goto LAB_01505b50;
    }
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
  puStack_80 = puVar9;
  if (puVar9 == (ulong *)0x0) {
    local_bc = 0;
    local_6c = 0;
  }
  else {
    local_68 = *puVar9;
    local_6c = FeedbackVector::GetKind((FeedbackVector *)&local_68,iVar1);
    local_bc = FeedbackNexus::ic_state((FeedbackNexus *)&puStack_80);
  }
  local_d0 = &PTR__IC_01cc6f98;
  uStack_b8 = local_bc;
  IC::UpdateState((IC *)&local_d0,puVar8,puVar7);
  pIVar5 = (Isolate *)KeyedStoreIC::Store((KeyedStoreIC *)&local_d0,puVar8,puVar7,param_2);
  pIVar2 = param_3 + 0x180;
  if (pIVar5 != (Isolate *)0x0) {
    pIVar2 = pIVar5;
  }
  uVar6 = *(ulong *)pIVar2;
LAB_01505b50:
  local_d0 = &PTR__IC_01cc6ed8;
  if (pvStack_a8 != (void *)0x0) {
    local_a0 = pvStack_a8;
    operator_delete(pvStack_a8);
  }
  *(undefined8 *)(param_3 + 0x95a0) = uVar3;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar4) {
    *(long *)(param_3 + 0x95a8) = lVar4;
    HandleScope::DeleteExtensions(param_3);
  }
  return uVar6;
}

