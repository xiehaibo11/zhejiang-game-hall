
/* lua_cocos2dx_Node_getContentSize(lua_State*) */

undefined8 lua_cocos2dx_Node_getContentSize(lua_State *param_1)

{
  int iVar1;
  long *plVar2;
  Size *pSVar3;
  
  plVar2 = (long *)tolua_tousertype(param_1,1,0);
  if (plVar2 == (long *)0x0) {
    tolua_error(param_1,"invalid \'cobj\' in function \'lua_cocos2dx_Node_getContentSize\'",0);
  }
  else {
    iVar1 = lua_gettop(param_1);
    if (iVar1 + -1 == 0) {
      pSVar3 = (Size *)(**(code **)(*plVar2 + 0x168))(plVar2);
      size_to_luaval(param_1,pSVar3);
      return 1;
    }
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Node:getContentSize",iVar1 + -1,0);
  }
  return 0;
}

