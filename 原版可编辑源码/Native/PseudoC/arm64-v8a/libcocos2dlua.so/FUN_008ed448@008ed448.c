
bool FUN_008ed448(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
                    /* try { // try from 008ed470 to 009ed4fb has its CatchHandler @ 008ed354 */
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    tolua_pushboolean(param_1,*(ushort *)(lVar2 + 0x2c) >> 2 & 1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.InputEvent:isShiftDown",iVar1,0);
  }
  return iVar1 == 0;
}

