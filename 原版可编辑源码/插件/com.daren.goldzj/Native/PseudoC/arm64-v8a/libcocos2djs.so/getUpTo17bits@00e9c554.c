
uint getUpTo17bits(long *param_1,int param_2)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  long lVar5;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar5 = *param_1;
  bVar2 = *(byte *)(lVar5 + ((ulong)(uVar1 >> 3) & 0x1fff));
  bVar3 = *(byte *)(lVar5 + ((ulong)((uVar1 >> 3) + 1) & 0x1fff));
  bVar4 = *(byte *)(lVar5 + ((ulong)((uVar1 >> 3) + 2) & 0x1fff));
  *(uint *)(param_1 + 1) = uVar1 + param_2;
  return (((uint)bVar2 << 0x10 | (uint)bVar3 << 8 | (uint)bVar4) << ((ulong)uVar1 & 7) & 0xffffff)
         >> (ulong)(0x18U - param_2 & 0x1f);
}

