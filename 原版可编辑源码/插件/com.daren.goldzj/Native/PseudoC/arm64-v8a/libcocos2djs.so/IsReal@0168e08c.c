
/* v8::internal::compiler::SparseInputMask::InputIterator::IsReal() const */

uint __thiscall v8::internal::compiler::SparseInputMask::InputIterator::IsReal(InputIterator *this)

{
  return (uint)(*(uint *)this == 0) | *(uint *)this & 1;
}

