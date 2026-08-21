
undefined8 FUN_008f20ac(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  GLoader *this;
  ulong uVar3;
  ulong local_50 [2];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (GLoader *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    local_50[1] = 0;
    local_40 = (void *)0x0;
    local_50[0] = 0;
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)local_50,"fairygui.GLoader:setURL");
    if ((uVar3 & 1) == 0) {
      tolua_error(param_1,"invalid arguments in function \'lua_fairygui_GLoader_setURL\'",0);
    }
    else {
      fairygui::GLoader::setURL(this,(basic_string *)local_50);
    }
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GLoader:setURL",iVar2 + -1,1);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 008f2174 to 009f21a7 has its CatchHandler @ 008f2274 */
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

