
/* v8::internal::JsonParser<unsigned short>::Check(v8::internal::JsonToken) */

bool __thiscall
v8::internal::JsonParser<unsigned_short>::Check
          (JsonParser<unsigned_short> *this,JsonParser<unsigned_short> param_2)

{
  ushort *puVar1;
  JsonParser<unsigned_short> JVar2;
  ushort *puVar3;
  
  puVar3 = *(ushort **)(this + 0x30);
  puVar1 = *(ushort **)(this + 0x38);
  JVar2 = (JsonParser<unsigned_short>)0xd;
  this[0x10] = (JsonParser<unsigned_short>)0xd;
  if (puVar3 != puVar1) {
    do {
      if (0xff < (ulong)*puVar3) {
        JVar2 = (JsonParser<unsigned_short>)0xc;
LAB_0104727c:
        this[0x10] = JVar2;
        goto LAB_01047280;
      }
      JVar2 = *(JsonParser<unsigned_short> *)(&DAT_019cbf74 + *puVar3);
      if (JVar2 != (JsonParser<unsigned_short>)0x9) goto LAB_0104727c;
      puVar3 = puVar3 + 1;
    } while (puVar1 != puVar3);
    JVar2 = (JsonParser<unsigned_short>)0xd;
    puVar3 = puVar1;
  }
LAB_01047280:
  puVar1 = puVar3 + 1;
  if (JVar2 != param_2) {
    puVar1 = puVar3;
  }
  *(ushort **)(this + 0x30) = puVar1;
  return JVar2 == param_2;
}

