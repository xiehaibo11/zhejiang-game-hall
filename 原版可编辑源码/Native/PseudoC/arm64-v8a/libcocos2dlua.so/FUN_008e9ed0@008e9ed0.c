
bool FUN_008e9ed0(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    tolua_pushboolean(param_1,*(int *)(lVar2 + 0x1d8) == 0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GGraph:isEmpty",iVar1,0);
  }
  return iVar1 == 0;
}

