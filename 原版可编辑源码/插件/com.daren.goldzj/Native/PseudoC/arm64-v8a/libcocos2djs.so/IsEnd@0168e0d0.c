
/* v8::internal::compiler::SparseInputMask::InputIterator::IsEnd() const */

bool __thiscall v8::internal::compiler::SparseInputMask::InputIterator::IsEnd(InputIterator *this)

{
  uint uVar1;
  
  if (*(int *)this == 1) {
    return true;
  }
  if (*(int *)this == 0) {
    uVar1 = *(uint *)(*(long *)(this + 8) + 0x14);
    if ((~uVar1 & 0xf000000) == 0) {
      uVar1 = *(uint *)(*(long *)(*(long *)(this + 8) + 0x20) + 8);
    }
    else {
      uVar1 = uVar1 >> 0x18 & 0xf;
    }
    return (int)uVar1 <= *(int *)(this + 0x10);
  }
  return false;
}

