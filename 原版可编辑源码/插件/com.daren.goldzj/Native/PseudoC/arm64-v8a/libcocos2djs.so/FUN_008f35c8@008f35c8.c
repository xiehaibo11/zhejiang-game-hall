
void FUN_008f35c8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar1 = tpidr_el0;
  lVar5 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_008f3374(param_2,param_1);
  uVar3 = FUN_008f3374(param_3,param_2);
  if ((uVar2 & 1) == 0) {
    if ((uVar3 & 1) == 0) {
      uVar4 = 0;
      goto LAB_008f36d8;
    }
    uVar7 = param_2[1];
    uVar4 = *param_2;
    uVar6 = *param_3;
    param_2[1] = param_3[1];
    *param_2 = uVar6;
    param_3[1] = uVar7;
    *param_3 = uVar4;
    uVar2 = FUN_008f3374(param_2,param_1);
    if ((uVar2 & 1) == 0) goto LAB_008f36d4;
    uVar7 = param_1[1];
    uVar4 = *param_1;
    uVar6 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar6;
    param_2[1] = uVar7;
    *param_2 = uVar4;
  }
  else {
    if ((uVar3 & 1) != 0) {
      uVar8 = param_1[1];
      uVar6 = *param_1;
      uVar4 = 1;
      uVar7 = *param_3;
      param_1[1] = param_3[1];
      *param_1 = uVar7;
      param_3[1] = uVar8;
      *param_3 = uVar6;
      goto LAB_008f36d8;
    }
    uVar7 = param_1[1];
    uVar4 = *param_1;
    uVar6 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar6;
    param_2[1] = uVar7;
    *param_2 = uVar4;
    uVar2 = FUN_008f3374(param_3,param_2);
    if ((uVar2 & 1) == 0) {
LAB_008f36d4:
      uVar4 = 1;
      goto LAB_008f36d8;
    }
    uVar7 = param_2[1];
    uVar4 = *param_2;
    uVar6 = *param_3;
    param_2[1] = param_3[1];
    *param_2 = uVar6;
    param_3[1] = uVar7;
    *param_3 = uVar4;
  }
  uVar4 = 2;
LAB_008f36d8:
  if (*(long *)(lVar1 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

