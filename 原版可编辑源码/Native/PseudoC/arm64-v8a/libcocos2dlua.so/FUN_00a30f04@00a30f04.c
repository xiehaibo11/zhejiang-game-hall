
void FUN_00a30f04(long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined4 extraout_w1;
  undefined4 extraout_w1_00;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  
  uVar1 = FUN_00a2e828();
  switch(param_2) {
  case 1:
    *(undefined8 *)(param_1 + 0x9e8) = uVar1;
    *(ulong *)(param_1 + 0x9f0) = CONCAT44(extraout_var,extraout_w1);
    break;
  case 2:
    *(undefined8 *)(param_1 + 0x9d8) = uVar1;
    *(ulong *)(param_1 + 0x9e0) = CONCAT44(extraout_var,extraout_w1);
    break;
  case 3:
    uVar1 = FUN_00a2e8b8(uVar1,extraout_w1,*(undefined8 *)(param_1 + 0x9d8),
                         *(undefined8 *)(param_1 + 0x9e0));
    *(undefined8 *)(param_1 + 0x998) = uVar1;
    break;
  case 4:
    uVar1 = FUN_00a2e8b8(uVar1,extraout_w1,*(undefined8 *)(param_1 + 0x9d8),
                         *(undefined8 *)(param_1 + 0x9e0));
    *(undefined8 *)(param_1 + 0x9a0) = uVar1;
    break;
  case 5:
    uVar1 = FUN_00a2e8b8(uVar1,extraout_w1,*(undefined8 *)(param_1 + 0x9d8),
                         *(undefined8 *)(param_1 + 0x9e0));
    *(undefined8 *)(param_1 + 0x9a8) = uVar1;
    break;
  case 6:
    uVar1 = FUN_00a2e8b8(uVar1,extraout_w1,*(undefined8 *)(param_1 + 0x9d8),
                         *(undefined8 *)(param_1 + 0x9e0));
    *(undefined8 *)(param_1 + 0x9b0) = uVar1;
    break;
  case 7:
    uVar1 = FUN_00a2e8b8(uVar1,extraout_w1,*(undefined8 *)(param_1 + 0x9d8),
                         *(undefined8 *)(param_1 + 0x9e0));
    *(undefined8 *)(param_1 + 0x9b8) = uVar1;
    break;
  case 9:
    uVar1 = FUN_00a2e828();
    *(undefined8 *)(param_1 + 0x9f8) = uVar1;
    *(ulong *)(param_1 + 0xa00) = CONCAT44(extraout_var_00,extraout_w1_00);
    break;
  case 10:
    uVar1 = FUN_00a2e8b8(uVar1,extraout_w1,*(undefined8 *)(param_1 + 0x9c8),
                         *(undefined8 *)(param_1 + 0x9d0));
    *(undefined8 *)(param_1 + 0x9c0) = uVar1;
  }
  return;
}

