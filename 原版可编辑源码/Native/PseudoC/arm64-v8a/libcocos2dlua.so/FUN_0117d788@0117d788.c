
bool FUN_0117d788(long param_1,int param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  short *psVar5;
  
  uVar2 = *(uint *)(param_1 + 0x16fc);
  *(short *)(*(long *)(param_1 + 0x1700) + (ulong)uVar2 * 2) = (short)param_2;
  *(uint *)(param_1 + 0x16fc) = uVar2 + 1;
  *(char *)(*(long *)(param_1 + 0x16f0) + (ulong)uVar2) = (char)param_3;
  if (param_2 == 0) {
    psVar5 = (short *)(param_1 + (ulong)param_3 * 4 + 0xc4);
  }
  else {
    uVar2 = param_2 - 1;
    bVar3 = (&DAT_0149f1a0)[param_3];
    if (0xff < uVar2) {
      uVar2 = (uVar2 >> 7) + 0x100;
    }
    bVar4 = (&DAT_0149efa0)[uVar2];
    *(int *)(param_1 + 0x1718) = *(int *)(param_1 + 0x1718) + 1;
    lVar1 = param_1 + ((ulong)bVar3 | 0x100) * 4;
    *(short *)(lVar1 + 200) = *(short *)(lVar1 + 200) + 1;
    psVar5 = (short *)(param_1 + (ulong)bVar4 * 4 + 0x9b8);
  }
  *psVar5 = *psVar5 + 1;
  return *(int *)(param_1 + 0x16fc) == *(int *)(param_1 + 0x16f8) + -1;
}

