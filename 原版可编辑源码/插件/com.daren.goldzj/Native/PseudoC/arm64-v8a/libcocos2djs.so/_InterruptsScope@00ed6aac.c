
/* v8::internal::InterruptsScope::~InterruptsScope() */

void __thiscall v8::internal::InterruptsScope::~InterruptsScope(InterruptsScope *this)

{
  *(undefined ***)this = &PTR__InterruptsScope_01c984b0;
  if (*(int *)(this + 0x20) != 2) {
    StackGuard::PopInterruptsScope(*(StackGuard **)(this + 8));
  }
  operator_delete(this);
  return;
}

