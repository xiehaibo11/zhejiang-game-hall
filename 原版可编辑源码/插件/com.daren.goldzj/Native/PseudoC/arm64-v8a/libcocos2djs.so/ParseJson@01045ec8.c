
/* v8::internal::JsonParser<unsigned short>::ParseJson() */

undefined8 __thiscall
v8::internal::JsonParser<unsigned_short>::ParseJson(JsonParser<unsigned_short> *this)

{
  ushort *puVar1;
  ushort *puVar2;
  undefined8 uVar3;
  JsonParser<unsigned_short> JVar4;
  ulong uVar5;
  
  uVar3 = ParseJsonValue(this);
  puVar1 = *(ushort **)(this + 0x30);
  this[0x10] = (JsonParser<unsigned_short>)0xd;
  puVar2 = puVar1;
  do {
    if (puVar1 == *(ushort **)(this + 0x38)) {
      *(ushort **)(this + 0x30) = puVar2 + 1;
LAB_01045f44:
      uVar5 = *(ulong *)(*(long *)this + 0x2bd8);
      if ((uVar5 & 1) == 0) {
        uVar3 = 0;
      }
      else if ((int)uVar5 != *(int *)(*(long *)this + 0xa8)) {
        uVar3 = 0;
      }
      return uVar3;
    }
    if (0xff < (ulong)*puVar1) {
      JVar4 = (JsonParser<unsigned_short>)0xc;
LAB_01045f34:
      this[0x10] = JVar4;
      *(ushort **)(this + 0x30) = puVar1;
      ReportUnexpectedToken(this);
      goto LAB_01045f44;
    }
    JVar4 = *(JsonParser<unsigned_short> *)(&DAT_019cbf74 + *puVar1);
    if (JVar4 != (JsonParser<unsigned_short>)0x9) goto LAB_01045f34;
    puVar1 = puVar1 + 1;
    puVar2 = *(ushort **)(this + 0x38);
  } while( true );
}

