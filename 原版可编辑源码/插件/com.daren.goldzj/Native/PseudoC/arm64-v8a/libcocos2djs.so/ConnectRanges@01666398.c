
/* v8::internal::compiler::LiveRangeConnector::ConnectRanges(v8::internal::Zone*) */

void __thiscall
v8::internal::compiler::LiveRangeConnector::ConnectRanges(LiveRangeConnector *this,Zone *param_1)

{
  ulong uVar1;
  ParallelMove *pPVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  long *plVar6;
  uint uVar7;
  uint uVar8;
  ParallelMove *pPVar9;
  ParallelMove *pPVar10;
  ParallelMove *pPVar11;
  bool bVar12;
  bool bVar13;
  MoveOperands *pMVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  Zone *pZVar18;
  __tree_node *p_Var19;
  long lVar20;
  ulong *puVar21;
  undefined8 *puVar22;
  ParallelMove *pPVar23;
  undefined8 *puVar24;
  ulong uVar25;
  ParallelMove *pPVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  undefined8 *puVar29;
  long *plVar30;
  undefined8 uVar31;
  long lVar32;
  long lVar33;
  __tree_node *p_Var34;
  undefined8 *local_c0;
  ParallelMove *local_b0;
  ParallelMove *local_a8;
  ParallelMove *local_a0;
  Zone *local_98;
  ParallelMove *local_90;
  ParallelMove *local_88;
  __tree_node *local_80;
  __tree_node *local_78;
  Zone *local_70;
  long local_68;
  
  local_68 = 0;
  local_78 = (__tree_node *)0x0;
  lVar16 = *(long *)this;
  plVar30 = *(long **)(lVar16 + 0x88);
  plVar6 = *(long **)(lVar16 + 0x90);
  lVar33 = (long)plVar6 - (long)plVar30;
  local_80 = (__tree_node *)&local_78;
  local_70 = param_1;
  if (plVar6 == plVar30) {
LAB_01666a90:
    std::__ndk1::
    __tree<std::__ndk1::__value_type<std::__ndk1::pair<v8::internal::compiler::ParallelMove*,v8::internal::compiler::InstructionOperand>,v8::internal::compiler::InstructionOperand>,std::__ndk1::__map_value_compare<std::__ndk1::pair<v8::internal::compiler::ParallelMove*,v8::internal::compiler::InstructionOperand>,std::__ndk1::__value_type<std::__ndk1::pair<v8::internal::compiler::ParallelMove*,v8::internal::compiler::InstructionOperand>,v8::internal::compiler::InstructionOperand>,v8::internal::compiler::DelayedInsertionMapCompare,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<std::__ndk1::pair<v8::internal::compiler::ParallelMove*,v8::internal::compiler::InstructionOperand>,v8::internal::compiler::InstructionOperand>>>
    ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::pair<v8::internal::compiler::ParallelMove*,v8::internal::compiler::InstructionOperand>,v8::internal::compiler::InstructionOperand>,std::__ndk1::__map_value_compare<std::__ndk1::pair<v8::internal::compiler::ParallelMove*,v8::internal::compiler::InstructionOperand>,std::__ndk1::__value_type<std::__ndk1::pair<v8::internal::compiler::ParallelMove*,v8::internal::compiler::InstructionOperand>,v8::internal::compiler::InstructionOperand>,v8::internal::compiler::DelayedInsertionMapCompare,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<std::__ndk1::pair<v8::internal::compiler::ParallelMove*,v8::internal::compiler::InstructionOperand>,v8::internal::compiler::InstructionOperand>>>
               *)&local_80,local_78);
    return;
  }
  do {
    lVar32 = *plVar30;
    if (lVar32 != 0) {
      lVar20 = lVar32;
      if ((*(byte *)(lVar16 + 0x1d0) & 1) == 0) {
        bVar12 = *(char *)(lVar32 + 0x80) != '\0';
        lVar16 = *(long *)(lVar32 + 0x28);
      }
      else {
        bVar12 = ((*(uint *)(lVar32 + 4) ^ 0xffffffff) & 0x60) == 0;
        lVar16 = *(long *)(lVar32 + 0x28);
      }
joined_r0x01666424:
      if (lVar16 != 0) {
        do {
          lVar17 = lVar16;
          if (((*(byte *)(lVar17 + 4) & 1) == 0) &&
             (uVar7 = **(uint **)(lVar17 + 0x10), *(uint *)(*(long *)(lVar20 + 8) + 4) == uVar7)) {
            if ((uVar7 & 3) == 0) {
              uVar8 = uVar7 + 3;
              if (-1 < (int)uVar7) {
                uVar8 = uVar7;
              }
              iVar3 = (int)uVar8 >> 2;
              lVar16 = InstructionSequence::GetInstructionBlock
                                 (*(InstructionSequence **)(*(long *)this + 0x10),iVar3);
              if (*(int *)(lVar16 + 0x70) == iVar3) {
                lVar16 = InstructionSequence::GetInstructionBlock
                                   (*(InstructionSequence **)(*(long *)this + 0x10),iVar3);
                if ((*(long *)(lVar16 + 0x28) - (long)*(int **)(lVar16 + 0x20) != 4) ||
                   (**(int **)(lVar16 + 0x20) + 1 != *(int *)(lVar16 + 100))) goto LAB_0166644c;
              }
            }
            uVar8 = *(uint *)(lVar20 + 4);
            if ((uVar8 & 0x1f80) == 0x1000) {
              lVar16 = *(long *)(lVar20 + 0x20);
              if ((*(uint *)(lVar16 + 4) & 0x60) == 0x20) {
                local_88 = (ParallelMove *)**(undefined8 **)(lVar16 + 0x70);
              }
              else {
                local_88 = (ParallelMove *)
                           ((ulong)(*(uint *)(lVar16 + 4) >> 8) & 0x1fe0 |
                            (ulong)*(uint *)(*(long *)(lVar16 + 0x70) + 0x2c) << 0x23 | 0xc);
              }
            }
            else {
              local_88 = (ParallelMove *)
                         ((ulong)(uVar8 >> 8 & 0x1fe0 | 4) | (ulong)(uVar8 >> 7 & 0x3f) << 0x23);
            }
            uVar8 = *(uint *)(lVar17 + 4);
            if ((uVar8 & 0x1f80) == 0x1000) {
              lVar16 = *(long *)(lVar17 + 0x20);
              if ((*(uint *)(lVar16 + 4) & 0x60) == 0x20) {
                local_90 = (ParallelMove *)**(undefined8 **)(lVar16 + 0x70);
              }
              else {
                local_90 = (ParallelMove *)
                           ((ulong)(*(uint *)(lVar16 + 4) >> 8) & 0x1fe0 |
                            (ulong)*(uint *)(*(long *)(lVar16 + 0x70) + 0x2c) << 0x23 | 0xc);
              }
            }
            else {
              local_90 = (ParallelMove *)
                         ((ulong)(uVar8 >> 8 & 0x1fe0 | 4) | (ulong)(uVar8 >> 7 & 0x3f) << 0x23);
            }
            if (local_88 != local_90) {
              uVar8 = uVar7 + 3;
              if (-1 < (int)uVar7) {
                uVar8 = uVar7;
              }
              iVar3 = (int)uVar8 >> 2;
              if ((!(bool)(bVar12 ^ 1U | ((ulong)local_88 & 0x1c) == 4)) &&
                 (((ulong)local_90 & 0x1c) == 4)) {
                lVar16 = InstructionSequence::GetInstructionBlock
                                   (*(InstructionSequence **)(*(long *)this + 0x10),iVar3);
                lVar20 = *(long *)(lVar32 + 0x78);
                uVar8 = *(uint *)(lVar16 + 100);
                if (*(int *)(lVar20 + 4) == 1) {
                  puVar21 = (ulong *)(lVar20 + 8);
                }
                else {
                  uVar4 = uVar8 + 0x3f;
                  if (-1 < (int)uVar8) {
                    uVar4 = uVar8;
                  }
                  puVar21 = (ulong *)(*(long *)(lVar20 + 8) + (long)((int)uVar4 >> 6) * 8);
                }
                *puVar21 = *puVar21 | 1L << ((ulong)uVar8 & 0x3f);
              }
              bVar13 = (uVar7 & 1) == 0;
              lVar16 = *(long *)(*(long *)this + 0x10);
              if ((uVar7 & 3) == 3) {
                iVar3 = iVar3 + 1;
              }
              pZVar18 = *(Zone **)(lVar16 + 8);
              uVar1 = *(long *)(lVar16 + 0xb0) + (long)iVar3;
              puVar15 = (undefined8 *)
                        (*(long *)(*(long *)(*(long *)(lVar16 + 0x88) +
                                            (uVar1 >> 6 & 0x3fffffffffffff8)) + (uVar1 & 0x1ff) * 8)
                         + (ulong)(bVar13 != ((uVar7 & 2) == 0)) * 8 + 8);
              pPVar26 = (ParallelMove *)*puVar15;
              pPVar2 = local_b0;
              pPVar23 = local_a8;
              pPVar9 = local_a0;
              pPVar10 = local_90;
              pPVar11 = local_88;
              if (pPVar26 == (ParallelMove *)0x0) {
                pPVar26 = *(ParallelMove **)(pZVar18 + 0x10);
                if ((ulong)(*(long *)(pZVar18 + 0x18) - (long)pPVar26) < 0x20) {
                  pPVar26 = (ParallelMove *)Zone::NewExpand(pZVar18,0x20);
                }
                else {
                  *(ParallelMove **)(pZVar18 + 0x10) = pPVar26 + 0x20;
                }
                *(undefined8 *)pPVar26 = 0;
                *(undefined8 *)(pPVar26 + 8) = 0;
                *(undefined8 *)(pPVar26 + 0x10) = 0;
                *(Zone **)(pPVar26 + 0x18) = pZVar18;
                *puVar15 = pPVar26;
                pPVar2 = local_b0;
                pPVar23 = local_a8;
                pPVar9 = local_a0;
                pPVar10 = local_90;
                pPVar11 = local_88;
              }
              local_a8 = pPVar11;
              local_a0 = pPVar10;
              local_b0 = pPVar26;
              local_88 = local_a8;
              local_90 = local_a0;
              if (((uint)bVar13 & (uVar7 & 2) >> 1) == 0) goto LAB_016666d4;
              std::__ndk1::
              __tree<std::__ndk1::__value_type<std::__ndk1::pair<v8::internal::compiler::ParallelMove*,v8::internal::compiler::InstructionOperand>,v8::internal::compiler::InstructionOperand>,std::__ndk1::__map_value_compare<std::__ndk1::pair<v8::internal::compiler::ParallelMove*,v8::internal::compiler::InstructionOperand>,std::__ndk1::__value_type<std::__ndk1::pair<v8::internal::compiler::ParallelMove*,v8::internal::compiler::InstructionOperand>,v8::internal::compiler::InstructionOperand>,v8::internal::compiler::DelayedInsertionMapCompare,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<std::__ndk1::pair<v8::internal::compiler::ParallelMove*,v8::internal::compiler::InstructionOperand>,v8::internal::compiler::InstructionOperand>>>
              ::
              __emplace_unique_key_args<std::__ndk1::pair<v8::internal::compiler::ParallelMove*,v8::internal::compiler::InstructionOperand>,std::__ndk1::pair<std::__ndk1::pair<v8::internal::compiler::ParallelMove*,v8::internal::compiler::InstructionOperand>,v8::internal::compiler::InstructionOperand>>
                        ((__tree<std::__ndk1::__value_type<std::__ndk1::pair<v8::internal::compiler::ParallelMove*,v8::internal::compiler::InstructionOperand>,v8::internal::compiler::InstructionOperand>,std::__ndk1::__map_value_compare<std::__ndk1::pair<v8::internal::compiler::ParallelMove*,v8::internal::compiler::InstructionOperand>,std::__ndk1::__value_type<std::__ndk1::pair<v8::internal::compiler::ParallelMove*,v8::internal::compiler::InstructionOperand>,v8::internal::compiler::InstructionOperand>,v8::internal::compiler::DelayedInsertionMapCompare,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<std::__ndk1::pair<v8::internal::compiler::ParallelMove*,v8::internal::compiler::InstructionOperand>,v8::internal::compiler::InstructionOperand>>>
                          *)&local_80,(pair *)&local_b0,(pair *)&local_b0);
            }
          }
LAB_0166644c:
          lVar16 = *(long *)(lVar17 + 0x28);
          lVar20 = lVar17;
          if (*(long *)(lVar17 + 0x28) == 0) break;
        } while( true );
      }
    }
    plVar30 = plVar30 + 1;
    if (plVar30 == plVar6) {
      if (local_68 != 0) {
        local_b0 = (ParallelMove *)0x0;
        local_a8 = (ParallelMove *)0x0;
        local_a0 = (ParallelMove *)0x0;
        puVar15 = *(undefined8 **)(param_1 + 0x10);
        local_98 = param_1;
        if ((ulong)(*(long *)(param_1 + 0x18) - (long)puVar15) < 0x20) {
          puVar15 = (undefined8 *)Zone::NewExpand(param_1,0x20);
        }
        else {
          *(undefined8 **)(param_1 + 0x10) = puVar15 + 4;
        }
        local_c0 = puVar15 + 4;
        pPVar26 = local_b0;
        if ((ulong)((long)local_a0 - (long)local_b0 >> 3) < 4) {
          lVar33 = *(long *)(local_98 + 0x10);
          lVar16 = (long)local_a8 - (long)local_b0;
          if ((ulong)(*(long *)(local_98 + 0x18) - lVar33) < 0x20) {
            lVar33 = Zone::NewExpand(local_98,0x20);
          }
          else {
            *(long *)(local_98 + 0x10) = lVar33 + 0x20;
          }
          pPVar2 = (ParallelMove *)(lVar33 + (lVar16 >> 3) * 8);
          local_a0 = (ParallelMove *)(lVar33 + 0x20);
          pPVar26 = pPVar2;
          pPVar23 = local_a8;
          while (local_a8 = pPVar2, pPVar23 != local_b0) {
            pPVar23 = pPVar23 + -8;
            pPVar26 = pPVar26 + -8;
            *(undefined8 *)pPVar26 = *(undefined8 *)pPVar23;
          }
        }
        local_b0 = pPVar26;
        pPVar26 = *(ParallelMove **)(local_80 + 0x20);
        puVar28 = puVar15;
        p_Var34 = local_80;
        do {
          pPVar2 = local_b0;
          if ((p_Var34 == (__tree_node *)&local_78) ||
             (*(__tree_node **)(p_Var34 + 0x20) != (__tree_node *)pPVar26)) {
            for (; pPVar2 != local_a8; pPVar2 = pPVar2 + 8) {
              puVar24 = *(undefined8 **)pPVar2;
              *puVar24 = 0;
              puVar24[1] = 0;
            }
            if (puVar28 != puVar15) {
              puVar24 = *(undefined8 **)(pPVar26 + 8);
              puVar29 = puVar28;
              do {
                uVar31 = *puVar29;
                if (puVar24 == *(undefined8 **)(pPVar26 + 0x10)) {
                  lVar33 = (long)puVar24 - *(long *)pPVar26 >> 3;
                  uVar1 = lVar33 + 1;
                  if (uVar1 >> 0x1c != 0) goto LAB_01666ae8;
                  lVar16 = (long)*(undefined8 **)(pPVar26 + 0x10) - *(long *)pPVar26;
                  uVar25 = lVar16 >> 2;
                  if (uVar1 <= uVar25) {
                    uVar1 = uVar25;
                  }
                  if (0x7fffffe < (ulong)(lVar16 >> 3)) {
                    uVar1 = 0xfffffff;
                  }
                  if (uVar1 == 0) {
                    lVar16 = 0;
                  }
                  else {
                    pZVar18 = *(Zone **)(pPVar26 + 0x18);
                    uVar25 = uVar1 * 8;
                    lVar16 = *(long *)(pZVar18 + 0x10);
                    if (uVar25 < (ulong)(*(long *)(pZVar18 + 0x18) - lVar16) ||
                        uVar25 - (*(long *)(pZVar18 + 0x18) - lVar16) == 0) {
                      *(ulong *)(pZVar18 + 0x10) = lVar16 + uVar25;
                    }
                    else {
                      lVar16 = Zone::NewExpand(pZVar18,uVar25);
                    }
                  }
                  puVar22 = (undefined8 *)(lVar16 + lVar33 * 8);
                  puVar24 = puVar22 + 1;
                  *puVar22 = uVar31;
                  puVar5 = *(undefined8 **)pPVar26;
                  puVar27 = *(undefined8 **)(pPVar26 + 8);
                  while (puVar27 != puVar5) {
                    puVar27 = puVar27 + -1;
                    puVar22 = puVar22 + -1;
                    *puVar22 = *puVar27;
                  }
                  *(undefined8 **)pPVar26 = puVar22;
                  *(undefined8 **)(pPVar26 + 8) = puVar24;
                  *(ulong *)(pPVar26 + 0x10) = lVar16 + uVar1 * 8;
                }
                else {
                  *puVar24 = uVar31;
                  puVar24 = (undefined8 *)(*(long *)(pPVar26 + 8) + 8);
                  *(undefined8 **)(pPVar26 + 8) = puVar24;
                }
                puVar29 = puVar29 + 1;
              } while (puVar29 != puVar15);
            }
            if (p_Var34 == (__tree_node *)&local_78) {
              if (local_b0 != (ParallelMove *)0x0) {
                local_a8 = local_b0;
              }
              break;
            }
            local_a8 = local_b0;
            pPVar26 = *(ParallelMove **)(p_Var34 + 0x20);
            puVar15 = puVar28;
          }
          pZVar18 = *(Zone **)(*(long *)(*(long *)this + 0x10) + 8);
          pMVar14 = *(MoveOperands **)(pZVar18 + 0x10);
          if ((ulong)(*(long *)(pZVar18 + 0x18) - (long)pMVar14) < 0x10) {
            pMVar14 = (MoveOperands *)Zone::NewExpand(pZVar18,0x10);
          }
          else {
            *(MoveOperands **)(pZVar18 + 0x10) = pMVar14 + 0x10;
          }
          *(__tree_node **)pMVar14 = *(__tree_node **)(p_Var34 + 0x28);
          *(__tree_node **)(pMVar14 + 8) = *(__tree_node **)(p_Var34 + 0x30);
          ParallelMove::PrepareInsertAfter(pPVar26,pMVar14,(ZoneVector *)&local_b0);
          if (puVar15 == local_c0) {
            lVar33 = (long)puVar15 - (long)puVar28 >> 3;
            uVar1 = lVar33 + 1;
            if (uVar1 >> 0x1c != 0) {
LAB_01666ae8:
                    /* WARNING: Subroutine does not return */
              abort();
            }
            uVar25 = (long)local_c0 - (long)puVar28 >> 2;
            if (uVar1 <= uVar25) {
              uVar1 = uVar25;
            }
            if (0x7fffffe < (ulong)((long)local_c0 - (long)puVar28 >> 3)) {
              uVar1 = 0xfffffff;
            }
            if (uVar1 == 0) {
              lVar16 = 0;
            }
            else {
              uVar25 = uVar1 * 8;
              lVar16 = *(long *)(param_1 + 0x10);
              if (uVar25 < (ulong)(*(long *)(param_1 + 0x18) - lVar16) ||
                  uVar25 - (*(long *)(param_1 + 0x18) - lVar16) == 0) {
                *(ulong *)(param_1 + 0x10) = lVar16 + uVar25;
              }
              else {
                lVar16 = Zone::NewExpand(param_1,uVar25);
              }
            }
            puVar24 = (undefined8 *)(lVar16 + lVar33 * 8);
            local_c0 = (undefined8 *)(lVar16 + uVar1 * 8);
            *puVar24 = pMVar14;
            puVar29 = puVar24;
            while (puVar15 != puVar28) {
              puVar15 = puVar15 + -1;
              puVar29 = puVar29 + -1;
              *puVar29 = *puVar15;
            }
          }
          else {
            *puVar15 = pMVar14;
            puVar24 = puVar15;
            puVar29 = puVar28;
          }
          puVar15 = puVar24 + 1;
          p_Var19 = *(__tree_node **)(p_Var34 + 8);
          puVar28 = puVar29;
          if (*(__tree_node **)(p_Var34 + 8) == (__tree_node *)0x0) {
            p_Var19 = p_Var34 + 0x10;
            bVar12 = *(__tree_node **)*(__tree_node **)p_Var19 != p_Var34;
            p_Var34 = *(__tree_node **)p_Var19;
            if (bVar12) {
              do {
                lVar33 = *(long *)p_Var19;
                p_Var19 = (__tree_node *)(lVar33 + 0x10);
                p_Var34 = *(__tree_node **)p_Var19;
              } while (*(long *)p_Var34 != lVar33);
            }
          }
          else {
            do {
              p_Var34 = p_Var19;
              p_Var19 = *(__tree_node **)p_Var34;
            } while (*(__tree_node **)p_Var34 != (__tree_node *)0x0);
          }
        } while( true );
      }
      goto LAB_01666a90;
    }
    lVar16 = *(long *)this;
    if (lVar33 != *(long *)(lVar16 + 0x90) - *(long *)(lVar16 + 0x88)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","live_ranges_size == data()->live_ranges().size()");
    }
  } while( true );
LAB_016666d4:
  pPVar26 = local_b0 + 0x18;
  pPVar10 = local_b0;
  local_b0 = pPVar2;
  local_a8 = pPVar23;
  local_a0 = pPVar9;
  ParallelMove::AddMove
            (pPVar10,(InstructionOperand *)&local_88,(InstructionOperand *)&local_90,
             *(Zone **)pPVar26);
  lVar16 = *(long *)(lVar17 + 0x28);
  lVar20 = lVar17;
  goto joined_r0x01666424;
}

