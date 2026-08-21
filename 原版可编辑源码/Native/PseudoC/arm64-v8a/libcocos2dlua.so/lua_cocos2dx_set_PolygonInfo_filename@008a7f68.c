
/* lua_cocos2dx_set_PolygonInfo_filename(lua_State*) */

undefined8 lua_cocos2dx_set_PolygonInfo_filename(lua_State *param_1)

{
  ulong uVar1;
  long lVar2;
  char *pcVar3;
  int iVar4;
  long lVar5;
  ulong local_50;
  ulong local_48;
  char *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar5 = tolua_tousertype(param_1,1,0);
  iVar4 = lua_gettop(param_1);
  if (iVar4 == 2) {
    local_48 = 0;
    local_40 = (char *)0x0;
    local_50 = 0;
    luaval_to_std_string(param_1,2,(basic_string *)&local_50,"");
    if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)&local_50
        != (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar5 + 0x30)) {
      uVar1 = local_50 >> 1 & 0x7f;
      pcVar3 = (char *)((ulong)&local_50 | 1);
      if ((local_50 & 1) != 0) {
        uVar1 = local_48;
        pcVar3 = local_40;
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (lVar5 + 0x30),pcVar3,uVar1);
    }
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}

