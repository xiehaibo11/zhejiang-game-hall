
/* v8::internal::JsonParser<unsigned char>::NextCharacter() */

ulong __thiscall
v8::internal::JsonParser<unsigned_char>::NextCharacter(JsonParser<unsigned_char> *this)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)(*(long *)(this + 0x30) + 1);
  *(byte **)(this + 0x30) = pbVar1;
  if (pbVar1 != *(byte **)(this + 0x38)) {
    return (ulong)*pbVar1;
  }
  return 0xffffffff;
}

