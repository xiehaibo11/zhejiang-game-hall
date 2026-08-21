
/* v8::internal::BreakIterator::GetBreakLocation() */

void v8::internal::BreakIterator::GetBreakLocation(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  long *plVar4;
  int iVar5;
  undefined4 uVar6;
  BreakIterator *in_x0;
  Isolate *pIVar7;
  ulong *puVar8;
  ulong *puVar9;
  long *in_x8;
  ulong uVar10;
  long *local_70 [3];
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  pIVar7 = (Isolate *)(**(ulong **)in_x0 & 0xffffffff00000000);
  uVar10 = (ulong)pIVar7 | (ulong)*(uint *)(**(ulong **)in_x0 + 0x13);
  if (*(CanonicalHandleScope **)((ulong)pIVar7 | 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar8 = *(ulong **)(pIVar7 + 0x95a0);
    if (puVar8 == *(ulong **)(pIVar7 + 0x95a8)) {
      puVar8 = (ulong *)HandleScope::Extend(pIVar7);
    }
    *(ulong **)(pIVar7 + 0x95a0) = puVar8 + 1;
    *puVar8 = uVar10;
  }
  else {
    puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)((ulong)pIVar7 | 0x95b8),uVar10);
  }
  iVar5 = GetDebugBreakType(in_x0);
  if (iVar5 == 5) {
    pIVar7 = (Isolate *)(**(ulong **)in_x0 & 0xffffffff00000000);
    uVar10 = (ulong)pIVar7 | (ulong)*(uint *)(**(ulong **)in_x0 + 0xf);
    if (*(CanonicalHandleScope **)((ulong)pIVar7 | 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar9 = *(ulong **)(pIVar7 + 0x95a0);
      if (puVar9 == *(ulong **)(pIVar7 + 0x95a8)) {
        puVar9 = (ulong *)HandleScope::Extend(pIVar7);
      }
      *(ulong **)(pIVar7 + 0x95a0) = puVar9 + 1;
      *puVar9 = uVar10;
    }
    else {
      puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)((ulong)pIVar7 | 0x95b8),uVar10);
    }
    interpreter::BytecodeArrayAccessor::BytecodeArrayAccessor
              ((BytecodeArrayAccessor *)local_70,puVar9,*(undefined4 *)(in_x0 + 0x38));
    uVar6 = interpreter::BytecodeArrayAccessor::GetRegisterOperand
                      ((BytecodeArrayAccessor *)local_70,0);
    plVar4 = local_70[0];
    local_70[0] = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x48))();
    }
  }
  else {
    uVar6 = 0xffffffff;
  }
  uVar1 = *(undefined4 *)(in_x0 + 0x38);
  uVar2 = *(undefined4 *)(in_x0 + 0xc);
  *in_x8 = (long)puVar8;
  *(undefined4 *)(in_x8 + 1) = uVar1;
  *(int *)((long)in_x8 + 0xc) = iVar5;
  *(undefined4 *)(in_x8 + 2) = uVar2;
  *(undefined4 *)((long)in_x8 + 0x14) = uVar6;
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

