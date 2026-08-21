
/* lua_cocos2dx_ui_ScrollView_getScrollBarPositionFromCornerForHorizontal(lua_State*) */

void lua_cocos2dx_ui_ScrollView_getScrollBarPositionFromCornerForHorizontal(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ScrollView *this;
  undefined4 local_40 [2];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (ScrollView *)tolua_tousertype(param_1,1,0);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00979a50 with catch @ 00979b88
                       catch(type#1 @ 00000000) { ... } // from try @ 00979aa8 with catch @ 00979b88
                       catch(type#1 @ 00000000) { ... } // from try @ 00979ad4 with catch @ 00979b88
                       catch(type#1 @ 00000000) { ... } // from try @ 00979b08 with catch @ 00979b88
                        */
  iVar2 = lua_gettop(param_1);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00979ac0 with catch @ 00979b8c
                        */
  iVar2 = iVar2 + -1;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00979a8c with catch @ 00979b90
                        */
  if (iVar2 == 0) {
    local_40[0] = cocos2d::ui::ScrollView::getScrollBarPositionFromCornerForHorizontal(this);
    vec2_to_luaval(param_1,(Vec2 *)local_40);
  }
  else {
                    /* try { // try from 00979ba4 to 00a79ba7 has its CatchHandler @ 00979bd4 */
                    /* try { // try from 00979ba8 to 00a79beb has its CatchHandler @ 009799fc */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.ScrollView:getScrollBarPositionFromCornerForHorizontal",iVar2,0);
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00979ba4 with catch @ 00979bd4
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00979b30 with catch @ 00979bd8
                        */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2 == 0);
}

