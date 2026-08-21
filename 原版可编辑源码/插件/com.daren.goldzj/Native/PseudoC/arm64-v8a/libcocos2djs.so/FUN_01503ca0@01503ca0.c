
undefined8 FUN_01503ca0(undefined8 param_1,ulong *param_2,Isolate *param_3)

{
  int iVar1;
  Isolate *pIVar2;
  long lVar3;
  byte *pbVar4;
  undefined **ppuVar5;
  long *plVar6;
  undefined8 uVar7;
  Isolate *pIVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong *puVar11;
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
  ulong *puStack_80;
  undefined8 local_78;
  int local_70;
  undefined4 local_6c;
  ulong local_68;
  
  local_e0 = 0;
  uStack_f8 = 0;
  local_100 = (RuntimeCallStats *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_100 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_100,(ulong)&local_100 | 8,0x133);
  }
  if (DAT_01d46bf8 == (byte *)0x0) {
    plVar6 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d46bf8 = (byte *)(**(code **)(*plVar6 + 0x10))(plVar6,"disabled-by-default-v8.runtime");
  }
  pbVar4 = DAT_01d46bf8;
  local_120 = (byte **)0x0;
  if ((*DAT_01d46bf8 & 5) != 0) {
    local_d0 = (undefined **)0x0;
    local_c8 = (Isolate *)0x0;
    plVar6 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar7 = (**(code **)(*plVar6 + 0x18))
                      (plVar6,0x58,pbVar4,"V8.Runtime_Runtime_LoadGlobalIC_Slow",0,0,0,0,0,0,0,
                       &local_d0,0);
    pIVar2 = local_c8;
    local_c8 = (Isolate *)0x0;
    if (pIVar2 != (Isolate *)0x0) {
      (**(code **)(*(long *)pIVar2 + 8))();
    }
    ppuVar5 = local_d0;
    local_d0 = (undefined **)0x0;
    if (ppuVar5 != (undefined **)0x0) {
      (**(code **)(*ppuVar5 + 8))();
    }
    local_120 = &local_118;
    local_110 = "V8.Runtime_Runtime_LoadGlobalIC_Slow";
    local_118 = pbVar4;
    local_108 = uVar7;
  }
  uVar7 = *(undefined8 *)(param_3 + 0x95a0);
  lVar3 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar9 = *param_2;
  if (((uVar9 & 1) != 0) &&
     (*(ushort *)((uVar9 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar9 - 1)) < 0x40)) {
    puVar11 = param_2 + -2;
    local_d0 = (undefined **)*puVar11;
    iVar1 = (int)param_2[-1] >> 1;
    local_b4 = v8::internal::FeedbackVector::GetKind((FeedbackVector *)&local_d0,iVar1);
    local_c0 = 0;
    local_d0 = &PTR__IC_01cc6ed8;
    local_88 = 0;
    local_90 = 0;
    local_78 = 0;
    pvStack_a8 = (void *)0x0;
    local_b0 = 0;
    uStack_98 = 0;
    local_a0 = (void *)0x0;
    local_c8 = param_3;
    puStack_80 = puVar11;
    local_70 = iVar1;
    if (puVar11 == (ulong *)0x0) {
      local_bc = 0;
      local_6c = 0;
    }
    else {
      local_68 = *puVar11;
      local_6c = v8::internal::FeedbackVector::GetKind((FeedbackVector *)&local_68,iVar1);
      local_bc = v8::internal::FeedbackNexus::ic_state((FeedbackNexus *)&puStack_80);
    }
    local_d0 = &PTR__IC_01cc6f18;
    uStack_b8 = local_bc;
    pIVar8 = (Isolate *)v8::internal::LoadGlobalIC::Load((LoadGlobalIC *)&local_d0,param_2,0);
    pIVar2 = param_3 + 0x180;
    if (pIVar8 != (Isolate *)0x0) {
      pIVar2 = pIVar8;
    }
    uVar10 = *(undefined8 *)pIVar2;
    local_d0 = &PTR__IC_01cc6ed8;
    if (pvStack_a8 != (void *)0x0) {
      local_a0 = pvStack_a8;
      operator_delete(pvStack_a8);
    }
    *(undefined8 *)(param_3 + 0x95a0) = uVar7;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar3) {
      *(long *)(param_3 + 0x95a8) = lVar3;
      v8::internal::HandleScope::DeleteExtensions(param_3);
    }
    if ((local_120 != (byte **)0x0) && (*local_118 != 0)) {
      plVar6 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
      (**(code **)(*plVar6 + 0x28))(plVar6,local_118,local_110,local_108);
    }
    if (local_100 != (RuntimeCallStats *)0x0) {
      v8::internal::RuntimeCallStats::Leave(local_100,(RuntimeCallTimer *)((ulong)&local_100 | 8));
    }
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].IsString()");
}

