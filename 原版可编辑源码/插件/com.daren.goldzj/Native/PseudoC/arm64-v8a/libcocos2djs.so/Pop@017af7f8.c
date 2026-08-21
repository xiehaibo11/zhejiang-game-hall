
/* v8::internal::compiler::StateValuesAccess::iterator::Pop() */

void __thiscall v8::internal::compiler::StateValuesAccess::iterator::Pop(iterator *this)

{
  *(int *)(this + 0xc0) = *(int *)(this + 0xc0) + -1;
  return;
}

