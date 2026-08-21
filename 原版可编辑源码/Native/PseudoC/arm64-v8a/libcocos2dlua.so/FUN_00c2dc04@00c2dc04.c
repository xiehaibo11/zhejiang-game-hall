
undefined8 FUN_00c2dc04(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00c29cf0(param_1,1);
  uVar2 = FUN_00c29cf0(param_1,2);
  lua_createtable(param_1,uVar1,uVar2);
  return 1;
}

