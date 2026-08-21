
long FT_MulDiv_No_Round(long param_1,long param_2,long param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
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
                    /* try { // try from 0105a630 to 0115a637 has its CatchHandler @ 0105a6ec */
  lVar5 = -param_3;
  if (-1 < param_3) {
    lVar5 = param_3;
  }
  iVar2 = -iVar1;
  if (-1 < param_3) {
    iVar2 = iVar1;
  }
                    /* try { // try from 0105a638 to 0115a707 has its CatchHandler @ 0105a600 */
  if (lVar5 < 1) {
    lVar6 = 0x7fffffff;
  }
  else {
    lVar3 = -param_2;
    if (-1 < param_2) {
      lVar3 = param_2;
    }
    lVar4 = -param_1;
    if (-1 < param_1) {
      lVar4 = param_1;
    }
    lVar6 = 0;
    if (lVar5 != 0) {
      lVar6 = (lVar3 * lVar4) / lVar5;
    }
  }
  lVar5 = -lVar6;
  if (-1 < iVar2) {
    lVar5 = lVar6;
  }
  return lVar5;
}

