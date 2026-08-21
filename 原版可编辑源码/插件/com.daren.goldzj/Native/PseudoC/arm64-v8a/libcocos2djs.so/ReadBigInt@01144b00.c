
/* v8::internal::ValueDeserializer::ReadBigInt() */

undefined8 __thiscall v8::internal::ValueDeserializer::ReadBigInt(ValueDeserializer *this)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  
  pbVar4 = *(byte **)(this + 0x10);
  uVar6 = 0;
  uVar5 = 0;
  do {
    if (*(byte **)(this + 0x18) <= pbVar4) {
      return 0;
    }
    bVar1 = *pbVar4;
    if (uVar5 < 0x20) {
      uVar6 = (bVar1 & 0x7f) << (ulong)(uVar5 & 0x1f) | uVar6;
      uVar5 = uVar5 + 7;
    }
    pbVar4 = pbVar4 + 1;
    *(byte **)(this + 0x10) = pbVar4;
  } while ((char)bVar1 < '\0');
  iVar2 = BigInt::DigitsByteLengthForBitfield(uVar6);
  if (*(long *)(this + 0x18) - *(long *)(this + 0x10) < (long)iVar2) {
    return 0;
  }
  *(long *)(this + 0x10) = *(long *)(this + 0x10) + (long)iVar2;
  uVar3 = BigInt::FromSerializedDigits(*(undefined8 *)this,uVar6);
  return uVar3;
}

