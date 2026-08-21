
/* lua_cocos2dx_GridBase_afterDraw(lua_State*) */

undefined4 lua_cocos2dx_GridBase_afterDraw(lua_State *param_1)

{
  int iVar1;
  Node *pNVar2;
  ulong uVar3;
  
  pNVar2 = (Node *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 1) {
    if (((param_1 != (lua_State *)0x0) && (iVar1 = lua_gettop(param_1), 1 < iVar1)) &&
       (uVar3 = luaval_is_usertype(param_1,2,"cc.Node",0), (uVar3 & 1) != 0)) {
      tolua_tousertype(param_1,2,0);
      cocos2d::GridBase::afterDraw(pNVar2);
      lua_settop(param_1,1);
      return 1;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_GridBase_afterDraw\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.GridBase:afterDraw",iVar1 + -1,1);
  }
  return 0;
}

