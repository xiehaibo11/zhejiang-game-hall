
/* lua_cocos2dx_experimental_TMXLayer_getProperties(lua_State*) */

bool lua_cocos2dx_experimental_TMXLayer_getProperties(lua_State *param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    ccvaluemap_to_luaval(param_1,(unordered_map *)(lVar2 + 0x338));
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccexp.TMXLayer:getProperties",iVar1,0);
  }
  return iVar1 == 0;
}

