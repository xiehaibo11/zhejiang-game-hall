
undefined8 FUN_008f7eb0(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  GLabel *this;
  ulong uVar3;
  Color3B aCStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 008f7edc to 009f80cb has its CatchHandler @ 008f7edc
                       catch() { ... } // from try @ 008f7edc with catch @ 008f7edc
                       catch() { ... } // from try @ 008f814c with catch @ 008f7edc */
  this = (GLabel *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    cocos2d::Color3B::Color3B(aCStack_40);
    uVar3 = luaval_to_color3b(param_1,2,aCStack_40,"fairygui.GLabel:setTitleColor");
    if ((uVar3 & 1) == 0) {
      tolua_error(param_1,"invalid arguments in function \'lua_fairygui_GLabel_setTitleColor\'",0);
    }
    else {
      fairygui::GLabel::setTitleColor(this,aCStack_40);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GLabel:setTitleColor",iVar2 + -1,1);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

