
uint speex_bits_peek_unsigned(long *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *(int *)((long)param_1 + 0xc);
  iVar1 = (int)param_1[2];
  if ((int)param_1[1] < iVar1 + param_2 + iVar2 * 8) {
    *(undefined4 *)(param_1 + 3) = 1;
    return 0;
  }
  if ((int)param_1[3] == 0) {
    if (param_2 == 0) {
      return 0;
    }
    uVar3 = 0;
    do {
      uVar3 = *(byte *)(*param_1 + (long)iVar2) >> (ulong)(7U - iVar1 & 0x1f) & 1 | uVar3 << 1;
      if (iVar1 == 7) {
        iVar2 = iVar2 + 1;
        iVar1 = 0;
      }
      else {
        iVar1 = iVar1 + 1;
      }
      param_2 = param_2 + -1;
    } while (param_2 != 0);
    return uVar3;
  }
  return 0;
}

