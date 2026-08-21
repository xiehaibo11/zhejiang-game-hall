
bool FUN_008e76c4(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    lua_pushinteger(param_1,(long)*(int *)(lVar2 + 500));
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GTextField:getAutoSize",iVar1,0);
  }
  return iVar1 == 0;
}

