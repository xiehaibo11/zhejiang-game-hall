
int FUN_008f3704(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                undefined8 *param_5)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  iVar2 = FUN_008f35c8();
  uVar3 = FUN_008f3374(param_4,param_3);
  if ((uVar3 & 1) != 0) {
    uVar7 = param_3[1];
    uVar5 = *param_3;
    uVar6 = *param_4;
    param_3[1] = param_4[1];
    *param_3 = uVar6;
    param_4[1] = uVar7;
    *param_4 = uVar5;
    uVar3 = FUN_008f3374(param_3,param_2);
    if ((uVar3 & 1) == 0) {
      iVar2 = iVar2 + 1;
    }
    else {
      uVar7 = param_2[1];
      uVar5 = *param_2;
      uVar6 = *param_3;
      param_2[1] = param_3[1];
      *param_2 = uVar6;
      param_3[1] = uVar7;
      *param_3 = uVar5;
      uVar3 = FUN_008f3374(param_2,param_1);
      if ((uVar3 & 1) == 0) {
        iVar2 = iVar2 + 2;
      }
      else {
        uVar7 = param_1[1];
        uVar5 = *param_1;
        iVar2 = iVar2 + 3;
        uVar6 = *param_2;
        param_1[1] = param_2[1];
        *param_1 = uVar6;
        param_2[1] = uVar7;
        *param_2 = uVar5;
      }
    }
  }
  uVar3 = FUN_008f3374(param_5,param_4);
  if ((uVar3 & 1) != 0) {
    uVar7 = param_4[1];
    uVar5 = *param_4;
    uVar6 = *param_5;
    param_4[1] = param_5[1];
    *param_4 = uVar6;
    param_5[1] = uVar7;
    *param_5 = uVar5;
    uVar3 = FUN_008f3374(param_4,param_3);
    if ((uVar3 & 1) == 0) {
      iVar2 = iVar2 + 1;
    }
    else {
      uVar7 = param_3[1];
      uVar5 = *param_3;
      uVar6 = *param_4;
      param_3[1] = param_4[1];
      *param_3 = uVar6;
      param_4[1] = uVar7;
      *param_4 = uVar5;
      uVar3 = FUN_008f3374(param_3,param_2);
      if ((uVar3 & 1) == 0) {
        iVar2 = iVar2 + 2;
      }
      else {
        uVar7 = param_2[1];
        uVar5 = *param_2;
        uVar6 = *param_3;
        param_2[1] = param_3[1];
        *param_2 = uVar6;
        param_3[1] = uVar7;
        *param_3 = uVar5;
        uVar3 = FUN_008f3374(param_2,param_1);
        if ((uVar3 & 1) == 0) {
          iVar2 = iVar2 + 3;
        }
        else {
          uVar7 = param_1[1];
          uVar5 = *param_1;
          iVar2 = iVar2 + 4;
          uVar6 = *param_2;
          param_1[1] = param_2[1];
          *param_1 = uVar6;
          param_2[1] = uVar7;
          *param_2 = uVar5;
        }
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

