
ulong FUN_0013b474(long *param_1,long param_2,int param_3)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  
  param_3 = param_3 - (int)param_2;
  param_1[8] = param_2;
  *(int *)(param_1 + 9) = param_3;
  if (param_3 != 0) {
    uVar5 = (ulong)*(uint *)(param_1 + 6);
    do {
      uVar7 = param_1[1] - *param_1;
      if (((int)uVar5 == 0) && (uVar7 != 0)) {
        param_1[5] = param_1[3];
        uVar5 = uVar7;
        if ((ulong)param_1[4] <= uVar7) {
          uVar5 = param_1[4];
        }
        uVar4 = (**(code **)(param_1[2] + 0x10))();
        if ((int)uVar4 == 0) {
          return uVar4;
        }
        param_3 = (int)param_1[9];
        uVar7 = uVar7 - uVar5;
        *(int *)(param_1 + 6) = (int)uVar5;
        *param_1 = *param_1 + uVar5;
      }
      iVar3 = FUN_00130d34(param_1 + 5,1);
      if (iVar3 == 1) {
        uVar1 = *(uint *)(param_1 + 6);
        uVar5 = (ulong)uVar1;
        if (uVar7 + uVar5 == 0) {
          return (ulong)((int)param_1[9] == 0);
        }
        lVar6 = param_1[8];
        lVar8 = param_1[5];
        param_3 = (int)param_1[9];
        iVar3 = FUN_00130b64(param_1 + 5);
        if (iVar3 != 0) {
          return 0;
        }
        param_1[8] = lVar6;
        param_1[5] = lVar8;
        *(int *)(param_1 + 9) = param_3;
        *(uint *)(param_1 + 6) = uVar1;
      }
      else {
        if (iVar3 != 0) {
          return 0;
        }
        iVar3 = (int)param_1[9];
        if (*(uint *)(param_1 + 6) == (uint)uVar5) {
          bVar2 = iVar3 == param_3;
          param_3 = iVar3;
          if (bVar2) {
            return 0;
          }
        }
        else {
          uVar5 = (ulong)*(uint *)(param_1 + 6);
          param_3 = iVar3;
        }
      }
    } while (param_3 != 0);
  }
  return 1;
}

