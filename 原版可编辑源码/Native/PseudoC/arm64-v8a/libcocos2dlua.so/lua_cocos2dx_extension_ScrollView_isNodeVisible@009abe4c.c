
/* lua_cocos2dx_extension_ScrollView_isNodeVisible(lua_State*) */

undefined8 lua_cocos2dx_extension_ScrollView_isNodeVisible(lua_State *param_1)

{
  int iVar1;
  uint uVar2;
  ScrollView *this;
  ulong uVar3;
  Node *pNVar4;
  
  this = (ScrollView *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 1) {
    if (((param_1 != (lua_State *)0x0) && (iVar1 = lua_gettop(param_1), 1 < iVar1)) &&
       (uVar3 = luaval_is_usertype(param_1,2,"cc.Node",0), (uVar3 & 1) != 0)) {
      pNVar4 = (Node *)tolua_tousertype(param_1,2,0);
      uVar2 = cocos2d::extension::ScrollView::isNodeVisible(this,pNVar4);
      tolua_pushboolean(param_1,uVar2 & 1);
      return 1;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_extension_ScrollView_isNodeVisible\'",
                0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.ScrollView:isNodeVisible",iVar1 + -1,1);
  }
  return 0;
}

