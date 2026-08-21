
/* v8::internal::JsonParser<unsigned char>::ExpectNext(v8::internal::JsonToken) */

void __thiscall
v8::internal::JsonParser<unsigned_char>::ExpectNext
          (JsonParser<unsigned_char> *this,JsonParser<unsigned_char> param_2)

{
  byte *pbVar1;
  JsonParser<unsigned_char> JVar2;
  byte *pbVar3;
  
  pbVar3 = *(byte **)(this + 0x30);
  pbVar1 = *(byte **)(this + 0x38);
  JVar2 = (JsonParser<unsigned_char>)0xd;
  this[0x10] = (JsonParser<unsigned_char>)0xd;
  if (pbVar3 != pbVar1) {
    do {
      JVar2 = *(JsonParser<unsigned_char> *)(&DAT_019cbf74 + *pbVar3);
      if (JVar2 != (JsonParser<unsigned_char>)0x9) {
        this[0x10] = JVar2;
        goto LAB_01043b74;
      }
      pbVar3 = pbVar3 + 1;
    } while (pbVar1 != pbVar3);
    JVar2 = (JsonParser<unsigned_char>)0xd;
    pbVar3 = pbVar1;
  }
LAB_01043b74:
  *(byte **)(this + 0x30) = pbVar3;
  if (JVar2 != param_2) {
    ReportUnexpectedToken(this,JVar2);
    return;
  }
  *(byte **)(this + 0x30) = pbVar3 + 1;
  return;
}

