
/* lua_cocos2dx_extension_ScrollView_setContainer(lua_State*) */

undefined4 lua_cocos2dx_extension_ScrollView_setContainer(lua_State *param_1)

{
  int iVar1;
  ScrollView *this;
  ulong uVar2;
  Node *pNVar3;
  
  this = (ScrollView *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 009aa7c8 to 00aaa823 has its CatchHandler @ 009aa7c8
                       catch() { ... } // from try @ 009aa7c8 with catch @ 009aa7c8
                       catch() { ... } // from try @ 009aa860 with catch @ 009aa7c8 */
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 1) {
    if (((param_1 != (lua_State *)0x0) && (iVar1 = lua_gettop(param_1), 1 < iVar1)) &&
       (uVar2 = luaval_is_usertype(param_1,2,"cc.Node",0), (uVar2 & 1) != 0)) {
      pNVar3 = (Node *)tolua_tousertype(param_1,2,0);
                    /* try { // try from 009aa824 to 00aaa82f has its CatchHandler @ 009aa8a0 */
      cocos2d::extension::ScrollView::setContainer(this,pNVar3);
      lua_settop(param_1,1);
      return 1;
    }
                    /* try { // try from 009aa860 to 00aaa8bb has its CatchHandler @ 009aa7c8 */
    tolua_error(param_1,&DAT_012e6a0f,0);
  }
  else {
                    /* try { // try from 009aa850 to 00aaa85f has its CatchHandler @ 009aa89c */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.ScrollView:setContainer",iVar1 + -1,1);
  }
  return 0;
}

