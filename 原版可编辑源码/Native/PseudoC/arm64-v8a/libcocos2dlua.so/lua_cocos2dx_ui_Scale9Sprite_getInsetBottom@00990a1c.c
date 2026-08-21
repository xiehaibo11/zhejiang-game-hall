
/* lua_cocos2dx_ui_Scale9Sprite_getInsetBottom(lua_State*) */

bool lua_cocos2dx_ui_Scale9Sprite_getInsetBottom(lua_State *param_1)

{
  int iVar1;
  Scale9Sprite *this;
  float fVar2;
  
  this = (Scale9Sprite *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    fVar2 = (float)cocos2d::ui::Scale9Sprite::getInsetBottom(this);
    tolua_pushnumber((double)fVar2,param_1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.Scale9Sprite:getInsetBottom",iVar1,0);
  }
  return iVar1 == 0;
}

