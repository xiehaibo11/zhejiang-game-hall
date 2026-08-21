
/* v8::internal::compiler::StateValuesAccess::iterator::node() */

undefined8 __thiscall v8::internal::compiler::StateValuesAccess::iterator::node(iterator *this)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  iVar1 = *(int *)(this + 0xc0);
  uVar2 = SparseInputMask::InputIterator::IsReal((InputIterator *)(this + (long)iVar1 * 0x18));
  if ((uVar2 & 1) != 0) {
    uVar3 = SparseInputMask::InputIterator::GetReal((InputIterator *)(this + (long)iVar1 * 0x18));
    return uVar3;
  }
  return 0;
}

