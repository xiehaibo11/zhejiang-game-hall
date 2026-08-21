
undefined8 FUN_00a6a754(undefined8 param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    uVar1 = FUN_00a24258(&DAT_013cc03f,param_1,param_2,param_3);
    return uVar1;
  }
  if (param_2 != 0) {
    uVar1 = FUN_00a24258("%s/%s",param_1,param_2);
    return uVar1;
  }
  if (param_3 != 0) {
    uVar1 = FUN_00a24258("%s@%s",param_1,param_3);
    return uVar1;
  }
  return 0;
}

