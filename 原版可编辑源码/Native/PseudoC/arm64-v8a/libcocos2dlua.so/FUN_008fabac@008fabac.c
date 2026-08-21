
undefined8 FUN_008fabac(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  GTreeNode *this;
  
  this = (GTreeNode *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 008fabd0 to 009fabe7 has its CatchHandler @ 008facb8 */
  iVar1 = lua_gettop(param_1);
  if (iVar1 == 3) {
    iVar1 = lua_tointeger(param_1,2);
    iVar2 = lua_tointeger(param_1,3);
    fairygui::GTreeNode::removeChildren(this,iVar1,iVar2);
  }
  else if (iVar1 + -1 == 0) {
                    /* try { // try from 008fabf0 to 009fac2b has its CatchHandler @ 008facb4 */
    fairygui::GTreeNode::removeChildren(this,0,-1);
  }
  else {
                    /* try { // try from 008fac2c to 009facd3 has its CatchHandler @ 008fab20 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting 0 or 2 \n",
               "fairygui.GTreeNode:removeChildren",iVar1 + -1);
  }
  return 0;
}

