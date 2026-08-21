
/* v8::internal::compiler::StateValuesAccess::size() */

long __thiscall v8::internal::compiler::StateValuesAccess::size(StateValuesAccess *this)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *local_50;
  undefined4 local_48 [2];
  InputIterator aIStack_40 [24];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_48[0] = SparseInputMaskOf((Operator *)**(undefined8 **)this);
  SparseInputMask::IterateOverInputs((Node *)local_48);
  uVar2 = SparseInputMask::InputIterator::IsEnd(aIStack_40);
  lVar5 = 0;
  while ((uVar2 & 1) == 0) {
    uVar2 = SparseInputMask::InputIterator::IsReal(aIStack_40);
    if ((uVar2 & 1) == 0) {
      lVar5 = lVar5 + 1;
    }
    else {
      plVar3 = (long *)SparseInputMask::InputIterator::GetReal(aIStack_40);
      if ((*(ushort *)(*plVar3 + 0x10) & 0xfffe) == 0x2a) {
        local_50 = plVar3;
        lVar4 = size((StateValuesAccess *)&local_50);
      }
      else {
        lVar4 = 1;
      }
      lVar5 = lVar4 + lVar5;
    }
    SparseInputMask::InputIterator::Advance(aIStack_40);
    uVar2 = SparseInputMask::InputIterator::IsEnd(aIStack_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

