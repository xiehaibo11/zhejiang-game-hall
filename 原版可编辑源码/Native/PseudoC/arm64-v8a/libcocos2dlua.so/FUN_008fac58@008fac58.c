
undefined8 FUN_008fac58(lua_State *param_1)

{
  int iVar1;
  GTreeNode *this;
  void *pvVar2;
  undefined8 uVar3;
  
  this = (GTreeNode *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 1) {
    iVar1 = lua_tointeger(param_1,2);
    pvVar2 = (void *)fairygui::GTreeNode::getChildAt(this,iVar1);
    if (pvVar2 == (void *)0x0) {
      lua_pushnil(param_1);
    }
    else {
                    /* catch() { ... } // from try @ 008fabf0 with catch @ 008facb4 */
                    /* catch() { ... } // from try @ 008fabd0 with catch @ 008facb8 */
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar2 + 0xc),(int *)((long)pvVar2 + 0x10),pvVar2,
                 "fairygui.GTreeNode");
    }
    uVar3 = 1;
  }
  else {
                    /* try { // try from 008facd4 to 009fad87 has its CatchHandler @ 008facd4
                       catch() { ... } // from try @ 008facd4 with catch @ 008facd4
                       catch() { ... } // from try @ 008fade8 with catch @ 008facd4 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GTreeNode:getChildAt",iVar1 + -1,1);
    uVar3 = 0;
  }
  return uVar3;
}

