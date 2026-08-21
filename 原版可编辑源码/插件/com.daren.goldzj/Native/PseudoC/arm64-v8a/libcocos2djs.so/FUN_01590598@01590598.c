
undefined8 FUN_01590598(undefined8 param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  ulong *puVar2;
  ulong *puVar3;
  byte *pbVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong *puVar7;
  Isolate *pIVar8;
  ulong uVar9;
  byte **local_b0;
  byte *local_a8;
  char *local_a0;
  undefined8 local_98;
  RuntimeCallStats *local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long *local_60;
  long *local_58;
  
  local_70 = 0;
  uStack_88 = 0;
  local_90 = (RuntimeCallStats *)0x0;
  uStack_78 = 0;
  uStack_80 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_90 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_90,(ulong)&local_90 | 8,0x1fb);
  }
  if (DAT_01d47338 == (byte *)0x0) {
    plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d47338 = (byte *)(**(code **)(*plVar5 + 0x10))(plVar5,"disabled-by-default-v8.runtime");
  }
  pbVar4 = DAT_01d47338;
  local_b0 = (byte **)0x0;
  if ((*DAT_01d47338 & 5) != 0) {
    local_60 = (long *)0x0;
    local_58 = (long *)0x0;
    plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar6 = (**(code **)(*plVar5 + 0x18))
                      (plVar5,0x58,pbVar4,"V8.Runtime_Runtime_StoreLookupSlot_Strict",0,0,0,0,0,0,0,
                       &local_60,0);
    plVar5 = local_58;
    local_58 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    plVar5 = local_60;
    local_60 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    local_b0 = &local_a8;
    local_a0 = "V8.Runtime_Runtime_StoreLookupSlot_Strict";
    local_a8 = pbVar4;
    local_98 = uVar6;
  }
  puVar2 = *(ulong **)(param_3 + 0x95a0);
  puVar3 = *(ulong **)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar9 = *param_2;
  if (((uVar9 & 1) != 0) &&
     (*(ushort *)((uVar9 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar9 - 1)) < 0x40)) {
    uVar9 = *(ulong *)(param_3 + 0x2bc8);
    if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar7 = puVar2;
      if (puVar3 == puVar2) {
        puVar7 = (ulong *)v8::internal::HandleScope::Extend(param_3);
      }
      *(ulong **)(param_3 + 0x95a0) = puVar7 + 1;
      *puVar7 = uVar9;
    }
    else {
      puVar7 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar9);
    }
    pIVar8 = (Isolate *)FUN_0159213c(param_3,puVar7,param_2,param_2 + -1,1,3);
    pIVar1 = param_3 + 0x180;
    if (pIVar8 != (Isolate *)0x0) {
      pIVar1 = pIVar8;
    }
    uVar6 = *(undefined8 *)pIVar1;
    *(ulong **)(param_3 + 0x95a0) = puVar2;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(ulong **)(param_3 + 0x95a8) != puVar3) {
      *(ulong **)(param_3 + 0x95a8) = puVar3;
      v8::internal::HandleScope::DeleteExtensions(param_3);
    }
    if ((local_b0 != (byte **)0x0) && (*local_a8 != 0)) {
      plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
      (**(code **)(*plVar5 + 0x28))(plVar5,local_a8,local_a0,local_98);
    }
    if (local_90 != (RuntimeCallStats *)0x0) {
      v8::internal::RuntimeCallStats::Leave(local_90,(RuntimeCallTimer *)((ulong)&local_90 | 8));
    }
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].IsString()");
}

