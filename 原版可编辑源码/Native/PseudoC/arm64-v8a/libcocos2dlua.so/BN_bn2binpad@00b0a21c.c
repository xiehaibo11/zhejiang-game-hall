
uint BN_bn2binpad(long *param_1,undefined1 *param_2,uint param_3)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  
  if (-1 < (int)param_3) {
    if ((int)param_1[1] == 0) {
      iVar4 = 0;
      bVar2 = SBORROW4(0,param_3);
      iVar3 = -param_3;
      if (param_3 < 0x80000000) goto LAB_00b0a290;
    }
    else {
      iVar4 = (int)param_1[1] + -1;
      iVar3 = BN_num_bits_word(*(ulong *)(*param_1 + (long)iVar4 * 8));
      iVar3 = iVar3 + (iVar4 * 0x40 | 7U);
      iVar4 = iVar3 + 7;
      if (-1 < iVar3) {
        iVar4 = iVar3;
      }
      iVar4 = iVar4 >> 3;
      bVar2 = SBORROW4(iVar4,param_3);
      iVar3 = iVar4 - param_3;
      if (iVar4 <= (int)param_3) {
LAB_00b0a290:
        if (iVar3 < 0 != bVar2) {
          memset(param_2,0,(long)(int)(param_3 - iVar4));
          param_2 = param_2 + (int)(param_3 - iVar4);
        }
        if (iVar4 == 0) {
          return param_3;
        }
        iVar4 = iVar4 + -1;
        do {
          iVar3 = iVar4 + 7;
          if (-1 < iVar4) {
            iVar3 = iVar4;
          }
          uVar1 = iVar4 << 3;
          iVar4 = iVar4 + -1;
          *param_2 = (char)(*(ulong *)(*param_1 + (long)(iVar3 >> 3) * 8) >> ((ulong)uVar1 & 0x3f));
          param_2 = param_2 + 1;
        } while (iVar4 != -1);
        return param_3;
      }
    }
  }
  return 0xffffffff;
}

