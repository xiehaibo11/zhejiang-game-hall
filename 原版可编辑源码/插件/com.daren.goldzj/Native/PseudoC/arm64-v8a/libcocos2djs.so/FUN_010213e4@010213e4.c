
int FUN_010213e4(ulong *param_1,ulong *param_2,ulong *param_3,ulong *param_4)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar2 = *param_2;
  uVar3 = *param_1;
  uVar4 = *param_3;
  if (uVar2 < uVar3) {
    if (uVar4 < uVar2) {
      *param_1 = uVar4;
      *param_3 = uVar3;
      uVar2 = param_1[1];
      param_1[1] = param_3[1];
      param_3[1] = uVar2;
    }
    else {
      *param_1 = uVar2;
      *param_2 = uVar3;
      uVar2 = param_1[1];
      param_1[1] = param_2[1];
      param_2[1] = uVar2;
      uVar2 = *param_2;
      if (*param_3 < uVar2) {
        *param_2 = *param_3;
        *param_3 = uVar2;
        uVar2 = param_2[1];
        param_2[1] = param_3[1];
        param_3[1] = uVar2;
LAB_010214a8:
        iVar1 = 2;
        goto LAB_010214bc;
      }
    }
  }
  else {
    if (uVar2 <= uVar4) {
      iVar1 = 0;
      goto LAB_010214bc;
    }
    *param_2 = uVar4;
    *param_3 = uVar2;
    uVar2 = param_2[1];
    param_2[1] = param_3[1];
    param_3[1] = uVar2;
    uVar2 = *param_1;
    if (*param_2 < uVar2) {
      *param_1 = *param_2;
      *param_2 = uVar2;
      uVar2 = param_1[1];
      param_1[1] = param_2[1];
      param_2[1] = uVar2;
      goto LAB_010214a8;
    }
  }
  iVar1 = 1;
LAB_010214bc:
  uVar2 = *param_3;
  if (*param_4 < uVar2) {
    *param_3 = *param_4;
    *param_4 = uVar2;
    uVar2 = param_3[1];
    param_3[1] = param_4[1];
    param_4[1] = uVar2;
    uVar2 = *param_2;
    if (uVar2 <= *param_3) {
      return iVar1 + 1;
    }
    *param_2 = *param_3;
    *param_3 = uVar2;
    uVar2 = param_2[1];
    param_2[1] = param_3[1];
    param_3[1] = uVar2;
    uVar2 = *param_1;
    if (uVar2 <= *param_2) {
      return iVar1 + 2;
    }
    *param_1 = *param_2;
    *param_2 = uVar2;
    uVar2 = param_1[1];
    iVar1 = iVar1 + 3;
    param_1[1] = param_2[1];
    param_2[1] = uVar2;
  }
  return iVar1;
}

