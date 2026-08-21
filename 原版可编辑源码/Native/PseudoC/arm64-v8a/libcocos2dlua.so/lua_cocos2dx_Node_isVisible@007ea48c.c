
/* lua_cocos2dx_Node_isVisible(lua_State*) */

undefined8 lua_cocos2dx_Node_isVisible(lua_State *param_1)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  if (plVar3 == (long *)0x0) {
    tolua_error(param_1,"invalid \'cobj\' in function \'lua_cocos2dx_Node_isVisible\'",0);
  }
  else {
    iVar1 = lua_gettop(param_1);
    if (iVar1 + -1 == 0) {
      uVar2 = (**(code **)(*plVar3 + 0x178))(plVar3);
      tolua_pushboolean(param_1,uVar2 & 1);
      return 1;
    }
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Node:isVisible",iVar1 + -1,0);
  }
  return 0;
}

