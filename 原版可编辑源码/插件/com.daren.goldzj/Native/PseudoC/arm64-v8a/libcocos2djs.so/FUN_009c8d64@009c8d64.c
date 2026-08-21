
int FUN_009c8d64(long *param_1,long *param_2,long *param_3,long *param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *param_2;
  lVar6 = *param_1;
  lVar3 = *param_3;
  iVar2 = *(int *)(lVar5 + 0x218);
  iVar1 = *(int *)(lVar6 + 0x218);
  if (iVar2 < iVar1) {
    piVar4 = (int *)(lVar6 + 0x218);
    if (*(int *)(lVar3 + 0x218) < iVar2) {
      *param_1 = lVar3;
      *param_3 = lVar6;
      iVar2 = 1;
    }
    else {
      *param_1 = lVar5;
      *param_2 = lVar6;
      lVar3 = *param_3;
      if (*(int *)(lVar3 + 0x218) < iVar1) {
        iVar2 = 2;
        *param_2 = lVar3;
        *param_3 = lVar6;
      }
      else {
        piVar4 = (int *)(lVar3 + 0x218);
        iVar2 = 1;
        lVar6 = lVar3;
      }
    }
  }
  else if (*(int *)(lVar3 + 0x218) < iVar2) {
    *param_2 = lVar3;
    *param_3 = lVar5;
    lVar6 = *param_1;
    if (*(int *)(*param_2 + 0x218) < *(int *)(lVar6 + 0x218)) {
      *param_1 = *param_2;
      *param_2 = lVar6;
      iVar2 = 2;
      piVar4 = (int *)(*param_3 + 0x218);
      lVar6 = *param_3;
    }
    else {
      piVar4 = (int *)(lVar5 + 0x218);
      iVar2 = 1;
      lVar6 = lVar5;
    }
  }
  else {
    iVar2 = 0;
    piVar4 = (int *)(lVar3 + 0x218);
    lVar6 = lVar3;
  }
  if (*(int *)(*param_4 + 0x218) < *piVar4) {
    *param_3 = *param_4;
    *param_4 = lVar6;
    lVar6 = *param_2;
    if (*(int *)(lVar6 + 0x218) <= *(int *)(*param_3 + 0x218)) {
                    /* try { // try from 009c8e9c to 00ac8f83 has its CatchHandler @ 009c8cb8 */
      return iVar2 + 1;
    }
    *param_2 = *param_3;
    *param_3 = lVar6;
    lVar6 = *param_1;
    if (*(int *)(lVar6 + 0x218) <= *(int *)(*param_2 + 0x218)) {
      return iVar2 + 2;
    }
    iVar2 = iVar2 + 3;
    *param_1 = *param_2;
    *param_2 = lVar6;
  }
  return iVar2;
}

