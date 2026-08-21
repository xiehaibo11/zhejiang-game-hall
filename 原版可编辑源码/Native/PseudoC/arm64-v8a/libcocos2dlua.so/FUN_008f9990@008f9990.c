
undefined8 FUN_008f9990(lua_State *param_1)

{
  int iVar1;
  GTree *this;
  GTreeNode *pGVar2;
  GTreeNode *extraout_x1;
  GTreeNode *extraout_x1_00;
  undefined1 auVar3 [16];
  
  this = (GTree *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
                    /* catch() { ... } // from try @ 008f98bc with catch @ 008f99bc */
  if (iVar1 + -1 == 1) {
    pGVar2 = extraout_x1;
    if (((param_1 != (lua_State *)0x0) &&
        (iVar1 = lua_gettop(param_1), pGVar2 = extraout_x1_00, 1 < iVar1)) &&
       (auVar3 = luaval_is_usertype(param_1,2,"fairygui::GTreeNode",0), pGVar2 = auVar3._8_8_,
       (auVar3._0_8_ & 1) != 0)) {
      pGVar2 = (GTreeNode *)tolua_tousertype(param_1,2,0);
    }
    fairygui::GTree::collapseAll(this,pGVar2);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n",
               "fairygui.GTree:collapseAll",iVar1 + -1,1);
  }
  return 0;
}

