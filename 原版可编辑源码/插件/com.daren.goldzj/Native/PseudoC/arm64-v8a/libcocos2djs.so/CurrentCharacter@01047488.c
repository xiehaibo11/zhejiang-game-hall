
/* v8::internal::JsonParser<unsigned short>::CurrentCharacter() */

ulong __thiscall
v8::internal::JsonParser<unsigned_short>::CurrentCharacter(JsonParser<unsigned_short> *this)

{
  if (*(ushort **)(this + 0x30) != *(ushort **)(this + 0x38)) {
    return (ulong)**(ushort **)(this + 0x30);
  }
  return 0xffffffff;
}

