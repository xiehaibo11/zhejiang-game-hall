
/* v8::internal::Scope::IsSkippableFunctionScope() */

bool __thiscall v8::internal::Scope::IsSkippableFunctionScope(Scope *this)

{
  if ((this[0x80] == (Scope)0x2) && (1 < (byte)this[0x85] - 9)) {
    return *(long *)(this + 0xd0) != 0;
  }
  return false;
}

