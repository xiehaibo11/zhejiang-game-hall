
/* lua_cocos2dx_Sprite_isFrameDisplayed(lua_State*) */

undefined8 lua_cocos2dx_Sprite_isFrameDisplayed(lua_State *param_1)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 1) {
    if (((param_1 != (lua_State *)0x0) && (iVar1 = lua_gettop(param_1), 1 < iVar1)) &&
       (uVar4 = luaval_is_usertype(param_1,2,"cc.SpriteFrame",0), (uVar4 & 1) != 0)) {
      uVar5 = tolua_tousertype(param_1,2,0);
      uVar2 = (**(code **)(*plVar3 + 0x5a8))(plVar3,uVar5);
      tolua_pushboolean(param_1,uVar2 & 1);
      return 1;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_Sprite_isFrameDisplayed\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Sprite:isFrameDisplayed",iVar1 + -1,1);
  }
  return 0;
}

