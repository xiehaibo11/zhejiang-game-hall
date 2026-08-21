
/* v8::internal::EhFrameIterator::GetNextULeb128() */

uint __thiscall v8::internal::EhFrameIterator::GetNextULeb128(EhFrameIterator *this)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  pbVar3 = *(byte **)(this + 8);
  uVar2 = 0;
  uVar4 = 0;
  pbVar6 = pbVar3;
  do {
    pbVar5 = pbVar6 + 1;
    bVar1 = *pbVar6;
    uVar2 = (bVar1 & 0x7f) << (ulong)(uVar4 & 0x1f) | uVar2;
    uVar4 = uVar4 + 7;
    pbVar6 = pbVar5;
  } while ((char)bVar1 < '\0');
  *(byte **)(this + 8) = pbVar3 + ((int)pbVar5 - (int)pbVar3);
  return uVar2;
}

