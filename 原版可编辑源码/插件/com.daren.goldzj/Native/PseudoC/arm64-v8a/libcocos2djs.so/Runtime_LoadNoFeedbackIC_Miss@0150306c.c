
/* v8::internal::Runtime_LoadNoFeedbackIC_Miss(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_LoadNoFeedbackIC_Miss(int param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  long lVar2;
  ulong uVar3;
  Isolate *pIVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined **local_b0;
  Isolate *pIStack_a8;
  undefined1 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  int iStack_94;
  undefined8 local_90;
  void *pvStack_88;
  void *local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  int local_44;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar5 = FUN_0150320c(param_1,param_2,param_3);
    return uVar5;
  }
  uVar5 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  local_b0 = (undefined **)param_2[-2];
  if ((((ulong)local_b0 & 1) != 0) &&
     (*(short *)(((ulong)local_b0 & 0xffffffff00000000 | 7) + (ulong)*(uint *)((long)local_b0 - 1))
      != 0x42)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[2].IsNumber()");
  }
  local_44 = 0;
  uVar3 = Object::ToInt32((Object *)&local_b0,&local_44);
  if ((uVar3 & 1) != 0) {
    local_a0 = 0;
    local_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    pvStack_88 = (void *)0x0;
    local_90 = 0;
    uStack_78 = 0;
    local_80 = (void *)0x0;
    local_9c = 0;
    local_b0 = &PTR__IC_01cc6ef8;
    local_50 = 0xffffffff;
    local_98 = 0;
    iStack_94 = local_44;
    pIStack_a8 = param_3;
    IC::UpdateState((IC *)&local_b0,param_2,param_2 + -1);
    pIVar4 = (Isolate *)LoadIC::Load((LoadIC *)&local_b0,param_2,param_2 + -1,1);
    pIVar1 = param_3 + 0x180;
    if (pIVar4 != (Isolate *)0x0) {
      pIVar1 = pIVar4;
    }
    uVar6 = *(undefined8 *)pIVar1;
    local_b0 = &PTR__IC_01cc6ed8;
    if (pvStack_88 != (void *)0x0) {
      local_80 = pvStack_88;
      operator_delete(pvStack_88);
    }
    *(undefined8 *)(param_3 + 0x95a0) = uVar5;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar2) {
      *(long *)(param_3 + 0x95a8) = lVar2;
      HandleScope::DeleteExtensions(param_3);
    }
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[2].ToInt32(&slot_kind)");
}

