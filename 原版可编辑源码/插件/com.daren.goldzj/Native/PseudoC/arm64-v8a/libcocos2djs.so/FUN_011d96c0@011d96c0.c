
int FUN_011d96c0(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *param_2;
  iVar4 = *param_1;
  iVar2 = *param_3;
  if (iVar1 < iVar4) {
    if (iVar2 < iVar1) {
      *param_1 = iVar2;
      *param_3 = iVar4;
      iVar3 = 1;
    }
    else {
      *param_1 = iVar1;
      *param_2 = iVar4;
      iVar1 = *param_3;
      if (iVar1 < iVar4) {
        iVar3 = 2;
        *param_2 = iVar1;
        *param_3 = iVar4;
      }
      else {
        iVar3 = 1;
        iVar4 = iVar1;
      }
    }
  }
  else if (iVar2 < iVar1) {
    *param_2 = iVar2;
    *param_3 = iVar1;
    iVar4 = *param_1;
    if (*param_2 < iVar4) {
      *param_1 = *param_2;
      *param_2 = iVar4;
      iVar3 = 2;
      iVar4 = *param_3;
    }
    else {
      iVar3 = 1;
      iVar4 = iVar1;
    }
  }
  else {
    iVar3 = 0;
    iVar4 = iVar2;
  }
  if (*param_4 < iVar4) {
    *param_3 = *param_4;
    *param_4 = iVar4;
    iVar1 = *param_2;
    if (*param_3 < iVar1) {
      *param_2 = *param_3;
      *param_3 = iVar1;
      iVar1 = *param_1;
      if (*param_2 < iVar1) {
        iVar3 = iVar3 + 3;
        *param_1 = *param_2;
        *param_2 = iVar1;
      }
      else {
        iVar3 = iVar3 + 2;
      }
    }
    else {
      iVar3 = iVar3 + 1;
    }
  }
  iVar1 = *param_4;
  if (*param_5 < iVar1) {
    *param_4 = *param_5;
    *param_5 = iVar1;
    iVar1 = *param_3;
    if (iVar1 <= *param_4) {
      return iVar3 + 1;
    }
    *param_3 = *param_4;
    *param_4 = iVar1;
    iVar1 = *param_2;
    if (iVar1 <= *param_3) {
      return iVar3 + 2;
    }
    *param_2 = *param_3;
    *param_3 = iVar1;
    iVar1 = *param_1;
    if (iVar1 <= *param_2) {
      return iVar3 + 3;
    }
    iVar3 = iVar3 + 4;
    *param_1 = *param_2;
    *param_2 = iVar1;
  }
  return iVar3;
}

