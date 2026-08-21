
bool FUN_008ed2e0(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    tolua_pushnumber((double)(int)*(float *)(lVar2 + 0x10),param_1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.InputEvent:getX",iVar1,0);
  }
                    /* try { // try from 008ed354 to 009ed40b has its CatchHandler @ 008ed354
                       catch() { ... } // from try @ 008ed354 with catch @ 008ed354
                       catch() { ... } // from try @ 008ed470 with catch @ 008ed354 */
  return iVar1 == 0;
}

