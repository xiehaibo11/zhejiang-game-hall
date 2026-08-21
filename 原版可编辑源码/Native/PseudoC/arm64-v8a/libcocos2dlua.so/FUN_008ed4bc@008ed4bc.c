
bool FUN_008ed4bc(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
                    /* catch() { ... } // from try @ 008ed428 with catch @ 008ed4e4 */
  iVar1 = iVar1 + -1;
                    /* catch() { ... } // from try @ 008ed40c with catch @ 008ed4e8 */
  if (iVar1 == 0) {
    tolua_pushboolean(param_1,*(ushort *)(lVar2 + 0x2c) & 1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.InputEvent:isCtrlDown",iVar1,0);
  }
  return iVar1 == 0;
}

