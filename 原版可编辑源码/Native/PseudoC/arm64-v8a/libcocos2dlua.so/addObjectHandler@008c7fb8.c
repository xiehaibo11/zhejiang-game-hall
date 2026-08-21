
/* cocos2d::ScriptHandlerMgr::addObjectHandler(void*, int, cocos2d::ScriptHandlerMgr::HandlerType)
    */

void __thiscall
cocos2d::ScriptHandlerMgr::addObjectHandler
          (ScriptHandlerMgr *this,ulong param_1,long param_3,uint param_4)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  __tree_node_base *p_Var4;
  ScriptHandlerMgr *pSVar5;
  uint *puVar6;
  ulong *puVar7;
  ScriptHandlerMgr *pSVar8;
  ScriptHandlerMgr *pSVar9;
  uint *puVar10;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  ulong uVar16;
  __tree_node_base *p_Var17;
  uint *puVar18;
  uint *puVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  ulong local_78;
  ulong *local_70;
  ulong *local_68;
  ulong *puStack_60;
  long local_58;
  uint *puVar11;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (param_1 == 0) goto LAB_008c82a4;
  if (*(long *)(this + 0x18) != 0) {
    pSVar5 = this + 0x10;
    pSVar9 = *(ScriptHandlerMgr **)pSVar5;
    pSVar8 = pSVar5;
    if (pSVar9 != (ScriptHandlerMgr *)0x0) {
      do {
        if (*(ulong *)(pSVar9 + 0x20) >= param_1) {
          pSVar8 = pSVar9;
        }
        pSVar9 = *(ScriptHandlerMgr **)(pSVar9 + (ulong)(*(ulong *)(pSVar9 + 0x20) < param_1) * 8);
      } while (pSVar9 != (ScriptHandlerMgr *)0x0);
      if ((pSVar8 != pSVar5) && (*(ulong *)(pSVar8 + 0x20) <= param_1)) {
        puVar19 = *(uint **)(pSVar8 + 0x28);
        if (puVar19 != *(uint **)(pSVar8 + 0x30)) {
LAB_008c8044:
          if (*puVar19 != param_4) goto code_r0x008c8050;
          plVar3 = (long *)LuaEngine::getInstance();
          (**(code **)(*plVar3 + 0x50))(plVar3,puVar19[1]);
          puVar6 = *(uint **)(pSVar8 + 0x30);
          puVar10 = puVar19 + 2;
          if (puVar10 == puVar6) goto LAB_008c8108;
          lVar13 = *(long *)(pSVar8 + 0x28);
          lVar15 = (long)puVar19 - lVar13 >> 3;
          uVar1 = ((ulong)((long)puVar6 + ((-2 - lVar15) * 8 - lVar13)) >> 3) + 1;
          puVar18 = puVar19;
          if (uVar1 < 8) goto LAB_008c80f8;
          uVar12 = uVar1 & 0x3ffffffffffffff8;
          puVar19 = puVar19 + uVar12 * 2;
          puVar14 = (undefined8 *)(lVar13 + lVar15 * 8 + 0x28);
          uVar16 = uVar12;
          do {
            uVar20 = puVar14[-4];
            uVar21 = puVar14[-2];
            uVar22 = *puVar14;
            uVar23 = puVar14[2];
            uVar16 = uVar16 - 8;
            puVar14[-4] = puVar14[-3];
            puVar14[-5] = uVar20;
            puVar14[-2] = puVar14[-1];
            puVar14[-3] = uVar21;
            *puVar14 = puVar14[1];
            puVar14[-1] = uVar22;
            puVar14[2] = puVar14[3];
            puVar14[1] = uVar23;
            puVar14 = puVar14 + 8;
          } while (uVar16 != 0);
          puVar10 = puVar10 + uVar12 * 2;
          puVar18 = puVar19;
          if (uVar1 != uVar12) {
LAB_008c80f8:
            do {
              puVar11 = puVar10 + 2;
              puVar19 = puVar18 + 2;
              *(undefined8 *)puVar18 = *(undefined8 *)puVar10;
              puVar10 = puVar11;
              puVar18 = puVar19;
            } while (puVar6 != puVar11);
          }
LAB_008c8108:
          *(uint **)(pSVar8 + 0x30) = puVar19;
        }
      }
    }
  }
LAB_008c810c:
  pSVar5 = this + 0x10;
  pSVar9 = *(ScriptHandlerMgr **)pSVar5;
  pSVar8 = pSVar5;
  if (pSVar9 == (ScriptHandlerMgr *)0x0) {
LAB_008c8148:
    local_68 = (ulong *)0x0;
    puStack_60 = (ulong *)0x0;
    local_70 = (ulong *)0x0;
  }
  else {
    do {
      if (*(ulong *)(pSVar9 + 0x20) >= param_1) {
        pSVar8 = pSVar9;
      }
      pSVar9 = *(ScriptHandlerMgr **)(pSVar9 + (ulong)(*(ulong *)(pSVar9 + 0x20) < param_1) * 8);
    } while (pSVar9 != (ScriptHandlerMgr *)0x0);
    if ((pSVar8 == pSVar5) || (param_1 < *(ulong *)(pSVar8 + 0x20))) goto LAB_008c8148;
    local_68 = (ulong *)0x0;
    puStack_60 = (ulong *)0x0;
    local_70 = (ulong *)0x0;
    if ((pSVar5 != pSVar8) && ((ScriptHandlerMgr *)&local_70 != pSVar8 + 0x28)) {
      std::__ndk1::
      vector<std::__ndk1::pair<cocos2d::ScriptHandlerMgr::HandlerType,int>,std::__ndk1::allocator<std::__ndk1::pair<cocos2d::ScriptHandlerMgr::HandlerType,int>>>
      ::assign<std::__ndk1::pair<cocos2d::ScriptHandlerMgr::HandlerType,int>*>
                ((vector<std::__ndk1::pair<cocos2d::ScriptHandlerMgr::HandlerType,int>,std::__ndk1::allocator<std::__ndk1::pair<cocos2d::ScriptHandlerMgr::HandlerType,int>>>
                  *)&local_70,*(pair **)(pSVar8 + 0x28),*(pair **)(pSVar8 + 0x30));
    }
  }
  local_78 = (ulong)param_4 | param_3 << 0x20;
  if (local_68 == puStack_60) {
    std::__ndk1::
    vector<std::__ndk1::pair<cocos2d::ScriptHandlerMgr::HandlerType,int>,std::__ndk1::allocator<std::__ndk1::pair<cocos2d::ScriptHandlerMgr::HandlerType,int>>>
    ::__push_back_slow_path<std::__ndk1::pair<cocos2d::ScriptHandlerMgr::HandlerType,int>const&>
              ((vector<std::__ndk1::pair<cocos2d::ScriptHandlerMgr::HandlerType,int>,std::__ndk1::allocator<std::__ndk1::pair<cocos2d::ScriptHandlerMgr::HandlerType,int>>>
                *)&local_70,(pair *)&local_78);
    pSVar8 = *(ScriptHandlerMgr **)pSVar5;
    if (pSVar8 == (ScriptHandlerMgr *)0x0) goto LAB_008c81d8;
LAB_008c8194:
    pSVar9 = this + 0x10;
    do {
      while (pSVar5 = pSVar8, param_1 < *(ulong *)(pSVar5 + 0x20)) {
        pSVar8 = *(ScriptHandlerMgr **)pSVar5;
        pSVar9 = pSVar5;
        if (*(ScriptHandlerMgr **)pSVar5 == (ScriptHandlerMgr *)0x0) {
          p_Var17 = *(__tree_node_base **)pSVar5;
          goto joined_r0x008c81d0;
        }
      }
      if (param_1 <= *(ulong *)(pSVar5 + 0x20)) break;
      pSVar9 = pSVar5 + 8;
      pSVar8 = *(ScriptHandlerMgr **)pSVar9;
    } while (*(ScriptHandlerMgr **)pSVar9 != (ScriptHandlerMgr *)0x0);
    p_Var17 = *(__tree_node_base **)pSVar9;
  }
  else {
    puVar7 = local_68 + 1;
    *local_68 = local_78;
    pSVar8 = *(ScriptHandlerMgr **)pSVar5;
    local_68 = puVar7;
    if (pSVar8 != (ScriptHandlerMgr *)0x0) goto LAB_008c8194;
LAB_008c81d8:
    p_Var17 = *(__tree_node_base **)pSVar5;
    pSVar9 = pSVar5;
  }
joined_r0x008c81d0:
  if (p_Var17 == (__tree_node_base *)0x0) {
    p_Var17 = operator_new(0x40);
    *(ulong *)(p_Var17 + 0x20) = param_1;
    *(undefined8 *)(p_Var17 + 0x28) = 0;
    *(undefined8 *)(p_Var17 + 0x30) = 0;
    *(undefined8 *)(p_Var17 + 0x38) = 0;
    *(undefined8 *)p_Var17 = 0;
    *(undefined8 *)(p_Var17 + 8) = 0;
    *(ScriptHandlerMgr **)(p_Var17 + 0x10) = pSVar5;
    *(__tree_node_base **)pSVar9 = p_Var17;
    p_Var4 = p_Var17;
    if (**(long **)(this + 8) != 0) {
      *(long *)(this + 8) = **(long **)(this + 8);
      p_Var4 = *(__tree_node_base **)pSVar9;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 0x10),p_Var4);
    *(long *)(this + 0x18) = *(long *)(this + 0x18) + 1;
  }
  if ((vector<std::__ndk1::pair<cocos2d::ScriptHandlerMgr::HandlerType,int>,std::__ndk1::allocator<std::__ndk1::pair<cocos2d::ScriptHandlerMgr::HandlerType,int>>>
       *)(p_Var17 + 0x28) !=
      (vector<std::__ndk1::pair<cocos2d::ScriptHandlerMgr::HandlerType,int>,std::__ndk1::allocator<std::__ndk1::pair<cocos2d::ScriptHandlerMgr::HandlerType,int>>>
       *)&local_70) {
    std::__ndk1::
    vector<std::__ndk1::pair<cocos2d::ScriptHandlerMgr::HandlerType,int>,std::__ndk1::allocator<std::__ndk1::pair<cocos2d::ScriptHandlerMgr::HandlerType,int>>>
    ::assign<std::__ndk1::pair<cocos2d::ScriptHandlerMgr::HandlerType,int>*>
              ((vector<std::__ndk1::pair<cocos2d::ScriptHandlerMgr::HandlerType,int>,std::__ndk1::allocator<std::__ndk1::pair<cocos2d::ScriptHandlerMgr::HandlerType,int>>>
                *)(p_Var17 + 0x28),(pair *)local_70,(pair *)local_68);
  }
  if (local_70 != (ulong *)0x0) {
    local_68 = local_70;
    operator_delete(local_70);
  }
LAB_008c82a4:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x008c8050:
  puVar19 = puVar19 + 2;
  if (*(uint **)(pSVar8 + 0x30) == puVar19) goto LAB_008c810c;
  goto LAB_008c8044;
}

