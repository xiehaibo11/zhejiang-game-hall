
/* lua_cocos2dx_TMXLayerInfo_getProperties(lua_State*) */

bool lua_cocos2dx_TMXLayerInfo_getProperties(lua_State *param_1)

{
  int iVar1;
  TMXLayerInfo *this;
  unordered_map *puVar2;
  
  this = (TMXLayerInfo *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    puVar2 = (unordered_map *)cocos2d::TMXLayerInfo::getProperties(this);
    ccvaluemap_to_luaval(param_1,puVar2);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.TMXLayerInfo:getProperties",iVar1,0);
  }
  return iVar1 == 0;
}

