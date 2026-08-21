
bool FUN_008f4c3c(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
                    /* try { // try from 008f4c90 to 009f4cdf has its CatchHandler @ 008f4c90
                       catch() { ... } // from try @ 008f4c90 with catch @ 008f4c90
                       catch() { ... } // from try @ 008f4d3c with catch @ 008f4c90
                       catch() { ... } // from try @ 008f4d78 with catch @ 008f4c90 */
    tolua_pushnumber((double)*(float *)(lVar2 + 0x5c),param_1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.ScrollPane:getPosX",iVar1,0);
  }
  return iVar1 == 0;
}

