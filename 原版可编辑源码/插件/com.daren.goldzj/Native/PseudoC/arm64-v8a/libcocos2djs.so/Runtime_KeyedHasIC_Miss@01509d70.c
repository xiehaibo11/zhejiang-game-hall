
/* v8::internal::Runtime_KeyedHasIC_Miss(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_KeyedHasIC_Miss(int param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  long lVar2;
  Isolate *pIVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined **local_c0;
  Isolate *pIStack_b8;
  undefined1 local_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined4 local_a4;
  undefined8 local_a0;
  void *pvStack_98;
  void *local_90;
  undefined8 uStack_88;
  undefined1 local_80;
  undefined8 local_78;
  ulong *puStack_70;
  undefined8 local_68;
  int local_60;
  undefined4 local_5c;
  ulong local_58;
  
  if (TracingFlags::runtime_stats == 0) {
    uVar4 = *(undefined8 *)(param_3 + 0x95a0);
    lVar2 = *(long *)(param_3 + 0x95a8);
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
    uVar5 = param_2[-3];
    local_c0 = &PTR__IC_01cc6ed8;
    puStack_70 = (ulong *)0x0;
    if ((int)uVar5 != *(int *)((uVar5 & 0xffffffff00000000) + 0xa0)) {
      puStack_70 = param_2 + -3;
    }
    local_60 = (int)param_2[-2] >> 1;
    local_b0 = 0;
    local_a4 = 9;
    pvStack_98 = (void *)0x0;
    local_a0 = 0;
    uStack_88 = 0;
    local_90 = (void *)0x0;
    local_80 = 0;
    local_68 = 0;
    local_78 = 0;
    pIStack_b8 = param_3;
    if (puStack_70 == (ulong *)0x0) {
      local_ac = 0;
      local_5c = 0;
    }
    else {
      local_58 = *puStack_70;
      local_5c = FeedbackVector::GetKind((FeedbackVector *)&local_58);
      local_ac = FeedbackNexus::ic_state((FeedbackNexus *)&puStack_70);
    }
    local_c0 = &PTR__IC_01cc6f38;
    uStack_a8 = local_ac;
    IC::UpdateState((IC *)&local_c0,param_2,param_2 + -1);
    pIVar3 = (Isolate *)KeyedLoadIC::Load((KeyedLoadIC *)&local_c0,param_2,param_2 + -1);
    pIVar1 = param_3 + 0x180;
    if (pIVar3 != (Isolate *)0x0) {
      pIVar1 = pIVar3;
    }
    uVar6 = *(undefined8 *)pIVar1;
    local_c0 = &PTR__IC_01cc6ed8;
    if (pvStack_98 != (void *)0x0) {
      local_90 = pvStack_98;
      operator_delete(pvStack_98);
    }
    *(undefined8 *)(param_3 + 0x95a0) = uVar4;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar2) {
      *(long *)(param_3 + 0x95a8) = lVar2;
      HandleScope::DeleteExtensions(param_3);
    }
    return uVar6;
  }
  uVar4 = FUN_01509f10(param_1,param_2,param_3);
  return uVar4;
}

