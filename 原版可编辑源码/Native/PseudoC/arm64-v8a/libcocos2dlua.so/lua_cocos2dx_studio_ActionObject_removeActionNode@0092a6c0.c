
/* lua_cocos2dx_studio_ActionObject_removeActionNode(lua_State*) */

undefined4 lua_cocos2dx_studio_ActionObject_removeActionNode(lua_State *param_1)

{
  int iVar1;
  ActionObject *this;
  ulong uVar2;
  ActionNode *pAVar3;
  
  this = (ActionObject *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 1) {
    if (((param_1 != (lua_State *)0x0) && (iVar1 = lua_gettop(param_1), 1 < iVar1)) &&
       (uVar2 = luaval_is_usertype(param_1,2,"ccs.ActionNode",0), (uVar2 & 1) != 0)) {
      pAVar3 = (ActionNode *)tolua_tousertype(param_1,2,0);
      cocostudio::ActionObject::removeActionNode(this,pAVar3);
      lua_settop(param_1,1);
      return 1;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_studio_ActionObject_removeActionNode\'"
                ,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.ActionObject:removeActionNode",iVar1 + -1,1);
  }
  return 0;
}

