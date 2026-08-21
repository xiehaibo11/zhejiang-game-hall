
/* v8::internal::Runtime_CompileForOnStackReplacement(int, unsigned long*, v8::internal::Isolate*)
    */

ulong v8::internal::Runtime_CompileForOnStackReplacement
                (int param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  int iVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong *puVar11;
  Isolate *pIVar12;
  InterpretedFrame *this;
  StackFrameIterator aSStack_bb0 [1416];
  InterpretedFrame *local_628;
  ulong local_610 [177];
  long *local_88;
  long local_70;
  
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  if (TracingFlags::runtime_stats != 0) {
    uVar8 = FUN_0155ec60(param_1,param_2,param_3);
    if (*(long *)(lVar5 + 0x28) == local_70) {
      return uVar8;
    }
    goto LAB_0155ec48;
  }
  pIVar1 = param_3 + 0x95a0;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  lVar3 = *(long *)pIVar1;
  lVar4 = *(long *)(param_3 + 0x95a8);
  if (FLAG_use_osr != '\x01') {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","FLAG_use_osr");
  }
  StackFrameIterator::StackFrameIterator(aSStack_bb0,param_3);
  if (local_628 == (InterpretedFrame *)0x0) {
    this = (InterpretedFrame *)0x0;
  }
  else {
    JavaScriptFrameIterator::Advance((JavaScriptFrameIterator *)aSStack_bb0);
    this = local_628;
  }
  uVar8 = InterpretedFrame::GetBytecodeArray(this);
  pIVar12 = *(Isolate **)(this + 0x10);
  if (*(CanonicalHandleScope **)(pIVar12 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar9 = *(ulong **)(pIVar12 + 0x95a0);
    if (puVar9 == *(ulong **)(pIVar12 + 0x95a8)) {
      puVar9 = (ulong *)HandleScope::Extend(pIVar12);
    }
    *(ulong **)(pIVar12 + 0x95a0) = puVar9 + 1;
    *puVar9 = uVar8;
  }
  else {
    puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar12 + 0x95b8),uVar8);
    uVar8 = *puVar9;
  }
  *(undefined1 *)(uVar8 + 0x1f) = 0;
  uVar8 = InterpretedFrame::GetBytecodeOffset(this);
  uVar8 = uVar8 & 0xffffffff;
  uVar10 = (**(code **)(*(long *)this + 0x98))(this);
  if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar9 = *(ulong **)pIVar1;
    if (puVar9 == *(ulong **)(param_3 + 0x95a8)) {
      puVar9 = (ulong *)HandleScope::Extend(param_3);
    }
    *(ulong **)pIVar1 = puVar9 + 1;
    *puVar9 = uVar10;
  }
  else {
    puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar10);
    uVar10 = *puVar9;
  }
  if ((*(uint *)((uVar10 & 0xffffffff00000000 | (ulong)*(uint *)(uVar10 + 0xb)) + 0x1b) & 0xf00000)
      == 0) {
    StackFrameIterator::StackFrameIterator((StackFrameIterator *)local_610,param_3);
    if (local_88 != (long *)0x0) {
      do {
        JavaScriptFrameIterator::Advance((JavaScriptFrameIterator *)local_610);
        plVar6 = local_88;
        if (local_88 == (long *)0x0) goto LAB_0155ea30;
        iVar7 = (**(code **)(*local_88 + 8))(local_88);
      } while ((iVar7 != 4) ||
              (iVar7 = (**(code **)(*plVar6 + 0x98))(plVar6), iVar7 != (int)*puVar9));
      goto LAB_0155e86c;
    }
LAB_0155ea30:
    if (FLAG_trace_osr != '\0') {
      PrintF("[OSR - Compiling: ");
      local_610[0] = *puVar9;
      JSFunction::PrintName((JSFunction *)local_610,(__sFILE *)waitpid);
      PrintF(" at AST id %d]\n",uVar8);
    }
    puVar11 = (ulong *)Compiler::GetOptimizedCodeForOSR(puVar9,uVar8,this);
    if (((puVar11 == (ulong *)0x0) || (uVar10 = *puVar11, (*(byte *)(uVar10 + 0x17) & 0x3e) != 0))
       || (uVar10 = uVar10 & 0xffffffff00000000 | (ulong)*(uint *)(uVar10 + 7),
          *(int *)(uVar10 + 0x17) < 0)) goto LAB_0155e86c;
    if (FLAG_trace_osr != '\0') {
      PrintF("[OSR - Entry at AST id %d, offset %d in optimized code]\n",uVar8,
             (ulong)(uint)(*(int *)(uVar10 + 0x17) >> 1));
    }
    uVar10 = *puVar9;
    uVar8 = uVar10 & 0xffffffff00000000;
    if (*(int *)((uVar8 | *(uint *)((uVar8 | *(uint *)(uVar10 + 0x13)) + 3)) + 0x13) < 2) {
      uVar2 = *(uint *)((uVar8 | *(uint *)(uVar10 + 0xb)) + 3);
      if ((((uVar2 != 0x84) &&
           (((uVar2 & 1) == 0 ||
            (1 < *(ushort *)((uVar8 | 7) + (ulong)*(uint *)((uVar8 | uVar2) - 1)) - 0x95)))) &&
          (uVar10 = uVar8 | *(uint *)((uVar8 | *(uint *)(uVar10 + 0x13)) + 3),
          *(short *)((uVar8 | 7) + (ulong)*(uint *)(uVar10 - 1)) == 0x9f)) &&
         ((uVar2 = *(uint *)(uVar10 + 7), (uVar2 & 1) == 0 && (1 < (uint)((int)uVar2 >> 1))))) {
        local_610[0] = *puVar9 & 0xffffffff00000000;
        local_610[0] = local_610[0] | *(uint *)((local_610[0] | *(uint *)(*puVar9 + 0x13)) + 3);
        FeedbackVector::ClearOptimizationMarker((FeedbackVector *)local_610);
      }
    }
    local_610[0] = *puVar9;
    uVar8 = JSFunction::HasOptimizedCode((JSFunction *)local_610);
    if (((uVar8 & 1) == 0) &&
       (uVar8 = *puVar9 & 0xffffffff00000000,
       1 < *(int *)((uVar8 | *(uint *)((uVar8 | *(uint *)(*puVar9 + 0x13)) + 3)) + 0x13))) {
      if (FLAG_trace_osr != '\0') {
        PrintF("[OSR - Re-marking ");
        local_610[0] = *puVar9;
        JSFunction::PrintName((JSFunction *)local_610,(__sFILE *)waitpid);
        PrintF(" for non-concurrent optimization]\n");
      }
      local_610[0] = *puVar9 & 0xffffffff00000000;
      local_610[0] = local_610[0] | *(uint *)((local_610[0] | *(uint *)(*puVar9 + 0x13)) + 3);
      FeedbackVector::SetOptimizationMarker((FeedbackVector *)local_610,2);
    }
    uVar8 = *puVar11;
  }
  else {
LAB_0155e86c:
    if (FLAG_trace_osr != '\0') {
      PrintF("[OSR - Failed: ");
      local_610[0] = *puVar9;
      JSFunction::PrintName((JSFunction *)local_610,(__sFILE *)waitpid);
      PrintF(" at AST id %d]\n",uVar8);
    }
    uVar10 = *puVar9;
    uVar8 = uVar10 & 0xffffffff00000000;
    if (*(int *)((uVar8 | *(uint *)(uVar10 + 0x17)) + 0x27) == 0x42) {
LAB_0155e930:
      uVar10 = *puVar9;
      local_610[0] = uVar10 & 0xffffffff00000000 | (ulong)*(uint *)(uVar10 + 0xb);
      uVar8 = SharedFunctionInfo::GetCode((SharedFunctionInfo *)local_610);
      *(int *)(uVar10 + 0x17) = (int)uVar8;
      if (((uVar8 & 1) != 0) && ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 10) >> 2 & 1) != 0)) {
        Heap_MarkingBarrierSlow(uVar10,uVar10 + 0x17);
      }
    }
    else {
      uVar2 = *(uint *)((uVar8 | *(uint *)(uVar10 + 0xb)) + 3);
      if ((uVar2 == 0x84) ||
         (((((uVar2 & 1) != 0 &&
            (*(ushort *)((uVar8 | 7) + (ulong)*(uint *)((uVar8 | uVar2) - 1)) - 0x95 < 2)) ||
           ((*(byte *)((uVar8 | *(uint *)(uVar10 + 0x17)) + 0x17) & 0x3e) != 0)) ||
          ((*(uint *)((uVar8 | *(uint *)((uVar8 | *(uint *)(uVar10 + 0x17)) + 0xf)) + 7) & 1) != 0))
         )) goto LAB_0155e930;
    }
    uVar8 = 0;
  }
  if (param_3 != (Isolate *)0x0) {
    *(long *)pIVar1 = lVar3;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar4) {
      *(long *)(param_3 + 0x95a8) = lVar4;
      HandleScope::DeleteExtensions(param_3);
    }
  }
  if (*(long *)(lVar5 + 0x28) == local_70) {
    return uVar8;
  }
LAB_0155ec48:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

