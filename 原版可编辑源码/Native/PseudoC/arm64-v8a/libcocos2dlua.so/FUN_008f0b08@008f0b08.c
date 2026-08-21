
undefined8 FUN_008f0b08(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  GTextInput *this;
  ulong uVar3;
  bool local_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (GTextInput *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_boolean(param_1,2,local_3c,"fairygui.GTextInput:setPassword");
    if ((uVar3 & 1) == 0) {
      tolua_error(param_1,"invalid arguments in function \'lua_fairygui_GTextInput_setPassword\'",0)
      ;
    }
    else {
      fairygui::GTextInput::setPassword(this,local_3c[0]);
    }
  }
  else {
                    /* try { // try from 008f0b7c to 009f0bcf has its CatchHandler @ 008f0b7c
                       catch() { ... } // from try @ 008f0b7c with catch @ 008f0b7c
                       catch() { ... } // from try @ 008f0cec with catch @ 008f0b7c */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GTextInput:setPassword",iVar2 + -1,1);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 008f0bd0 to 009f0c0b has its CatchHandler @ 008f0d84 */
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

