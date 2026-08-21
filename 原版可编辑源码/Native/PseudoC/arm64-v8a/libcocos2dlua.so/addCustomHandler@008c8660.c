
/* cocos2d::ScriptHandlerMgr::addCustomHandler(void*, int) */

ulong __thiscall
cocos2d::ScriptHandlerMgr::addCustomHandler(ScriptHandlerMgr *this,void *param_1,int param_2)

{
  long lVar1;
  __tree_node_base *p_Var2;
  ScriptHandlerMgr *pSVar3;
  ScriptHandlerMgr *pSVar4;
  ulong uVar5;
  __tree_node_base *p_Var6;
  ScriptHandlerMgr *pSVar7;
  ulong local_78;
  ulong *local_70;
  ulong *local_68;
  ulong *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  pSVar7 = this + 0x10;
  pSVar4 = *(ScriptHandlerMgr **)pSVar7;
  pSVar3 = pSVar7;
  if (pSVar4 == (ScriptHandlerMgr *)0x0) {
LAB_008c86d0:
    local_68 = (ulong *)0x0;
    local_60 = (ulong *)0x0;
    local_70 = (ulong *)0x0;
  }
  else {
    do {
      if (*(void **)(pSVar4 + 0x20) >= param_1) {
        pSVar3 = pSVar4;
      }
      pSVar4 = *(ScriptHandlerMgr **)(pSVar4 + (ulong)(*(void **)(pSVar4 + 0x20) < param_1) * 8);
    } while (pSVar4 != (ScriptHandlerMgr *)0x0);
    if ((pSVar3 == pSVar7) || (param_1 < *(void **)(pSVar3 + 0x20))) goto LAB_008c86d0;
    local_68 = (ulong *)0x0;
    local_60 = (ulong *)0x0;
    local_70 = (ulong *)0x0;
    if (((pSVar7 != pSVar3) && ((ScriptHandlerMgr *)&local_70 != pSVar3 + 0x28)) &&
       (std::__ndk1::
        vector<std::__ndk1::pair<cocos2d::ScriptHandlerMgr::HandlerType,int>,std::__ndk1::allocator<std::__ndk1::pair<cocos2d::ScriptHandlerMgr::HandlerType,int>>>
        ::assign<std::__ndk1::pair<cocos2d::ScriptHandlerMgr::HandlerType,int>*>
                  ((vector<std::__ndk1::pair<cocos2d::ScriptHandlerMgr::HandlerType,int>,std::__ndk1::allocator<std::__ndk1::pair<cocos2d::ScriptHandlerMgr::HandlerType,int>>>
                    *)&local_70,*(pair **)(pSVar3 + 0x28),*(pair **)(pSVar3 + 0x30)),
       local_70 != local_68)) {
      uVar5 = (ulong)((int)local_68[-1] + 1);
      goto LAB_008c86e0;
    }
  }
  uVar5 = 10000;
LAB_008c86e0:
  local_78 = uVar5 | (ulong)(uint)param_2 << 0x20;
  if (local_68 == local_60) {
    std::__ndk1::
    vector<std::__ndk1::pair<cocos2d::ScriptHandlerMgr::HandlerType,int>,std::__ndk1::allocator<std::__ndk1::pair<cocos2d::ScriptHandlerMgr::HandlerType,int>>>
    ::__push_back_slow_path<std::__ndk1::pair<cocos2d::ScriptHandlerMgr::HandlerType,int>const&>
              ((vector<std::__ndk1::pair<cocos2d::ScriptHandlerMgr::HandlerType,int>,std::__ndk1::allocator<std::__ndk1::pair<cocos2d::ScriptHandlerMgr::HandlerType,int>>>
                *)&local_70,(pair *)&local_78);
    pSVar3 = *(ScriptHandlerMgr **)pSVar7;
  }
  else {
    *local_68 = local_78;
    pSVar3 = *(ScriptHandlerMgr **)pSVar7;
    local_68 = local_68 + 1;
  }
  if (pSVar3 == (ScriptHandlerMgr *)0x0) {
    p_Var6 = *(__tree_node_base **)pSVar7;
    pSVar4 = pSVar7;
  }
  else {
    pSVar4 = this + 0x10;
LAB_008c8738:
    do {
      pSVar7 = pSVar3;
      if (*(void **)(pSVar7 + 0x20) <= param_1) {
        if (*(void **)(pSVar7 + 0x20) < param_1) {
          pSVar4 = pSVar7 + 8;
          pSVar3 = *(ScriptHandlerMgr **)pSVar4;
          if (*(ScriptHandlerMgr **)pSVar4 != (ScriptHandlerMgr *)0x0) goto LAB_008c8738;
        }
        p_Var6 = *(__tree_node_base **)pSVar4;
        goto joined_r0x008c8780;
      }
      pSVar3 = *(ScriptHandlerMgr **)pSVar7;
      pSVar4 = pSVar7;
    } while (*(ScriptHandlerMgr **)pSVar7 != (ScriptHandlerMgr *)0x0);
    p_Var6 = *(__tree_node_base **)pSVar7;
  }
joined_r0x008c8780:
  if (p_Var6 == (__tree_node_base *)0x0) {
    p_Var6 = operator_new(0x40);
    *(void **)(p_Var6 + 0x20) = param_1;
    *(undefined8 *)(p_Var6 + 0x28) = 0;
    *(undefined8 *)(p_Var6 + 0x30) = 0;
    *(undefined8 *)(p_Var6 + 0x38) = 0;
    *(undefined8 *)p_Var6 = 0;
    *(undefined8 *)(p_Var6 + 8) = 0;
    *(ScriptHandlerMgr **)(p_Var6 + 0x10) = pSVar7;
    *(__tree_node_base **)pSVar4 = p_Var6;
    p_Var2 = p_Var6;
    if (**(long **)(this + 8) != 0) {
      *(long *)(this + 8) = **(long **)(this + 8);
      p_Var2 = *(__tree_node_base **)pSVar4;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 0x10),p_Var2);
    *(long *)(this + 0x18) = *(long *)(this + 0x18) + 1;
  }
  if ((vector<std::__ndk1::pair<cocos2d::ScriptHandlerMgr::HandlerType,int>,std::__ndk1::allocator<std::__ndk1::pair<cocos2d::ScriptHandlerMgr::HandlerType,int>>>
       *)(p_Var6 + 0x28) !=
      (vector<std::__ndk1::pair<cocos2d::ScriptHandlerMgr::HandlerType,int>,std::__ndk1::allocator<std::__ndk1::pair<cocos2d::ScriptHandlerMgr::HandlerType,int>>>
       *)&local_70) {
    std::__ndk1::
    vector<std::__ndk1::pair<cocos2d::ScriptHandlerMgr::HandlerType,int>,std::__ndk1::allocator<std::__ndk1::pair<cocos2d::ScriptHandlerMgr::HandlerType,int>>>
    ::assign<std::__ndk1::pair<cocos2d::ScriptHandlerMgr::HandlerType,int>*>
              ((vector<std::__ndk1::pair<cocos2d::ScriptHandlerMgr::HandlerType,int>,std::__ndk1::allocator<std::__ndk1::pair<cocos2d::ScriptHandlerMgr::HandlerType,int>>>
                *)(p_Var6 + 0x28),(pair *)local_70,(pair *)local_68);
  }
  if (local_70 != (ulong *)0x0) {
    local_68 = local_70;
    operator_delete(local_70);
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}

