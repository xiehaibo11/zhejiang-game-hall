
/* lua_cocos2dx_LayerRadialGradient_getRadius(lua_State*) */

bool lua_cocos2dx_LayerRadialGradient_getRadius(lua_State *param_1)

{
  int iVar1;
  LayerRadialGradient *this;
  float fVar2;
  
  this = (LayerRadialGradient *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    fVar2 = (float)cocos2d::LayerRadialGradient::getRadius(this);
    tolua_pushnumber((double)fVar2,param_1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.LayerRadialGradient:getRadius",iVar1,0);
  }
  return iVar1 == 0;
}

