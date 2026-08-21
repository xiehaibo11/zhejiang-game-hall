
undefined8 FUN_008f9738(lua_State *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  GTree *this;
  ulong uVar4;
  GTreeNode *unaff_x22;
  
  this = (GTree *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  iVar2 = iVar2 + -1;
                    /* catch() { ... } // from try @ 008f9728 with catch @ 008f9768 */
  if (iVar2 < 1) {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting 1 or 2 \n",
               "fairygui.GTree:selectNode",iVar2);
    return 0;
  }
                    /* catch() { ... } // from try @ 008f96f0 with catch @ 008f9778 */
                    /* try { // try from 008f978c to 009f98bb has its CatchHandler @ 008f978c
                       catch() { ... } // from try @ 008f978c with catch @ 008f978c
                       catch() { ... } // from try @ 008f993c with catch @ 008f978c */
  if (((param_1 != (lua_State *)0x0) && (iVar3 = lua_gettop(param_1), 1 < iVar3)) &&
     (uVar4 = luaval_is_usertype(param_1,2,"fairygui::GTreeNode",0), (uVar4 & 1) != 0)) {
    unaff_x22 = (GTreeNode *)tolua_tousertype(param_1,2,0);
  }
  if (iVar2 == 1) {
    bVar1 = false;
  }
  else {
    iVar2 = lua_toboolean(param_1,3);
    bVar1 = iVar2 != 0;
  }
  fairygui::GTree::selectNode(this,unaff_x22,bVar1);
  return 0;
}

