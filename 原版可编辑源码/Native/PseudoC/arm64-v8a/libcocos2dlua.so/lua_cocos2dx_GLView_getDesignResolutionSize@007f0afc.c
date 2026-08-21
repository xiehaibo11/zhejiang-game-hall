
/* lua_cocos2dx_GLView_getDesignResolutionSize(lua_State*) */

bool lua_cocos2dx_GLView_getDesignResolutionSize(lua_State *param_1)

{
  int iVar1;
  long *plVar2;
  Size *pSVar3;
  
  plVar2 = (long *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    pSVar3 = (Size *)(**(code **)(*plVar2 + 200))(plVar2);
    size_to_luaval(param_1,pSVar3);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.GLView:getDesignResolutionSize",iVar1,0);
  }
  return iVar1 == 0;
}

