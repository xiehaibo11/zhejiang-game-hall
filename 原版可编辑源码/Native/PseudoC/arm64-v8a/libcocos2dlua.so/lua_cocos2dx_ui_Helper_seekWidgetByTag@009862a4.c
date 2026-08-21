
/* lua_cocos2dx_ui_Helper_seekWidgetByTag(lua_State*) */

void lua_cocos2dx_ui_Helper_seekWidgetByTag(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  Widget *pWVar4;
  void *pvVar5;
  undefined8 uVar6;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 + -1 == 2) {
    if (((param_1 == (lua_State *)0x0) || (iVar2 = lua_gettop(param_1), iVar2 < 2)) ||
       (uVar3 = luaval_is_usertype(param_1,2,"ccui.Widget",0), (uVar3 & 1) == 0)) {
      luaval_to_int32(param_1,3,&local_3c,"ccui.Helper:seekWidgetByTag");
    }
    else {
      pWVar4 = (Widget *)tolua_tousertype(param_1,2,0);
      uVar3 = luaval_to_int32(param_1,3,&local_3c,"ccui.Helper:seekWidgetByTag");
      if ((uVar3 & 1) != 0) {
        pvVar5 = (void *)cocos2d::ui::Helper::seekWidgetByTag(pWVar4,local_3c);
        if (pvVar5 == (void *)0x0) {
          lua_pushnil(param_1);
          uVar6 = 1;
        }
        else {
          toluafix_pushusertype_ccobject
                    (param_1,*(int *)((long)pvVar5 + 0xc),(int *)((long)pvVar5 + 0x10),pvVar5,
                     "ccui.Widget");
          uVar6 = 1;
        }
        goto LAB_009863bc;
      }
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_ui_Helper_seekWidgetByTag\'",0
               );
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "ccui.Helper:seekWidgetByTag",iVar2 + -1,2);
  }
  uVar6 = 0;
LAB_009863bc:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

