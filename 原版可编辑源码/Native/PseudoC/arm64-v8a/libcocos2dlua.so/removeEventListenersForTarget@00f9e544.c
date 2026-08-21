
/* cocos2d::EventDispatcher::removeEventListenersForTarget(cocos2d::Node*, bool) */

void __thiscall
cocos2d::EventDispatcher::removeEventListenersForTarget
          (EventDispatcher *this,Node *param_1,bool param_2)

{
  size_t __n;
  ulong uVar1;
  long lVar2;
  __tree_node_base *p_Var3;
  Ref *this_00;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  ulong uVar8;
  __tree_node_base *p_Var9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  __tree_node_base *p_Var14;
  undefined8 *puVar15;
  undefined2 uVar16;
  undefined8 uVar17;
  undefined8 *local_70;
  undefined8 *local_68;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar4 = ((ulong)(uint)((int)param_1 << 3) + 8 ^ (ulong)param_1 >> 0x20) * -0x622015f714c7d297;
  uVar5 = *(ulong *)(this + 0xa8);
  uVar4 = (uVar4 ^ (ulong)param_1 >> 0x20 ^ uVar4 >> 0x2f) * -0x622015f714c7d297;
  uVar4 = (uVar4 ^ uVar4 >> 0x2f) * -0x622015f714c7d297;
  if (uVar5 != 0) {
    uVar17 = CONCAT17(POPCOUNT((char)(uVar5 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar5 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar5 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar5 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar5 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar5 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar5 >>
                                                                                           8)),
                                                                            POPCOUNT((char)uVar5))))
                                                ))));
    uVar16 = NEON_uaddlv(uVar17,1);
    uVar8 = CONCAT62((int6)((ulong)uVar17 >> 0x10),uVar16) & 0xffffffff;
    if (uVar8 < 2) {
      uVar10 = uVar5 - 1 & uVar4;
    }
    else {
      uVar10 = uVar4;
      if (uVar5 <= uVar4) {
        uVar10 = 0;
        if (uVar5 != 0) {
          uVar10 = uVar4 / uVar5;
        }
        uVar10 = uVar4 - uVar10 * uVar5;
      }
    }
    plVar12 = *(long **)(*(long *)(this + 0xa0) + uVar10 * 8);
    if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
      do {
        uVar13 = plVar12[1];
        if (uVar13 == uVar4) {
          if ((Node *)plVar12[2] == param_1) {
            std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<cocos2d::Node*,int>,std::__ndk1::__unordered_map_hasher<cocos2d::Node*,std::__ndk1::__hash_value_type<cocos2d::Node*,int>,std::__ndk1::hash<cocos2d::Node*>,true>,std::__ndk1::__unordered_map_equal<cocos2d::Node*,std::__ndk1::__hash_value_type<cocos2d::Node*,int>,std::__ndk1::equal_to<cocos2d::Node*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<cocos2d::Node*,int>>>
            ::remove(&local_70);
            puVar15 = local_70;
            local_70 = (undefined8 *)0x0;
            if (puVar15 != (undefined8 *)0x0) {
              operator_delete(puVar15);
            }
            break;
          }
        }
        else {
          if (uVar8 < 2) {
            uVar13 = uVar13 & uVar5 - 1;
          }
          else if (uVar5 <= uVar13) {
            uVar1 = 0;
            if (uVar5 != 0) {
              uVar1 = uVar13 / uVar5;
            }
            uVar13 = uVar13 - uVar1 * uVar5;
          }
          if (uVar13 != uVar10) break;
        }
        plVar12 = (long *)*plVar12;
      } while (plVar12 != (long *)0x0);
    }
  }
  p_Var3 = *(__tree_node_base **)(this + 0x128);
  if (p_Var3 != (__tree_node_base *)0x0) {
    p_Var9 = p_Var3;
    p_Var14 = (__tree_node_base *)(this + 0x128);
    do {
      if (*(Node **)(p_Var9 + 0x20) >= param_1) {
        p_Var14 = p_Var9;
      }
      p_Var9 = *(__tree_node_base **)(p_Var9 + (ulong)(*(Node **)(p_Var9 + 0x20) < param_1) * 8);
    } while (p_Var9 != (__tree_node_base *)0x0);
    if ((p_Var14 != (__tree_node_base *)(this + 0x128)) && (*(Node **)(p_Var14 + 0x20) <= param_1))
    {
      plVar12 = *(long **)(p_Var14 + 8);
      if (*(long **)(p_Var14 + 8) == (long *)0x0) {
        p_Var9 = p_Var14 + 0x10;
        plVar6 = *(long **)p_Var9;
        if ((__tree_node_base *)*plVar6 != p_Var14) {
          do {
            lVar11 = *(long *)p_Var9;
            p_Var9 = (__tree_node_base *)(lVar11 + 0x10);
            plVar6 = *(long **)p_Var9;
          } while (*plVar6 != lVar11);
        }
      }
      else {
        do {
          plVar6 = plVar12;
          plVar12 = (long *)*plVar6;
        } while ((long *)*plVar6 != (long *)0x0);
      }
      if (*(__tree_node_base **)(this + 0x120) == p_Var14) {
        *(long **)(this + 0x120) = plVar6;
      }
      *(long *)(this + 0x130) = *(long *)(this + 0x130) + -1;
      std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>(p_Var3,p_Var14);
      operator_delete(p_Var14);
    }
  }
  uVar5 = *(ulong *)(this + 0x80);
  if (uVar5 != 0) {
    uVar17 = CONCAT17(POPCOUNT((char)(uVar5 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar5 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar5 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar5 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar5 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar5 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar5 >>
                                                                                           8)),
                                                                            POPCOUNT((char)uVar5))))
                                                ))));
    uVar16 = NEON_uaddlv(uVar17,1);
    uVar8 = CONCAT62((int6)((ulong)uVar17 >> 0x10),uVar16) & 0xffffffff;
    if (uVar8 < 2) {
      uVar10 = uVar5 - 1 & uVar4;
    }
    else {
      uVar10 = uVar4;
      if (uVar5 <= uVar4) {
        uVar10 = 0;
        if (uVar5 != 0) {
          uVar10 = uVar4 / uVar5;
        }
        uVar10 = uVar4 - uVar10 * uVar5;
      }
    }
    plVar12 = *(long **)(*(long *)(this + 0x78) + uVar10 * 8);
    if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
      do {
        uVar13 = plVar12[1];
        if (uVar13 == uVar4) {
          if ((Node *)plVar12[2] != param_1) goto LAB_00f9e78c;
          std::__ndk1::
          vector<cocos2d::EventListener*,std::__ndk1::allocator<cocos2d::EventListener*>>::vector
                    ((vector<cocos2d::EventListener*,std::__ndk1::allocator<cocos2d::EventListener*>>
                      *)&local_70,(vector *)plVar12[3]);
          puVar7 = local_68;
          for (puVar15 = local_70; puVar15 != puVar7; puVar15 = puVar15 + 1) {
            removeEventListener(this,(EventListener *)*puVar15);
          }
          if (local_70 != (undefined8 *)0x0) {
            local_68 = local_70;
            operator_delete(local_70);
          }
          break;
        }
        if (uVar8 < 2) {
                    /* try { // try from 00f9e7c8 to 0109e7cf has its CatchHandler @ 00f9e8b8 */
          if ((uVar13 & uVar5 - 1) == uVar10) goto LAB_00f9e78c;
          break;
        }
        if (uVar5 <= uVar13) {
          uVar1 = 0;
          if (uVar5 != 0) {
            uVar1 = uVar13 / uVar5;
          }
          uVar13 = uVar13 - uVar1 * uVar5;
        }
        if (uVar13 != uVar10) break;
LAB_00f9e78c:
        plVar12 = (long *)*plVar12;
      } while (plVar12 != (long *)0x0);
    }
  }
  puVar15 = *(undefined8 **)(this + 0xf0);
  puVar7 = *(undefined8 **)(this + 0xf8);
  if (puVar7 != puVar15) {
    do {
                    /* try { // try from 00f9e83c to 0109e84b has its CatchHandler @ 00f9e89c */
      while (this_00 = (Ref *)*puVar15, *(Node **)(this_00 + 0x88) != param_1) {
        puVar15 = puVar15 + 1;
        if (puVar7 == puVar15) goto LAB_00f9e880;
      }
      *(undefined8 *)(this_00 + 0x88) = 0;
      this_00[0x80] = (Ref)0x0;
                    /* try { // try from 00f9e84c to 0109e8cb has its CatchHandler @ 00f9e4a8 */
      if (this_00 != (Ref *)0x0) {
        Ref::release(this_00);
        puVar7 = *(undefined8 **)(this + 0xf8);
      }
      __n = (long)puVar7 - (long)(puVar15 + 1);
      if (__n != 0) {
        memmove(puVar15,puVar15 + 1,__n);
      }
      puVar7 = puVar15 + ((long)__n >> 3);
      *(undefined8 **)(this + 0xf8) = puVar7;
    } while (puVar7 != puVar15);
  }
LAB_00f9e880:
  if (param_2) {
    plVar12 = (long *)(**(code **)(*(long *)param_1 + 0x240))(param_1);
    puVar7 = (undefined8 *)plVar12[1];
                    /* catch() { ... } // from try @ 00f9e83c with catch @ 00f9e89c */
    for (puVar15 = (undefined8 *)*plVar12; puVar15 != puVar7; puVar15 = puVar15 + 1) {
      removeEventListenersForTarget(this,(Node *)*puVar15,true);
    }
  }
                    /* catch() { ... } // from try @ 00f9e7c8 with catch @ 00f9e8b8 */
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 00f9e8cc to 0109e9cb has its CatchHandler @ 00f9e8cc
                       catch() { ... } // from try @ 00f9e8cc with catch @ 00f9e8cc
                       catch() { ... } // from try @ 00f9e9d4 with catch @ 00f9e8cc */
  return;
}

