
/* v8::internal::JsonParser<unsigned short>::SkipWhitespace() */

void __thiscall
v8::internal::JsonParser<unsigned_short>::SkipWhitespace(JsonParser<unsigned_short> *this)

{
  ushort *puVar1;
  ushort *puVar2;
  JsonParser<unsigned_short> JVar3;
  
  puVar1 = *(ushort **)(this + 0x30);
  this[0x10] = (JsonParser<unsigned_short>)0xd;
  puVar2 = puVar1;
  while( true ) {
    if (puVar1 == *(ushort **)(this + 0x38)) {
      *(ushort **)(this + 0x30) = puVar2;
      return;
    }
    if (0xff < (ulong)*puVar1) break;
    JVar3 = *(JsonParser<unsigned_short> *)(&DAT_019cbf74 + *puVar1);
    if (JVar3 != (JsonParser<unsigned_short>)0x9) goto LAB_01047604;
    puVar1 = puVar1 + 1;
    puVar2 = *(ushort **)(this + 0x38);
  }
  JVar3 = (JsonParser<unsigned_short>)0xc;
LAB_01047604:
  this[0x10] = JVar3;
  *(ushort **)(this + 0x30) = puVar1;
  return;
}

