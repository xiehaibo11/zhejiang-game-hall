
void FUN_00a04ab8(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  OStream *this;
  undefined8 uVar4;
  uint local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 != 2) {
    luaL_argerror(param_1,2,"lua_universe_network_OStream_read: expected 2 argument");
  }
  uVar3 = universe::is_class(param_1,1,"un.network.OStream");
  if ((uVar3 & 1) == 0) {
    luaL_error(param_1,"lua_universe_network_OStream_read: invalid \'cobj\'");
    uVar4 = 0;
  }
  else {
    this = (OStream *)universe::get_instance(param_1,1);
    local_3c = 0;
    uVar3 = universe::get_uint(param_1,2,&local_3c,"lua_universe_network_OStream_read");
    uVar4 = 0;
    if ((uVar3 & 1) != 0) {
      if (local_3c == 0) {
        lua_pushstring(param_1,&DAT_013c996e);
      }
      else {
        uVar3 = universe::network::OStream::getAvailableSize(this);
        if (uVar3 < local_3c) {
          local_3c = (uint)uVar3;
        }
        uVar4 = universe::network::OStream::getReadData(this);
        lua_pushlstring(param_1,uVar4,local_3c);
        universe::network::OStream::pop(this,(ulong)local_3c);
      }
      uVar4 = 1;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

