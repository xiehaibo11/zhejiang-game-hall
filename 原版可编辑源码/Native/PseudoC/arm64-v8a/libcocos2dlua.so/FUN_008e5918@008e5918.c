
bool FUN_008e5918(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  
                    /* try { // try from 008e5918 to 009e59b3 has its CatchHandler @ 008e57fc */
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    tolua_pushnumber((double)(long)*(int *)(lVar2 + 0x1e4),param_1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GGroup:getColumnGap",iVar1,0);
                    /* catch() { ... } // from try @ 008e58cc with catch @ 008e5964 */
                    /* catch() { ... } // from try @ 008e58e4 with catch @ 008e5968 */
  }
  return iVar1 == 0;
}

