
uint BN_bn2lebinpad(long *param_1,long param_2,uint param_3)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  
  if ((int)param_1[1] == 0) {
    iVar5 = 0;
    bVar2 = SBORROW4(0,param_3);
    iVar3 = -param_3;
    if (param_3 < 0x80000000) goto LAB_00afb1c0;
  }
  else {
    iVar5 = (int)param_1[1] + -1;
                    /* catch() { ... } // from try @ 00afaf48 with catch @ 00afb184 */
    iVar3 = BN_num_bits_word(*(ulong *)(*param_1 + (long)iVar5 * 8));
    iVar3 = (iVar5 * 0x40 | 7U) + iVar3;
    iVar5 = iVar3 + 7;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    iVar5 = iVar5 >> 3;
    bVar2 = SBORROW4(iVar5,param_3);
    iVar3 = iVar5 - param_3;
    if (iVar5 <= (int)param_3) {
LAB_00afb1c0:
      if (iVar3 < 0 != bVar2) {
        memset((void *)(param_2 + iVar5),0,(long)(int)(param_3 - iVar5));
      }
      if (iVar5 == 0) {
        return param_3;
      }
      puVar4 = (undefined1 *)(param_2 + iVar5);
      iVar5 = iVar5 + -1;
      do {
        puVar4 = puVar4 + -1;
        iVar3 = iVar5 + 7;
        if (-1 < iVar5) {
          iVar3 = iVar5;
        }
        uVar1 = iVar5 << 3;
        iVar5 = iVar5 + -1;
        *puVar4 = (char)(*(ulong *)(*param_1 + (long)(iVar3 >> 3) * 8) >> ((ulong)uVar1 & 0x3f));
      } while (iVar5 != -1);
      return param_3;
    }
  }
  return 0xffffffff;
}

