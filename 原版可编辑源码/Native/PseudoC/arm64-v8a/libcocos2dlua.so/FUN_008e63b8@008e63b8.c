
bool FUN_008e63b8(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  
                    /* catch() { ... } // from try @ 008e62c8 with catch @ 008e63c8 */
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
                    /* try { // try from 008e63e4 to 009e663f has its CatchHandler @ 008e63e4
                       catch() { ... } // from try @ 008e63e4 with catch @ 008e63e4
                       catch() { ... } // from try @ 008e6688 with catch @ 008e63e4 */
  if (iVar1 == 0) {
    lua_pushinteger(param_1,(long)*(int *)(lVar2 + 0x1f0));
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GGroup:getMainGridMinSize",iVar1,0);
  }
  return iVar1 == 0;
}

