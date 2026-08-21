
/* lua_cocos2dx_Sprite_isFlippedX(lua_State*) */

bool lua_cocos2dx_Sprite_isFlippedX(lua_State *param_1)

{
  int iVar1;
  uint uVar2;
  Sprite *this;
  
  this = (Sprite *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    uVar2 = cocos2d::Sprite::isFlippedX(this);
    tolua_pushboolean(param_1,uVar2 & 1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Sprite:isFlippedX",iVar1,0);
  }
  return iVar1 == 0;
}

