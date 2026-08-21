
/* v8::internal::compiler::SparseInputMask::InputIterator::GetReal() const */

long __thiscall v8::internal::compiler::SparseInputMask::InputIterator::GetReal(InputIterator *this)

{
  long *plVar1;
  
  plVar1 = (long *)(*(long *)(this + 8) + 0x20);
  if ((~*(uint *)(*(long *)(this + 8) + 0x14) & 0xf000000) == 0) {
    plVar1 = (long *)(*plVar1 + 0x10);
  }
  return plVar1[*(int *)(this + 0x10)];
}

