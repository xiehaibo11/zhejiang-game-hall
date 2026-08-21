
int FUN_015b319c(ushort *param_1,ushort *param_2,ushort *param_3,ushort *param_4,ushort *param_5)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  ushort uVar4;
  
  uVar1 = *param_2;
  uVar4 = *param_1;
  uVar2 = *param_3;
  if (uVar1 < uVar4) {
    if (uVar2 < uVar1) {
      *param_1 = uVar2;
      *param_3 = uVar4;
      iVar3 = 1;
    }
    else {
      *param_1 = uVar1;
      *param_2 = uVar4;
      uVar1 = *param_3;
      if (uVar1 < uVar4) {
        iVar3 = 2;
        *param_2 = uVar1;
        *param_3 = uVar4;
      }
      else {
        iVar3 = 1;
        uVar4 = uVar1;
      }
    }
  }
  else if (uVar2 < uVar1) {
    *param_2 = uVar2;
    *param_3 = uVar1;
    uVar4 = *param_1;
    if (*param_2 < uVar4) {
      *param_1 = *param_2;
      *param_2 = uVar4;
      iVar3 = 2;
      uVar4 = *param_3;
    }
    else {
      iVar3 = 1;
      uVar4 = uVar1;
    }
  }
  else {
    iVar3 = 0;
    uVar4 = uVar2;
  }
  if (*param_4 < uVar4) {
    *param_3 = *param_4;
    *param_4 = uVar4;
    uVar1 = *param_2;
    if (*param_3 < uVar1) {
      *param_2 = *param_3;
      *param_3 = uVar1;
      uVar1 = *param_1;
      if (*param_2 < uVar1) {
        iVar3 = iVar3 + 3;
        *param_1 = *param_2;
        *param_2 = uVar1;
      }
      else {
        iVar3 = iVar3 + 2;
      }
    }
    else {
      iVar3 = iVar3 + 1;
    }
  }
  uVar1 = *param_4;
  if (*param_5 < uVar1) {
    *param_4 = *param_5;
    *param_5 = uVar1;
    uVar1 = *param_3;
    if (uVar1 <= *param_4) {
      return iVar3 + 1;
    }
    *param_3 = *param_4;
    *param_4 = uVar1;
    uVar1 = *param_2;
    if (uVar1 <= *param_3) {
      return iVar3 + 2;
    }
    *param_2 = *param_3;
    *param_3 = uVar1;
    uVar1 = *param_1;
    if (uVar1 <= *param_2) {
      return iVar3 + 3;
    }
    iVar3 = iVar3 + 4;
    *param_1 = *param_2;
    *param_2 = uVar1;
  }
  return iVar3;
}

