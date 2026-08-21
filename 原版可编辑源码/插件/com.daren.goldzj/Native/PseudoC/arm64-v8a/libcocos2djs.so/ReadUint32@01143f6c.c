
/* v8::internal::ValueDeserializer::ReadUint32(unsigned int*) */

undefined8 __thiscall
v8::internal::ValueDeserializer::ReadUint32(ValueDeserializer *this,uint *param_1)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  
  pbVar3 = *(byte **)(this + 0x10);
  uVar2 = 0;
  uVar4 = 0;
  do {
    if (*(byte **)(this + 0x18) <= pbVar3) {
      return 0;
    }
    bVar1 = *pbVar3;
    if (uVar4 < 0x20) {
      uVar2 = (bVar1 & 0x7f) << (ulong)(uVar4 & 0x1f) | uVar2;
      uVar4 = uVar4 + 7;
    }
    pbVar3 = pbVar3 + 1;
    *(byte **)(this + 0x10) = pbVar3;
  } while ((char)bVar1 < '\0');
  *param_1 = uVar2;
  return 1;
}

