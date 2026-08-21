
bool FUN_008e2994(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  
                    /* try { // try from 008e29a8 to 009e29bf has its CatchHandler @ 008e2efc */
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    tolua_pushnumber((double)(long)*(int *)(lVar2 + 0x2f0),param_1);
  }
  else {
                    /* try { // try from 008e29d0 to 009e29fb has its CatchHandler @ 008e2ef8 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GList:getLineGap",iVar1,0);
  }
  return iVar1 == 0;
}

