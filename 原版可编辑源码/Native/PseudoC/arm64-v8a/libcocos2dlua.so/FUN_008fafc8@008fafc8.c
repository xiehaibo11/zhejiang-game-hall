
undefined8 FUN_008fafc8(lua_State *param_1)

{
  int iVar1;
  GTreeNode *this;
  ulong uVar2;
  undefined8 uVar3;
  GTreeNode *unaff_x21;
  
  this = (GTreeNode *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 2) {
    if (((param_1 != (lua_State *)0x0) && (iVar1 = lua_gettop(param_1), 1 < iVar1)) &&
       (uVar2 = luaval_is_usertype(param_1,2,"fairygui.GTreeNode",0), (uVar2 & 1) != 0)) {
                    /* try { // try from 008fb038 to 009fb12b has its CatchHandler @ 008fb038
                       catch() { ... } // from try @ 008fb038 with catch @ 008fb038
                       catch() { ... } // from try @ 008fb1d0 with catch @ 008fb038 */
      unaff_x21 = (GTreeNode *)tolua_tousertype(param_1,2,0);
    }
    iVar1 = lua_tointeger(param_1,3);
    iVar1 = fairygui::GTreeNode::setChildIndexBefore(this,unaff_x21,iVar1);
    lua_pushinteger(param_1,(long)iVar1);
    uVar3 = 1;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GTreeNode:setChildIndexBefore",iVar1 + -1,2);
    uVar3 = 0;
  }
  return uVar3;
}

