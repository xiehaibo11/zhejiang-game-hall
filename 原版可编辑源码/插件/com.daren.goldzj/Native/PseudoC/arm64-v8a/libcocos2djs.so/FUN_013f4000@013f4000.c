
void FUN_013f4000(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long unaff_x26;
  
  if ((int)param_4 == (int)*(undefined8 *)(unaff_x26 + 0xa0)) {
    uVar1 = FUN_013c0ba0(param_1,*(undefined8 *)(unaff_x26 + 0xc18));
  }
  else {
    uVar1 = FUN_0137ba00(param_2,param_1,*(undefined8 *)(unaff_x26 + 0xc18));
  }
  FUN_013f40e0(param_1,uVar1,param_3,param_4);
  return;
}

