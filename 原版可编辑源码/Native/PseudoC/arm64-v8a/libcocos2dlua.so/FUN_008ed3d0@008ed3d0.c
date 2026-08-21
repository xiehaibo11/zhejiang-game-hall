
bool FUN_008ed3d0(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
                    /* try { // try from 008ed428 to 009ed46f has its CatchHandler @ 008ed4e4 */
    tolua_pushnumber((double)(long)*(int *)(lVar2 + 0x20),param_1);
  }
  else {
                    /* try { // try from 008ed40c to 009ed423 has its CatchHandler @ 008ed4e8 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.InputEvent:getMouseWheelDelta",iVar1,0);
  }
  return iVar1 == 0;
}

