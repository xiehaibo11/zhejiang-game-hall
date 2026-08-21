
undefined8 FUN_008ebf10(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  Transition *this;
  double local_58;
  ulong local_50 [2];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (Transition *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 2) {
    local_50[1] = 0;
    local_40 = (void *)0x0;
    local_50[0] = 0;
    uVar3 = luaval_to_std_string
                      (param_1,2,(basic_string *)local_50,"fairygui.Transition:setDuration");
    uVar4 = luaval_to_number(param_1,3,&local_58,"fairygui.Transition:setDuration");
    if ((uVar3 & uVar4 & 1) == 0) {
      tolua_error(param_1,"invalid arguments in function \'lua_fairygui_Transition_setDuration\'",0)
      ;
    }
    else {
      fairygui::Transition::setDuration(this,(basic_string *)local_50,(float)local_58);
    }
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.Transition:setDuration",iVar2 + -1,2);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

