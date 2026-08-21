
bool FUN_008d9b2c(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  
                    /* catch() { ... } // from try @ 008d9854 with catch @ 008d9b3c */
                    /* catch() { ... } // from try @ 008d99a8 with catch @ 008d9b40 */
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    tolua_pushnumber((double)*(float *)(lVar2 + 200),param_1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GObject:getWidth",iVar1,0);
  }
                    /* catch() { ... } // from try @ 008d9840 with catch @ 008d9b94 */
  return iVar1 == 0;
}

