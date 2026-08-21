
undefined8 FUN_009da0b8(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  int iVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50 [8];
  ulong local_48;
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  iVar4 = lua_gettop();
  if (iVar4 != 0) {
    luaL_argerror(param_1,0,"lua_universe_FileSystem_getWritePath: expected 0 argument");
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(local_50,(basic_string *)(DAT_01782208 + 8));
  uVar1 = (ulong)((byte)local_50[0] >> 1);
  pvVar3 = (void *)((ulong)local_50 | 1);
  if (((byte)local_50[0] & 1) != 0) {
    uVar1 = local_48;
    pvVar3 = local_40;
  }
  lua_pushlstring(param_1,pvVar3,uVar1);
  if (((byte)local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}

