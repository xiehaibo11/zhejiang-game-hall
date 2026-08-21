
undefined8 FUN_009140e8(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  ScriptHandlerMgr *pSVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_50,"");
  uVar3 = tolua_tousertype(param_1,1,0);
                    /* catch() { ... } // from try @ 00914084 with catch @ 00914134 */
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 0) {
    pSVar4 = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
    cocos2d::ScriptHandlerMgr::removeObjectHandler(pSVar4,uVar3,0x1e);
                    /* try { // try from 0091419c to 00a141eb has its CatchHandler @ 0091419c
                       catch() { ... } // from try @ 0091419c with catch @ 0091419c
                       catch() { ... } // from try @ 00914248 with catch @ 0091419c
                       catch() { ... } // from try @ 009142a0 with catch @ 0091419c */
  }
  else {
    luaL_error(param_1,
               "\'unregisterScriptHandler\' function of XMLHttpRequest wrong number of arguments: %d, was expecting %d\n"
               ,iVar2 + -1,0);
  }
  if (((byte)local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
                    /* catch() { ... } // from try @ 00914050 with catch @ 0091416c */
                    /* catch() { ... } // from try @ 0091400c with catch @ 00914170
                       catch() { ... } // from try @ 009140d0 with catch @ 00914170 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

