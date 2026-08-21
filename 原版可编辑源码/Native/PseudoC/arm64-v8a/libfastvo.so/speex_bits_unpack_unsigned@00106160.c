
uint speex_bits_unpack_unsigned(long *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)((long)param_1 + 0xc);
  iVar4 = (int)param_1[2];
  if ((int)param_1[1] < iVar4 + param_2 + iVar3 * 8) {
    *(undefined4 *)(param_1 + 3) = 1;
    return 0;
  }
  uVar2 = 0;
  if (((int)param_1[3] == 0) && (param_2 != 0)) {
    uVar2 = 0;
    do {
      uVar1 = 7 - iVar4;
      iVar4 = iVar4 + 1;
      uVar2 = *(byte *)(*param_1 + (long)iVar3) >> (ulong)(uVar1 & 0x1f) & 1 | uVar2 << 1;
      *(int *)(param_1 + 2) = iVar4;
      if (iVar4 == 8) {
        iVar4 = 0;
        iVar3 = iVar3 + 1;
        *(int *)((long)param_1 + 0xc) = iVar3;
        *(undefined4 *)(param_1 + 2) = 0;
      }
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return uVar2;
}

