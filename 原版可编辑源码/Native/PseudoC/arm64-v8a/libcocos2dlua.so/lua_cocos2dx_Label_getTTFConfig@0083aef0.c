
/* lua_cocos2dx_Label_getTTFConfig(lua_State*) */

bool lua_cocos2dx_Label_getTTFConfig(lua_State *param_1)

{
  int iVar1;
  long *plVar2;
  _ttfConfig *p_Var3;
  
  plVar2 = (long *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    p_Var3 = (_ttfConfig *)(**(code **)(*plVar2 + 0x538))(plVar2);
    ttfconfig_to_luaval(param_1,p_Var3);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Label:getTTFConfig",iVar1,0);
  }
  return iVar1 == 0;
}

