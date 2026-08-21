
/* lua_cocos2dx_extension_ControlPotentiometer_getMaximumValue(lua_State*) */

bool lua_cocos2dx_extension_ControlPotentiometer_getMaximumValue(lua_State *param_1)

{
  int iVar1;
  ControlPotentiometer *this;
  float fVar2;
  
  this = (ControlPotentiometer *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    fVar2 = (float)cocos2d::extension::ControlPotentiometer::getMaximumValue(this);
    tolua_pushnumber((double)fVar2,param_1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.ControlPotentiometer:getMaximumValue",iVar1,0);
  }
  return iVar1 == 0;
}

