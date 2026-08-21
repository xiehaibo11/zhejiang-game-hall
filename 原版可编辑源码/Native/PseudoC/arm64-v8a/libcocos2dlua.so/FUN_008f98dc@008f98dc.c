
undefined8 FUN_008f98dc(lua_State *param_1)

{
  int iVar1;
  GTree *this;
  GTreeNode *pGVar2;
  GTreeNode *extraout_x1;
  GTreeNode *extraout_x1_00;
  undefined1 auVar3 [16];
  
                    /* try { // try from 008f98f0 to 009f9903 has its CatchHandler @ 008f9988 */
  this = (GTree *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
                    /* try { // try from 008f9908 to 009f993b has its CatchHandler @ 008f998c */
  if (iVar1 + -1 == 1) {
    pGVar2 = extraout_x1;
                    /* try { // try from 008f993c to 009f99d7 has its CatchHandler @ 008f978c */
    if (((param_1 != (lua_State *)0x0) &&
        (iVar1 = lua_gettop(param_1), pGVar2 = extraout_x1_00, 1 < iVar1)) &&
       (auVar3 = luaval_is_usertype(param_1,2,"fairygui::GTreeNode",0), pGVar2 = auVar3._8_8_,
       (auVar3._0_8_ & 1) != 0)) {
      pGVar2 = (GTreeNode *)tolua_tousertype(param_1,2,0);
    }
    fairygui::GTree::expandAll(this,pGVar2);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n",
               "fairygui.GTree:expandAll",iVar1 + -1,1);
  }
                    /* catch() { ... } // from try @ 008f98f0 with catch @ 008f9988 */
                    /* catch() { ... } // from try @ 008f9908 with catch @ 008f998c */
  return 0;
}

