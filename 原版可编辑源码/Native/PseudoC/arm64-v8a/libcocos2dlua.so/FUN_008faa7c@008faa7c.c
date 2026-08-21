
undefined8 FUN_008faa7c(lua_State *param_1)

{
  int iVar1;
  GTreeNode *this;
  GTreeNode *pGVar2;
  GTreeNode *extraout_x1;
  GTreeNode *extraout_x1_00;
  undefined1 auVar3 [16];
  
  this = (GTreeNode *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 1) {
    pGVar2 = extraout_x1;
                    /* try { // try from 008faabc to 009faacf has its CatchHandler @ 008faae4 */
                    /* try { // try from 008faad0 to 009fab1f has its CatchHandler @ 008fa9a0 */
    if (((param_1 != (lua_State *)0x0) &&
        (iVar1 = lua_gettop(param_1), pGVar2 = extraout_x1_00, 1 < iVar1)) &&
       (auVar3 = luaval_is_usertype(param_1,2,"fairygui.GTreeNode",0), pGVar2 = auVar3._8_8_,
       (auVar3._0_8_ & 1) != 0)) {
                    /* catch() { ... } // from try @ 008fa9f4 with catch @ 008faae4
                       catch() { ... } // from try @ 008faabc with catch @ 008faae4 */
      pGVar2 = (GTreeNode *)tolua_tousertype(param_1,2,0);
    }
    fairygui::GTreeNode::removeChild(this,pGVar2);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GTreeNode:removeChild",iVar1 + -1,1);
  }
                    /* try { // try from 008fab20 to 009fabcf has its CatchHandler @ 008fab20
                       catch() { ... } // from try @ 008fab20 with catch @ 008fab20
                       catch() { ... } // from try @ 008fac2c with catch @ 008fab20 */
  return 0;
}

