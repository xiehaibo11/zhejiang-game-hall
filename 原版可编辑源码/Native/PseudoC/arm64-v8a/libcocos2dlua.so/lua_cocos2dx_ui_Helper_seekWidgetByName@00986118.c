
/* lua_cocos2dx_ui_Helper_seekWidgetByName(lua_State*) */

undefined4 lua_cocos2dx_ui_Helper_seekWidgetByName(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  void *pvVar5;
  undefined4 uVar6;
  Widget *unaff_x20;
  uint uVar7;
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 + -1 == 2) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    if (((param_1 == (lua_State *)0x0) || (iVar2 = lua_gettop(param_1), iVar2 < 2)) ||
       (uVar4 = luaval_is_usertype(param_1,2,"ccui.Widget",0), (uVar4 & 1) == 0)) {
      uVar7 = 0;
    }
    else {
      unaff_x20 = (Widget *)tolua_tousertype(param_1,2,0);
      uVar7 = 1;
    }
    uVar3 = luaval_to_std_string(param_1,3,(basic_string *)&local_50,"ccui.Helper:seekWidgetByName")
    ;
    if ((uVar7 & uVar3) == 0) {
      tolua_error(param_1,&DAT_012de11b,0);
      uVar6 = 0;
    }
    else {
      pvVar5 = (void *)cocos2d::ui::Helper::seekWidgetByName(unaff_x20,(basic_string *)&local_50);
      if (pvVar5 == (void *)0x0) {
        lua_pushnil(param_1);
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar5 + 0xc),(int *)((long)pvVar5 + 0x10),pvVar5,
                   "ccui.Widget");
      }
      uVar6 = 1;
    }
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "ccui.Helper:seekWidgetByName",iVar2 + -1,2);
    uVar6 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

