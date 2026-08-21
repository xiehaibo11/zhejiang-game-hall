
undefined8 FUN_008faef8(lua_State *param_1)

{
  int iVar1;
  GTreeNode *this;
  ulong uVar2;
  GTreeNode *unaff_x21;
  
  this = (GTreeNode *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 008faf18 to 009faf3f has its CatchHandler @ 008fae90 */
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 2) {
                    /* try { // try from 008faf40 to 009faf53 has its CatchHandler @ 008faf8c */
                    /* try { // try from 008faf54 to 009faf9f has its CatchHandler @ 008fae90 */
    if (((param_1 != (lua_State *)0x0) && (iVar1 = lua_gettop(param_1), 1 < iVar1)) &&
       (uVar2 = luaval_is_usertype(param_1,2,"fairygui.GTreeNode",0), (uVar2 & 1) != 0)) {
      unaff_x21 = (GTreeNode *)tolua_tousertype(param_1,2,0);
    }
    iVar1 = lua_tointeger(param_1,3);
    fairygui::GTreeNode::setChildIndex(this,unaff_x21,iVar1);
  }
  else {
                    /* catch() { ... } // from try @ 008faee0 with catch @ 008faf8c
                       catch() { ... } // from try @ 008faf40 with catch @ 008faf8c */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GTreeNode:setChildIndex",iVar1 + -1,2);
  }
  return 0;
}

