
undefined4 FUN_008edeb8(lua_State *param_1)

{
  byte *pbVar1;
  long lVar2;
  int iVar3;
  GController *this;
  ulong uVar4;
  byte *pbVar5;
  undefined4 uVar6;
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  this = (GController *)tolua_tousertype(param_1,1,0);
  iVar3 = lua_gettop(param_1);
  if (iVar3 + -1 == 1) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar4 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_50,"fairygui.GController:getPageNameById");
    if ((uVar4 & 1) == 0) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_fairygui_GController_getPageNameById\'",0);
      uVar6 = 0;
    }
    else {
      pbVar5 = (byte *)fairygui::GController::getPageNameById(this,(basic_string *)&local_50);
      uVar4 = *(ulong *)(pbVar5 + 8);
      pbVar1 = *(byte **)(pbVar5 + 0x10);
      if ((*pbVar5 & 1) == 0) {
        pbVar1 = pbVar5 + 1;
        uVar4 = (ulong)(*pbVar5 >> 1);
      }
      lua_pushlstring(param_1,pbVar1,uVar4);
      uVar6 = 1;
    }
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GController:getPageNameById",iVar3 + -1,1);
    uVar6 = 0;
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}

