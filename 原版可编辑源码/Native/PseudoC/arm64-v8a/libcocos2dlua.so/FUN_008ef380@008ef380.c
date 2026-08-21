
undefined8 FUN_008ef380(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  PopupMenu *this;
  ulong local_68 [2];
  void *local_58;
  ulong local_50 [2];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (PopupMenu *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 008ef3b4 to 009ef403 has its CatchHandler @ 008ef174 */
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 2) {
    local_50[1] = 0;
    local_40 = (void *)0x0;
    local_58 = (void *)0x0;
    local_50[0] = 0;
    local_68[0] = 0;
    local_68[1] = 0;
    uVar3 = luaval_to_std_string
                      (param_1,2,(basic_string *)local_50,"fairygui.PopupMenu:setItemText");
                    /* try { // try from 008ef404 to 009ef447 has its CatchHandler @ 008ef4c0 */
    uVar4 = luaval_to_std_string
                      (param_1,3,(basic_string *)local_68,"fairygui.PopupMenu:setItemText");
    if ((uVar3 & uVar4 & 1) == 0) {
      tolua_error(param_1,"invalid arguments in function \'lua_fairygui_PopupMenu_setItemText\'",0);
    }
    else {
      fairygui::PopupMenu::setItemText(this,(basic_string *)local_50,(basic_string *)local_68);
    }
    if ((local_68[0] & 1) != 0) {
      operator_delete(local_58);
    }
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  else {
                    /* try { // try from 008ef448 to 009ef4d3 has its CatchHandler @ 008ef174 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.PopupMenu:setItemText",iVar2 + -1,2);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

