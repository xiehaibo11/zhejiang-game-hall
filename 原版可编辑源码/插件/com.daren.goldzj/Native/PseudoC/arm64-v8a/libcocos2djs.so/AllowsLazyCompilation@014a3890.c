
/* v8::internal::DeclarationScope::AllowsLazyCompilation() const */

bool __thiscall v8::internal::DeclarationScope::AllowsLazyCompilation(DeclarationScope *this)

{
  if (((byte)this[0x83] >> 2 & 1) == 0) {
    return this[0x85] != (DeclarationScope)0x12;
  }
  return false;
}

