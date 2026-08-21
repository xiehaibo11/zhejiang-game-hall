
/* lua_cocos2dx_studio_BoneNode_getBlendFunc(lua_State*) */

bool lua_cocos2dx_studio_BoneNode_getBlendFunc(lua_State *param_1)

{
  int iVar1;
  long *plVar2;
  BlendFunc *pBVar3;
  
  plVar2 = (long *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    pBVar3 = (BlendFunc *)(**(code **)(*plVar2 + 0x588))(plVar2);
    blendfunc_to_luaval(param_1,pBVar3);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.BoneNode:getBlendFunc",iVar1,0);
  }
  return iVar1 == 0;
}

