
/* v8::internal::AstRawString::FirstCharacter() const */

ushort __thiscall v8::internal::AstRawString::FirstCharacter(AstRawString *this)

{
  if (this[0x1c] != (AstRawString)0x0) {
    return (ushort)(byte)**(ushort **)(this + 8);
  }
  return **(ushort **)(this + 8);
}

