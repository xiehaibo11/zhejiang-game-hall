
/* lua_cocos2dx_Node_getAnchorPoint(lua_State*) */

undefined8 lua_cocos2dx_Node_getAnchorPoint(lua_State *param_1)

{
  int iVar1;
  long *plVar2;
  Vec2 *pVVar3;
  
  plVar2 = (long *)tolua_tousertype(param_1,1,0);
  if (plVar2 == (long *)0x0) {
    tolua_error(param_1,"invalid \'cobj\' in function \'lua_cocos2dx_Node_getAnchorPoint\'",0);
  }
  else {
    iVar1 = lua_gettop(param_1);
    if (iVar1 + -1 == 0) {
      pVVar3 = (Vec2 *)(**(code **)(*plVar2 + 0x150))(plVar2);
      vec2_to_luaval(param_1,pVVar3);
      return 1;
    }
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Node:getAnchorPoint",iVar1 + -1,0);
  }
  return 0;
}

