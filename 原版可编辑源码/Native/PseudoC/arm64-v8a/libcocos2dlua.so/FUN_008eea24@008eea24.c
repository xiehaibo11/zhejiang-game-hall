
undefined8 FUN_008eea24(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  PopupMenu *this;
  bool local_54 [4];
  ulong local_50 [2];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (PopupMenu *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 2) {
    local_50[1] = 0;
    local_40 = (void *)0x0;
    local_50[0] = 0;
    uVar3 = luaval_to_std_string
                      (param_1,2,(basic_string *)local_50,"fairygui.PopupMenu:setItemGrayed");
    uVar4 = luaval_to_boolean(param_1,3,local_54,"fairygui.PopupMenu:setItemGrayed");
    if ((uVar3 & uVar4 & 1) == 0) {
      tolua_error(param_1,"invalid arguments in function \'lua_fairygui_PopupMenu_setItemGrayed\'",0
                 );
    }
    else {
      fairygui::PopupMenu::setItemGrayed(this,(basic_string *)local_50,local_54[0]);
    }
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.PopupMenu:setItemGrayed",iVar2 + -1,2);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

