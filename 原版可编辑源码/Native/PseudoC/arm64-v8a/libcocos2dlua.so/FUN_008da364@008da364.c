
undefined8 FUN_008da364(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  GObject *this;
  ulong uVar3;
  ulong local_50 [2];
  void *local_40;
  long local_38;
  
                    /* try { // try from 008da374 to 009da37b has its CatchHandler @ 008da37c */
  lVar1 = tpidr_el0;
                    /* catch() { ... } // from try @ 008da374 with catch @ 008da37c
                       try { // try from 008da37c to 009da3af has its CatchHandler @ 008da178 */
  local_38 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 008da2e4 with catch @ 008da380 */
  this = (GObject *)tolua_tousertype(param_1,1,0);
                    /* catch() { ... } // from try @ 008da21c with catch @ 008da394 */
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    local_50[1] = 0;
    local_40 = (void *)0x0;
    local_50[0] = 0;
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)local_50,"fairygui.GObject:setTooltips");
    if ((uVar3 & 1) == 0) {
      tolua_error(param_1,"invalid arguments in function \'lua_fairygui_GObject_setTooltips\'",0);
    }
    else {
      fairygui::GObject::setTooltips(this,(basic_string *)local_50);
    }
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GObject:setTooltips",iVar2 + -1,1);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

