
/* v8::internal::JsonParser<unsigned char>::Check(v8::internal::JsonToken) */

bool __thiscall
v8::internal::JsonParser<unsigned_char>::Check
          (JsonParser<unsigned_char> *this,JsonParser<unsigned_char> param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  JsonParser<unsigned_char> JVar3;
  
  pbVar2 = *(byte **)(this + 0x30);
  pbVar1 = *(byte **)(this + 0x38);
  JVar3 = (JsonParser<unsigned_char>)0xd;
  this[0x10] = (JsonParser<unsigned_char>)0xd;
  if (pbVar2 != pbVar1) {
    do {
      JVar3 = *(JsonParser<unsigned_char> *)(&DAT_019cbf74 + *pbVar2);
      if (JVar3 != (JsonParser<unsigned_char>)0x9) {
        this[0x10] = JVar3;
        goto LAB_01043874;
      }
      pbVar2 = pbVar2 + 1;
    } while (pbVar1 != pbVar2);
    JVar3 = (JsonParser<unsigned_char>)0xd;
    pbVar2 = pbVar1;
  }
LAB_01043874:
  if (JVar3 == param_2) {
    pbVar2 = pbVar2 + 1;
  }
  *(byte **)(this + 0x30) = pbVar2;
  return JVar3 == param_2;
}

