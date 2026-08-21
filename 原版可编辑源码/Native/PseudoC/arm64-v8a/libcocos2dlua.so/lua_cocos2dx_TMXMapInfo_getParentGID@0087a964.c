
/* lua_cocos2dx_TMXMapInfo_getParentGID(lua_State*) */

bool lua_cocos2dx_TMXMapInfo_getParentGID(lua_State *param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    tolua_pushnumber((double)(long)*(int *)(lVar2 + 0x9c),param_1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.TMXMapInfo:getParentGID",iVar1,0);
  }
  return iVar1 == 0;
}

