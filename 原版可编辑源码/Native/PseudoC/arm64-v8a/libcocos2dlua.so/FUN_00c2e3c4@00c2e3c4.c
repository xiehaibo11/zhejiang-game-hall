
undefined8 FUN_00c2e3c4(long param_1)

{
  undefined4 uVar1;
  
  FUN_00c29e20(param_1,1);
  uVar1 = FUN_00c1c99c();
  lua_settop(param_1,2);
  if (*(long *)(*(long *)(param_1 + 0x20) + 8) != -1) {
    FUN_00c29dd4(param_1,2);
  }
  FUN_00c2e10c(param_1,1,uVar1);
  return 0;
}

