
/* v8::internal::JsonParser<unsigned char>::SkipWhitespace() */

void __thiscall
v8::internal::JsonParser<unsigned_char>::SkipWhitespace(JsonParser<unsigned_char> *this)

{
  byte *pbVar1;
  byte *pbVar2;
  
  pbVar1 = *(byte **)(this + 0x30);
  this[0x10] = (JsonParser<unsigned_char>)0xd;
  pbVar2 = pbVar1;
  while( true ) {
    if (pbVar1 == *(byte **)(this + 0x38)) {
      *(byte **)(this + 0x30) = pbVar2;
      return;
    }
    if (*(JsonParser<unsigned_char> *)(&DAT_019cbf74 + *pbVar1) != (JsonParser<unsigned_char>)0x9)
    break;
    pbVar1 = pbVar1 + 1;
    pbVar2 = *(byte **)(this + 0x38);
  }
  this[0x10] = *(JsonParser<unsigned_char> *)(&DAT_019cbf74 + *pbVar1);
  *(byte **)(this + 0x30) = pbVar1;
  return;
}

