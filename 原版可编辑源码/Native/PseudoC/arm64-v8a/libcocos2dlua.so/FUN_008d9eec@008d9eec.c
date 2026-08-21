
bool FUN_008d9eec(lua_State *param_1)

{
  int iVar1;
  long lVar2;
  
                    /* try { // try from 008d9eec to 009d9f0f has its CatchHandler @ 008da05c */
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    ccvalue_to_luaval(param_1,(Value *)(lVar2 + 0x198));
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GObject:getCustomData",iVar1,0);
  }
  return iVar1 == 0;
}

