
/* lua_cocos2dx_Application_getCurrentLanguageCode(lua_State*) */

bool lua_cocos2dx_Application_getCurrentLanguageCode(lua_State *param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  
  plVar2 = (long *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    uVar3 = (**(code **)(*plVar2 + 0x40))(plVar2);
    tolua_pushstring(param_1,uVar3);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Application:getCurrentLanguageCode",iVar1,0);
  }
  return iVar1 == 0;
}

