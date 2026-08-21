
/* lua_cocos2dx_extension_ControlButton_doesAdjustBackgroundImage(lua_State*) */

bool lua_cocos2dx_extension_ControlButton_doesAdjustBackgroundImage(lua_State *param_1)

{
  int iVar1;
  uint uVar2;
  ControlButton *this;
  
  this = (ControlButton *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    uVar2 = cocos2d::extension::ControlButton::doesAdjustBackgroundImage(this);
    tolua_pushboolean(param_1,uVar2 & 1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.ControlButton:doesAdjustBackgroundImage",iVar1,0);
  }
  return iVar1 == 0;
}

