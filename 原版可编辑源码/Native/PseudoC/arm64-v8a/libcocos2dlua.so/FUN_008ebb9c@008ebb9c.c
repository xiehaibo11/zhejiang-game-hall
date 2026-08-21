
undefined8 FUN_008ebb9c(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Transition *this;
  ulong uVar3;
  ulong uVar4;
  bool local_50 [4];
  bool local_4c [4];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = (Transition *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 3) {
    uVar3 = luaval_to_boolean(param_1,2,local_4c,"fairygui.Transition:stop");
    uVar4 = luaval_to_boolean(param_1,3,local_50,"fairygui.Transition:stop");
    if (((uVar3 & 1) == 0) || ((uVar4 & 1) == 0)) {
      tolua_error(param_1,"invalid arguments in function \'lua_fairygui_Transition_stop\'",0);
    }
    else {
      fairygui::Transition::stop(this,local_4c[0],local_50[0]);
    }
  }
  else if (iVar2 + -1 == 0) {
    fairygui::Transition::stop(this);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.Transition:stop",iVar2 + -1,0);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

