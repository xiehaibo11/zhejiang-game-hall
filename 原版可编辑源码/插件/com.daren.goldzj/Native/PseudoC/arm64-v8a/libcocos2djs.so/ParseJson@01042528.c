
/* v8::internal::JsonParser<unsigned char>::ParseJson() */

undefined8 __thiscall
v8::internal::JsonParser<unsigned_char>::ParseJson(JsonParser<unsigned_char> *this)

{
  byte *pbVar1;
  byte *pbVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  uVar3 = ParseJsonValue(this);
  pbVar1 = *(byte **)(this + 0x30);
  this[0x10] = (JsonParser<unsigned_char>)0xd;
  pbVar2 = pbVar1;
  do {
    if (pbVar1 == *(byte **)(this + 0x38)) {
      *(byte **)(this + 0x30) = pbVar2 + 1;
LAB_01042598:
      uVar4 = *(ulong *)(*(long *)this + 0x2bd8);
      if ((uVar4 & 1) == 0) {
        uVar3 = 0;
      }
      else if ((int)uVar4 != *(int *)(*(long *)this + 0xa8)) {
        uVar3 = 0;
      }
      return uVar3;
    }
    if (*(JsonParser<unsigned_char> *)(&DAT_019cbf74 + *pbVar1) != (JsonParser<unsigned_char>)0x9) {
      this[0x10] = *(JsonParser<unsigned_char> *)(&DAT_019cbf74 + *pbVar1);
      *(byte **)(this + 0x30) = pbVar1;
      ReportUnexpectedToken(this);
      goto LAB_01042598;
    }
    pbVar1 = pbVar1 + 1;
    pbVar2 = *(byte **)(this + 0x38);
  } while( true );
}

