
undefined8 FUN_008e5768(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  GButton *this;
  ulong uVar3;
  Color3B aCStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (GButton *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    cocos2d::Color3B::Color3B(aCStack_40);
    uVar3 = luaval_to_color3b(param_1,2,aCStack_40,"fairygui.GButton:setTitleColor");
    if ((uVar3 & 1) == 0) {
      tolua_error(param_1,"invalid arguments in function \'lua_fairygui_GButton_setTitleColor\'",0);
    }
    else {
      fairygui::GButton::setTitleColor(this,aCStack_40);
    }
  }
  else {
                    /* catch() { ... } // from try @ 008e5758 with catch @ 008e57e8 */
                    /* try { // try from 008e57fc to 009e5897 has its CatchHandler @ 008e57fc
                       catch() { ... } // from try @ 008e57fc with catch @ 008e57fc
                       catch() { ... } // from try @ 008e5918 with catch @ 008e57fc */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GButton:setTitleColor",iVar2 + -1,1);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

