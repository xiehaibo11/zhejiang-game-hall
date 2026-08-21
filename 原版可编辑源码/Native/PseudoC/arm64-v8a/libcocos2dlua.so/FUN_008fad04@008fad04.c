
undefined8 FUN_008fad04(lua_State *param_1)

{
  int iVar1;
  GTreeNode *this;
  undefined8 uVar2;
  void *pvVar3;
  
  this = (GTreeNode *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 0) {
    pvVar3 = (void *)fairygui::GTreeNode::getPrevSibling(this);
    if (pvVar3 == (void *)0x0) {
                    /* try { // try from 008fad88 to 009fad9f has its CatchHandler @ 008fae70 */
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
               "fairygui.GTreeNode:getPrevSibling",iVar1 + -1,0);
    uVar2 = 0;
  }
  return uVar2;
}

