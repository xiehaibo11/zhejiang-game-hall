
/* lua_cocos2dx_Node_getParentToNodeTransform(lua_State*) */

bool lua_cocos2dx_Node_getParentToNodeTransform(lua_State *param_1)

{
  int iVar1;
  long *plVar2;
  Mat4 *pMVar3;
  
  plVar2 = (long *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    pMVar3 = (Mat4 *)(**(code **)(*plVar2 + 0x418))(plVar2);
    mat4_to_luaval(param_1,pMVar3);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Node:getParentToNodeTransform",iVar1,0);
  }
  return iVar1 == 0;
}

