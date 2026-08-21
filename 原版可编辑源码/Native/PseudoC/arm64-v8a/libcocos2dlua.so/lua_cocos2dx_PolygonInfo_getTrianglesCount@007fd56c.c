
/* lua_cocos2dx_PolygonInfo_getTrianglesCount(lua_State*) */

bool lua_cocos2dx_PolygonInfo_getTrianglesCount(lua_State *param_1)

{
  int iVar1;
  uint uVar2;
  PolygonInfo *this;
  
  this = (PolygonInfo *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    uVar2 = cocos2d::PolygonInfo::getTrianglesCount(this);
    tolua_pushnumber((double)uVar2,param_1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.PolygonInfo:getTrianglesCount",iVar1,0);
  }
  return iVar1 == 0;
}

