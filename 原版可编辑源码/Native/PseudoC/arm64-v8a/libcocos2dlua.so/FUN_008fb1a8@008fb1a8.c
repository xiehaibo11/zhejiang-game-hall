
undefined8 FUN_008fb1a8(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  GTreeNode *this;
  
  this = (GTreeNode *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 008fb1d0 to 009fb26f has its CatchHandler @ 008fb038 */
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 2) {
    iVar1 = lua_tointeger(param_1,2);
    iVar2 = lua_tointeger(param_1,3);
    fairygui::GTreeNode::swapChildrenAt(this,iVar1,iVar2);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GTreeNode:swapChildrenAt",iVar1 + -1,2);
  }
  return 0;
}

