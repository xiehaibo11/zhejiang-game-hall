
/* lua_cocos2dx_Animate_initWithAnimation(lua_State*) */

undefined8 lua_cocos2dx_Animate_initWithAnimation(lua_State *param_1)

{
  int iVar1;
  uint uVar2;
  Animate *this;
  ulong uVar3;
  Animation *pAVar4;
  
  this = (Animate *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 1) {
    if (((param_1 != (lua_State *)0x0) && (iVar1 = lua_gettop(param_1), 1 < iVar1)) &&
       (uVar3 = luaval_is_usertype(param_1,2,"cc.Animation",0), (uVar3 & 1) != 0)) {
      pAVar4 = (Animation *)tolua_tousertype(param_1,2,0);
      uVar2 = cocos2d::Animate::initWithAnimation(this,pAVar4);
      tolua_pushboolean(param_1,uVar2 & 1);
      return 1;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_Animate_initWithAnimation\'",0
               );
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Animate:initWithAnimation",iVar1 + -1,1);
  }
  return 0;
}

