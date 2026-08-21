
ulong FT_Stream_GetULong(long param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  ulong uVar5;
  byte *pbVar6;
  
  pbVar6 = *(byte **)(param_1 + 0x40);
  if (pbVar6 + 3 < *(byte **)(param_1 + 0x48)) {
    bVar4 = *pbVar6;
    pbVar1 = pbVar6 + 1;
    pbVar2 = pbVar6 + 2;
    pbVar3 = pbVar6 + 3;
    pbVar6 = pbVar6 + 4;
    uVar5 = (ulong)bVar4 << 0x18 | (ulong)*pbVar1 << 0x10 | (ulong)*pbVar2 << 8 | (ulong)*pbVar3;
  }
  else {
    uVar5 = 0;
  }
  *(byte **)(param_1 + 0x40) = pbVar6;
  return uVar5;
}

