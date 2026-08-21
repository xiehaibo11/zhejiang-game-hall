
undefined8 FUN_009d8844(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  int local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 != 1) {
    luaL_argerror(param_1,1,"lua_universe_Device_removeNotification: expected 1 argument");
  }
  uVar3 = universe::get_int(param_1,1,&local_2c,"lua_universe_Device_removeNotification");
  if ((uVar3 & 1) != 0) {
    universe::Device::removeNotification(local_2c);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

