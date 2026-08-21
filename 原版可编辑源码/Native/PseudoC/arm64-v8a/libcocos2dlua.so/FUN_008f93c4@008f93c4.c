
bool FUN_008f93c4(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    lua_pushinteger(param_1,(long)*(int *)(lVar2 + 0x3f0));
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GTree:getClickToExpand",iVar1,0);
  }
  return iVar1 == 0;
}

