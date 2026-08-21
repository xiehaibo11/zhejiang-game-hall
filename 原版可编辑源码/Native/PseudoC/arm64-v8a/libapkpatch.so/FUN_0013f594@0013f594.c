
undefined8 FUN_0013f594(long *param_1)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  
  uVar7 = (ulong)*(uint *)(param_1 + 6);
  uVar5 = param_1[1] - *param_1;
  if ((*(uint *)(param_1 + 6) == 0) && (uVar5 != 0)) {
    param_1[5] = param_1[3];
    uVar7 = uVar5;
    if ((ulong)param_1[4] <= uVar5) {
      uVar7 = param_1[4];
    }
    uVar4 = (**(code **)(param_1[2] + 0x10))();
    if ((int)uVar4 == 0) {
      return uVar4;
    }
    uVar5 = uVar5 - uVar7;
    *(int *)(param_1 + 6) = (int)uVar7;
    *param_1 = *param_1 + uVar7;
  }
  lVar2 = param_1[9];
  iVar3 = FUN_00130d34(param_1 + 5,1);
  if (iVar3 == 1) {
    uVar1 = *(uint *)(param_1 + 6);
    if (uVar5 + uVar1 == 0) {
      if ((int)param_1[9] != 0) {
        return 0;
      }
    }
    else {
      lVar6 = param_1[8];
      lVar8 = param_1[5];
      lVar2 = param_1[9];
      iVar3 = FUN_00130b64(param_1 + 5);
      if (iVar3 != 0) {
        return 0;
      }
      param_1[8] = lVar6;
      param_1[5] = lVar8;
      *(int *)(param_1 + 9) = (int)lVar2;
      *(uint *)(param_1 + 6) = uVar1;
    }
  }
  else {
    if (iVar3 != 0) {
      return 0;
    }
    if (((int)param_1[6] == (int)uVar7) && ((int)param_1[9] == (int)lVar2)) {
      return 0;
    }
  }
  return 1;
}

