
void FUN_009d9208(lua_State *param_1)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  byte local_60 [8];
  ulong local_58;
  void *local_50;
  ulong local_48;
  LiPeiLei *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  iVar4 = lua_gettop();
  if (iVar4 != 1) {
    luaL_argerror(param_1,1,"lua_universe_StringUtils_GB_18030_2000_TO_UTF8: expected 1 argument");
  }
  auVar6 = universe::get_cstr(param_1,1,(char **)&local_40,&local_48,
                              "lua_universe_StringUtils_GB_18030_2000_TO_UTF8");
  if ((auVar6._0_8_ & 1) == 0) {
    uVar5 = 0;
  }
  else {
    if (local_48 == 0) {
      lua_pushstring(param_1,&DAT_013c996e);
    }
    else {
      universe::LiPeiLei::GB_18030_2000_TO_UTF8(local_40,auVar6._8_8_);
      uVar1 = (ulong)(local_60[0] >> 1);
      pvVar3 = (void *)((ulong)local_60 | 1);
      if ((local_60[0] & 1) != 0) {
        uVar1 = local_58;
        pvVar3 = local_50;
      }
      lua_pushlstring(param_1,pvVar3,uVar1);
      if ((local_60[0] & 1) != 0) {
        operator_delete(local_50);
      }
    }
    uVar5 = 1;
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}

