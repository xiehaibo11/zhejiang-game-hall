
uint get1bit(long *param_1)

{
  uint uVar1;
  byte bVar2;
  
  uVar1 = *(uint *)(param_1 + 1);
  bVar2 = *(byte *)(*param_1 + ((ulong)(uVar1 >> 3) & 0x1fff));
  *(uint *)(param_1 + 1) = uVar1 + 1;
  return ((uint)bVar2 << ((ulong)uVar1 & 7)) >> 7 & 1;
}

