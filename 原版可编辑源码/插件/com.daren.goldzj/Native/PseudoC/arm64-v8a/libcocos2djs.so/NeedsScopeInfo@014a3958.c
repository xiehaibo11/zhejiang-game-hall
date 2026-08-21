
/* v8::internal::Scope::NeedsScopeInfo() const */

bool __thiscall v8::internal::Scope::NeedsScopeInfo(Scope *this)

{
  if (this[0x80] == (Scope)0x2) {
    return true;
  }
  return 0 < *(int *)(this + 0x7c);
}

