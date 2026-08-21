
undefined8 FUN_008e3cfc(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  GComboBox *this;
  ulong uVar3;
  ulong local_50 [2];
  void *local_40;
  long local_38;
  
                    /* try { // try from 008e3d08 to 009e3d0b has its CatchHandler @ 008e3d40 */
                    /* try { // try from 008e3d0c to 009e3d53 has its CatchHandler @ 008e3cbc */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (GComboBox *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
                    /* catch() { ... } // from try @ 008e3d08 with catch @ 008e3d40 */
  if (iVar2 + -1 == 1) {
    local_50[1] = 0;
    local_40 = (void *)0x0;
    local_50[0] = 0;
                    /* try { // try from 008e3d54 to 009e40db has its CatchHandler @ 008e3d54
                       catch() { ... } // from try @ 008e3d54 with catch @ 008e3d54
                       catch() { ... } // from try @ 008e415c with catch @ 008e3d54 */
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)local_50,"fairygui.GComboBox:setValue");
    if ((uVar3 & 1) == 0) {
      tolua_error(param_1,"invalid arguments in function \'lua_fairygui_GComboBox_setValue\'",0);
    }
    else {
      fairygui::GComboBox::setValue(this,(basic_string *)local_50);
    }
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GComboBox:setValue",iVar2 + -1,1);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

