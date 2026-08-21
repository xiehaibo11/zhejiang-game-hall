
int FUN_015b2838(char *param_1,char *param_2,char *param_3,char *param_4,char *param_5)

{
  char cVar1;
  char cVar2;
  int iVar3;
  char cVar4;
  
  cVar1 = *param_2;
  cVar4 = *param_1;
  cVar2 = *param_3;
  if (cVar1 < cVar4) {
    if (cVar2 < cVar1) {
      *param_1 = cVar2;
      *param_3 = cVar4;
      iVar3 = 1;
    }
    else {
      *param_1 = cVar1;
      *param_2 = cVar4;
      cVar1 = *param_3;
      if (cVar1 < cVar4) {
        iVar3 = 2;
        *param_2 = cVar1;
        *param_3 = cVar4;
      }
      else {
        iVar3 = 1;
        cVar4 = cVar1;
      }
    }
  }
  else if (cVar2 < cVar1) {
    *param_2 = cVar2;
    *param_3 = cVar1;
    cVar4 = *param_1;
    if (*param_2 < cVar4) {
      *param_1 = *param_2;
      *param_2 = cVar4;
      iVar3 = 2;
      cVar4 = *param_3;
    }
    else {
      iVar3 = 1;
      cVar4 = cVar1;
    }
  }
  else {
    iVar3 = 0;
    cVar4 = cVar2;
  }
  if (*param_4 < cVar4) {
    *param_3 = *param_4;
    *param_4 = cVar4;
    cVar1 = *param_2;
    if (*param_3 < cVar1) {
      *param_2 = *param_3;
      *param_3 = cVar1;
      cVar1 = *param_1;
      if (*param_2 < cVar1) {
        iVar3 = iVar3 + 3;
        *param_1 = *param_2;
        *param_2 = cVar1;
      }
      else {
        iVar3 = iVar3 + 2;
      }
    }
    else {
      iVar3 = iVar3 + 1;
    }
  }
  cVar1 = *param_4;
  if (*param_5 < cVar1) {
    *param_4 = *param_5;
    *param_5 = cVar1;
    cVar1 = *param_3;
    if (cVar1 <= *param_4) {
      return iVar3 + 1;
    }
    *param_3 = *param_4;
    *param_4 = cVar1;
    cVar1 = *param_2;
    if (cVar1 <= *param_3) {
      return iVar3 + 2;
    }
    *param_2 = *param_3;
    *param_3 = cVar1;
    cVar1 = *param_1;
    if (cVar1 <= *param_2) {
      return iVar3 + 3;
    }
    iVar3 = iVar3 + 4;
    *param_1 = *param_2;
    *param_2 = cVar1;
  }
  return iVar3;
}

