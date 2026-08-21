
undefined8 FUN_00913ff0(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ScriptHandlerMgr *pSVar5;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 0091400c to 00a1403f has its CatchHandler @ 00914170 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_50,"");
  uVar4 = tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
                    /* try { // try from 00914050 to 00a14067 has its CatchHandler @ 0091416c */
    uVar3 = toluafix_ref_function(param_1,2,0);
    pSVar5 = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
    cocos2d::ScriptHandlerMgr::addObjectHandler(pSVar5,uVar4,uVar3,0x1e);
  }
  else {
                    /* try { // try from 00914084 to 00a1408b has its CatchHandler @ 00914134 */
    luaL_error(param_1,
               "\'registerScriptHandler\' function of XMLHttpRequest wrong number of arguments: %d, was expecting %d\n"
               ,iVar2 + -1,1);
  }
                    /* try { // try from 0091408c to 00a140cf has its CatchHandler @ 00913fb8 */
  if (((byte)local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

