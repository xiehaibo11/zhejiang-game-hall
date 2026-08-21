
undefined8 FUN_008fa898(lua_State *param_1)

{
  int iVar1;
  GTreeNode *this;
  GTreeNode *pGVar2;
  void *pvVar3;
  undefined8 uVar4;
  GTreeNode *extraout_x1;
  GTreeNode *extraout_x1_00;
  undefined1 auVar5 [16];
  
  this = (GTreeNode *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
                    /* try { // try from 008fa8c8 to 009fa99f has its CatchHandler @ 008fa7a8 */
  if (iVar1 + -1 == 1) {
    pGVar2 = extraout_x1;
    if (((param_1 != (lua_State *)0x0) &&
        (iVar1 = lua_gettop(param_1), pGVar2 = extraout_x1_00, 1 < iVar1)) &&
       (auVar5 = luaval_is_usertype(param_1,2,"fairygui.GTreeNode",0), pGVar2 = auVar5._8_8_,
       (auVar5._0_8_ & 1) != 0)) {
      pGVar2 = (GTreeNode *)tolua_tousertype(param_1,2,0);
    }
    pvVar3 = (void *)fairygui::GTreeNode::addChild(this,pGVar2);
    if (pvVar3 == (void *)0x0) {
      lua_pushnil(param_1);
    }
    else {
                    /* catch() { ... } // from try @ 008fa884 with catch @ 008fa954 */
                    /* catch() { ... } // from try @ 008fa88c with catch @ 008fa958 */
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar3 + 0xc),(int *)((long)pvVar3 + 0x10),pvVar3,
                 "fairygui.GTreeNode");
    }
    uVar4 = 1;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GTreeNode:addChild",iVar1 + -1,1);
    uVar4 = 0;
  }
                    /* catch() { ... } // from try @ 008fa868 with catch @ 008fa970 */
  return uVar4;
}

