
undefined4 FUN_009da9ac(lua_State *param_1)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 auVar6 [16];
  byte local_68 [8];
  ulong local_60;
  void *local_58;
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  iVar4 = lua_gettop();
  if (iVar4 != 1) {
    luaL_argerror(param_1,1,&DAT_012f2621);
  }
  local_48 = 0;
  local_40 = (void *)0x0;
  local_50 = 0;
  auVar6 = universe::get_string(param_1,1,(basic_string *)&local_50,"lua_universe_getMd5OfFile");
  if ((auVar6._0_8_ & 1) == 0) {
    uVar5 = 0;
  }
  else {
    universe::utils::CMD5Checksum::GetMD5((CMD5Checksum *)&local_50,auVar6._8_8_);
    uVar1 = (ulong)(local_68[0] >> 1);
    pvVar3 = (void *)((ulong)local_68 | 1);
    if ((local_68[0] & 1) != 0) {
      uVar1 = local_60;
      pvVar3 = local_58;
    }
    lua_pushlstring(param_1,pvVar3,uVar1);
    if ((local_68[0] & 1) != 0) {
      operator_delete(local_58);
    }
    uVar5 = 1;
  }
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}

