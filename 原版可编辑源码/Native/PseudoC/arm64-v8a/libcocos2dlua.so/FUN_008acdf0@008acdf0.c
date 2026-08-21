
undefined8 FUN_008acdf0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != 0) {
    uVar2 = tolua_tousertype(param_1,1,0);
    iVar1 = lua_gettop(param_1);
    if (iVar1 + -1 == 1) {
      iVar1 = tolua_toboolean(param_1,2,0);
      FUN_008adea4(uVar2,iVar1 != 0);
    }
    else {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n",
                 "cc.Layer:setTouchEnabled",iVar1 + -1,1);
    }
  }
  return 0;
}

