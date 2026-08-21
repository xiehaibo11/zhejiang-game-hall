
ulong FT_Stream_GetUOffset(long param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  ulong uVar4;
  byte *pbVar5;
  
  pbVar5 = *(byte **)(param_1 + 0x40);
  if (pbVar5 + 2 < *(byte **)(param_1 + 0x48)) {
    bVar3 = *pbVar5;
    pbVar1 = pbVar5 + 1;
    pbVar2 = pbVar5 + 2;
    pbVar5 = pbVar5 + 3;
    uVar4 = (ulong)bVar3 << 0x10 | (ulong)*pbVar1 << 8 | (ulong)*pbVar2;
  }
  else {
    uVar4 = 0;
  }
  *(byte **)(param_1 + 0x40) = pbVar5;
  return uVar4;
}

