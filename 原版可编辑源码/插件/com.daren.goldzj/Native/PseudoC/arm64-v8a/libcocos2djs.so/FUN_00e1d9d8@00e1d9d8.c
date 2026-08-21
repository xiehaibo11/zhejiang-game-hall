
ulong FUN_00e1d9d8(long param_1)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  
  pbVar1 = *(byte **)(param_1 + 0x40);
  if (pbVar1 + 2 < *(byte **)(param_1 + 0x48)) {
    bVar2 = *pbVar1;
    bVar3 = pbVar1[1];
    bVar4 = pbVar1[2];
    *(byte **)(param_1 + 0x40) = pbVar1 + 3;
    return (ulong)bVar2 << 0x10 | (ulong)bVar3 << 8 | (ulong)bVar4;
  }
  *(byte **)(param_1 + 0x40) = pbVar1;
  return 0;
}

