
/* v8::internal::Runtime_StoreGlobalICNoFeedback_Miss(int, unsigned long*, v8::internal::Isolate*)
    */

undefined8
v8::internal::Runtime_StoreGlobalICNoFeedback_Miss(int param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  long lVar2;
  Isolate *pIVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined **local_a8;
  Isolate *pIStack_a0;
  undefined1 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  void *pvStack_80;
  void *local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  
  if (TracingFlags::runtime_stats == 0) {
    uVar4 = *(undefined8 *)(param_3 + 0x95a0);
    lVar2 = *(long *)(param_3 + 0x95a8);
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
    uStack_70 = 0;
    local_78 = (void *)0x0;
    pvStack_80 = (void *)0x0;
    local_88 = 0;
    local_a8 = &PTR__IC_01cc6f78;
    local_98 = 0;
    local_68 = 0;
    local_60 = 0;
    uStack_58 = 0;
    local_50 = 0;
    local_48 = 0xffffffff;
    local_90 = 0;
    uStack_8c = 10;
    local_94 = 0;
    pIStack_a0 = param_3;
    pIVar3 = (Isolate *)StoreGlobalIC::Store((StoreGlobalIC *)&local_a8,param_2 + -1);
    pIVar1 = param_3 + 0x180;
    if (pIVar3 != (Isolate *)0x0) {
      pIVar1 = pIVar3;
    }
    uVar5 = *(undefined8 *)pIVar1;
    local_a8 = &PTR__IC_01cc6ed8;
    if (pvStack_80 != (void *)0x0) {
      local_78 = pvStack_80;
      operator_delete(pvStack_80);
    }
    *(undefined8 *)(param_3 + 0x95a0) = uVar4;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar2) {
      *(long *)(param_3 + 0x95a8) = lVar2;
      HandleScope::DeleteExtensions(param_3);
    }
    return uVar5;
  }
  uVar4 = FUN_01504efc(param_1,param_2,param_3);
  return uVar4;
}

