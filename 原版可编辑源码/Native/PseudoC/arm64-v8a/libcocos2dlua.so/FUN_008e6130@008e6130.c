
bool FUN_008e6130(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  
                    /* try { // try from 008e6138 to 009e62c7 has its CatchHandler @ 008e6138
                       catch() { ... } // from try @ 008e6138 with catch @ 008e6138
                       catch() { ... } // from try @ 008e6348 with catch @ 008e6138 */
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    lua_pushboolean(param_1,*(undefined1 *)(lVar2 + 0x1e9));
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GGroup:isAutoSizeDisabled",iVar1,0);
  }
  return iVar1 == 0;
}

