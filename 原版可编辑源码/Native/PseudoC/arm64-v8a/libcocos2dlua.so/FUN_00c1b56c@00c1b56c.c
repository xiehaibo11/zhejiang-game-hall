
uint FUN_00c1b56c(long *param_1)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar5;
  byte *pbVar4;
  
  pbVar4 = (byte *)*param_1 + 1;
  bVar1 = *(byte *)*param_1;
  if (bVar1 < 0x80) {
    *param_1 = (long)pbVar4;
    return (uint)bVar1;
  }
  uVar2 = bVar1 & 0x7f;
  uVar5 = 0;
  do {
    pbVar3 = pbVar4 + 1;
    bVar1 = *pbVar4;
    uVar5 = uVar5 + 7;
    uVar2 = uVar2 | (bVar1 & 0x7f) << (ulong)(uVar5 & 0x1f);
    pbVar4 = pbVar3;
  } while ((char)bVar1 < '\0');
  *param_1 = (long)pbVar3;
  return uVar2;
}

