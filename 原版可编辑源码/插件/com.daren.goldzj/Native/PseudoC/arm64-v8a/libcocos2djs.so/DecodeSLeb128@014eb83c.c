
/* v8::internal::EhFrameIterator::DecodeSLeb128(unsigned char const*, int*) */

uint v8::internal::EhFrameIterator::DecodeSLeb128(uchar *param_1,int *param_2)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  ulong uVar5;
  byte *pbVar4;
  
  uVar5 = 0;
  uVar2 = 0;
  pbVar4 = param_1;
  do {
    pbVar3 = pbVar4 + 1;
    bVar1 = *pbVar4;
    uVar2 = (bVar1 & 0x7f) << (ulong)((uint)uVar5 & 0x1f) | uVar2;
    uVar5 = uVar5 + 7;
    pbVar4 = pbVar3;
  } while ((char)bVar1 < 0);
  *param_2 = (int)pbVar3 - (int)param_1;
  return uVar2 | (uint)(-1L << (uVar5 & 0x3f)) & ((int)(char)bVar1 << 0x19) >> 0x1f;
}

