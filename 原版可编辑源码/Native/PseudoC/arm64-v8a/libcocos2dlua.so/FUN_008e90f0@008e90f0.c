
undefined8 FUN_008e90f0(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  basic_string *pbVar5;
  ulong uVar6;
  double local_58;
  ulong local_50 [2];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pbVar5 = (basic_string *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 3) {
    local_50[1] = 0;
    local_40 = (void *)0x0;
    local_50[0] = 0;
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)local_50,"fairygui.GRoot:playSound");
    uVar4 = luaval_to_number(param_1,3,&local_58,"fairygui.GRoot:playSound");
    if ((uVar3 & uVar4 & 1) == 0) {
      tolua_error(param_1,"invalid arguments in function \'lua_fairygui_GRoot_playSound\'",0);
    }
    else {
      fairygui::GRoot::playSound(pbVar5,(float)local_58);
    }
  }
  else {
    if (iVar2 != 2) {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                 "fairygui.GRoot:playSound",iVar2 + -1,1);
      goto LAB_008e9230;
    }
    local_50[1] = 0;
    local_40 = (void *)0x0;
    local_50[0] = 0;
    uVar6 = luaval_to_std_string(param_1,2,(basic_string *)local_50,"fairygui.GRoot:playSound");
    if ((uVar6 & 1) == 0) {
      tolua_error(param_1,"invalid arguments in function \'lua_fairygui_GRoot_playSound\'",0);
    }
    else {
      fairygui::GRoot::playSound(pbVar5,1.0);
    }
  }
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
LAB_008e9230:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

