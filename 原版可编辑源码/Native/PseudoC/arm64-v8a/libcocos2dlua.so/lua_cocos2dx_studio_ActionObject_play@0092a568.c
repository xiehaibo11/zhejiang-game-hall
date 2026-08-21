
/* lua_cocos2dx_studio_ActionObject_play(lua_State*) */

undefined4 lua_cocos2dx_studio_ActionObject_play(lua_State *param_1)

{
  int iVar1;
  int iVar2;
  ActionObject *this;
  ulong uVar3;
  CallFunc *pCVar4;
  
  this = (ActionObject *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 0) {
    cocostudio::ActionObject::play(this);
  }
  else {
    if ((((iVar1 != 2) || (param_1 == (lua_State *)0x0)) || (iVar2 = lua_gettop(param_1), iVar2 < 2)
        ) || (uVar3 = luaval_is_usertype(param_1,2,"cc.CallFunc",0), (uVar3 & 1) == 0)) {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                 "ccs.ActionObject:play",iVar1 + -1,0);
      return 0;
    }
    pCVar4 = (CallFunc *)tolua_tousertype(param_1,2,0);
    cocostudio::ActionObject::play(this,pCVar4);
  }
  lua_settop(param_1,1);
  return 1;
}

