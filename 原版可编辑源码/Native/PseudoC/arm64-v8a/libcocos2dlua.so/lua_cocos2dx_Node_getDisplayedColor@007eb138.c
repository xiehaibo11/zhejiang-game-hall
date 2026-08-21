
/* lua_cocos2dx_Node_getDisplayedColor(lua_State*) */

bool lua_cocos2dx_Node_getDisplayedColor(lua_State *param_1)

{
  int iVar1;
  long *plVar2;
  Color3B *pCVar3;
  
  plVar2 = (long *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    pCVar3 = (Color3B *)(**(code **)(*plVar2 + 0x4b8))(plVar2);
    color3b_to_luaval(param_1,pCVar3);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Node:getDisplayedColor",iVar1,0);
  }
  return iVar1 == 0;
}

