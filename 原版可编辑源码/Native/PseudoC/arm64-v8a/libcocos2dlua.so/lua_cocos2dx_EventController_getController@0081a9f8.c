
/* lua_cocos2dx_EventController_getController(lua_State*) */

undefined8 lua_cocos2dx_EventController_getController(lua_State *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  char *pcVar4;
  Controller *pCVar5;
  
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 0) {
    pCVar5 = *(Controller **)(lVar2 + 0x40);
    if (pCVar5 == (Controller *)0x0) {
      lua_pushnil(param_1);
    }
    else {
      pcVar4 = getLuaTypeName<cocos2d::Controller>(pCVar5,"cc.Controller");
      tolua_pushusertype(param_1,pCVar5,pcVar4);
    }
    uVar3 = 1;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.EventController:getController",iVar1 + -1,0);
    uVar3 = 0;
  }
  return uVar3;
}

