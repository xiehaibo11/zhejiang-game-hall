
int FUN_015b3b00(short *param_1,short *param_2,short *param_3,short *param_4,short *param_5)

{
  short sVar1;
  short sVar2;
  int iVar3;
  short sVar4;
  
  sVar1 = *param_2;
  sVar4 = *param_1;
  sVar2 = *param_3;
  if (sVar1 < sVar4) {
    if (sVar2 < sVar1) {
      *param_1 = sVar2;
      *param_3 = sVar4;
      iVar3 = 1;
    }
    else {
      *param_1 = sVar1;
      *param_2 = sVar4;
      sVar1 = *param_3;
      if (sVar1 < sVar4) {
        iVar3 = 2;
        *param_2 = sVar1;
        *param_3 = sVar4;
      }
      else {
        iVar3 = 1;
        sVar4 = sVar1;
      }
    }
  }
  else if (sVar2 < sVar1) {
    *param_2 = sVar2;
    *param_3 = sVar1;
    sVar4 = *param_1;
    if (*param_2 < sVar4) {
      *param_1 = *param_2;
      *param_2 = sVar4;
      iVar3 = 2;
      sVar4 = *param_3;
    }
    else {
      iVar3 = 1;
      sVar4 = sVar1;
    }
  }
  else {
    iVar3 = 0;
    sVar4 = sVar2;
  }
  if (*param_4 < sVar4) {
    *param_3 = *param_4;
    *param_4 = sVar4;
    sVar1 = *param_2;
    if (*param_3 < sVar1) {
      *param_2 = *param_3;
      *param_3 = sVar1;
      sVar1 = *param_1;
      if (*param_2 < sVar1) {
        iVar3 = iVar3 + 3;
        *param_1 = *param_2;
        *param_2 = sVar1;
      }
      else {
        iVar3 = iVar3 + 2;
      }
    }
    else {
      iVar3 = iVar3 + 1;
    }
  }
  sVar1 = *param_4;
  if (*param_5 < sVar1) {
    *param_4 = *param_5;
    *param_5 = sVar1;
    sVar1 = *param_3;
    if (sVar1 <= *param_4) {
      return iVar3 + 1;
    }
    *param_3 = *param_4;
    *param_4 = sVar1;
    sVar1 = *param_2;
    if (sVar1 <= *param_3) {
      return iVar3 + 2;
    }
    *param_2 = *param_3;
    *param_3 = sVar1;
    sVar1 = *param_1;
    if (sVar1 <= *param_2) {
      return iVar3 + 3;
    }
    iVar3 = iVar3 + 4;
    *param_1 = *param_2;
    *param_2 = sVar1;
  }
  return iVar3;
}

