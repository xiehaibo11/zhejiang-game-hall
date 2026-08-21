
/* v8::internal::compiler::SparseInputMask::InputIterator::Advance() */

void __thiscall v8::internal::compiler::SparseInputMask::InputIterator::Advance(InputIterator *this)

{
  uint uVar1;
  
  uVar1 = *(uint *)this;
  if ((uVar1 == 0) || ((uVar1 & 1) != 0)) {
    *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
  }
  *(uint *)this = uVar1 >> 1;
  return;
}

