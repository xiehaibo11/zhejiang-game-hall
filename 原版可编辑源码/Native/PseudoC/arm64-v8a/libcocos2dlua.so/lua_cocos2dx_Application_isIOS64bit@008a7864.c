
/* lua_cocos2dx_Application_isIOS64bit(lua_State*) */

bool lua_cocos2dx_Application_isIOS64bit(lua_State *param_1)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  
  tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    plVar3 = (long *)cocos2d::Application::getInstance();
    uVar2 = (**(code **)(*plVar3 + 0x48))();
    tolua_pushboolean(param_1,(uVar2 | 1) == 5);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Application:isIOS64bit",iVar1,0);
  }
  return iVar1 == 0;
}

