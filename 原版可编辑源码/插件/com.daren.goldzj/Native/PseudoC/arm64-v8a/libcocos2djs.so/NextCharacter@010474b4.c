
/* v8::internal::JsonParser<unsigned short>::NextCharacter() */

ulong __thiscall
v8::internal::JsonParser<unsigned_short>::NextCharacter(JsonParser<unsigned_short> *this)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)(*(long *)(this + 0x30) + 2);
  *(ushort **)(this + 0x30) = puVar1;
  if (puVar1 != *(ushort **)(this + 0x38)) {
    return (ulong)*puVar1;
  }
  return 0xffffffff;
}

