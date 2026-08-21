
undefined8 FUN_0155dc3c(undefined8 param_1,ulong *param_2,Isolate *param_3)

{
  uint uVar1;
  long lVar2;
  byte *pbVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong *puVar6;
  ulong *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong *puVar13;
  ulong *puVar14;
  ulong *puVar15;
  byte **local_c0;
  byte *local_b8;
  char *local_b0;
  undefined8 local_a8;
  RuntimeCallStats *local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long *local_70;
  long *local_68;
  
  local_80 = 0;
  uStack_98 = 0;
  local_a0 = (RuntimeCallStats *)0x0;
  uStack_88 = 0;
  uStack_90 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_a0 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_a0,(ulong)&local_a0 | 8,0xf4);
  }
  if (DAT_01d46e38 == (byte *)0x0) {
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d46e38 = (byte *)(**(code **)(*plVar4 + 0x10))(plVar4,"disabled-by-default-v8.runtime");
  }
  pbVar3 = DAT_01d46e38;
  local_c0 = (byte **)0x0;
  if ((*DAT_01d46e38 & 5) != 0) {
    local_70 = (long *)0x0;
    local_68 = (long *)0x0;
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar5 = (**(code **)(*plVar4 + 0x18))
                      (plVar4,0x58,pbVar3,"V8.Runtime_Runtime_InstantiateAsmJs",0,0,0,0,0,0,0,
                       &local_70,0);
    plVar4 = local_68;
    local_68 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    plVar4 = local_70;
    local_70 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    local_c0 = &local_b8;
    local_b0 = "V8.Runtime_Runtime_InstantiateAsmJs";
    local_b8 = pbVar3;
    local_a8 = uVar5;
  }
  uVar5 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar10 = *param_2;
  if ((uVar10 & 1) == 0) {
LAB_0155e088:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsJSFunction()");
  }
  uVar9 = uVar10 & 0xffffffff00000000;
  if (*(short *)((uVar9 | 7) + (ulong)*(uint *)(uVar10 - 1)) != 0x439) goto LAB_0155e088;
  puVar13 = param_2 + -1;
  uVar11 = *puVar13;
  if ((uVar11 & 1) == 0) {
    puVar13 = (ulong *)0x0;
  }
  else if (*(ushort *)((uVar11 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar11 - 1)) < 0xa9) {
    puVar13 = (ulong *)0x0;
  }
  puVar14 = param_2 + -2;
  uVar11 = *puVar14;
  if ((uVar11 & 1) == 0) {
    puVar14 = (ulong *)0x0;
  }
  else if (*(ushort *)((uVar11 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar11 - 1)) < 0xa9) {
    puVar14 = (ulong *)0x0;
  }
  puVar15 = param_2 + -3;
  uVar11 = *puVar15;
  if ((uVar11 & 1) == 0) {
    puVar15 = (ulong *)0x0;
  }
  else if (*(short *)((uVar11 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar11 - 1)) != 0x424) {
    puVar15 = (ulong *)0x0;
  }
  uVar1 = *(uint *)((uVar9 | *(uint *)(uVar10 + 0xb)) + 3);
  if (((uVar1 & 1) != 0) &&
     (*(short *)((uVar9 | 7) + (ulong)*(uint *)((uVar9 | uVar1) - 1)) == 0x57)) {
    uVar10 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0xb);
    if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar6 = *(ulong **)(param_3 + 0x95a0);
      if (puVar6 == *(ulong **)(param_3 + 0x95a8)) {
        puVar6 = (ulong *)v8::internal::HandleScope::Extend(param_3);
      }
      *(ulong **)(param_3 + 0x95a0) = puVar6 + 1;
      *puVar6 = uVar10;
    }
    else {
      puVar6 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar10);
      uVar10 = *puVar6;
    }
    uVar10 = uVar10 & 0xffffffff00000000 | (ulong)*(uint *)(uVar10 + 3);
    if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar7 = *(ulong **)(param_3 + 0x95a0);
      if (puVar7 == *(ulong **)(param_3 + 0x95a8)) {
        puVar7 = (ulong *)v8::internal::HandleScope::Extend(param_3);
      }
      *(ulong **)(param_3 + 0x95a0) = puVar7 + 1;
      *puVar7 = uVar10;
    }
    else {
      puVar7 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar10);
    }
    puVar8 = (undefined8 *)
             v8::internal::AsmJs::InstantiateAsmWasm(param_3,puVar6,puVar7,puVar13,puVar14,puVar15);
    if (puVar8 != (undefined8 *)0x0) {
      uVar12 = *puVar8;
      goto LAB_0155dfd0;
    }
  }
  uVar10 = *param_2 & 0xffffffff00000000;
  uVar1 = *(uint *)((uVar10 | *(uint *)(*param_2 + 0xb)) + 3);
  if (((uVar1 & 1) != 0) &&
     (*(short *)((uVar10 | 7) + (ulong)*(uint *)((uVar10 | uVar1) - 1)) == 0x57)) {
    uVar10 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0xb);
    if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar13 = *(ulong **)(param_3 + 0x95a0);
      if (puVar13 == *(ulong **)(param_3 + 0x95a8)) {
        puVar13 = (ulong *)v8::internal::HandleScope::Extend(param_3);
      }
      *(ulong **)(param_3 + 0x95a0) = puVar13 + 1;
      *puVar13 = uVar10;
    }
    else {
      puVar13 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                   (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar10);
    }
    v8::internal::SharedFunctionInfo::DiscardCompiled(param_3,puVar13);
  }
  uVar10 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0xb);
  *(uint *)(uVar10 + 0x1b) = *(uint *)(uVar10 + 0x1b) | 0x4000;
  uVar9 = *param_2;
  uVar10 = v8::internal::Builtins::builtin((Builtins *)(param_3 + 0x9e00),0x42);
  *(int *)(uVar9 + 0x17) = (int)uVar10;
  if (((uVar10 & 1) != 0) && ((*(byte *)((uVar10 & 0xfffffffffffc0000) + 10) >> 2 & 1) != 0)) {
    v8::internal::Heap_MarkingBarrierSlow(uVar9,uVar9 + 0x17);
  }
  uVar12 = 0;
LAB_0155dfd0:
  *(undefined8 *)(param_3 + 0x95a0) = uVar5;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar2) {
    *(long *)(param_3 + 0x95a8) = lVar2;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  if ((local_c0 != (byte **)0x0) && (*local_b8 != 0)) {
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar4 + 0x28))(plVar4,local_b8,local_b0,local_a8);
  }
  if (local_a0 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_a0,(RuntimeCallTimer *)((ulong)&local_a0 | 8));
  }
  return uVar12;
}

