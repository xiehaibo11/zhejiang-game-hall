
/* lua_cocos2dx_ui_EditBox_setFontColor(lua_State*) */

undefined4 lua_cocos2dx_ui_EditBox_setFontColor(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Color4B *this;
  ulong uVar3;
  undefined4 uVar4;
  Color3B aCStack_48 [8];
  Color4B aCStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (Color4B *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    cocos2d::Color4B::Color4B(aCStack_40);
                    /* try { // try from 0099381c to 00a9384f has its CatchHandler @ 0099391c */
    uVar3 = luaval_to_color4b(param_1,2,aCStack_40,"ccui.EditBox:setFontColor");
    if ((uVar3 & 1) == 0) {
      cocos2d::Color3B::Color3B(aCStack_48);
                    /* try { // try from 00993850 to 00a93863 has its CatchHandler @ 009938e8 */
      uVar3 = luaval_to_color3b(param_1,2,aCStack_48,"ccui.EditBox:setFontColor");
      if ((uVar3 & 1) == 0) goto LAB_00993888;
                    /* try { // try from 00993868 to 00a9389b has its CatchHandler @ 009938ec */
      cocos2d::ui::EditBox::setFontColor((EditBox *)this,aCStack_48);
    }
    else {
      cocos2d::ui::EditBox::setFontColor(this);
    }
    uVar4 = 1;
    lua_settop(param_1,1);
  }
  else {
LAB_00993888:
                    /* try { // try from 0099389c to 00a93937 has its CatchHandler @ 009936d4 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.EditBox:setFontColor",iVar2 + -1,1);
    uVar4 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

