
long FT_MulDiv(long param_1,long param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  iVar2 = 1;
  if (param_1 < 0) {
    iVar2 = -1;
  }
  iVar1 = -iVar2;
  if (-1 < param_2) {
    iVar1 = iVar2;
  }
  uVar3 = -param_3;
  if (-1 < (long)param_3) {
    uVar3 = param_3;
  }
  iVar2 = -iVar1;
  if (-1 < (long)param_3) {
    iVar2 = iVar1;
  }
  if ((long)uVar3 < 1) {
    lVar6 = 0x7fffffff;
  }
  else {
    lVar5 = -param_2;
    if (-1 < param_2) {
      lVar5 = param_2;
    }
    lVar4 = -param_1;
    if (-1 < param_1) {
      lVar4 = param_1;
    }
                    /* catch() { ... } // from try @ 0105a638 with catch @ 0105a600 */
    lVar6 = 0;
    if (uVar3 != 0) {
      lVar6 = (long)(lVar5 * lVar4 + (uVar3 >> 1)) / (long)uVar3;
    }
  }
  lVar5 = -lVar6;
  if (-1 < iVar2) {
    lVar5 = lVar6;
  }
  return lVar5;
}

