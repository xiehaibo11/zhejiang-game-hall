
bool FUN_008fb240(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  GTreeNode *this;
  
                    /* catch() { ... } // from try @ 008fb148 with catch @ 008fb24c */
                    /* catch() { ... } // from try @ 008fb170 with catch @ 008fb250 */
                    /* catch() { ... } // from try @ 008fb12c with catch @ 008fb254 */
  this = (GTreeNode *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = fairygui::GTreeNode::numChildren(this);
    lua_pushinteger(param_1,(long)iVar2);
  }
  else {
                    /* try { // try from 008fb270 to 009fb2bf has its CatchHandler @ 008fb270
                       catch() { ... } // from try @ 008fb270 with catch @ 008fb270
                       catch() { ... } // from try @ 008fb2f8 with catch @ 008fb270
                       catch() { ... } // from try @ 008fb334 with catch @ 008fb270 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GTreeNode:numChildren",iVar1,0);
  }
  return iVar1 == 0;
}

