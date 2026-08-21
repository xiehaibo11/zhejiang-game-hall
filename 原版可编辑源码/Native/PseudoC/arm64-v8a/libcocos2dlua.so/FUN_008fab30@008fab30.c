
undefined8 FUN_008fab30(undefined8 param_1)

{
  int iVar1;
  GTreeNode *this;
  
  this = (GTreeNode *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 1) {
    iVar1 = lua_tointeger(param_1,2);
    fairygui::GTreeNode::removeChildAt(this,iVar1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GTreeNode:removeChildAt",iVar1 + -1,1);
  }
  return 0;
}

