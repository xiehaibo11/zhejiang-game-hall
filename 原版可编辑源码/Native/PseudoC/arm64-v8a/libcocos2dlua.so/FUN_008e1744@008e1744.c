
bool FUN_008e1744(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  
                    /* catch() { ... } // from try @ 008e168c with catch @ 008e1748
                       catch() { ... } // from try @ 008e16f4 with catch @ 008e1748 */
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    tolua_pushnumber((double)(long)*(int *)(lVar2 + 0x2ec),param_1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GList:getColumnCount",iVar1,0);
  }
  return iVar1 == 0;
}

