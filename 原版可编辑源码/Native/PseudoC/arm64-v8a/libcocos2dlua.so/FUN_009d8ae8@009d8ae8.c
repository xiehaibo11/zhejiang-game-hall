
void FUN_009d8ae8(lua_State *param_1)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ulong uStack_38;
  char *local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  iVar3 = lua_gettop();
  if (iVar3 != 1) {
    luaL_argerror(param_1,1,"lua_universe_Device_isHaveApp: expected 1 argument");
  }
  uVar5 = universe::get_cstr(param_1,1,&local_30,&uStack_38,"lua_universe_Device_isHaveApp");
  bVar1 = (uVar5 & 1) != 0;
  if (bVar1) {
    uVar4 = universe::Device::isHaveApp(local_30);
    lua_pushboolean(param_1,uVar4 & 1);
  }
  if (*(long *)(lVar2 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar1);
  }
  return;
}

