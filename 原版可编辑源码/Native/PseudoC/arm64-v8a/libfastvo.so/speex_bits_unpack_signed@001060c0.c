
uint speex_bits_unpack_signed(long *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  iVar2 = *(int *)((long)param_1 + 0xc);
  iVar3 = (int)param_1[2];
  if ((int)param_1[1] < (int)(iVar3 + param_2 + iVar2 * 8)) {
    uVar4 = 0;
    *(undefined4 *)(param_1 + 3) = 1;
  }
  else {
    uVar4 = 0;
    if ((param_2 != 0) && ((int)param_1[3] == 0)) {
      uVar4 = 0;
      uVar5 = param_2;
      do {
        uVar1 = 7 - iVar3;
        iVar3 = iVar3 + 1;
        uVar4 = *(byte *)(*param_1 + (long)iVar2) >> (ulong)(uVar1 & 0x1f) & 1 | uVar4 << 1;
        *(int *)(param_1 + 2) = iVar3;
        if (iVar3 == 8) {
          iVar3 = 0;
          iVar2 = iVar2 + 1;
          *(int *)((long)param_1 + 0xc) = iVar2;
          *(undefined4 *)(param_1 + 2) = 0;
        }
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
  }
  uVar5 = 0;
  if (uVar4 >> (ulong)(param_2 - 1 & 0x1f) != 0) {
    uVar5 = -1 << (ulong)(param_2 & 0x1f);
  }
  return uVar5 | uVar4;
}

