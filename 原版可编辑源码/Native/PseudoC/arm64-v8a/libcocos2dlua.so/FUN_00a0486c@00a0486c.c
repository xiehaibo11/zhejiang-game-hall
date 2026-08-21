
void FUN_00a0486c(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  OStream *this;
  undefined8 uVar4;
  char *pcVar5;
  uint local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 != 2) {
    luaL_argerror(param_1,2,"lua_universe_network_OStream_readCString: expected 2 argument");
  }
  uVar3 = universe::is_class(param_1,1,"un.network.OStream");
  if ((uVar3 & 1) == 0) {
    pcVar5 = "lua_universe_network_OStream_readCString: invalid \'cobj\'";
  }
  else {
    this = (OStream *)universe::get_instance(param_1,1);
    local_4c = 0;
    uVar3 = universe::get_uint(param_1,2,&local_4c,"lua_universe_network_OStream_read");
    uVar4 = 0;
    if ((uVar3 & 1) == 0) goto LAB_00a04958;
    uVar3 = (ulong)local_4c;
    pcVar5 = malloc(uVar3);
    uVar3 = universe::network::OStream::readCString(this,pcVar5,uVar3);
    if ((uVar3 & 1) != 0) {
      lua_pushstring(param_1,pcVar5);
      free(pcVar5);
      uVar4 = 1;
      goto LAB_00a04958;
    }
    free(pcVar5);
    pcVar5 = "lua_universe_network_OStream_readCString: read error";
  }
  luaL_error(param_1,pcVar5);
  uVar4 = 0;
LAB_00a04958:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

