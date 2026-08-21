
/* v8::internal::compiler::StateValuesAccess::iterator::EnsureValid() */

void __thiscall v8::internal::compiler::StateValuesAccess::iterator::EnsureValid(iterator *this)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  iterator *piVar6;
  InputIterator *this_00;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  iVar1 = *(int *)(this + 0xc0);
  while( true ) {
    this_00 = (InputIterator *)(this + (long)iVar1 * 0x18);
    uVar4 = SparseInputMask::InputIterator::IsReal(this_00);
    if ((uVar4 & 1) == 0) break;
    uVar4 = SparseInputMask::InputIterator::IsEnd(this_00);
    if ((uVar4 & 1) == 0) {
      plVar5 = (long *)SparseInputMask::InputIterator::GetReal(this_00);
      if ((*(ushort *)(*plVar5 + 0x10) & 0xfffe) != 0x2a) break;
      iVar1 = *(int *)(this + 0xc0);
      *(int *)(this + 0xc0) = iVar1 + 1;
      if (7 < iVar1 + 1) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","kMaxInlineDepth > current_depth_");
      }
      local_58[0] = SparseInputMaskOf((Operator *)*plVar5);
      SparseInputMask::IterateOverInputs((Node *)local_58);
      piVar6 = this + (long)*(int *)(this + 0xc0) * 0x18;
      *(undefined4 *)(piVar6 + 0x10) = local_40;
      *(undefined8 *)(piVar6 + 8) = uStack_48;
      *(undefined8 *)piVar6 = local_50;
    }
    else {
      iVar1 = *(int *)(this + 0xc0);
      uVar2 = iVar1 - 1;
      *(uint *)(this + 0xc0) = uVar2;
      if (iVar1 < 1) break;
      SparseInputMask::InputIterator::Advance((InputIterator *)(this + (ulong)uVar2 * 0x18));
    }
    iVar1 = *(int *)(this + 0xc0);
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

