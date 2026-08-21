
/* lua_cocos2dx_ui_Widget_enableDpadNavigation(lua_State*) */

undefined4 lua_cocos2dx_ui_Widget_enableDpadNavigation(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined4 uVar4;
  bool local_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_boolean(param_1,2,local_3c,"ccui.Widget:enableDpadNavigation");
    if ((uVar3 & 1) != 0) {
      cocos2d::ui::Widget::enableDpadNavigation(local_3c[0]);
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_009694d0;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_ui_Widget_enableDpadNavigation\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",&DAT_012d73ff,
               iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_009694d0:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

