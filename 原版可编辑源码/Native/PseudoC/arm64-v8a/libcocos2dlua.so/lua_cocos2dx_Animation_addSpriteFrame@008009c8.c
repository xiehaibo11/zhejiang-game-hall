
/* lua_cocos2dx_Animation_addSpriteFrame(lua_State*) */

undefined4 lua_cocos2dx_Animation_addSpriteFrame(lua_State *param_1)

{
  int iVar1;
  Animation *this;
  ulong uVar2;
  SpriteFrame *pSVar3;
  
  this = (Animation *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 1) {
    if (((param_1 != (lua_State *)0x0) && (iVar1 = lua_gettop(param_1), 1 < iVar1)) &&
       (uVar2 = luaval_is_usertype(param_1,2,"cc.SpriteFrame",0), (uVar2 & 1) != 0)) {
      pSVar3 = (SpriteFrame *)tolua_tousertype(param_1,2,0);
      cocos2d::Animation::addSpriteFrame(this,pSVar3);
      lua_settop(param_1,1);
      return 1;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_Animation_addSpriteFrame\'",0)
    ;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Animation:addSpriteFrame",iVar1 + -1,1);
  }
  return 0;
}

