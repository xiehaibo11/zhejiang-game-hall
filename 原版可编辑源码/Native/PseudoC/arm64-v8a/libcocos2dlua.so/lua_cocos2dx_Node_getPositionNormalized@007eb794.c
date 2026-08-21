
/* lua_cocos2dx_Node_getPositionNormalized(lua_State*) */

bool lua_cocos2dx_Node_getPositionNormalized(lua_State *param_1)

{
  int iVar1;
  long *plVar2;
  Vec2 *pVVar3;
  
  plVar2 = (long *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    pVVar3 = (Vec2 *)(**(code **)(*plVar2 + 0xb8))(plVar2);
    vec2_to_luaval(param_1,pVVar3);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Node:getPositionNormalized",iVar1,0);
  }
  return iVar1 == 0;
}

