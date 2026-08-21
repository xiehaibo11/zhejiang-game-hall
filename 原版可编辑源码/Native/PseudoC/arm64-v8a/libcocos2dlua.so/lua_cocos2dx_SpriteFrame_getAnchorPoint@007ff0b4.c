
/* lua_cocos2dx_SpriteFrame_getAnchorPoint(lua_State*) */

bool lua_cocos2dx_SpriteFrame_getAnchorPoint(lua_State *param_1)

{
  int iVar1;
  SpriteFrame *this;
  Vec2 *pVVar2;
  
  this = (SpriteFrame *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    pVVar2 = (Vec2 *)cocos2d::SpriteFrame::getAnchorPoint(this);
    vec2_to_luaval(param_1,pVVar2);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.SpriteFrame:getAnchorPoint",iVar1,0);
  }
  return iVar1 == 0;
}

