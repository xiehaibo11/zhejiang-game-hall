
/* v8::internal::ValueDeserializer::ReadUint64(unsigned long*) */

undefined8 __thiscall
v8::internal::ValueDeserializer::ReadUint64(ValueDeserializer *this,ulong *param_1)

{
  byte bVar1;
  ulong uVar2;
  byte *pbVar3;
  ulong uVar4;
  
  pbVar3 = *(byte **)(this + 0x10);
  uVar2 = 0;
  uVar4 = 0;
  do {
    if (*(byte **)(this + 0x18) <= pbVar3) {
      return 0;
    }
    bVar1 = *pbVar3;
    if ((uint)uVar4 < 0x40) {
      uVar2 = ((ulong)bVar1 & 0x7f) << (uVar4 & 0x3f) | uVar2;
      uVar4 = (ulong)((uint)uVar4 + 7);
    }
    pbVar3 = pbVar3 + 1;
    *(byte **)(this + 0x10) = pbVar3;
  } while ((char)bVar1 < '\0');
  *param_1 = uVar2;
  return 1;
}

