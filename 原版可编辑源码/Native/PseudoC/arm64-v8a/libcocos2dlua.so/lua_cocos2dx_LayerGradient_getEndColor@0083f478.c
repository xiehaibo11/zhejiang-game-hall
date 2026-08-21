
/* lua_cocos2dx_LayerGradient_getEndColor(lua_State*) */

bool lua_cocos2dx_LayerGradient_getEndColor(lua_State *param_1)

{
  int iVar1;
  LayerGradient *this;
  Color3B *pCVar2;
  
  this = (LayerGradient *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    pCVar2 = (Color3B *)cocos2d::LayerGradient::getEndColor(this);
    color3b_to_luaval(param_1,pCVar2);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.LayerGradient:getEndColor",iVar1,0);
  }
  return iVar1 == 0;
}

