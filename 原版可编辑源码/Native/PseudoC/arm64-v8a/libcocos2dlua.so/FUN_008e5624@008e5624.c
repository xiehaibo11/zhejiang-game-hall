
bool FUN_008e5624(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  
                    /* try { // try from 008e5638 to 009e56d3 has its CatchHandler @ 008e54ec */
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    tolua_pushboolean(param_1,*(undefined1 *)(lVar2 + 0x34c));
                    /* catch() { ... } // from try @ 008e55ec with catch @ 008e5684 */
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GButton:isChangeStateOnClick",iVar1,0);
  }
                    /* catch() { ... } // from try @ 008e5604 with catch @ 008e5688 */
  return iVar1 == 0;
}

