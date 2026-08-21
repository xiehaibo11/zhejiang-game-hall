
undefined8 FUN_00c32208(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  FUN_00c29a84(param_1,3);
  uVar1 = FUN_00c29cf0(param_1,2);
  FUN_00c29dd4(param_1,1);
  lVar2 = lua_setupvalue(param_1,1,uVar1);
  if (lVar2 != 0) {
    lua_pushstring(param_1,lVar2);
    return 1;
  }
  return 0;
}

