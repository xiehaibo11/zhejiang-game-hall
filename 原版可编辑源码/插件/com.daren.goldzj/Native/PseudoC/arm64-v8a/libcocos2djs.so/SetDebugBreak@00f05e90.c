
/* v8::internal::BreakIterator::SetDebugBreak() */

void __thiscall v8::internal::BreakIterator::SetDebugBreak(BreakIterator *this)

{
  int *piVar1;
  undefined8 *puVar2;
  long *plVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  int iVar7;
  Isolate *pIVar8;
  ulong *puVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  long *local_80 [3];
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  iVar7 = GetDebugBreakType(this);
  if (iVar7 != 1) {
    uVar4 = *(uint *)(*(long *)this + 4);
    piVar1 = (int *)((ulong)uVar4 << 0x20 | 0x95b0);
    puVar2 = (undefined8 *)((ulong)uVar4 << 0x20 | 0x95a0);
    plVar3 = (long *)((ulong)uVar4 << 0x20 | 0x95a8);
    uVar12 = *puVar2;
    lVar11 = *plVar3;
    *piVar1 = *piVar1 + 1;
    pIVar8 = (Isolate *)(**(ulong **)this & 0xffffffff00000000);
    uVar10 = (ulong)pIVar8 | (ulong)*(uint *)(**(ulong **)this + 0x13);
    if (*(CanonicalHandleScope **)((ulong)pIVar8 | 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar9 = *(ulong **)(pIVar8 + 0x95a0);
      if (puVar9 == *(ulong **)(pIVar8 + 0x95a8)) {
        puVar9 = (ulong *)HandleScope::Extend(pIVar8);
      }
      *(ulong **)(pIVar8 + 0x95a0) = puVar9 + 1;
      *puVar9 = uVar10;
    }
    else {
      puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)((ulong)pIVar8 | 0x95b8),uVar10);
    }
    interpreter::BytecodeArrayAccessor::BytecodeArrayAccessor
              ((BytecodeArrayAccessor *)local_80,puVar9,*(undefined4 *)(this + 0x38));
    interpreter::BytecodeArrayAccessor::ApplyDebugBreak((BytecodeArrayAccessor *)local_80);
    plVar6 = local_80[0];
    local_80[0] = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x48))();
    }
    if (uVar4 != 0) {
      *puVar2 = uVar12;
      *piVar1 = *piVar1 + -1;
      if (*plVar3 != lVar11) {
        *plVar3 = lVar11;
        HandleScope::DeleteExtensions((Isolate *)((ulong)uVar4 << 0x20));
      }
    }
  }
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

