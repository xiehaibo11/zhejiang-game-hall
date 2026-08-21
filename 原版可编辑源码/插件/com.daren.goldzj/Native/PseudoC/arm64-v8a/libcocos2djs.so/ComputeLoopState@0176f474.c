
/* v8::internal::compiler::LoadElimination::ComputeLoopState(v8::internal::compiler::Node*,
   v8::internal::compiler::LoadElimination::AbstractState const*) const */

AbstractState * __thiscall
v8::internal::compiler::LoadElimination::ComputeLoopState
          (LoadElimination *this,Node *param_1,AbstractState *param_2)

{
  ulong *puVar1;
  __tree_node_base *p_Var2;
  short sVar3;
  long lVar4;
  long lVar5;
  Operator *pOVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  Node *pNVar10;
  Node *pNVar11;
  AbstractState *__dest;
  AbstractState *pAVar12;
  Zone *pZVar13;
  __tree_node_base *p_Var14;
  long *plVar15;
  ulong uVar16;
  __tree_node_base *p_Var17;
  ulong *puVar18;
  ulong uVar19;
  long *plVar20;
  ulong uVar21;
  ulong *puVar22;
  long *plVar23;
  uint uVar24;
  long *plVar25;
  undefined1 *__s;
  Node *pNVar26;
  int iVar27;
  __tree_node_base *p_Var28;
  __tree_node_base *p_Var29;
  long lVar30;
  __tree_node_base *p_Var31;
  __tree_node_base *p_Var32;
  undefined8 uVar33;
  undefined8 uVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  __tree_node_base *local_180;
  __tree_node_base *local_160;
  __tree_node_base *local_158;
  Zone *local_150;
  long local_148;
  long *local_140;
  long *plStack_138;
  long *local_130;
  long local_128;
  Zone *local_120;
  long *local_118;
  ulong local_110;
  long local_108;
  Zone *local_100;
  long *local_f8;
  AbstractState *local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  Zone aZStack_b0 [16];
  __tree_node_base *local_a0;
  long lStack_98;
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  lVar5 = NodeProperties::GetControlInput(param_1,0);
  Zone::Zone(aZStack_b0,*(AccountingAllocator **)(*(long *)(this + 0x28) + 0x20),
             "Temporary scoped zone");
  local_118 = (long *)0x0;
  local_110 = 0;
  local_108 = 0;
  local_f8 = (long *)0x0;
  local_148 = 0;
  plStack_138 = (long *)0x0;
  local_140 = (long *)0x0;
  local_128 = 0;
  local_130 = (long *)0x0;
  local_158 = (__tree_node_base *)0x0;
  local_160 = (__tree_node_base *)&local_158;
  local_150 = aZStack_b0;
  local_120 = aZStack_b0;
  local_100 = aZStack_b0;
  if ((ulong)(lStack_98 - (long)local_a0) < 0x28) {
    local_158 = (__tree_node_base *)Zone::NewExpand(aZStack_b0,0x28);
  }
  else {
    local_158 = local_a0;
    local_a0 = local_a0 + 0x28;
  }
  *(Node **)(local_158 + 0x20) = param_1;
  *(undefined8 *)local_158 = 0;
  *(undefined8 *)(local_158 + 8) = 0;
  *(__tree_node_base **)(local_158 + 0x10) = (__tree_node_base *)&local_158;
  if (*(__tree_node_base **)local_160 != (__tree_node_base *)0x0) {
    local_160 = *(__tree_node_base **)local_160;
  }
  std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
            (local_158,local_158);
  local_148 = local_148 + 1;
  lVar30 = 1;
  while( true ) {
    if ((~*(uint *)(lVar5 + 0x14) & 0xf000000) == 0) {
      uVar24 = *(uint *)(*(long *)(lVar5 + 0x20) + 8);
    }
    else {
      uVar24 = *(uint *)(lVar5 + 0x14) >> 0x18 & 0xf;
    }
    if ((int)uVar24 <= lVar30) break;
    pNVar26 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar26 = (Node *)(*(long *)(param_1 + 0x20) + 0x10);
    }
    uVar9 = *(undefined8 *)(pNVar26 + lVar30 * 8);
    uVar19 = 0;
    if ((long)local_130 - (long)plStack_138 != 0) {
      uVar19 = ((long)local_130 - (long)plStack_138) * 0x40 - 1;
    }
    uVar16 = local_108 + local_110;
    if (uVar19 == uVar16) {
      std::__ndk1::
      deque<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
      ::__add_back_capacity
                ((deque<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
                  *)&local_140);
      uVar16 = local_110 + local_108;
    }
    lVar30 = lVar30 + 1;
    *(undefined8 *)
     (*(long *)((long)plStack_138 + (uVar16 >> 6 & 0x3fffffffffffff8)) + (uVar16 & 0x1ff) * 8) =
         uVar9;
    local_108 = local_108 + 1;
  }
  if (local_108 == 0) {
    p_Var32 = (__tree_node_base *)0x0;
    p_Var31 = (__tree_node_base *)0x0;
    __s = param_2;
  }
  else {
    p_Var31 = (__tree_node_base *)0x0;
    p_Var32 = (__tree_node_base *)0x0;
    local_180 = (__tree_node_base *)0x0;
    do {
      uVar19 = local_110;
      pNVar26 = *(Node **)(*(long *)((long)plStack_138 + (local_110 >> 6 & 0x3fffffffffffff8)) +
                          (local_110 & 0x1ff) * 8);
      local_110 = local_110 + 1;
      local_108 = local_108 + -1;
      if (0x3ff < local_110) {
        plVar20 = (long *)*plStack_138;
        if ((local_f8 == (long *)0x0) || ((ulong)local_f8[1] < 0x201)) {
          plVar20[1] = 0x200;
          *plVar20 = (long)local_f8;
          local_f8 = plVar20;
        }
        local_110 = uVar19 - 0x1ff;
        plStack_138 = plStack_138 + 1;
      }
      p_Var14 = (__tree_node_base *)&local_158;
      p_Var17 = local_158;
      p_Var28 = (__tree_node_base *)&local_158;
      p_Var29 = (__tree_node_base *)&local_158;
      if (local_158 != (__tree_node_base *)0x0) {
        do {
          if (*(__tree_node_base **)(p_Var17 + 0x20) >= pNVar26) {
            p_Var14 = p_Var17;
          }
          p_Var2 = p_Var17 + (ulong)(*(__tree_node_base **)(p_Var17 + 0x20) < pNVar26) * 8;
          p_Var17 = *(__tree_node_base **)p_Var2;
        } while (*(__tree_node_base **)p_Var2 != (__tree_node_base *)0x0);
        p_Var17 = local_158;
        if ((p_Var14 == (__tree_node_base *)&local_158) ||
           (pNVar26 < *(__tree_node_base **)(p_Var14 + 0x20))) {
          while (p_Var17 != (__tree_node_base *)0x0) {
            while (p_Var28 = p_Var17, pNVar26 < *(Node **)(p_Var28 + 0x20)) {
              p_Var17 = *(__tree_node_base **)p_Var28;
              p_Var29 = p_Var28;
              if (*(__tree_node_base **)p_Var28 == (__tree_node_base *)0x0) {
                lVar5 = *(long *)p_Var28;
                goto joined_r0x0176f834;
              }
            }
            if (pNVar26 <= *(Node **)(p_Var28 + 0x20)) break;
            p_Var29 = p_Var28 + 8;
            p_Var17 = *(__tree_node_base **)(p_Var28 + 8);
          }
          goto LAB_0176f72c;
        }
        goto LAB_0176f630;
      }
LAB_0176f72c:
      lVar5 = *(long *)p_Var29;
joined_r0x0176f834:
      if (lVar5 == 0) {
        p_Var14 = *(__tree_node_base **)(local_150 + 0x10);
        if ((ulong)(*(long *)(local_150 + 0x18) - (long)p_Var14) < 0x28) {
          p_Var14 = (__tree_node_base *)Zone::NewExpand(local_150,0x28);
        }
        else {
          *(__tree_node_base **)(local_150 + 0x10) = p_Var14 + 0x28;
        }
        *(Node **)(p_Var14 + 0x20) = pNVar26;
        *(undefined8 *)p_Var14 = 0;
        *(undefined8 *)(p_Var14 + 8) = 0;
        *(__tree_node_base **)(p_Var14 + 0x10) = p_Var28;
        *(__tree_node_base **)p_Var29 = p_Var14;
        if (*(__tree_node_base **)local_160 != (__tree_node_base *)0x0) {
          p_Var14 = *(__tree_node_base **)p_Var29;
          local_160 = *(__tree_node_base **)local_160;
        }
        std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                  (local_158,p_Var14);
        local_148 = local_148 + 1;
      }
      pOVar6 = *(Operator **)pNVar26;
      if (((byte)pOVar6[0x12] >> 4 & 1) != 0) goto switchD_0176f7b8_caseD_f4;
      pAVar12 = param_2;
      switch(*(undefined2 *)(pOVar6 + 0x10)) {
      case 0xf1:
        puVar7 = (undefined8 *)FieldAccessOf(pOVar6);
        uStack_e8 = puVar7[1];
        local_f0 = (AbstractState *)*puVar7;
        uStack_d8 = puVar7[3];
        local_e0 = puVar7[2];
        local_c0 = puVar7[6];
        uStack_c8 = puVar7[5];
        local_d0 = puVar7[4];
        param_2 = (AbstractState *)
                  ComputeLoopStateForStoreField(this,pNVar26,param_2,(FieldAccess *)&local_f0);
        break;
      case 0xf2:
        pNVar10 = (Node *)NodeProperties::GetValueInput(pNVar26,0);
        pNVar11 = (Node *)NodeProperties::GetValueInput(pNVar26,1);
        if (*(AbstractElements **)param_2 != (AbstractElements *)0x0) {
          pZVar13 = *(Zone **)(this + 0x28);
          lVar5 = AbstractElements::Kill(*(AbstractElements **)param_2,pNVar10,pNVar11,pZVar13);
          if (*(long *)param_2 != lVar5) {
            pAVar12 = *(AbstractState **)(pZVar13 + 0x10);
            if ((ulong)(*(long *)(pZVar13 + 0x18) - (long)pAVar12) < 0x210) {
              pAVar12 = (AbstractState *)Zone::NewExpand(pZVar13,0x210);
            }
            else {
              *(AbstractState **)(pZVar13 + 0x10) = pAVar12 + 0x210;
            }
            memcpy(pAVar12,param_2,0x210);
            *(long *)pAVar12 = lVar5;
            param_2 = pAVar12;
          }
        }
        break;
      default:
        pZVar13 = *(Zone **)(this + 0x28);
        __s = AbstractState::empty_state_;
        lVar5 = 0;
        goto LAB_0176ff04;
      case 0xf4:
        break;
      case 0xf8:
        uVar9 = NodeProperties::GetValueInput(pNVar26,0);
        pZVar13 = *(Zone **)(this + 0x28);
        local_e0 = 0;
        if ((*(AbstractMaps **)(param_2 + 0x208) != (AbstractMaps *)0x0) &&
           (local_f0 = param_2, uStack_e8 = uVar9,
           lVar5 = AbstractMaps::Kill(*(AbstractMaps **)(param_2 + 0x208),
                                      (AliasStateInfo *)&local_f0,pZVar13),
           *(long *)(param_2 + 0x208) != lVar5)) {
          pAVar12 = *(AbstractState **)(pZVar13 + 0x10);
          if ((ulong)(*(long *)(pZVar13 + 0x18) - (long)pAVar12) < 0x210) {
            pAVar12 = (AbstractState *)Zone::NewExpand(pZVar13,0x210);
          }
          else {
            *(AbstractState **)(pZVar13 + 0x10) = pAVar12 + 0x210;
          }
          memcpy(pAVar12,param_2,0x208);
          *(long *)(pAVar12 + 0x208) = lVar5;
        }
        pZVar13 = *(Zone **)(this + 0x28);
        local_f0 = pAVar12;
        uStack_e8 = uVar9;
        local_e0 = 0;
        if ((*(AbstractField **)(pAVar12 + 0x10) == (AbstractField *)0x0) ||
           (lVar5 = AbstractField::Kill(*(AbstractField **)(pAVar12 + 0x10),&local_f0,0,pZVar13),
           *(long *)(pAVar12 + 0x10) == lVar5)) {
LAB_0176f9e8:
          __dest = (AbstractState *)0x0;
        }
        else {
          __dest = *(AbstractState **)(pZVar13 + 0x10);
          if ((ulong)(*(long *)(pZVar13 + 0x18) - (long)__dest) < 0x210) {
            __dest = (AbstractState *)Zone::NewExpand(pZVar13,0x210);
          }
          else {
            *(AbstractState **)(pZVar13 + 0x10) = __dest + 0x210;
          }
          memcpy(__dest,pAVar12,0x210);
          *(long *)(__dest + 0x10) = lVar5;
        }
        goto LAB_0176f9ec;
      case 0x11a:
      case 0x11b:
        uStack_e8 = NodeProperties::GetValueInput(pNVar26,0);
        pZVar13 = *(Zone **)(this + 0x28);
        local_f0 = param_2;
        local_e0 = 0;
        if ((*(AbstractField **)(param_2 + 0x10) == (AbstractField *)0x0) ||
           (lVar5 = AbstractField::Kill(*(AbstractField **)(param_2 + 0x10),&local_f0,0,pZVar13),
           *(long *)(param_2 + 0x10) == lVar5)) goto LAB_0176f9e8;
        __dest = *(AbstractState **)(pZVar13 + 0x10);
        if ((ulong)(*(long *)(pZVar13 + 0x18) - (long)__dest) < 0x210) {
          __dest = (AbstractState *)Zone::NewExpand(pZVar13,0x210);
        }
        else {
          *(AbstractState **)(pZVar13 + 0x10) = __dest + 0x210;
        }
        memcpy(__dest,param_2,0x210);
        *(long *)(__dest + 0x10) = lVar5;
LAB_0176f9ec:
        param_2 = pAVar12;
        if (__dest != (AbstractState *)0x0) {
          param_2 = __dest;
        }
        break;
      case 0x11c:
        puVar7 = (undefined8 *)ElementsTransitionOf(pOVar6);
        uStack_e8 = puVar7[1];
        local_f0 = (AbstractState *)*puVar7;
        uVar19 = puVar7[2];
        plVar8 = (long *)NodeProperties::GetValueInput(pNVar26,0);
        p_Var14 = local_a0;
        uVar9 = uStack_e8;
        pAVar12 = local_f0;
        plVar20 = plVar8;
        if (*(long *)(param_2 + 0x208) != 0) {
          while (((sVar3 = *(short *)(*plVar20 + 0x10), sVar3 == 0x28 || (sVar3 == 0xde)) ||
                 (sVar3 == 0x3a))) {
            puVar22 = (ulong *)(plVar20 + 4);
            uVar24 = *(uint *)((long)plVar20 + 0x14) >> 0x18 & 0xf;
            puVar18 = puVar22;
            if (uVar24 == 0xf) {
              uVar24 = *(uint *)(*puVar22 + 8);
              puVar18 = (ulong *)(*puVar22 + 0x10);
            }
            if ((0 < (int)uVar24) && (*puVar18 == 0)) break;
            if ((~*(uint *)((long)plVar20 + 0x14) & 0xf000000) == 0) {
              puVar22 = (ulong *)(*puVar22 + 0x10);
            }
            plVar20 = (long *)*puVar22;
          }
          plVar15 = (long *)(*(long *)(param_2 + 0x208) + 8);
          plVar23 = (long *)*plVar15;
          plVar25 = plVar15;
          if (plVar23 != (long *)0x0) {
            do {
              if ((long *)plVar23[4] >= plVar20) {
                plVar25 = plVar23;
              }
              plVar23 = (long *)plVar23[(long *)plVar23[4] < plVar20];
            } while (plVar23 != (long *)0x0);
            if ((plVar25 != plVar15) && ((long *)plVar25[4] <= plVar20)) {
              uVar16 = plVar25[5];
              if (uVar19 != uVar16) {
                if (uVar19 == 1) goto LAB_0176fb44;
                if (uVar16 != 1) {
                  if ((uVar19 & 3) == 0) goto LAB_0176fb44;
                  if ((uVar16 & 3) == 0) {
                    puVar22 = *(ulong **)(uVar19 - 2);
                    puVar18 = *(ulong **)(uVar19 + 6);
                    if ((puVar22 != puVar18) && (*puVar22 != uVar16)) {
                      do {
                        if (puVar18 + -1 == puVar22) goto LAB_0176fb44;
                        puVar1 = puVar22 + 1;
                        puVar22 = puVar22 + 1;
                      } while (*puVar1 != uVar16);
                    }
                    if (puVar22 == puVar18) goto LAB_0176fb44;
                  }
                  else {
                    lVar5 = *(long *)(uVar16 + 6) - *(long *)(uVar16 - 2);
                    if (lVar5 != 0) {
                      plVar20 = *(long **)(uVar19 + 6);
                      plVar25 = *(long **)(uVar19 - 2);
                      uVar21 = 0;
                      do {
                        plVar15 = plVar25;
                        if (plVar25 != plVar20) {
                          lVar30 = *plVar25;
                          while (lVar30 != *(long *)(*(long *)(uVar16 - 2) + uVar21 * 8)) {
                            if (plVar20 + -1 == plVar15) goto LAB_0176fb44;
                            plVar23 = plVar15 + 1;
                            plVar15 = plVar15 + 1;
                            lVar30 = *plVar23;
                          }
                        }
                        if (plVar15 == plVar20) goto LAB_0176fb44;
                        uVar21 = uVar21 + 1;
                      } while (uVar21 < (ulong)(lVar5 >> 3));
                    }
                  }
                }
              }
              break;
            }
          }
        }
LAB_0176fb44:
        if (p_Var32 < local_180) {
          *(ulong *)(p_Var32 + 0x10) = uVar19;
          *(long **)(p_Var32 + 0x18) = plVar8;
          *(undefined8 *)(p_Var32 + 8) = uStack_e8;
          *(AbstractState **)p_Var32 = local_f0;
          p_Var32 = p_Var32 + 0x20;
        }
        else {
          lVar5 = (long)p_Var32 - (long)p_Var31 >> 5;
          uVar16 = lVar5 + 1;
          if (uVar16 >> 0x1a != 0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          uVar21 = (long)local_180 - (long)p_Var31 >> 4;
          if (uVar16 <= uVar21) {
            uVar16 = uVar21;
          }
          if (0x1fffffe < (ulong)((long)local_180 - (long)p_Var31 >> 5)) {
            uVar16 = 0x3ffffff;
          }
          if (uVar16 == 0) {
            p_Var14 = (__tree_node_base *)0x0;
          }
          else {
            uVar21 = uVar16 * 0x20;
            if (uVar21 < (ulong)(lStack_98 - (long)local_a0) ||
                uVar21 - (lStack_98 - (long)local_a0) == 0) {
              local_a0 = local_a0 + uVar21;
            }
            else {
              p_Var14 = (__tree_node_base *)Zone::NewExpand(aZStack_b0,uVar21);
            }
          }
          p_Var29 = p_Var14 + lVar5 * 0x20;
          local_180 = p_Var14 + uVar16 * 0x20;
          *(undefined8 *)(p_Var29 + 8) = uVar9;
          *(AbstractState **)p_Var29 = pAVar12;
          *(ulong *)(p_Var29 + 0x10) = uVar19;
          *(long **)(p_Var29 + 0x18) = plVar8;
          p_Var14 = p_Var29;
          while (p_Var32 != p_Var31) {
            uVar9 = *(undefined8 *)(p_Var32 + -0x20);
            uVar34 = *(undefined8 *)(p_Var32 + -8);
            uVar33 = *(undefined8 *)(p_Var32 + -0x10);
            *(undefined8 *)(p_Var14 + -0x18) = *(undefined8 *)(p_Var32 + -0x18);
            *(undefined8 *)(p_Var14 + -0x20) = uVar9;
            *(undefined8 *)(p_Var14 + -8) = uVar34;
            *(undefined8 *)(p_Var14 + -0x10) = uVar33;
            p_Var14 = p_Var14 + -0x20;
            p_Var32 = p_Var32 + -0x20;
          }
          p_Var32 = p_Var29 + 0x20;
          p_Var31 = p_Var14;
        }
      }
switchD_0176f7b8_caseD_f4:
      if (0 < *(int *)(*(long *)pNVar26 + 0x18)) {
        iVar27 = 0;
        do {
          uVar9 = NodeProperties::GetEffectInput(pNVar26,iVar27);
          uVar19 = 0;
          if ((long)local_130 - (long)plStack_138 != 0) {
            uVar19 = ((long)local_130 - (long)plStack_138) * 0x40 - 1;
          }
          uVar16 = local_108 + local_110;
          if (uVar19 == uVar16) {
            std::__ndk1::
            deque<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
            ::__add_back_capacity
                      ((deque<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
                        *)&local_140);
            uVar16 = local_110 + local_108;
          }
          iVar27 = iVar27 + 1;
          *(undefined8 *)
           (*(long *)((long)plStack_138 + (uVar16 >> 6 & 0x3fffffffffffff8)) + (uVar16 & 0x1ff) * 8)
               = uVar9;
          local_108 = local_108 + 1;
        } while (iVar27 < *(int *)(*(long *)pNVar26 + 0x18));
      }
LAB_0176f630:
      __s = param_2;
    } while (local_108 != 0);
  }
  p_Var14 = p_Var31;
  if (p_Var31 != p_Var32) {
    do {
      local_e0 = *(undefined8 *)(p_Var14 + 8);
      uStack_e8 = *(undefined8 *)(p_Var14 + 0x18);
      pAVar12 = (AbstractState *)__s;
      local_f0 = (AbstractState *)__s;
      if (*(AbstractMaps **)(__s + 0x208) != (AbstractMaps *)0x0) {
        pZVar13 = *(Zone **)(this + 0x28);
        lVar5 = AbstractMaps::Kill(*(AbstractMaps **)(__s + 0x208),(AliasStateInfo *)&local_f0,
                                   pZVar13);
        if (*(long *)(__s + 0x208) != lVar5) {
          pAVar12 = *(AbstractState **)(pZVar13 + 0x10);
          if ((ulong)(*(long *)(pZVar13 + 0x18) - (long)pAVar12) < 0x210) {
            pAVar12 = (AbstractState *)Zone::NewExpand(pZVar13,0x210);
          }
          else {
            *(AbstractState **)(pZVar13 + 0x10) = pAVar12 + 0x210;
          }
          memcpy(pAVar12,__s,0x208);
          *(long *)(pAVar12 + 0x208) = lVar5;
        }
      }
      p_Var14 = p_Var14 + 0x20;
      __s = pAVar12;
    } while (p_Var32 != p_Var14);
    for (; p_Var31 != p_Var32; p_Var31 = p_Var31 + 0x20) {
      if (*p_Var31 == (__tree_node_base)0x1) {
        local_e0 = *(undefined8 *)(p_Var31 + 8);
        uStack_e8 = *(undefined8 *)(p_Var31 + 0x18);
        local_f0 = (AbstractState *)__s;
        if (*(AbstractField **)(__s + 0x10) == (AbstractField *)0x0) {
LAB_0176fe40:
          pAVar12 = (AbstractState *)0x0;
        }
        else {
          pZVar13 = *(Zone **)(this + 0x28);
          lVar5 = AbstractField::Kill(*(AbstractField **)(__s + 0x10),&local_f0,0,pZVar13);
          if (*(long *)(__s + 0x10) == lVar5) goto LAB_0176fe40;
          pAVar12 = *(AbstractState **)(pZVar13 + 0x10);
          if ((ulong)(*(long *)(pZVar13 + 0x18) - (long)pAVar12) < 0x210) {
            pAVar12 = (AbstractState *)Zone::NewExpand(pZVar13,0x210);
          }
          else {
            *(AbstractState **)(pZVar13 + 0x10) = pAVar12 + 0x210;
          }
          memcpy(pAVar12,__s,0x210);
          *(long *)(pAVar12 + 0x10) = lVar5;
        }
        if (pAVar12 != (AbstractState *)0x0) {
          __s = pAVar12;
        }
      }
    }
  }
LAB_0176ff88:
  std::__ndk1::
  __tree<v8::internal::compiler::Node*,std::__ndk1::less<v8::internal::compiler::Node*>,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
  ::destroy((__tree<v8::internal::compiler::Node*,std::__ndk1::less<v8::internal::compiler::Node*>,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
             *)&local_160,(__tree_node *)local_158);
  std::__ndk1::
  __deque_base<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
  ::clear((__deque_base<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
           *)&local_140);
  if (plStack_138 == local_130) {
LAB_01770010:
    if (((local_140 != (long *)0x0) && (0xf < (ulong)(local_128 - (long)local_140))) &&
       ((uVar19 = local_128 - (long)local_140 >> 3, local_118 == (long *)0x0 ||
        ((ulong)local_118[1] <= uVar19)))) {
      local_140[1] = uVar19;
      *local_140 = (long)local_118;
      local_118 = local_140;
    }
    Zone::~Zone(aZStack_b0);
    if (*(long *)(lVar4 + 0x28) == local_70) {
      return (AbstractState *)__s;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  plVar25 = (long *)*plStack_138;
  plVar20 = plStack_138;
  plVar8 = local_f8;
  if (local_f8 != (long *)0x0) goto LAB_0176ffe0;
  do {
    plVar8 = plVar25;
    plVar8[1] = 0x200;
    *plVar8 = (long)local_f8;
    local_f8 = plVar8;
    do {
      plVar20 = plVar20 + 1;
      if (local_130 == plVar20) {
        if ((long)local_130 - (long)plStack_138 != 0) {
          local_130 = local_130 +
                      (((long)local_130 - (long)plStack_138) - 8U >> 3 ^ 0xffffffffffffffff);
        }
        goto LAB_01770010;
      }
      plVar25 = (long *)*plVar20;
      if (plVar8 == (long *)0x0) break;
LAB_0176ffe0:
    } while (0x200 < (ulong)plVar8[1]);
  } while( true );
  while (lVar5 = lVar5 + 8, lVar5 != 0x100) {
LAB_0176ff04:
    if (*(long *)(param_2 + 0x108 + lVar5) != 0) {
      __s = *(undefined1 **)(pZVar13 + 0x10);
      if ((ulong)(*(long *)(pZVar13 + 0x18) - (long)__s) < 0x210) {
        __s = (undefined1 *)Zone::NewExpand(pZVar13,0x210);
      }
      else {
        *(AbstractState **)(pZVar13 + 0x10) = (AbstractState *)(__s + 0x210);
      }
      memset(__s,0,0x210);
      lVar5 = *(long *)(param_2 + 0x128);
      lVar35 = *(long *)(param_2 + 0x140);
      lVar30 = *(long *)(param_2 + 0x138);
      lVar37 = *(long *)(param_2 + 0x110);
      lVar36 = *(long *)(param_2 + 0x108);
      lVar39 = *(long *)(param_2 + 0x120);
      lVar38 = *(long *)(param_2 + 0x118);
      *(long *)(__s + 0x130) = *(long *)(param_2 + 0x130);
      *(long *)(__s + 0x128) = lVar5;
      *(long *)(__s + 0x140) = lVar35;
      *(long *)(__s + 0x138) = lVar30;
      *(long *)(__s + 0x110) = lVar37;
      *(long *)(__s + 0x108) = lVar36;
      *(long *)(__s + 0x120) = lVar39;
      *(long *)(__s + 0x118) = lVar38;
      lVar5 = *(long *)(param_2 + 0x168);
      lVar35 = *(long *)(param_2 + 0x180);
      lVar30 = *(long *)(param_2 + 0x178);
      lVar37 = *(long *)(param_2 + 0x150);
      lVar36 = *(long *)(param_2 + 0x148);
      lVar39 = *(long *)(param_2 + 0x160);
      lVar38 = *(long *)(param_2 + 0x158);
      *(long *)(__s + 0x170) = *(long *)(param_2 + 0x170);
      *(long *)(__s + 0x168) = lVar5;
      *(long *)(__s + 0x180) = lVar35;
      *(long *)(__s + 0x178) = lVar30;
      *(long *)(__s + 0x150) = lVar37;
      *(long *)(__s + 0x148) = lVar36;
      *(long *)(__s + 0x160) = lVar39;
      *(long *)(__s + 0x158) = lVar38;
      lVar5 = *(long *)(param_2 + 0x1a8);
      lVar35 = *(long *)(param_2 + 0x1c0);
      lVar30 = *(long *)(param_2 + 0x1b8);
      lVar37 = *(long *)(param_2 + 400);
      lVar36 = *(long *)(param_2 + 0x188);
      lVar39 = *(long *)(param_2 + 0x1a0);
      lVar38 = *(long *)(param_2 + 0x198);
      *(long *)(__s + 0x1b0) = *(long *)(param_2 + 0x1b0);
      *(long *)(__s + 0x1a8) = lVar5;
      *(long *)(__s + 0x1c0) = lVar35;
      *(long *)(__s + 0x1b8) = lVar30;
      *(long *)(__s + 400) = lVar37;
      *(long *)(__s + 0x188) = lVar36;
      *(long *)(__s + 0x1a0) = lVar39;
      *(long *)(__s + 0x198) = lVar38;
      lVar5 = *(long *)(param_2 + 0x1e8);
      lVar35 = *(long *)(param_2 + 0x200);
      lVar30 = *(long *)(param_2 + 0x1f8);
      lVar37 = *(long *)(param_2 + 0x1d0);
      lVar36 = *(long *)(param_2 + 0x1c8);
      lVar39 = *(long *)(param_2 + 0x1e0);
      lVar38 = *(long *)(param_2 + 0x1d8);
      *(long *)(__s + 0x1f0) = *(long *)(param_2 + 0x1f0);
      *(long *)(__s + 0x1e8) = lVar5;
      *(long *)(__s + 0x200) = lVar35;
      *(long *)(__s + 0x1f8) = lVar30;
      *(long *)(__s + 0x1d0) = lVar37;
      *(long *)(__s + 0x1c8) = lVar36;
      *(long *)(__s + 0x1e0) = lVar39;
      *(long *)(__s + 0x1d8) = lVar38;
      break;
    }
  }
  goto LAB_0176ff88;
}

