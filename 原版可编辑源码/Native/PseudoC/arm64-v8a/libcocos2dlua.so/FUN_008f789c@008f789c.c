
undefined8 FUN_008f789c(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulong local_68 [2];
  void *local_58;
  ulong local_50 [2];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 + -1 == 2) {
    local_50[1] = 0;
    local_40 = (void *)0x0;
    local_58 = (void *)0x0;
    local_50[0] = 0;
    local_68[0] = 0;
    local_68[1] = 0;
    uVar3 = luaval_to_std_string
                      (param_1,2,(basic_string *)local_50,"fairygui.UIConfig:registerFont");
    uVar4 = luaval_to_std_string
                      (param_1,3,(basic_string *)local_68,"fairygui.UIConfig:registerFont");
    if ((uVar3 & uVar4 & 1) == 0) {
      tolua_error(param_1,"invalid arguments in function \'lua_fairygui_UIConfig_registerFont\'",0);
    }
    else {
      fairygui::UIConfig::registerFont((basic_string *)local_50,(basic_string *)local_68);
    }
    if ((local_68[0] & 1) != 0) {
      operator_delete(local_58);
    }
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "fairygui.UIConfig:registerFont",iVar2 + -1,2);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

