
undefined8 FUN_014e8f7c(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  
  iVar1 = *param_2;
  uVar4 = param_2[1];
  iVar2 = *param_1;
  iVar3 = *param_3;
  bVar5 = iVar1 < iVar2;
  if (param_1[1] != uVar4) {
    bVar5 = (uint)param_1[1] < uVar4;
  }
  bVar6 = iVar3 < iVar1;
  if (uVar4 != param_3[1]) {
    bVar6 = uVar4 < (uint)param_3[1];
  }
  if (bVar5) {
    if (bVar6) {
      *param_1 = iVar3;
      *param_3 = iVar2;
      iVar1 = param_1[1];
      param_1[1] = param_3[1];
      param_3[1] = iVar1;
      return 1;
    }
    *param_1 = iVar1;
    *param_2 = iVar2;
    uVar4 = param_1[1];
    param_1[1] = param_2[1];
    param_2[1] = uVar4;
    iVar1 = *param_2;
    bVar5 = *param_3 < iVar1;
    if (uVar4 != param_3[1]) {
      bVar5 = uVar4 < (uint)param_3[1];
    }
    if (bVar5) {
      *param_2 = *param_3;
      *param_3 = iVar1;
      iVar1 = param_2[1];
      param_2[1] = param_3[1];
      param_3[1] = iVar1;
      return 2;
    }
  }
  else {
    if (!bVar6) {
      return 0;
    }
    *param_2 = iVar3;
    *param_3 = iVar1;
    iVar1 = param_2[1];
    param_2[1] = param_3[1];
    param_3[1] = iVar1;
    iVar1 = *param_1;
    bVar5 = *param_2 < iVar1;
    if (param_1[1] != param_2[1]) {
      bVar5 = (uint)param_1[1] < (uint)param_2[1];
    }
    if (bVar5) {
      *param_1 = *param_2;
      *param_2 = iVar1;
      iVar1 = param_1[1];
      param_1[1] = param_2[1];
      param_2[1] = iVar1;
      return 2;
    }
  }
  return 1;
}

