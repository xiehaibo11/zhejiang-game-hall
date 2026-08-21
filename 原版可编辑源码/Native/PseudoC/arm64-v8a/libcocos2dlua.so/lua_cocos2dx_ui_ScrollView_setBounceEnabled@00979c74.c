
/* lua_cocos2dx_ui_ScrollView_setBounceEnabled(lua_State*) */

undefined4 lua_cocos2dx_ui_ScrollView_setBounceEnabled(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ScrollView *this;
  ulong uVar3;
  undefined4 uVar4;
  bool local_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (ScrollView *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_boolean(param_1,2,local_3c,"ccui.ScrollView:setBounceEnabled");
    if ((uVar3 & 1) != 0) {
      cocos2d::ui::ScrollView::setBounceEnabled(this,local_3c[0]);
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_00979d30;
    }
                    /* try { // try from 00979d28 to 00a79d7b has its CatchHandler @ 00979d28
                       catch(type#1 @ 00000000) { ... } // from try @ 00979d28 with catch @ 00979d28
                       catch(type#1 @ 00000000) { ... } // from try @ 00979e0c with catch @ 00979d28
                       catch(type#1 @ 00000000) { ... } // from try @ 00979e60 with catch @ 00979d28
                       catch(type#1 @ 00000000) { ... } // from try @ 00979ed4 with catch @ 00979d28
                        */
    tolua_error(param_1,0x12dacef,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012dacce,
               iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_00979d30:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

