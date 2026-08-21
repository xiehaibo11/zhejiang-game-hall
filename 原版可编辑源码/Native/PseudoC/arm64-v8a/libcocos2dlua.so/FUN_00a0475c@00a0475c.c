
void FUN_00a0475c(lua_State *param_1)

{
  long lVar1;
  void *pvVar2;
  int iVar3;
  ulong uVar4;
  OStream *this;
  undefined8 uVar5;
  ulong local_50;
  ulong local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar3 = lua_gettop();
  if (iVar3 != 1) {
    luaL_argerror(param_1,1,&DAT_012f7aaa);
  }
  uVar4 = universe::is_class(param_1,1,"un.network.OStream");
  if ((uVar4 & 1) == 0) {
    luaL_error(param_1,"lua_universe_network_OStream_readString: invalid \'cobj\'");
    uVar5 = 0;
  }
  else {
    this = (OStream *)universe::get_instance(param_1,1);
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    universe::network::OStream::operator>>(this,(basic_string *)&local_50);
    uVar4 = local_50 >> 1 & 0x7f;
    pvVar2 = (void *)((ulong)&local_50 | 1);
    if ((local_50 & 1) != 0) {
      uVar4 = local_48;
      pvVar2 = local_40;
    }
    lua_pushlstring(param_1,pvVar2,uVar4);
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
    uVar5 = 1;
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}

