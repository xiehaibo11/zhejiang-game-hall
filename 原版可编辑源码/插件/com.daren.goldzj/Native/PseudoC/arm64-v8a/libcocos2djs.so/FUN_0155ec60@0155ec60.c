
ulong FUN_0155ec60(undefined8 param_1,undefined8 param_2,Isolate *param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  byte *pbVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong *puVar11;
  Isolate *pIVar12;
  InterpretedFrame *this;
  byte **local_c00;
  byte *local_bf8;
  char *local_bf0;
  undefined8 local_be8;
  RuntimeCallStats *local_be0;
  undefined8 uStack_bd8;
  undefined8 uStack_bd0;
  undefined8 uStack_bc8;
  undefined8 local_bc0;
  StackFrameIterator aSStack_bb0 [1416];
  InterpretedFrame *local_628;
  long *local_610;
  long *local_608;
  long *local_88;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  local_bc0 = 0;
  uStack_bd8 = 0;
  local_be0 = (RuntimeCallStats *)0x0;
  uStack_bc8 = 0;
  uStack_bd0 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_be0 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_be0,(ulong)&local_be0 | 8,0xee);
  }
  if (DAT_01d46e50 == (byte *)0x0) {
    plVar6 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d46e50 = (byte *)(**(code **)(*plVar6 + 0x10))(plVar6,"disabled-by-default-v8.runtime");
  }
  pbVar4 = DAT_01d46e50;
  local_c00 = (byte **)0x0;
  if ((*DAT_01d46e50 & 5) != 0) {
    local_608 = (long *)0x0;
    local_610 = (long *)0x0;
    plVar6 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar7 = (**(code **)(*plVar6 + 0x18))
                      (plVar6,0x58,pbVar4,"V8.Runtime_Runtime_CompileForOnStackReplacement",0,0,0,0,
                       0,0,0,&local_610,0);
    plVar6 = local_608;
    local_608 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
    plVar6 = local_610;
    local_610 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
    local_c00 = &local_bf8;
    local_bf0 = "V8.Runtime_Runtime_CompileForOnStackReplacement";
    local_bf8 = pbVar4;
    local_be8 = uVar7;
  }
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar7 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  if (v8::internal::FLAG_use_osr != '\x01') {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","FLAG_use_osr");
  }
  v8::internal::StackFrameIterator::StackFrameIterator(aSStack_bb0,param_3);
  if (local_628 == (InterpretedFrame *)0x0) {
    this = (InterpretedFrame *)0x0;
  }
  else {
    v8::internal::JavaScriptFrameIterator::Advance((JavaScriptFrameIterator *)aSStack_bb0);
    this = local_628;
  }
  uVar8 = v8::internal::InterpretedFrame::GetBytecodeArray(this);
  pIVar12 = *(Isolate **)(this + 0x10);
  if (*(CanonicalHandleScope **)(pIVar12 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar9 = *(ulong **)(pIVar12 + 0x95a0);
    if (puVar9 == *(ulong **)(pIVar12 + 0x95a8)) {
      puVar9 = (ulong *)v8::internal::HandleScope::Extend(pIVar12);
    }
    *(ulong **)(pIVar12 + 0x95a0) = puVar9 + 1;
    *puVar9 = uVar8;
  }
  else {
    puVar9 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar12 + 0x95b8),uVar8);
    uVar8 = *puVar9;
  }
  *(undefined1 *)(uVar8 + 0x1f) = 0;
  uVar8 = v8::internal::InterpretedFrame::GetBytecodeOffset(this);
  uVar8 = uVar8 & 0xffffffff;
  uVar10 = (**(code **)(*(long *)this + 0x98))(this);
  if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar9 = *(ulong **)(param_3 + 0x95a0);
    if (puVar9 == *(ulong **)(param_3 + 0x95a8)) {
      puVar9 = (ulong *)v8::internal::HandleScope::Extend(param_3);
    }
    *(ulong **)(param_3 + 0x95a0) = puVar9 + 1;
    *puVar9 = uVar10;
  }
  else {
    puVar9 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar10);
    uVar10 = *puVar9;
  }
  if ((*(uint *)((uVar10 & 0xffffffff00000000 | (ulong)*(uint *)(uVar10 + 0xb)) + 0x1b) & 0xf00000)
      == 0) {
    v8::internal::StackFrameIterator::StackFrameIterator((StackFrameIterator *)&local_610,param_3);
    if (local_88 == (long *)0x0) {
LAB_0155f0ac:
      if (v8::internal::FLAG_trace_osr != '\0') {
        v8::internal::PrintF("[OSR - Compiling: ");
        local_610 = (long *)*puVar9;
        v8::internal::JSFunction::PrintName((JSFunction *)&local_610,(__sFILE *)waitpid);
        v8::internal::PrintF(" at AST id %d]\n",uVar8);
      }
      puVar11 = (ulong *)v8::internal::Compiler::GetOptimizedCodeForOSR(puVar9,uVar8,this);
      if (((puVar11 != (ulong *)0x0) && (uVar10 = *puVar11, (*(byte *)(uVar10 + 0x17) & 0x3e) == 0))
         && (uVar10 = uVar10 & 0xffffffff00000000 | (ulong)*(uint *)(uVar10 + 7),
            -1 < *(int *)(uVar10 + 0x17))) {
        if (v8::internal::FLAG_trace_osr != '\0') {
          v8::internal::PrintF
                    ("[OSR - Entry at AST id %d, offset %d in optimized code]\n",uVar8,
                     (ulong)(uint)(*(int *)(uVar10 + 0x17) >> 1));
        }
        uVar10 = *puVar9;
        uVar8 = uVar10 & 0xffffffff00000000;
        if (*(int *)((uVar8 | *(uint *)((uVar8 | *(uint *)(uVar10 + 0x13)) + 3)) + 0x13) < 2) {
          uVar1 = *(uint *)((uVar8 | *(uint *)(uVar10 + 0xb)) + 3);
          if ((((uVar1 != 0x84) &&
               (((uVar1 & 1) == 0 ||
                (1 < *(ushort *)((uVar8 | 7) + (ulong)*(uint *)((uVar8 | uVar1) - 1)) - 0x95)))) &&
              (uVar10 = uVar8 | *(uint *)((uVar8 | *(uint *)(uVar10 + 0x13)) + 3),
              *(short *)((uVar8 | 7) + (ulong)*(uint *)(uVar10 - 1)) == 0x9f)) &&
             ((uVar1 = *(uint *)(uVar10 + 7), (uVar1 & 1) == 0 && (1 < (uint)((int)uVar1 >> 1))))) {
            uVar8 = *puVar9 & 0xffffffff00000000;
            local_610 = (long *)(uVar8 | *(uint *)((uVar8 | *(uint *)(*puVar9 + 0x13)) + 3));
            v8::internal::FeedbackVector::ClearOptimizationMarker((FeedbackVector *)&local_610);
          }
        }
        local_610 = (long *)*puVar9;
        uVar8 = v8::internal::JSFunction::HasOptimizedCode((JSFunction *)&local_610);
        if (((uVar8 & 1) == 0) &&
           (uVar8 = *puVar9 & 0xffffffff00000000,
           1 < *(int *)((uVar8 | *(uint *)((uVar8 | *(uint *)(*puVar9 + 0x13)) + 3)) + 0x13))) {
          if (v8::internal::FLAG_trace_osr != '\0') {
            v8::internal::PrintF("[OSR - Re-marking ");
            local_610 = (long *)*puVar9;
            v8::internal::JSFunction::PrintName((JSFunction *)&local_610,(__sFILE *)waitpid);
            v8::internal::PrintF(" for non-concurrent optimization]\n");
          }
          uVar8 = *puVar9 & 0xffffffff00000000;
          local_610 = (long *)(uVar8 | *(uint *)((uVar8 | *(uint *)(*puVar9 + 0x13)) + 3));
          v8::internal::FeedbackVector::SetOptimizationMarker((FeedbackVector *)&local_610,2);
        }
        uVar8 = *puVar11;
        goto joined_r0x0155f2a4;
      }
    }
    else {
      do {
        v8::internal::JavaScriptFrameIterator::Advance((JavaScriptFrameIterator *)&local_610);
        plVar6 = local_88;
        if (local_88 == (long *)0x0) goto LAB_0155f0ac;
        iVar5 = (**(code **)(*local_88 + 8))(local_88);
      } while ((iVar5 != 4) ||
              (iVar5 = (**(code **)(*plVar6 + 0x98))(plVar6), iVar5 != (int)*puVar9));
    }
  }
  if (v8::internal::FLAG_trace_osr != '\0') {
    v8::internal::PrintF("[OSR - Failed: ");
    local_610 = (long *)*puVar9;
    v8::internal::JSFunction::PrintName((JSFunction *)&local_610,(__sFILE *)waitpid);
    v8::internal::PrintF(" at AST id %d]\n",uVar8);
  }
  uVar10 = *puVar9;
  uVar8 = uVar10 & 0xffffffff00000000;
  if (*(int *)((uVar8 | *(uint *)(uVar10 + 0x17)) + 0x27) == 0x42) {
LAB_0155ef74:
    uVar10 = *puVar9;
    local_610 = (long *)(uVar10 & 0xffffffff00000000 | (ulong)*(uint *)(uVar10 + 0xb));
    uVar8 = v8::internal::SharedFunctionInfo::GetCode((SharedFunctionInfo *)&local_610);
    *(int *)(uVar10 + 0x17) = (int)uVar8;
    if (((uVar8 & 1) != 0) && ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 10) >> 2 & 1) != 0)) {
      v8::internal::Heap_MarkingBarrierSlow(uVar10,uVar10 + 0x17);
    }
  }
  else {
    uVar1 = *(uint *)((uVar8 | *(uint *)(uVar10 + 0xb)) + 3);
    if ((uVar1 == 0x84) ||
       (((((uVar1 & 1) != 0 &&
          (*(ushort *)((uVar8 | 7) + (ulong)*(uint *)((uVar8 | uVar1) - 1)) - 0x95 < 2)) ||
         ((*(byte *)((uVar8 | *(uint *)(uVar10 + 0x17)) + 0x17) & 0x3e) != 0)) ||
        ((*(uint *)((uVar8 | *(uint *)((uVar8 | *(uint *)(uVar10 + 0x17)) + 0xf)) + 7) & 1) != 0))))
    goto LAB_0155ef74;
  }
  uVar8 = 0;
joined_r0x0155f2a4:
  if (param_3 != (Isolate *)0x0) {
    *(undefined8 *)(param_3 + 0x95a0) = uVar7;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar2) {
      *(long *)(param_3 + 0x95a8) = lVar2;
      v8::internal::HandleScope::DeleteExtensions(param_3);
    }
  }
  if ((local_c00 != (byte **)0x0) && (*local_bf8 != 0)) {
    plVar6 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar6 + 0x28))(plVar6,local_bf8,local_bf0,local_be8);
  }
  if (local_be0 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_be0,(RuntimeCallTimer *)((ulong)&local_be0 | 8));
  }
  if (*(long *)(lVar3 + 0x28) == local_70) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

