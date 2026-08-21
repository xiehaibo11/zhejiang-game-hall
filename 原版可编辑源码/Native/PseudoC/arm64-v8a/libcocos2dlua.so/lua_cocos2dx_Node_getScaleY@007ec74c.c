
/* lua_cocos2dx_Node_getScaleY(lua_State*) */

undefined8 lua_cocos2dx_Node_getScaleY(lua_State *param_1)

{
  int iVar1;
  long *plVar2;
  float fVar3;
  
  plVar2 = (long *)tolua_tousertype(param_1,1,0);
  if (plVar2 == (long *)0x0) {
    tolua_error(param_1,"invalid \'cobj\' in function \'lua_cocos2dx_Node_getScaleY\'",0);
  }
  else {
    iVar1 = lua_gettop(param_1);
    if (iVar1 + -1 == 0) {
      fVar3 = (float)(**(code **)(*plVar2 + 0x68))(plVar2);
      tolua_pushnumber((double)fVar3,param_1);
      return 1;
    }
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Node:getScaleY",iVar1 + -1,0);
  }
  return 0;
}

