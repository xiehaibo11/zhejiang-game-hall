
undefined8 FUN_008ed8c8(lua_State *param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  GController *this;
  ulong uVar4;
  bool local_40 [4];
  int local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  this = (GController *)tolua_tousertype(param_1,1,0);
  iVar3 = lua_gettop(param_1);
  iVar1 = iVar3 + -1;
  if ((3 < iVar3) || (iVar1 < 1)) {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting 1~2\n",
               "fairygui.GController:setSelectedIndex",iVar1);
    goto LAB_008ed9ac;
  }
  uVar4 = luaval_to_int32(param_1,2,&local_3c,"fairygui.GController:setSelectedIndex");
  if ((uVar4 & 1) == 0) {
LAB_008ed984:
    tolua_error(param_1,
                "invalid arguments in function \'lua_fairygui_GController_setSelectedIndex\'",0);
  }
  else {
    if (iVar1 < 2) {
      local_40[0] = true;
    }
    else {
                    /* try { // try from 008ed950 to 009ed9cb has its CatchHandler @ 008ed950
                       catch() { ... } // from try @ 008ed950 with catch @ 008ed950
                       catch() { ... } // from try @ 008ed9d8 with catch @ 008ed950 */
      uVar4 = luaval_to_boolean(param_1,3,local_40,"fairygui.GController:setSelectedIndex");
      if ((uVar4 & 1) == 0) goto LAB_008ed984;
    }
    fairygui::GController::setSelectedIndex(this,local_3c,local_40[0]);
  }
LAB_008ed9ac:
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 008ed9cc to 009ed9d7 has its CatchHandler @ 008eda0c */
  return 0;
}

