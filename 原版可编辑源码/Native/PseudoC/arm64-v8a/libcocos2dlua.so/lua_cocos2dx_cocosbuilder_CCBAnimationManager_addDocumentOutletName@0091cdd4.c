
/* lua_cocos2dx_cocosbuilder_CCBAnimationManager_addDocumentOutletName(lua_State*) */

undefined4 lua_cocos2dx_cocosbuilder_CCBAnimationManager_addDocumentOutletName(lua_State *param_1)

{
  long lVar1;
  ulong __n;
  void *__src;
  int iVar2;
  CCBAnimationManager *pCVar3;
  ulong uVar4;
  undefined4 uVar5;
  void *__dest;
  ulong local_90;
  ulong uStack_88;
  void *local_80;
  ulong local_70;
  ulong uStack_68;
  void *local_60;
  long local_58;
  
                    /* catch() { ... } // from try @ 0091cce8 with catch @ 0091cde8 */
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  pCVar3 = (CCBAnimationManager *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 != 1) {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.CCBAnimationManager:addDocumentOutletName",iVar2 + -1,1);
    uVar5 = 0;
    goto LAB_0091cf54;
  }
  uStack_68 = 0;
  local_60 = (void *)0x0;
  local_70 = 0;
  uVar4 = luaval_to_std_string
                    (param_1,2,(basic_string *)&local_70,
                     "cc.CCBAnimationManager:addDocumentOutletName");
  __src = local_60;
  __n = uStack_68;
  if ((uVar4 & 1) == 0) {
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_cocosbuilder_CCBAnimationManager_addDocumentOutletName\'"
                ,0);
    uVar5 = 0;
  }
  else {
    uStack_88 = 0;
    local_80 = (void *)0x0;
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
        __dest = (void *)((ulong)&local_90 | 1);
        local_90 = (ulong)(byte)((int)uStack_68 << 1);
        if (uStack_68 != 0) goto LAB_0091cf04;
      }
      else {
        uVar4 = uStack_68 + 0x10 & 0xfffffffffffffff0;
        __dest = operator_new(uVar4);
        local_90 = uVar4 | 1;
        uStack_88 = __n;
        local_80 = __dest;
LAB_0091cf04:
        memcpy(__dest,__src,__n);
      }
      *(undefined1 *)((long)__dest + __n) = 0;
    }
    cocosbuilder::CCBAnimationManager::addDocumentOutletName(pCVar3,&local_90);
    if ((local_90 & 1) != 0) {
      operator_delete(local_80);
    }
    uVar5 = 1;
    lua_settop(param_1,1);
  }
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
LAB_0091cf54:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

