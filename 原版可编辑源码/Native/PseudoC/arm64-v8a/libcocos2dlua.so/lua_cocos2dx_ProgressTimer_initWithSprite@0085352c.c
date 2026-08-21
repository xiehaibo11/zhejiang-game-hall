
/* lua_cocos2dx_ProgressTimer_initWithSprite(lua_State*) */

undefined8 lua_cocos2dx_ProgressTimer_initWithSprite(lua_State *param_1)

{
  int iVar1;
  uint uVar2;
  ProgressTimer *this;
  ulong uVar3;
  Sprite *pSVar4;
  
  this = (ProgressTimer *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 1) {
    if (((param_1 != (lua_State *)0x0) && (iVar1 = lua_gettop(param_1), 1 < iVar1)) &&
       (uVar3 = luaval_is_usertype(param_1,2,"cc.Sprite",0), (uVar3 & 1) != 0)) {
      pSVar4 = (Sprite *)tolua_tousertype(param_1,2,0);
      uVar2 = cocos2d::ProgressTimer::initWithSprite(this,pSVar4);
      tolua_pushboolean(param_1,uVar2 & 1);
      return 1;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_ProgressTimer_initWithSprite\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.ProgressTimer:initWithSprite",iVar1 + -1,1);
  }
  return 0;
}

