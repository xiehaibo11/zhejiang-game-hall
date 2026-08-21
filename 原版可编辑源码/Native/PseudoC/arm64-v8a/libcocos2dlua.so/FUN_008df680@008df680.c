
bool FUN_008df680(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
                    /* try { // try from 008df6e0 to 009df6eb has its CatchHandler @ 008df794 */
    tolua_pushnumber((double)(long)*(int *)(lVar2 + 0x254),param_1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GComponent:getApexIndex",iVar1,0);
  }
  return iVar1 == 0;
}

