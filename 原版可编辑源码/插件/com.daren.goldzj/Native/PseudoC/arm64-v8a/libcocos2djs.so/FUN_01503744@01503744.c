
undefined8 FUN_01503744(undefined8 param_1,long param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  long lVar2;
  byte *pbVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong *puVar7;
  Isolate *pIVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  byte **local_120;
  byte *local_118;
  char *local_110;
  undefined8 local_108;
  RuntimeCallStats *local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined **local_d0;
  Isolate *local_c8;
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
  undefined8 *puStack_80;
  undefined8 local_78;
  int local_70;
  undefined4 local_6c;
  int local_64;
  undefined8 local_48;
  
  local_e0 = 0;
  uStack_f8 = 0;
  local_100 = (RuntimeCallStats *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_100 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_100,(ulong)&local_100 | 8,0x132);
  }
  if (DAT_01d46bf0 == (byte *)0x0) {
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d46bf0 = (byte *)(**(code **)(*plVar4 + 0x10))(plVar4,"disabled-by-default-v8.runtime");
  }
  pbVar3 = DAT_01d46bf0;
  local_120 = (byte **)0x0;
  if ((*DAT_01d46bf0 & 5) != 0) {
    local_d0 = (undefined **)0x0;
    local_c8 = (Isolate *)0x0;
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar5 = (**(code **)(*plVar4 + 0x18))
                      (plVar4,0x58,pbVar3,"V8.Runtime_Runtime_LoadGlobalIC_Miss",0,0,0,0,0,0,0,
                       &local_d0,0);
    pIVar1 = local_c8;
    local_c8 = (Isolate *)0x0;
    if (pIVar1 != (Isolate *)0x0) {
      (**(code **)(*(long *)pIVar1 + 8))();
    }
    ppuVar9 = local_d0;
    local_d0 = (undefined **)0x0;
    if (ppuVar9 != (undefined **)0x0) {
      (**(code **)(*ppuVar9 + 8))();
    }
    local_120 = &local_118;
    local_110 = "V8.Runtime_Runtime_LoadGlobalIC_Miss";
    local_118 = pbVar3;
    local_108 = uVar5;
  }
  uVar5 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  local_d0 = *(undefined ***)(param_3 + 0x2bc8);
  uVar6 = v8::internal::Context::global_object((Context *)&local_d0);
  if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar7 = *(ulong **)(param_3 + 0x95a0);
    if (puVar7 == *(ulong **)(param_3 + 0x95a8)) {
      puVar7 = (ulong *)v8::internal::HandleScope::Extend(param_3);
    }
    *(ulong **)(param_3 + 0x95a0) = puVar7 + 1;
    *puVar7 = uVar6;
    ppuVar9 = *(undefined ***)(param_2 + -0x18);
  }
  else {
    puVar7 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar6);
    ppuVar9 = *(undefined ***)(param_2 + -0x18);
  }
  if ((((ulong)ppuVar9 & 1) != 0) &&
     (*(short *)(((ulong)ppuVar9 & 0xffffffff00000000 | 7) + (ulong)*(uint *)((long)ppuVar9 - 1)) !=
      0x42)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[3].IsNumber()");
  }
  local_64 = 0;
  local_d0 = ppuVar9;
  uVar6 = v8::internal::Object::ToInt32((Object *)&local_d0,&local_64);
  if ((uVar6 & 1) != 0) {
    local_d0 = &PTR__IC_01cc6ed8;
    puStack_80 = (undefined8 *)0x0;
    if ((int)*(ulong *)(param_2 + -0x10) !=
        *(int *)((*(ulong *)(param_2 + -0x10) & 0xffffffff00000000) + 0xa0)) {
      puStack_80 = (undefined8 *)(param_2 + -0x10);
    }
    local_70 = *(int *)(param_2 + -8) >> 1;
    local_b4 = 6;
    if (local_64 == 0) {
      local_b4 = 7;
    }
    local_c0 = 0;
    pvStack_a8 = (void *)0x0;
    local_b0 = 0;
    uStack_98 = 0;
    local_a0 = (void *)0x0;
    local_90 = 0;
    local_78 = 0;
    local_88 = 0;
    local_c8 = param_3;
    if (puStack_80 == (undefined8 *)0x0) {
      local_bc = 0;
      local_6c = 0;
    }
    else {
      local_48 = *puStack_80;
      local_6c = v8::internal::FeedbackVector::GetKind((FeedbackVector *)&local_48);
      local_bc = v8::internal::FeedbackNexus::ic_state((FeedbackNexus *)&puStack_80);
    }
    local_d0 = &PTR__IC_01cc6f18;
    uStack_b8 = local_bc;
    v8::internal::IC::UpdateState((IC *)&local_d0,puVar7,param_2);
    pIVar8 = (Isolate *)v8::internal::LoadGlobalIC::Load((LoadGlobalIC *)&local_d0,param_2,1);
    pIVar1 = param_3 + 0x180;
    if (pIVar8 != (Isolate *)0x0) {
      pIVar1 = pIVar8;
    }
    uVar10 = *(undefined8 *)pIVar1;
    local_d0 = &PTR__IC_01cc6ed8;
    if (pvStack_a8 != (void *)0x0) {
      local_a0 = pvStack_a8;
      operator_delete(pvStack_a8);
    }
    *(undefined8 *)(param_3 + 0x95a0) = uVar5;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar2) {
      *(long *)(param_3 + 0x95a8) = lVar2;
      v8::internal::HandleScope::DeleteExtensions(param_3);
    }
    if ((local_120 != (byte **)0x0) && (*local_118 != 0)) {
      plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
      (**(code **)(*plVar4 + 0x28))(plVar4,local_118,local_110,local_108);
    }
    if (local_100 != (RuntimeCallStats *)0x0) {
      v8::internal::RuntimeCallStats::Leave(local_100,(RuntimeCallTimer *)((ulong)&local_100 | 8));
    }
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[3].ToInt32(&typeof_value)");
}

