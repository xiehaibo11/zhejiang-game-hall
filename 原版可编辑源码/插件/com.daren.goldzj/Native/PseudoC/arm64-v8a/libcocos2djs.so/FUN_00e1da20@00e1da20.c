
ulong FUN_00e1da20(long param_1)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  
  pbVar1 = *(byte **)(param_1 + 0x40);
  if (pbVar1 + 3 < *(byte **)(param_1 + 0x48)) {
    bVar2 = *pbVar1;
    bVar3 = pbVar1[1];
    bVar4 = pbVar1[2];
    bVar5 = pbVar1[3];
    *(byte **)(param_1 + 0x40) = pbVar1 + 4;
    return (ulong)bVar2 << 0x18 | (ulong)bVar3 << 0x10 | (ulong)bVar4 << 8 | (ulong)bVar5;
  }
  *(byte **)(param_1 + 0x40) = pbVar1;
  return 0;
}

