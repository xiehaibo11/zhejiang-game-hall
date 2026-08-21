
/* v8::internal::Scope::GetOuterScopeWithContext() */

void __thiscall v8::internal::Scope::GetOuterScopeWithContext(Scope *this)

{
  do {
    this = *(Scope **)(this + 8);
    if (this == (Scope *)0x0) {
      return;
    }
  } while (*(int *)(this + 0x7c) < 1);
  return;
}

