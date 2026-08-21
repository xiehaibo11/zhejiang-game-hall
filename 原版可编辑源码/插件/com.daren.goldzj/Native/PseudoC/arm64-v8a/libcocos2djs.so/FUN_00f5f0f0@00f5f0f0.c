
void FUN_00f5f0f0(Isolate *param_1,undefined8 *param_2)

{
  Isolate *pIVar1;
  long lVar2;
  FrameSummary *pFVar3;
  FrameSummary *pFVar4;
  int iVar5;
  ulong *puVar6;
  ulong *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 local_628;
  FrameSummary *local_620;
  FrameSummary *local_618;
  undefined8 uStack_610;
  StackFrameIterator aSStack_608 [1416];
  long *local_80;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  v8::internal::StackFrameIterator::StackFrameIterator(aSStack_608,param_1);
  if (local_80 != (long *)0x0) {
    v8::internal::JavaScriptFrameIterator::Advance((JavaScriptFrameIterator *)aSStack_608);
    uVar8 = 0;
    if (local_80 == (long *)0x0) goto LAB_00f5f2bc;
    local_618 = (FrameSummary *)0x0;
    uStack_610 = 0;
    local_620 = (FrameSummary *)0x0;
    pIVar1 = param_1 + 0x95a0;
    (**(code **)(*local_80 + 0x88))(local_80,&local_620);
    pFVar4 = local_618;
    uVar10 = **(ulong **)(local_618 + -0x20) & 0xffffffff00000000 |
             (ulong)*(uint *)(**(ulong **)(local_618 + -0x20) + 0xb);
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar6 = *(ulong **)pIVar1;
      if (puVar6 == *(ulong **)(param_1 + 0x95a8)) {
        puVar6 = (ulong *)v8::internal::HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar1 = puVar6 + 1;
      *puVar6 = uVar10;
    }
    else {
      puVar6 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar10);
      uVar10 = *puVar6;
    }
    uVar9 = uVar10 & 0xffffffff00000000;
    uVar10 = uVar9 | *(uint *)(uVar10 + 0xf);
    if (*(short *)((uVar9 | 7) + (ulong)*(uint *)(uVar10 - 1)) == 0x5b) {
      uVar10 = uVar9 | *(uint *)(uVar10 + 0xb);
    }
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar7 = *(ulong **)pIVar1;
      if (puVar7 == *(ulong **)(param_1 + 0x95a8)) {
        puVar7 = (ulong *)v8::internal::HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar1 = puVar7 + 1;
      *puVar7 = uVar10;
    }
    else {
      puVar7 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar10);
    }
    v8::internal::SharedFunctionInfo::EnsureSourcePositionsAvailable(param_1,puVar6);
    local_628 = **(undefined8 **)(pFVar4 + -0x18);
    iVar5 = v8::internal::AbstractCode::SourcePosition
                      ((AbstractCode *)&local_628,*(int *)(pFVar4 + -0x10));
    pFVar4 = local_620;
    uVar10 = *puVar7;
    if ((((uVar10 & 1) != 0) &&
        (*(short *)((uVar10 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar10 - 1)) == 0x65)) &&
       (((*(uint *)(uVar10 + 3) & 1) == 0 || (*(uint *)(uVar10 + 3) != *(uint *)(param_1 + 0xa0)))))
    {
      *param_2 = puVar7;
      *(int *)(param_2 + 1) = iVar5;
      *(int *)((long)param_2 + 0xc) = iVar5 + 1;
      *(undefined4 *)(param_2 + 2) = 0xffffffff;
      param_2[3] = puVar6;
      pFVar3 = local_618;
      if (local_620 != (FrameSummary *)0x0) {
        while (pFVar3 != pFVar4) {
          v8::internal::FrameSummary::~FrameSummary(pFVar3 + -0x38);
          pFVar3 = pFVar3 + -0x38;
        }
        local_618 = pFVar4;
        operator_delete(local_620);
      }
      uVar8 = 1;
      goto LAB_00f5f2bc;
    }
    pFVar3 = local_618;
    if (local_620 != (FrameSummary *)0x0) {
      while (pFVar3 != pFVar4) {
        v8::internal::FrameSummary::~FrameSummary(pFVar3 + -0x38);
        pFVar3 = pFVar3 + -0x38;
      }
      local_618 = pFVar4;
      operator_delete(local_620);
    }
  }
  uVar8 = 0;
LAB_00f5f2bc:
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar8);
  }
  return;
}

