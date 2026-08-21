
/* v8::internal::Scope::GetScriptScope() */

void __thiscall v8::internal::Scope::GetScriptScope(Scope *this)

{
  for (; this[0x80] != (Scope)0x4; this = *(Scope **)(this + 8)) {
  }
  return;
}

