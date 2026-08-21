
/* lua_cocos2dx_Node_getAttachedNodeCount(lua_State*) */

bool lua_cocos2dx_Node_getAttachedNodeCount(lua_State *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = lua_gettop();
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = cocos2d::Node::getAttachedNodeCount();
    tolua_pushnumber((double)iVar2,param_1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "cc.Node:getAttachedNodeCount",iVar1,0);
  }
  return iVar1 == 0;
}

