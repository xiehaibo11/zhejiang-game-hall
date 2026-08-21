
undefined8 FUN_008dcdac(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  double local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 008dcdcc to 009dcdd3 has its CatchHandler @ 008dce0c */
                    /* try { // try from 008dcdd4 to 009dce27 has its CatchHandler @ 008dccd0 */
  tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_number(param_1,2,&local_40,"fairygui.GObject:setSkewY");
                    /* catch() { ... } // from try @ 008dcdcc with catch @ 008dce0c */
    if ((uVar3 & 1) == 0) {
      tolua_error(param_1,"invalid arguments in function \'lua_fairygui_GObject_setSkewY\'",0);
    }
    else {
      fairygui::GObject::setSkewY((float)local_40);
    }
  }
  else {
                    /* try { // try from 008dce28 to 009dcf9f has its CatchHandler @ 008dce28
                       catch() { ... } // from try @ 008dce28 with catch @ 008dce28
                       catch() { ... } // from try @ 008dcfa8 with catch @ 008dce28 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GObject:setSkewY",iVar2 + -1,1);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

