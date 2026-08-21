
/* lua_cocos2dx_ui_TabControl_removeTab(lua_State*) */

undefined4 lua_cocos2dx_ui_TabControl_removeTab(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  TabControl *this;
  ulong uVar3;
  undefined4 uVar4;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (TabControl *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_int32(param_1,2,&local_3c,"ccui.TabControl:removeTab");
    if ((uVar3 & 1) != 0) {
      cocos2d::ui::TabControl::removeTab(this,local_3c);
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_0099a570;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_ui_TabControl_removeTab\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.TabControl:removeTab",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_0099a570:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

