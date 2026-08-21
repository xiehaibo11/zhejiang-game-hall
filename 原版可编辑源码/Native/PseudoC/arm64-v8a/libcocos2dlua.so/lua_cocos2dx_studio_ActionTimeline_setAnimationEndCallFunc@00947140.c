
/* lua_cocos2dx_studio_ActionTimeline_setAnimationEndCallFunc(lua_State*) */

undefined4 lua_cocos2dx_studio_ActionTimeline_setAnimationEndCallFunc(lua_State *param_1)

{
  long lVar1;
  ulong __n;
  void *__src;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  code *pcVar5;
  undefined4 uVar6;
  void *__dest;
  ulong local_f0;
  ulong uStack_e8;
  void *local_e0;
  ulong local_d8;
  ulong uStack_d0;
  void *local_c8;
  long alStack_c0 [4];
  long *local_a0;
  long alStack_90 [4];
  long *local_70;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 != 2) {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012cf9c0,
               iVar2 + -1,2);
    uVar6 = 0;
    goto LAB_0094736c;
  }
  uStack_d0 = 0;
  local_c8 = (void *)0x0;
  local_d8 = 0;
  local_70 = (long *)0x0;
                    /* try { // try from 009471a4 to 00a471d7 has its CatchHandler @ 009472a4 */
  uVar4 = luaval_to_std_string
                    (param_1,2,(basic_string *)&local_d8,
                     "ccs.ActionTimeline:setAnimationEndCallFunc");
  __src = local_c8;
  __n = uStack_d0;
  if ((uVar4 & 1) == 0) {
                    /* try { // try from 00947224 to 00a472bf has its CatchHandler @ 00946fb4 */
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_studio_ActionTimeline_setAnimationEndCallFunc\'"
                ,0);
    uVar6 = 0;
  }
  else {
    uStack_e8 = 0;
    local_e0 = (void *)0x0;
    local_f0 = 0;
    if ((local_d8 & 1) == 0) {
      uStack_e8 = uStack_d0;
      local_f0 = local_d8;
      local_e0 = local_c8;
                    /* try { // try from 009471d8 to 00a471eb has its CatchHandler @ 00947270 */
      if (local_70 == (long *)0x0) goto LAB_009472ac;
LAB_009471e0:
      if (alStack_90 == local_70) {
        local_a0 = alStack_c0;
        (**(code **)(*local_70 + 0x18))(local_70,alStack_c0);
      }
      else {
                    /* try { // try from 009471f0 to 00a47223 has its CatchHandler @ 00947274 */
        local_a0 = (long *)(**(code **)(*local_70 + 0x10))();
      }
    }
    else {
      if (0xffffffffffffffef < uStack_d0) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_length_error();
      }
      if (uStack_d0 < 0x17) {
        __dest = (void *)((ulong)&local_f0 | 1);
        local_f0 = (ulong)(byte)((int)uStack_d0 << 1);
        if (uStack_d0 != 0) goto LAB_00947290;
      }
      else {
                    /* catch() { ... } // from try @ 009471d8 with catch @ 00947270 */
                    /* catch() { ... } // from try @ 009471f0 with catch @ 00947274 */
        uVar4 = uStack_d0 + 0x10 & 0xfffffffffffffff0;
        __dest = operator_new(uVar4);
        local_f0 = uVar4 | 1;
        uStack_e8 = __n;
        local_e0 = __dest;
LAB_00947290:
        memcpy(__dest,__src,__n);
      }
      *(undefined1 *)((long)__dest + __n) = 0;
                    /* catch() { ... } // from try @ 009471a4 with catch @ 009472a4 */
      if (local_70 != (long *)0x0) goto LAB_009471e0;
LAB_009472ac:
      local_a0 = (long *)0x0;
    }
    (**(code **)(*plVar3 + 0x118))(plVar3,&local_f0,alStack_c0);
    if (alStack_c0 == local_a0) {
      pcVar5 = *(code **)(*local_a0 + 0x20);
LAB_0094730c:
      (*pcVar5)();
    }
    else if (local_a0 != (long *)0x0) {
      pcVar5 = *(code **)(*local_a0 + 0x28);
      goto LAB_0094730c;
    }
    if ((local_f0 & 1) != 0) {
      operator_delete(local_e0);
    }
    uVar6 = 1;
    lua_settop(param_1,1);
  }
  if (alStack_90 == local_70) {
    pcVar5 = *(code **)(*local_70 + 0x20);
LAB_00947358:
    (*pcVar5)();
  }
  else if (local_70 != (long *)0x0) {
    pcVar5 = *(code **)(*local_70 + 0x28);
    goto LAB_00947358;
  }
  if ((local_d8 & 1) != 0) {
    operator_delete(local_c8);
  }
LAB_0094736c:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}

