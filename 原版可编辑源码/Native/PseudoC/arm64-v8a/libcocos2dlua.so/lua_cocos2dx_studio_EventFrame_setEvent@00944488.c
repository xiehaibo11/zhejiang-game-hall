
/* lua_cocos2dx_studio_EventFrame_setEvent(lua_State*) */

undefined4 lua_cocos2dx_studio_EventFrame_setEvent(lua_State *param_1)

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
  
                    /* try { // try from 00944490 to 00a444c3 has its CatchHandler @ 00944590 */
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  lVar5 = tolua_tousertype(param_1,1,0);
                    /* try { // try from 009444c4 to 00a444d7 has its CatchHandler @ 0094455c */
  iVar4 = lua_gettop(param_1);
  if (iVar4 + -1 != 1) {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.EventFrame:setEvent",iVar4 + -1,1);
    uVar7 = 0;
    goto LAB_0094462c;
  }
  uStack_68 = 0;
  local_60 = (char *)0x0;
                    /* try { // try from 009444dc to 00a4450f has its CatchHandler @ 00944560 */
  local_70 = 0;
  uVar6 = luaval_to_std_string(param_1,2,(basic_string *)&local_70,"ccs.EventFrame:setEvent");
  pcVar3 = local_60;
  uVar1 = uStack_68;
  if ((uVar6 & 1) == 0) {
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_studio_EventFrame_setEvent\'",
                0);
    uVar7 = 0;
                    /* catch() { ... } // from try @ 009444c4 with catch @ 0094455c */
  }
  else {
    uStack_88 = 0;
    local_80 = (char *)0x0;
    local_90 = 0;
    if ((local_70 & 1) == 0) {
                    /* try { // try from 00944510 to 00a445ab has its CatchHandler @ 00944300 */
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
                    /* catch() { ... } // from try @ 00944490 with catch @ 00944590 */
        if (uStack_68 != 0) goto LAB_009445b8;
      }
      else {
        uVar6 = uStack_68 + 0x10 & 0xfffffffffffffff0;
        __dest = operator_new(uVar6);
        local_90 = uVar6 | 1;
        uStack_88 = uVar1;
        local_80 = __dest;
LAB_009445b8:
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
                    /* catch() { ... } // from try @ 009444dc with catch @ 00944560 */
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
LAB_0094462c:
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}

