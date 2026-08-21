
/* v8::internal::EhFrameIterator::GetNextSLeb128() */

uint __thiscall v8::internal::EhFrameIterator::GetNextSLeb128(EhFrameIterator *this)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  ulong uVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  pbVar3 = *(byte **)(this + 8);
  uVar4 = 0;
  uVar2 = 0;
  pbVar6 = pbVar3;
  do {
    pbVar5 = pbVar6 + 1;
    bVar1 = *pbVar6;
    uVar2 = (bVar1 & 0x7f) << (ulong)((uint)uVar4 & 0x1f) | uVar2;
    uVar4 = uVar4 + 7;
    pbVar6 = pbVar5;
  } while ((char)bVar1 < 0);
  *(byte **)(this + 8) = pbVar3 + ((int)pbVar5 - (int)pbVar3);
  return uVar2 | (uint)(-1L << (uVar4 & 0x3f)) & ((int)(char)bVar1 << 0x19) >> 0x1f;
}

