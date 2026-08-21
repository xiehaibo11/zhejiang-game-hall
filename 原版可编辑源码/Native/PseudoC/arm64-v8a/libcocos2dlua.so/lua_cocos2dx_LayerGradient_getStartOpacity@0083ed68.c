
/* lua_cocos2dx_LayerGradient_getStartOpacity(lua_State*) */

bool lua_cocos2dx_LayerGradient_getStartOpacity(lua_State *param_1)

{
  byte bVar1;
  int iVar2;
  LayerGradient *this;
  
  this = (LayerGradient *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  iVar2 = iVar2 + -1;
  if (iVar2 == 0) {
    bVar1 = cocos2d::LayerGradient::getStartOpacity(this);
    tolua_pushnumber((double)bVar1,param_1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.LayerGradient:getStartOpacity",iVar2,0);
  }
  return iVar2 == 0;
}

