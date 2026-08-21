
/* lua_cocos2dx_Node_getOpacity(lua_State*) */

bool lua_cocos2dx_Node_getOpacity(lua_State *param_1)

{
  byte bVar1;
  int iVar2;
  long *plVar3;
  
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  iVar2 = iVar2 + -1;
  if (iVar2 == 0) {
    bVar1 = (**(code **)(*plVar3 + 0x480))(plVar3);
    tolua_pushnumber((double)bVar1,param_1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Node:getOpacity",iVar2,0);
  }
  return iVar2 == 0;
}

