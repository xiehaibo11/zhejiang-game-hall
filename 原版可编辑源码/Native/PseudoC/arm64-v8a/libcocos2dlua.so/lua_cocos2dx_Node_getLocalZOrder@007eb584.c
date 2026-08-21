
/* lua_cocos2dx_Node_getLocalZOrder(lua_State*) */

undefined8 lua_cocos2dx_Node_getLocalZOrder(lua_State *param_1)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = (long *)tolua_tousertype(param_1,1,0);
  if (plVar2 == (long *)0x0) {
    tolua_error(param_1,"invalid \'cobj\' in function \'lua_cocos2dx_Node_getLocalZOrder\'",0);
  }
  else {
    iVar1 = lua_gettop(param_1);
    if (iVar1 + -1 == 0) {
      iVar1 = (**(code **)(*plVar2 + 0x30))(plVar2);
      tolua_pushnumber((double)iVar1,param_1);
      return 1;
    }
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Node:getLocalZOrder",iVar1 + -1,0);
  }
  return 0;
}

