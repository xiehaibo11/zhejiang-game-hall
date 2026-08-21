
undefined8 FUN_008fae34(lua_State *param_1)

{
  int iVar1;
  GTreeNode *this;
  GTreeNode *pGVar2;
  undefined8 uVar3;
  GTreeNode *extraout_x1;
  GTreeNode *extraout_x1_00;
  undefined1 auVar4 [16];
  
  this = (GTreeNode *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 1) {
    pGVar2 = extraout_x1;
                    /* catch() { ... } // from try @ 008fad88 with catch @ 008fae70 */
                    /* catch() { ... } // from try @ 008fada4 with catch @ 008fae74 */
                    /* try { // try from 008fae90 to 009faedf has its CatchHandler @ 008fae90
                       catch() { ... } // from try @ 008fae90 with catch @ 008fae90
                       catch() { ... } // from try @ 008faf18 with catch @ 008fae90
                       catch() { ... } // from try @ 008faf54 with catch @ 008fae90 */
    if (((param_1 != (lua_State *)0x0) &&
        (iVar1 = lua_gettop(param_1), pGVar2 = extraout_x1_00, 1 < iVar1)) &&
       (auVar4 = luaval_is_usertype(param_1,2,"fairygui.GTreeNode",0), pGVar2 = auVar4._8_8_,
       (auVar4._0_8_ & 1) != 0)) {
      pGVar2 = (GTreeNode *)tolua_tousertype(param_1,2,0);
    }
    iVar1 = fairygui::GTreeNode::getChildIndex(this,pGVar2);
                    /* try { // try from 008faee0 to 009faf17 has its CatchHandler @ 008faf8c */
    lua_pushinteger(param_1,(long)iVar1);
    uVar3 = 1;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GTreeNode:getChildIndex",iVar1 + -1,1);
    uVar3 = 0;
  }
  return uVar3;
}

