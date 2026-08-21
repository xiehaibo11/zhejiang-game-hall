
int FUN_0154e4a0(long *param_1,long *param_2,long *param_3,long *param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *param_2;
  lVar3 = *param_1;
  lVar2 = *param_3;
  iVar1 = *(int *)(lVar4 + 0x10);
  if (iVar1 < *(int *)(lVar3 + 0x10)) {
    if (*(int *)(lVar2 + 0x10) < iVar1) {
      *param_1 = lVar2;
      *param_3 = lVar3;
      iVar1 = 1;
    }
    else {
      *param_1 = lVar4;
      *param_2 = lVar3;
      lVar2 = *param_3;
      if (*(int *)(lVar2 + 0x10) < *(int *)(lVar3 + 0x10)) {
        iVar1 = 2;
        *param_2 = lVar2;
        *param_3 = lVar3;
      }
      else {
        iVar1 = 1;
        lVar3 = lVar2;
      }
    }
  }
  else if (*(int *)(lVar2 + 0x10) < iVar1) {
    *param_2 = lVar2;
    *param_3 = lVar4;
    lVar3 = *param_1;
    if (*(int *)(*param_2 + 0x10) < *(int *)(lVar3 + 0x10)) {
      *param_1 = *param_2;
      *param_2 = lVar3;
      iVar1 = 2;
      lVar3 = *param_3;
    }
    else {
      iVar1 = 1;
      lVar3 = lVar4;
    }
  }
  else {
    iVar1 = 0;
    lVar3 = lVar2;
  }
  if (*(int *)(*param_4 + 0x10) < *(int *)(lVar3 + 0x10)) {
    *param_3 = *param_4;
    *param_4 = lVar3;
    lVar3 = *param_2;
    if (*(int *)(lVar3 + 0x10) <= *(int *)(*param_3 + 0x10)) {
      return iVar1 + 1;
    }
    *param_2 = *param_3;
    *param_3 = lVar3;
    lVar3 = *param_1;
    if (*(int *)(lVar3 + 0x10) <= *(int *)(*param_2 + 0x10)) {
      return iVar1 + 2;
    }
    iVar1 = iVar1 + 3;
    *param_1 = *param_2;
    *param_2 = lVar3;
  }
  return iVar1;
}

