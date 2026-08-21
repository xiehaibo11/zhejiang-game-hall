
/* lua_cocos2dx_ui_Widget_updateSizeAndPosition(lua_State*) */

undefined4 lua_cocos2dx_ui_Widget_updateSizeAndPosition(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Widget *this;
  ulong uVar3;
  undefined4 uVar4;
  Size aSStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (Widget *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 0) {
    cocos2d::ui::Widget::updateSizeAndPosition(this);
LAB_009687b4:
    uVar4 = 1;
    lua_settop(param_1,1);
  }
  else {
    if (iVar2 == 2) {
      cocos2d::Size::Size(aSStack_40);
      uVar3 = luaval_to_size(param_1,2,aSStack_40,"ccui.Widget:updateSizeAndPosition");
      if ((uVar3 & 1) != 0) {
        cocos2d::ui::Widget::updateSizeAndPosition(this,aSStack_40);
        goto LAB_009687b4;
      }
    }
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.Widget:updateSizeAndPosition",iVar2 + -1,0);
    uVar4 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

