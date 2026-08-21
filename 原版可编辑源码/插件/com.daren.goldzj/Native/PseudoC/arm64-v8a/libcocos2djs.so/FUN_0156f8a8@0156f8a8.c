
undefined8 FUN_0156f8a8(undefined8 param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  long lVar2;
  byte *pbVar3;
  Isolate **ppIVar4;
  long *plVar5;
  undefined8 uVar6;
  Isolate *pIVar7;
  Isolate *pIVar8;
  ulong uVar9;
  undefined8 uVar10;
  byte **local_c0;
  byte *local_b8;
  char *local_b0;
  undefined8 local_a8;
  RuntimeCallStats *local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  Isolate *local_70;
  Isolate **local_68;
  long *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_80 = 0;
  uStack_98 = 0;
  local_a0 = (RuntimeCallStats *)0x0;
  uStack_88 = 0;
  uStack_90 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_a0 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_a0,(ulong)&local_a0 | 8,0x174);
  }
  if (DAT_01d470e0 == (byte *)0x0) {
    plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d470e0 = (byte *)(**(code **)(*plVar5 + 0x10))(plVar5,"disabled-by-default-v8.runtime");
  }
  pbVar3 = DAT_01d470e0;
  local_c0 = (byte **)0x0;
  if ((*DAT_01d470e0 & 5) != 0) {
    local_68 = (Isolate **)0x0;
    local_60 = (long *)0x0;
    plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar6 = (**(code **)(*plVar5 + 0x18))
                      (plVar5,0x58,pbVar3,
                       "V8.Runtime_Runtime_CreateArrayLiteralWithoutAllocationSite",0,0,0,0,0,0,0,
                       &local_68,0);
    plVar5 = local_60;
    local_60 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    ppIVar4 = local_68;
    local_68 = (Isolate **)0x0;
    if (ppIVar4 != (Isolate **)0x0) {
      (**(code **)(*ppIVar4 + 8))();
    }
    local_c0 = &local_b8;
    local_b0 = "V8.Runtime_Runtime_CreateArrayLiteralWithoutAllocationSite";
    local_b8 = pbVar3;
    local_a8 = uVar6;
  }
  uVar6 = *(undefined8 *)(param_3 + 0x95a0);
  lVar1 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar9 = *param_2;
  if (((uVar9 & 1) == 0) ||
     (*(short *)((uVar9 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar9 - 1)) != 0x56)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsArrayBoilerplateDescription()");
  }
  uVar9 = param_2[-1];
  if ((uVar9 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[1].IsSmi()");
  }
  pIVar7 = (Isolate *)FUN_01571a14(param_3,param_2,0);
  if ((((uint)uVar9 >> 1 & 1) == 0) ||
     (pIVar8 = pIVar7, v8::internal::FLAG_track_double_fields != '\0')) {
    local_68 = &local_70;
    local_60 = (long *)((ulong)local_60 & 0xffffffff00000000);
    local_70 = param_3;
    pIVar8 = (Isolate *)FUN_01570f78(&local_68,pIVar7);
    if (pIVar7 != (Isolate *)0x0) goto joined_r0x0156fa4c;
  }
  else {
joined_r0x0156fa4c:
    if (pIVar8 != (Isolate *)0x0) goto LAB_0156fa54;
  }
  pIVar7 = param_3 + 0x180;
LAB_0156fa54:
  uVar10 = *(undefined8 *)pIVar7;
  *(undefined8 *)(param_3 + 0x95a0) = uVar6;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar1) {
    *(long *)(param_3 + 0x95a8) = lVar1;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  if ((local_c0 != (byte **)0x0) && (*local_b8 != 0)) {
    plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar5 + 0x28))(plVar5,local_b8,local_b0,local_a8);
  }
  if (local_a0 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_a0,(RuntimeCallTimer *)((ulong)&local_a0 | 8));
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar10;
}

