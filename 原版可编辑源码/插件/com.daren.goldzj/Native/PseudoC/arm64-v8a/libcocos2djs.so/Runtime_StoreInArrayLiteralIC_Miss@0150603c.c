
/* v8::internal::Runtime_StoreInArrayLiteralIC_Miss(int, unsigned long*, v8::internal::Isolate*) */

ulong v8::internal::Runtime_StoreInArrayLiteralIC_Miss(int param_1,ulong *param_2,Isolate *param_3)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined **local_c8;
  Isolate *pIStack_c0;
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
  
  if (TracingFlags::runtime_stats == 0) {
    uVar1 = *(undefined8 *)(param_3 + 0x95a0);
    lVar2 = *(long *)(param_3 + 0x95a8);
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
    uVar3 = param_2[-2];
    local_c8 = &PTR__IC_01cc6ed8;
    local_b8 = 0;
    local_ac = 0xe;
    local_68 = (int)param_2[-1] >> 1;
    puStack_78 = (ulong *)0x0;
    if ((int)uVar3 != *(int *)((uVar3 & 0xffffffff00000000) + 0xa0)) {
      puStack_78 = param_2 + -2;
    }
    uStack_90 = 0;
    local_98 = (void *)0x0;
    pvStack_a0 = (void *)0x0;
    local_a8 = 0;
    local_88 = 0;
    local_70 = 0;
    local_80 = 0;
    pIStack_c0 = param_3;
    if (puStack_78 == (ulong *)0x0) {
      local_b4 = 0;
      local_64 = 0;
    }
    else {
      local_48 = *puStack_78;
      local_64 = FeedbackVector::GetKind((FeedbackVector *)&local_48);
      local_b4 = FeedbackNexus::ic_state((FeedbackNexus *)&puStack_78);
    }
    local_c8 = &PTR__IC_01cc6fb8;
    uStack_b0 = local_b4;
    StoreInArrayLiteralIC::Store
              ((StoreInArrayLiteralIC *)&local_c8,param_2 + -3,param_2 + -4,param_2);
    uVar3 = *param_2;
    local_c8 = &PTR__IC_01cc6ed8;
    if (pvStack_a0 != (void *)0x0) {
      local_98 = pvStack_a0;
      operator_delete(pvStack_a0);
    }
    *(undefined8 *)(param_3 + 0x95a0) = uVar1;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar2) {
      *(long *)(param_3 + 0x95a8) = lVar2;
      HandleScope::DeleteExtensions(param_3);
    }
    return uVar3;
  }
  uVar3 = FUN_015061d8(param_1,param_2,param_3);
  return uVar3;
}

