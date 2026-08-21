
/* lua_cocos2dx_Application_getInstance(lua_State*) */

undefined8 lua_cocos2dx_Application_getInstance(lua_State *param_1)

{
  int iVar1;
  undefined8 uVar2;
  Application *pAVar3;
  char *pcVar4;
  
  iVar1 = lua_gettop();
  if (iVar1 + -1 == 0) {
    pAVar3 = (Application *)cocos2d::Application::getInstance();
    if (pAVar3 == (Application *)0x0) {
      lua_pushnil(param_1);
    }
    else {
      pcVar4 = getLuaTypeName<cocos2d::Application>(pAVar3,"cc.Application");
      tolua_pushusertype(param_1,pAVar3,pcVar4);
    }
    uVar2 = 1;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "cc.Application:getInstance",iVar1 + -1,0);
    uVar2 = 0;
  }
  return uVar2;
}

