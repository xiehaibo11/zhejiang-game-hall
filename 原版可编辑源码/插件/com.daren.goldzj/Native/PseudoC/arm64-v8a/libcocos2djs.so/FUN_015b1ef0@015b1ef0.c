
int FUN_015b1ef0(byte *param_1,byte *param_2,byte *param_3,byte *param_4,byte *param_5)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  byte bVar4;
  
  bVar1 = *param_2;
  bVar4 = *param_1;
  bVar2 = *param_3;
  if (bVar1 < bVar4) {
    if (bVar2 < bVar1) {
      *param_1 = bVar2;
      *param_3 = bVar4;
      iVar3 = 1;
    }
    else {
      *param_1 = bVar1;
      *param_2 = bVar4;
      bVar1 = *param_3;
      if (bVar1 < bVar4) {
        iVar3 = 2;
        *param_2 = bVar1;
        *param_3 = bVar4;
      }
      else {
        iVar3 = 1;
        bVar4 = bVar1;
      }
    }
  }
  else if (bVar2 < bVar1) {
    *param_2 = bVar2;
    *param_3 = bVar1;
    bVar4 = *param_1;
    if (*param_2 < bVar4) {
      *param_1 = *param_2;
      *param_2 = bVar4;
      iVar3 = 2;
      bVar4 = *param_3;
    }
    else {
      iVar3 = 1;
      bVar4 = bVar1;
    }
  }
  else {
    iVar3 = 0;
    bVar4 = bVar2;
  }
  if (*param_4 < bVar4) {
    *param_3 = *param_4;
    *param_4 = bVar4;
    bVar1 = *param_2;
    if (*param_3 < bVar1) {
      *param_2 = *param_3;
      *param_3 = bVar1;
      bVar1 = *param_1;
      if (*param_2 < bVar1) {
        iVar3 = iVar3 + 3;
        *param_1 = *param_2;
        *param_2 = bVar1;
      }
      else {
        iVar3 = iVar3 + 2;
      }
    }
    else {
      iVar3 = iVar3 + 1;
    }
  }
  bVar1 = *param_4;
  if (*param_5 < bVar1) {
    *param_4 = *param_5;
    *param_5 = bVar1;
    bVar1 = *param_3;
    if (bVar1 <= *param_4) {
      return iVar3 + 1;
    }
    *param_3 = *param_4;
    *param_4 = bVar1;
    bVar1 = *param_2;
    if (bVar1 <= *param_3) {
      return iVar3 + 2;
    }
    *param_2 = *param_3;
    *param_3 = bVar1;
    bVar1 = *param_1;
    if (bVar1 <= *param_2) {
      return iVar3 + 3;
    }
    iVar3 = iVar3 + 4;
    *param_1 = *param_2;
    *param_2 = bVar1;
  }
  return iVar3;
}

