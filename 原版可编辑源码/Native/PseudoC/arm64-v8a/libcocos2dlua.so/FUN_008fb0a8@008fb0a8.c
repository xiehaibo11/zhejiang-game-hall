
undefined8 FUN_008fb0a8(lua_State *param_1)

{
  int iVar1;
  GTreeNode *this;
  ulong uVar2;
  char *pcVar3;
  GTreeNode *unaff_x21;
  
  pcVar3 = (char *)0x0;
  this = (GTreeNode *)tolua_tousertype(param_1,1);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 2) {
    if (param_1 != (lua_State *)0x0) {
      iVar1 = lua_gettop(param_1);
      if (1 < iVar1) {
        pcVar3 = "fairygui.GTreeNode";
        uVar2 = luaval_is_usertype(param_1,2,"fairygui.GTreeNode",0);
        if ((uVar2 & 1) != 0) {
          pcVar3 = (char *)0x0;
          unaff_x21 = (GTreeNode *)tolua_tousertype(param_1,2);
        }
      }
      iVar1 = lua_gettop(param_1);
                    /* try { // try from 008fb12c to 009fb143 has its CatchHandler @ 008fb254 */
      if (2 < iVar1) {
        pcVar3 = "fairygui.GTreeNode";
                    /* try { // try from 008fb148 to 009fb15f has its CatchHandler @ 008fb24c */
        uVar2 = luaval_is_usertype(param_1,3,"fairygui.GTreeNode",0);
        if ((uVar2 & 1) != 0) {
          pcVar3 = (char *)tolua_tousertype(param_1,3,0);
        }
      }
    }
    fairygui::GTreeNode::swapChildren(this,unaff_x21,(GTreeNode *)pcVar3);
  }
  else {
                    /* try { // try from 008fb170 to 009fb1cf has its CatchHandler @ 008fb250 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GTreeNode:swapChildren",iVar1 + -1,2);
  }
  return 0;
}

