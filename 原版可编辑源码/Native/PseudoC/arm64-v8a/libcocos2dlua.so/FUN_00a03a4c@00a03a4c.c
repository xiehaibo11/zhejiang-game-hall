
undefined8 FUN_00a03a4c(lua_State *param_1)

{
  char *pcVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  AUpdates *this;
  ulong uVar5;
  uint local_54;
  ulong local_50;
  ulong local_48;
  char *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  iVar3 = lua_gettop();
  if (iVar3 != 3) {
    luaL_argerror(param_1,3,"lua_universe_network_IStream_write: expected 3 argument");
  }
  uVar4 = universe::is_class(param_1,1,"un.network.IStream");
  if ((uVar4 & 1) == 0) {
    luaL_error(param_1,&DAT_012f723c);
  }
  else {
    this = (AUpdates *)universe::get_instance(param_1,1);
    local_48 = 0;
    local_40 = (char *)0x0;
    local_50 = 0;
    uVar4 = universe::get_string
                      (param_1,2,(basic_string *)&local_50,
                       "lua_universe_network_IStream_writeString");
    if (((uVar4 & 1) != 0) &&
       (uVar4 = universe::get_uint(param_1,3,&local_54,"lua_universe_network_IStream_writeString"),
       (uVar4 & 1) != 0)) {
      uVar5 = (ulong)local_54;
      uVar4 = (ulong)((byte)local_50._0_1_ >> 1);
      if ((local_50 & 1) != 0) {
        uVar4 = local_48;
      }
      if (uVar4 < uVar5) {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_50,uVar5 - uVar4,'\0');
        uVar5 = (ulong)local_54;
      }
      pcVar1 = (char *)((ulong)&local_50 | 1);
      if (((byte)local_50._0_1_ & 1) != 0) {
        pcVar1 = local_40;
      }
      universe::network::AUpdates::write(this,pcVar1,uVar5);
    }
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

