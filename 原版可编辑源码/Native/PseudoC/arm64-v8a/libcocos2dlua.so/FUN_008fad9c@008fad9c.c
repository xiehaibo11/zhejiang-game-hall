
undefined8 FUN_008fad9c(lua_State *param_1)

{
  int iVar1;
  GTreeNode *this;
  undefined8 uVar2;
  void *pvVar3;
  
                    /* try { // try from 008fada4 to 009fade7 has its CatchHandler @ 008fae74 */
  this = (GTreeNode *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 0) {
    pvVar3 = (void *)fairygui::GTreeNode::getNextSibling(this);
    if (pvVar3 == (void *)0x0) {
      lua_pushnil(param_1);
    }
    else {
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar3 + 0xc),(int *)((long)pvVar3 + 0x10),pvVar3,
                 "fairygui.GTreeNode");
    }
    uVar2 = 1;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GTreeNode:getNextSibling",iVar1 + -1,0);
                    /* try { // try from 008fade8 to 009fae8f has its CatchHandler @ 008facd4 */
    uVar2 = 0;
  }
  return uVar2;
}

