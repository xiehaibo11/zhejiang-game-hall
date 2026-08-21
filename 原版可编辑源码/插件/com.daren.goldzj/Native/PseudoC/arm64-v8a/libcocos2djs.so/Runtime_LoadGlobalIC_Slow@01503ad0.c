
/* v8::internal::Runtime_LoadGlobalIC_Slow(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_LoadGlobalIC_Slow(int param_1,ulong *param_2,Isolate *param_3)

{
  int iVar1;
  Isolate *pIVar2;
  long lVar3;
  Isolate *pIVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong *puVar8;
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
  
  if (TracingFlags::runtime_stats != 0) {
    uVar5 = FUN_01503ca0(param_1,param_2,param_3);
    return uVar5;
  }
  uVar5 = *(undefined8 *)(param_3 + 0x95a0);
  lVar3 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar6 = *param_2;
  if (((uVar6 & 1) != 0) &&
     (*(ushort *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)) < 0x40)) {
    puVar8 = param_2 + -2;
    local_c8 = (undefined **)*puVar8;
    iVar1 = (int)param_2[-1] >> 1;
    local_ac = FeedbackVector::GetKind((FeedbackVector *)&local_c8,iVar1);
    local_b8 = 0;
    local_c8 = &PTR__IC_01cc6ed8;
    local_80 = 0;
    local_88 = 0;
    local_70 = 0;
    uStack_90 = 0;
    local_98 = (void *)0x0;
    pvStack_a0 = (void *)0x0;
    local_a8 = 0;
    pIStack_c0 = param_3;
    puStack_78 = puVar8;
    local_68 = iVar1;
    if (puVar8 == (ulong *)0x0) {
      local_b4 = 0;
      local_64 = 0;
    }
    else {
      local_48 = *puVar8;
      local_64 = FeedbackVector::GetKind((FeedbackVector *)&local_48,iVar1);
      local_b4 = FeedbackNexus::ic_state((FeedbackNexus *)&puStack_78);
    }
    local_c8 = &PTR__IC_01cc6f18;
    uStack_b0 = local_b4;
    pIVar4 = (Isolate *)LoadGlobalIC::Load((LoadGlobalIC *)&local_c8,param_2,0);
    pIVar2 = param_3 + 0x180;
    if (pIVar4 != (Isolate *)0x0) {
      pIVar2 = pIVar4;
    }
    uVar7 = *(undefined8 *)pIVar2;
    local_c8 = &PTR__IC_01cc6ed8;
    if (pvStack_a0 != (void *)0x0) {
      local_98 = pvStack_a0;
      operator_delete(pvStack_a0);
    }
    *(undefined8 *)(param_3 + 0x95a0) = uVar5;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar3) {
      *(long *)(param_3 + 0x95a8) = lVar3;
      HandleScope::DeleteExtensions(param_3);
    }
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].IsString()");
}

