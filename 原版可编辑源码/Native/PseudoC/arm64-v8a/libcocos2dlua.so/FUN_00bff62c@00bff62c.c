
undefined8 * FUN_00bff62c(undefined8 *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  if ((uint)((int)param_1[1] - (int)uVar1) < 0xb) {
    uVar1 = FUN_00c1a4a8(param_1,0xb);
  }
  uVar1 = FUN_00bff3ac(uVar1,param_2);
  *param_1 = uVar1;
  return param_1;
}

