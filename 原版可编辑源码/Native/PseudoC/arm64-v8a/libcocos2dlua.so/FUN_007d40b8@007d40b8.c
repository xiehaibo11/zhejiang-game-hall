
void FUN_007d40b8(undefined8 param_1,
                 basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                 *param_2)

{
  long lVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  ulong local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  lua_getfield(param_1,0xffffd8ee,"tostring");
  if (0 < iVar2) {
    iVar4 = 0;
    do {
      lua_pushvalue(param_1,0xffffffff);
      lua_pushvalue(param_1,iVar4 + 1U);
      lua_call(param_1,1,1);
      pcVar3 = (char *)lua_tolstring(param_1,0xffffffff,&local_60);
      if (pcVar3 == (char *)0x0) {
        luaL_error(param_1,"\'tostring\' must return a string to \'print\'");
        break;
      }
      if (1 < iVar4 + 1U) {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append(param_2,"\t",1);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append(param_2,pcVar3,local_60);
      lua_settop(param_1,0xfffffffe);
      iVar4 = iVar4 + 1;
    } while (iVar2 != iVar4);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

