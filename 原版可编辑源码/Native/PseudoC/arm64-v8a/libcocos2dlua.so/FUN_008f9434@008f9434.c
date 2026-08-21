
undefined8 FUN_008f9434(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  
  lVar3 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 1) {
    uVar2 = lua_tointeger(param_1,2);
    *(undefined4 *)(lVar3 + 0x3f0) = uVar2;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GTree:setClickToExpand",iVar1 + -1,1);
  }
  return 0;
}

