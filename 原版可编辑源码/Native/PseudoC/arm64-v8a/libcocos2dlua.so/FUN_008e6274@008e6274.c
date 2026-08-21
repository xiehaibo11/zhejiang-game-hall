
bool FUN_008e6274(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
                    /* try { // try from 008e62c8 to 009e62fb has its CatchHandler @ 008e63c8 */
    lua_pushinteger(param_1,(long)*(int *)(lVar2 + 0x1ec));
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GGroup:getMainGridIndex",iVar1,0);
  }
  return iVar1 == 0;
}

