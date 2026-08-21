
/* lua_cocos2dx_studio_PlayableFrame_setPlayableAct(lua_State*) */

undefined4 lua_cocos2dx_studio_PlayableFrame_setPlayableAct(lua_State *param_1)

{
  ulong uVar1;
  long lVar2;
  char *pcVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined4 uVar7;
  char *__dest;
  ulong local_90;
  ulong uStack_88;
  char *local_80;
  ulong local_70;
  ulong uStack_68;
  char *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  lVar5 = tolua_tousertype(param_1,1,0);
  iVar4 = lua_gettop(param_1);
  if (iVar4 + -1 != 1) {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.PlayableFrame:setPlayableAct",iVar4 + -1,1);
                    /* try { // try from 0094552c to 00a4552f has its CatchHandler @ 0094558c */
    uVar7 = 0;
                    /* try { // try from 00945530 to 00a4559f has its CatchHandler @ 009454e0 */
    goto LAB_0094561c;
  }
  uStack_68 = 0;
  local_60 = (char *)0x0;
  local_70 = 0;
                    /* try { // try from 009454e0 to 00a4552b has its CatchHandler @ 009454e0
                       catch() { ... } // from try @ 009454e0 with catch @ 009454e0
                       catch() { ... } // from try @ 00945530 with catch @ 009454e0 */
  uVar6 = luaval_to_std_string
                    (param_1,2,(basic_string *)&local_70,"ccs.PlayableFrame:setPlayableAct");
  pcVar3 = local_60;
  uVar1 = uStack_68;
  if ((uVar6 & 1) == 0) {
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_studio_PlayableFrame_setPlayableAct\'"
                ,0);
    uVar7 = 0;
  }
  else {
    uStack_88 = 0;
    local_80 = (char *)0x0;
    local_90 = 0;
    if ((local_70 & 1) == 0) {
      uStack_88 = uStack_68;
      local_90 = local_70;
      local_80 = local_60;
    }
    else {
      if (0xffffffffffffffef < uStack_68) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_length_error();
      }
      if (uStack_68 < 0x17) {
        __dest = (char *)((ulong)&local_90 | 1);
        local_90 = (ulong)(byte)((int)uStack_68 << 1);
        if (uStack_68 != 0) goto LAB_009455a8;
      }
      else {
                    /* catch() { ... } // from try @ 0094552c with catch @ 0094558c */
        uVar6 = uStack_68 + 0x10 & 0xfffffffffffffff0;
        __dest = operator_new(uVar6);
        local_90 = uVar6 | 1;
                    /* try { // try from 009455a0 to 00a456cf has its CatchHandler @ 009455a0
                       catch() { ... } // from try @ 009455a0 with catch @ 009455a0
                       catch() { ... } // from try @ 00945750 with catch @ 009455a0 */
        uStack_88 = uVar1;
        local_80 = __dest;
LAB_009455a8:
        memcpy(__dest,pcVar3,uVar1);
      }
      __dest[uVar1] = '\0';
    }
    if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)&local_90
        != (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar5 + 0x58)) {
      uVar1 = local_90 >> 1 & 0x7f;
      pcVar3 = (char *)((ulong)&local_90 | 1);
      if ((local_90 & 1) != 0) {
        uVar1 = uStack_88;
        pcVar3 = local_80;
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (lVar5 + 0x58),pcVar3,uVar1);
    }
    if ((local_90 & 1) != 0) {
      operator_delete(local_80);
    }
    uVar7 = 1;
    lua_settop(param_1,1);
  }
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
LAB_0094561c:
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}

