
int FUN_00f14c14(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                undefined8 *param_5,undefined8 *param_6)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = (*(code *)*param_6)(param_2,param_1);
  uVar2 = (*(code *)*param_6)(param_3,param_2);
  if ((uVar1 & 1) == 0) {
    if ((uVar2 & 1) == 0) {
      iVar3 = 0;
      goto LAB_00f14d38;
    }
    uVar6 = param_2[1];
    uVar4 = *param_2;
    uVar5 = *param_3;
    param_2[1] = param_3[1];
    *param_2 = uVar5;
    param_3[1] = uVar6;
    *param_3 = uVar4;
    uVar1 = (*(code *)*param_6)(param_2,param_1);
    if ((uVar1 & 1) == 0) goto LAB_00f14d34;
    uVar6 = param_1[1];
    uVar4 = *param_1;
    uVar5 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar5;
    param_2[1] = uVar6;
    *param_2 = uVar4;
  }
  else {
    if ((uVar2 & 1) != 0) {
      uVar6 = param_1[1];
      uVar4 = *param_1;
      iVar3 = 1;
      uVar5 = *param_3;
      param_1[1] = param_3[1];
      *param_1 = uVar5;
      param_3[1] = uVar6;
      *param_3 = uVar4;
      goto LAB_00f14d38;
    }
    uVar6 = param_1[1];
    uVar4 = *param_1;
    uVar5 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar5;
    param_2[1] = uVar6;
    *param_2 = uVar4;
    uVar1 = (*(code *)*param_6)(param_3,param_2);
    if ((uVar1 & 1) == 0) {
LAB_00f14d34:
      iVar3 = 1;
      goto LAB_00f14d38;
    }
    uVar6 = param_2[1];
    uVar4 = *param_2;
    uVar5 = *param_3;
    param_2[1] = param_3[1];
    *param_2 = uVar5;
    param_3[1] = uVar6;
    *param_3 = uVar4;
  }
  iVar3 = 2;
LAB_00f14d38:
  uVar1 = (*(code *)*param_6)(param_4,param_3);
  if ((uVar1 & 1) != 0) {
    uVar6 = param_3[1];
    uVar4 = *param_3;
    uVar5 = *param_4;
    param_3[1] = param_4[1];
    *param_3 = uVar5;
    param_4[1] = uVar6;
    *param_4 = uVar4;
    uVar1 = (*(code *)*param_6)(param_3,param_2);
    if ((uVar1 & 1) == 0) {
      iVar3 = iVar3 + 1;
    }
    else {
      uVar6 = param_2[1];
      uVar4 = *param_2;
      uVar5 = *param_3;
      param_2[1] = param_3[1];
      *param_2 = uVar5;
      param_3[1] = uVar6;
      *param_3 = uVar4;
      uVar1 = (*(code *)*param_6)(param_2,param_1);
      if ((uVar1 & 1) == 0) {
        iVar3 = iVar3 + 2;
      }
      else {
        uVar6 = param_1[1];
        uVar4 = *param_1;
        iVar3 = iVar3 + 3;
        uVar5 = *param_2;
        param_1[1] = param_2[1];
        *param_1 = uVar5;
        param_2[1] = uVar6;
        *param_2 = uVar4;
      }
    }
  }
  uVar1 = (*(code *)*param_6)(param_5,param_4);
  if ((uVar1 & 1) != 0) {
    uVar6 = param_4[1];
    uVar4 = *param_4;
    uVar5 = *param_5;
    param_4[1] = param_5[1];
    *param_4 = uVar5;
    param_5[1] = uVar6;
    *param_5 = uVar4;
    uVar1 = (*(code *)*param_6)(param_4,param_3);
    if ((uVar1 & 1) == 0) {
      iVar3 = iVar3 + 1;
    }
    else {
      uVar6 = param_3[1];
      uVar4 = *param_3;
      uVar5 = *param_4;
      param_3[1] = param_4[1];
      *param_3 = uVar5;
      param_4[1] = uVar6;
      *param_4 = uVar4;
      uVar1 = (*(code *)*param_6)(param_3,param_2);
      if ((uVar1 & 1) == 0) {
        iVar3 = iVar3 + 2;
      }
      else {
        uVar6 = param_2[1];
        uVar4 = *param_2;
        uVar5 = *param_3;
        param_2[1] = param_3[1];
        *param_2 = uVar5;
        param_3[1] = uVar6;
        *param_3 = uVar4;
        uVar1 = (*(code *)*param_6)(param_2,param_1);
        if ((uVar1 & 1) == 0) {
          iVar3 = iVar3 + 3;
        }
        else {
          uVar6 = param_1[1];
          uVar4 = *param_1;
          iVar3 = iVar3 + 4;
          uVar5 = *param_2;
          param_1[1] = param_2[1];
          *param_1 = uVar5;
          param_2[1] = uVar6;
          *param_2 = uVar4;
        }
      }
    }
  }
  return iVar3;
}

