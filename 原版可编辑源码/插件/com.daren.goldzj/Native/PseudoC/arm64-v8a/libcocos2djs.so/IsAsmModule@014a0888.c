
/* v8::internal::Scope::IsAsmModule() const */

byte __thiscall v8::internal::Scope::IsAsmModule(Scope *this)

{
  if (this[0x80] == (Scope)0x2) {
    return (byte)this[0x83] >> 1 & 1;
  }
  return 0;
}

