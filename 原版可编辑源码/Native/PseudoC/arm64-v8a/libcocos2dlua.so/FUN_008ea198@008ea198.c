
undefined8 FUN_008ea198(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = tolua_tousertype(param_1,1,0);
                    /* catch() { ... } // from try @ 008ea110 with catch @ 008ea1c4
                       catch() { ... } // from try @ 008ea178 with catch @ 008ea1c4 */
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 0) {
    *(undefined1 *)(lVar2 + 0x29) = 1;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.EventContext:preventDefault",iVar1 + -1,0);
  }
  return 0;
}

