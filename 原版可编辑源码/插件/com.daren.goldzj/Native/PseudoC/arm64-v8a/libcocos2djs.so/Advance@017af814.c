
/* v8::internal::compiler::StateValuesAccess::iterator::Advance() */

void __thiscall v8::internal::compiler::StateValuesAccess::iterator::Advance(iterator *this)

{
  SparseInputMask::InputIterator::Advance
            ((InputIterator *)(this + (long)*(int *)(this + 0xc0) * 0x18));
  EnsureValid(this);
  return;
}

