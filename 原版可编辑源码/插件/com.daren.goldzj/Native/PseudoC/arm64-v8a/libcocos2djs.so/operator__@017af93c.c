
/* v8::internal::compiler::StateValuesAccess::iterator::TEMPNAMEPLACEHOLDERVALUE() */

iterator * __thiscall
v8::internal::compiler::StateValuesAccess::iterator::operator++(iterator *this)

{
  SparseInputMask::InputIterator::Advance
            ((InputIterator *)(this + (long)*(int *)(this + 0xc0) * 0x18));
  EnsureValid(this);
  return this;
}

