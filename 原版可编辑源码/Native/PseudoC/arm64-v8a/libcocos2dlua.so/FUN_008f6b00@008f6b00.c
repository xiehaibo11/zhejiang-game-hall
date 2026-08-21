
bool FUN_008f6b00(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
                    /* try { // try from 008f6b28 to 009f6b33 has its CatchHandler @ 008f6b6c */
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    tolua_pushboolean(param_1,*(undefined1 *)(lVar2 + 0x40));
  }
  else {
                    /* try { // try from 008f6b34 to 009f6bd7 has its CatchHandler @ 008f6a18 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.ScrollPane:isBouncebackEffect",iVar1,0);
  }
                    /* catch() { ... } // from try @ 008f6b28 with catch @ 008f6b6c */
  return iVar1 == 0;
}

