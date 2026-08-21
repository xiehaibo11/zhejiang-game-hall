
/* lua_cocos2dx_studio_Timeline_getFrames(lua_State*) */

bool lua_cocos2dx_studio_Timeline_getFrames(lua_State *param_1)

{
  int iVar1;
  long *plVar2;
  Vector *pVVar3;
  
  plVar2 = (long *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    pVVar3 = (Vector *)(**(code **)(*plVar2 + 0x20))(plVar2);
    ccvector_to_luaval<cocostudio::timeline::Frame*>(param_1,pVVar3);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.Timeline:getFrames",iVar1,0);
  }
  return iVar1 == 0;
}

