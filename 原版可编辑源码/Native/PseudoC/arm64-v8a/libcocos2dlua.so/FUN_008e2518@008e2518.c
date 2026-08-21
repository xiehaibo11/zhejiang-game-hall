
bool FUN_008e2518(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  
                    /* try { // try from 008e2528 to 009e2543 has its CatchHandler @ 008e2fc8 */
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    tolua_pushboolean(param_1,*(undefined1 *)(lVar2 + 0x338));
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GList:isVirtual",iVar1,0);
  }
                    /* try { // try from 008e2580 to 009e25b3 has its CatchHandler @ 008e2fa8 */
  return iVar1 == 0;
}

