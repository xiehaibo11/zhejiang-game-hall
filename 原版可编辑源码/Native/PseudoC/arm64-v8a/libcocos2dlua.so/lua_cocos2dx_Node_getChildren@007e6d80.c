
/* lua_cocos2dx_Node_getChildren(lua_State*) */

undefined8 lua_cocos2dx_Node_getChildren(lua_State *param_1)

{
  int iVar1;
  long *plVar2;
  Vector *pVVar3;
  
  plVar2 = (long *)tolua_tousertype(param_1,1,0);
  if (plVar2 == (long *)0x0) {
    tolua_error(param_1,"invalid \'cobj\' in function \'lua_cocos2dx_Node_getChildren\'",0);
  }
  else {
    iVar1 = lua_gettop(param_1);
    if (iVar1 + -1 == 0) {
      pVVar3 = (Vector *)(**(code **)(*plVar2 + 0x240))(plVar2);
      ccvector_to_luaval<cocos2d::Node*>(param_1,pVVar3);
      return 1;
    }
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Node:getChildren",iVar1 + -1,0);
  }
  return 0;
}

