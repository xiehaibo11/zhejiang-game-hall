
/* v8::internal::Runtime_LoadGlobalIC_Miss(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_LoadGlobalIC_Miss(int param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  Isolate *pIVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong *puVar6;
  Isolate *pIVar7;
  undefined8 uVar8;
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
  int local_5c;
  ulong local_58;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar8 = FUN_01503744(param_1,param_2,param_3);
    return uVar8;
  }
  pIVar1 = param_3 + 0x95a0;
  lVar3 = *(long *)pIVar1;
  lVar4 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  local_c8 = *(undefined ***)(param_3 + 0x2bc8);
  uVar5 = Context::global_object((Context *)&local_c8);
  if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar6 = *(ulong **)pIVar1;
    if (puVar6 == *(ulong **)(param_3 + 0x95a8)) {
      puVar6 = (ulong *)HandleScope::Extend(param_3);
    }
    *(ulong **)pIVar1 = puVar6 + 1;
    *puVar6 = uVar5;
    uVar5 = param_2[-3];
  }
  else {
    puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar5);
    uVar5 = param_2[-3];
  }
  if (((uVar5 & 1) != 0) &&
     (*(short *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)) != 0x42)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[3].IsNumber()");
  }
  local_5c = 0;
  local_c8 = (undefined **)uVar5;
  uVar5 = Object::ToInt32((Object *)&local_c8,&local_5c);
  if ((uVar5 & 1) != 0) {
    local_c8 = &PTR__IC_01cc6ed8;
    puStack_78 = (ulong *)0x0;
    if ((int)param_2[-2] != *(int *)((param_2[-2] & 0xffffffff00000000) + 0xa0)) {
      puStack_78 = param_2 + -2;
    }
    local_68 = (int)param_2[-1] >> 1;
    local_ac = 6;
    if (local_5c == 0) {
      local_ac = 7;
    }
    local_b8 = 0;
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
      local_58 = *puStack_78;
      local_64 = FeedbackVector::GetKind((FeedbackVector *)&local_58);
      local_b4 = FeedbackNexus::ic_state((FeedbackNexus *)&puStack_78);
    }
    local_c8 = &PTR__IC_01cc6f18;
    uStack_b0 = local_b4;
    IC::UpdateState((IC *)&local_c8,puVar6,param_2);
    pIVar7 = (Isolate *)LoadGlobalIC::Load((LoadGlobalIC *)&local_c8,param_2,1);
    pIVar2 = param_3 + 0x180;
    if (pIVar7 != (Isolate *)0x0) {
      pIVar2 = pIVar7;
    }
    uVar8 = *(undefined8 *)pIVar2;
    local_c8 = &PTR__IC_01cc6ed8;
    if (pvStack_a0 != (void *)0x0) {
      local_98 = pvStack_a0;
      operator_delete(pvStack_a0);
    }
    *(long *)pIVar1 = lVar3;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar4) {
      *(long *)(param_3 + 0x95a8) = lVar4;
      HandleScope::DeleteExtensions(param_3);
    }
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[3].ToInt32(&typeof_value)");
}

