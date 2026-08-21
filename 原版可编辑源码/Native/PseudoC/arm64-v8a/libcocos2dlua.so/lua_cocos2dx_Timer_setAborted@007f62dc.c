
/* lua_cocos2dx_Timer_setAborted(lua_State*) */

bool lua_cocos2dx_Timer_setAborted(lua_State *param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    *(undefined1 *)(lVar2 + 0x48) = 1;
    lua_settop(param_1,1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Timer:setAborted",iVar1,0);
  }
  return iVar1 == 0;
}

