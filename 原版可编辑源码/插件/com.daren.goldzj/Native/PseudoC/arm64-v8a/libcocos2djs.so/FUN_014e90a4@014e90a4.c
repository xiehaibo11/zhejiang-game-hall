
ulong FUN_014e90a4(int *param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  
  uVar4 = FUN_014e8f7c();
  iVar1 = *param_3;
  bVar2 = *param_4 < iVar1;
  if (param_3[1] != param_4[1]) {
    bVar2 = (uint)param_3[1] < (uint)param_4[1];
  }
  if (bVar2) {
    *param_3 = *param_4;
    *param_4 = iVar1;
    iVar1 = param_3[1];
    param_3[1] = param_4[1];
    param_4[1] = iVar1;
    iVar1 = *param_2;
    bVar2 = *param_3 < iVar1;
    if (param_2[1] != param_3[1]) {
      bVar2 = (uint)param_2[1] < (uint)param_3[1];
    }
    iVar3 = (int)uVar4;
    if (bVar2) {
      *param_2 = *param_3;
      *param_3 = iVar1;
      iVar1 = param_2[1];
      param_2[1] = param_3[1];
      param_3[1] = iVar1;
      iVar1 = *param_1;
      bVar2 = *param_2 < iVar1;
      if (param_1[1] != param_2[1]) {
        bVar2 = (uint)param_1[1] < (uint)param_2[1];
      }
      if (bVar2) {
        *param_1 = *param_2;
        *param_2 = iVar1;
        iVar1 = param_1[1];
        uVar4 = (ulong)(iVar3 + 3);
        param_1[1] = param_2[1];
        param_2[1] = iVar1;
      }
      else {
        uVar4 = (ulong)(iVar3 + 2);
      }
    }
    else {
      uVar4 = (ulong)(iVar3 + 1);
    }
  }
  return uVar4;
}

