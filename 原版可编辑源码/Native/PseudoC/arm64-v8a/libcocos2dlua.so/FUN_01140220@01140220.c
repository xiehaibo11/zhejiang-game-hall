
undefined8 FUN_01140220(int param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  
  iVar2 = *param_3;
  iVar4 = *param_4;
  if (iVar2 == 0) {
    iVar1 = param_2;
    if (param_2 < 0) {
      iVar1 = param_2 + 1;
    }
    iVar2 = 0;
    if (param_2 != 0) {
      iVar2 = (iVar4 * param_1 + (iVar1 >> 1)) / param_2;
    }
  }
  if (iVar4 == 0) {
    iVar1 = param_1;
    if (param_1 < 0) {
      iVar1 = param_1 + 1;
    }
    iVar4 = 0;
    if (param_1 != 0) {
      iVar4 = (iVar2 * param_2 + (iVar1 >> 1)) / param_1;
    }
  }
  uVar3 = 0;
  if ((0 < iVar2) && (0 < iVar4)) {
    uVar3 = 1;
    *param_3 = iVar2;
    *param_4 = iVar4;
  }
  return uVar3;
}

