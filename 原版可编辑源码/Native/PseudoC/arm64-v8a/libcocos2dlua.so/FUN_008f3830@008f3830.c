
undefined8 FUN_008f3830(lua_State *param_1)

{
  int iVar1;
  GLoader3D *this;
  ulong uVar2;
  Node *pNVar3;
  
                    /* try { // try from 008f383c to 009f3887 has its CatchHandler @ 008f3754 */
  this = (GLoader3D *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 1) {
                    /* catch() { ... } // from try @ 008f37a4 with catch @ 008f3874
                       catch() { ... } // from try @ 008f3828 with catch @ 008f3874 */
    if (((param_1 == (lua_State *)0x0) || (iVar1 = lua_gettop(param_1), iVar1 < 2)) ||
       (uVar2 = luaval_is_usertype(param_1,2,"cc.Node",0), (uVar2 & 1) == 0)) {
      tolua_error(param_1,"invalid arguments in function \'lua_fairygui_GLoader3D_setContent\'",0);
    }
    else {
      pNVar3 = (Node *)tolua_tousertype(param_1,2,0);
      fairygui::GLoader3D::setContent(this,pNVar3);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GLoader3D:setContent",iVar1 + -1,1);
  }
  return 0;
}

