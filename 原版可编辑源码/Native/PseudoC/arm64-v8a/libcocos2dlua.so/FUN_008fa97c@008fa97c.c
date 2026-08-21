
undefined8 FUN_008fa97c(lua_State *param_1)

{
  int iVar1;
  GTreeNode *this;
  ulong uVar2;
  void *pvVar3;
  undefined8 uVar4;
  GTreeNode *unaff_x21;
  
                    /* catch() { ... } // from try @ 008fa814 with catch @ 008fa98c */
  this = (GTreeNode *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 008fa9a0 to 009fa9f3 has its CatchHandler @ 008fa9a0
                       catch() { ... } // from try @ 008fa9a0 with catch @ 008fa9a0
                       catch() { ... } // from try @ 008faa50 with catch @ 008fa9a0
                       catch() { ... } // from try @ 008faad0 with catch @ 008fa9a0 */
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 2) {
    if (((param_1 != (lua_State *)0x0) && (iVar1 = lua_gettop(param_1), 1 < iVar1)) &&
       (uVar2 = luaval_is_usertype(param_1,2,"fairygui.GTreeNode",0), (uVar2 & 1) != 0)) {
      unaff_x21 = (GTreeNode *)tolua_tousertype(param_1,2,0);
                    /* try { // try from 008fa9f4 to 009faa4f has its CatchHandler @ 008faae4 */
    }
    iVar1 = lua_tointeger(param_1,3);
    pvVar3 = (void *)fairygui::GTreeNode::addChildAt(this,unaff_x21,iVar1);
    if (pvVar3 == (void *)0x0) {
      lua_pushnil(param_1);
    }
    else {
                    /* try { // try from 008faa50 to 009faabb has its CatchHandler @ 008fa9a0 */
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar3 + 0xc),(int *)((long)pvVar3 + 0x10),pvVar3,
                 "fairygui.GTreeNode");
    }
    uVar4 = 1;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GTreeNode:addChildAt",iVar1 + -1,2);
    uVar4 = 0;
  }
  return uVar4;
}

