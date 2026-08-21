
undefined8 FUN_0091be04(long param_1)

{
  long lVar1;
  int iVar2;
  CCBAnimationManager *this;
  CallFunc *pCVar3;
  char *__s;
  size_t sVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1 != 0) {
    this = (CCBAnimationManager *)tolua_tousertype(param_1,1,0);
    iVar2 = lua_gettop(param_1);
    if (iVar2 + -1 == 2) {
      pCVar3 = (CallFunc *)tolua_tousertype(param_1,2,0);
      __s = (char *)tolua_tostring(param_1,3,0);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_50,"");
      if (__s != (char *)0x0) {
        sVar4 = strlen(__s);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign(local_50,__s,sVar4);
      }
      cocosbuilder::CCBAnimationManager::setCallFunc(this,pCVar3,(basic_string *)local_50);
      if (((byte)local_50[0] & 1) != 0) {
        operator_delete(local_40);
      }
    }
    else {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n",
                 "cc.CCBAnimationManager:setCallFuncForLuaCallbackNamed",iVar2 + -1,1);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

