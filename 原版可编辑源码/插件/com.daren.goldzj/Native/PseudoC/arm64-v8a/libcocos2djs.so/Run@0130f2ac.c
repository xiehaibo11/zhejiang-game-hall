
/* v8::internal::compiler::ScheduleVerifier::Run(v8::internal::compiler::Schedule*) */

void v8::internal::compiler::ScheduleVerifier::Run(Schedule *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  bool bVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  uint uVar12;
  ulong uVar13;
  long *plVar14;
  ulong *puVar15;
  ulong *puVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  long *plVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  undefined8 *puVar24;
  Node *pNVar25;
  int iVar26;
  long lVar27;
  long lVar28;
  ulong uVar29;
  long lVar30;
  long lVar31;
  ulong local_140;
  long local_138;
  undefined8 local_130;
  Zone *pZStack_128;
  BitVector *local_120;
  long *plStack_118;
  long *local_110;
  long local_108;
  Zone *local_100;
  BitVector *local_f8;
  ulong local_f0;
  long local_e8;
  Zone *local_e0;
  long *local_d8;
  long local_d0 [4];
  Zone aZStack_b0 [16];
  int *local_a0;
  long lStack_98;
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  uVar29 = *(long *)(param_1 + 0x10) - *(long *)(param_1 + 8);
  uVar23 = (long)uVar29 >> 3;
  Zone::Zone(aZStack_b0,*(AccountingAllocator **)(*(long *)param_1 + 0x20),
             "../../src/compiler/verifier.cc:2001");
  plVar14 = *(long **)(param_1 + 0x48);
  plVar11 = *(long **)(param_1 + 0x50);
  if (uVar23 < (ulong)((long)plVar11 - (long)plVar14 >> 3)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","count >= rpo_order->size()");
  }
  lVar27 = *(long *)(param_1 + 0x68);
  if (plVar14 != plVar11) {
    do {
      lVar31 = *plVar14;
      lVar17 = Schedule::GetBlockById(param_1,*(undefined8 *)(lVar31 + 0xa0));
      if (lVar31 != lVar17) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","(*b) == schedule->GetBlockById((*b)->id())");
      }
      lVar17 = *plVar14;
      plVar11 = *(long **)(lVar17 + 0x80);
      plVar20 = *(long **)(lVar17 + 0x88);
      if (plVar11 != plVar20) {
        do {
          lVar17 = *plVar11;
          if (*(int *)(lVar17 + 4) < 0) {
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.","predecessor->rpo_number() >= 0");
          }
          lVar31 = Schedule::GetBlockById(param_1,*(undefined8 *)(lVar17 + 0xa0));
          if (lVar17 != lVar31) {
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.","predecessor == schedule->GetBlockById(predecessor->id())")
            ;
          }
          plVar11 = plVar11 + 1;
        } while (plVar20 != plVar11);
        lVar17 = *plVar14;
      }
      plVar20 = *(long **)(lVar17 + 0x68);
      for (plVar11 = *(long **)(lVar17 + 0x60); plVar11 != plVar20; plVar11 = plVar11 + 1) {
        lVar17 = *plVar11;
        if (*(int *)(lVar17 + 4) < 0) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","successor->rpo_number() >= 0");
        }
        lVar31 = Schedule::GetBlockById(param_1,*(undefined8 *)(lVar17 + 0xa0));
        if (lVar17 != lVar31) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","successor == schedule->GetBlockById(successor->id())");
        }
      }
      plVar11 = *(long **)(param_1 + 0x50);
      plVar14 = plVar14 + 1;
    } while (plVar14 != plVar11);
    plVar14 = *(long **)(param_1 + 0x48);
  }
  if ((long)plVar11 - (long)plVar14 == 0) {
LAB_01310300:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (lVar27 != *plVar14) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","start == rpo_order->at(0)");
  }
  if (*(int *)(lVar27 + 4) == 0) {
    uVar13 = 0;
    lVar17 = lVar27;
    do {
      lVar17 = *(long *)(lVar17 + 0x10);
      if (uVar13 == 0) {
        if (lVar17 != 0) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","(dom) == nullptr");
        }
      }
      else {
        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","(dom) != nullptr");
        }
        if ((int)uVar13 <= *(int *)(lVar17 + 4)) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","dom->rpo_number() < block->rpo_number()");
        }
      }
      uVar18 = uVar13 + 1;
      if ((ulong)((long)plVar11 - (long)plVar14 >> 3) <= uVar18) {
        local_140 = local_140 & 0xffffffffffffff00;
        local_120 = (BitVector *)aZStack_b0;
        std::__ndk1::vector<bool,v8::internal::ZoneAllocator<bool>>::vector
                  ((vector<bool,v8::internal::ZoneAllocator<bool>> *)local_d0,
                   (long)(uVar29 * 0x20000000) >> 0x20,(bool *)&local_140,
                   (ZoneAllocator *)&local_120);
        local_f8 = (BitVector *)0x0;
        local_f0 = 0;
        local_e8 = 0;
        plStack_118 = (undefined8 *)0x0;
        local_120 = (BitVector *)0x0;
        local_108 = 0;
        local_110 = (undefined8 *)0x0;
        local_d8 = (long *)0x0;
        local_100 = aZStack_b0;
        local_e0 = aZStack_b0;
        std::__ndk1::
        deque<v8::internal::compiler::BasicBlock*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::BasicBlock*>>
        ::__add_back_capacity
                  ((deque<v8::internal::compiler::BasicBlock*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::BasicBlock*>>
                    *)&local_120);
        *(long *)(*(long *)((long)plStack_118 + (local_f0 + local_e8 >> 6 & 0x3fffffffffffff8)) +
                 (local_f0 + local_e8 & 0x1ff) * 8) = lVar27;
        local_e8 = local_e8 + 1;
        uVar13 = *(ulong *)(lVar27 + 0xa0) >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(local_d0[0] + uVar13) =
             *(ulong *)(local_d0[0] + uVar13) | 1L << (*(ulong *)(lVar27 + 0xa0) & 0x3f);
        while (local_e8 != 0) {
          local_e8 = local_e8 + -1;
          lVar17 = *(long *)(*(long *)((long)plStack_118 + (local_f0 >> 6 & 0x3fffffffffffff8)) +
                            (local_f0 & 0x1ff) * 8);
          uVar13 = local_f0 + 1;
          if (0x3ff < local_f0 + 1) {
            plVar14 = (long *)*plStack_118;
            if ((local_d8 == (long *)0x0) || ((ulong)local_d8[1] < 0x201)) {
              plVar14[1] = 0x200;
              *plVar14 = (long)local_d8;
              local_d8 = plVar14;
            }
            plStack_118 = plStack_118 + 1;
            uVar13 = local_f0 - 0x1ff;
          }
          local_f0 = uVar13;
          lVar31 = *(long *)(lVar17 + 0x60);
          lVar28 = *(long *)(lVar17 + 0x68);
          if (lVar28 != lVar31) {
            uVar13 = 0;
            do {
              lVar30 = *(long *)(lVar31 + uVar13 * 8);
              uVar22 = *(ulong *)(lVar30 + 0xa0);
              uVar18 = uVar22 >> 6;
              uVar19 = *(ulong *)(local_d0[0] + uVar18 * 8);
              uVar22 = 1L << (uVar22 & 0x3f);
              if ((uVar22 & uVar19) == 0) {
                *(ulong *)(local_d0[0] + uVar18 * 8) = uVar19 | uVar22;
                uVar18 = 0;
                if ((long)local_110 - (long)plStack_118 != 0) {
                  uVar18 = ((long)local_110 - (long)plStack_118) * 0x40 - 1;
                }
                uVar19 = local_e8 + local_f0;
                if (uVar18 == uVar19) {
                  std::__ndk1::
                  deque<v8::internal::compiler::BasicBlock*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::BasicBlock*>>
                  ::__add_back_capacity
                            ((deque<v8::internal::compiler::BasicBlock*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::BasicBlock*>>
                              *)&local_120);
                  uVar19 = local_f0 + local_e8;
                }
                *(long *)(*(long *)((long)plStack_118 + (uVar19 >> 6 & 0x3fffffffffffff8)) +
                         (uVar19 & 0x1ff) * 8) = lVar30;
                local_e8 = local_e8 + 1;
                lVar31 = *(long *)(lVar17 + 0x60);
                lVar28 = *(long *)(lVar17 + 0x68);
              }
              uVar13 = uVar13 + 1;
            } while (uVar13 < (ulong)(lVar28 - lVar31 >> 3));
          }
        }
        std::__ndk1::
        __deque_base<v8::internal::compiler::BasicBlock*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::BasicBlock*>>
        ::clear((__deque_base<v8::internal::compiler::BasicBlock*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::BasicBlock*>>
                 *)&local_120);
        if (plStack_118 != local_110) {
          plVar20 = (long *)*plStack_118;
          plVar14 = plStack_118;
          plVar11 = local_d8;
          if (local_d8 != (long *)0x0) goto LAB_0130f65c;
          do {
            plVar11 = plVar20;
            plVar11[1] = 0x200;
            *plVar11 = (long)local_d8;
            local_d8 = plVar11;
            do {
              plVar14 = plVar14 + 1;
              if (local_110 == plVar14) {
                if ((long)local_110 - (long)plStack_118 != 0) {
                  local_110 = local_110 +
                              (((long)local_110 - (long)plStack_118) - 8U >> 3 ^ 0xffffffffffffffff)
                  ;
                }
                goto LAB_0130f68c;
              }
              plVar20 = (long *)*plVar14;
              if (plVar11 == (long *)0x0) break;
LAB_0130f65c:
            } while (0x200 < (ulong)plVar11[1]);
          } while( true );
        }
LAB_0130f68c:
        if (((local_120 != (BitVector *)0x0) && (0xf < (ulong)(local_108 - (long)local_120))) &&
           ((uVar13 = local_108 - (long)local_120 >> 3, local_f8 == (BitVector *)0x0 ||
            (*(ulong *)(local_f8 + 8) <= uVar13)))) {
          *(ulong *)(local_120 + 8) = uVar13;
          *(BitVector **)local_120 = local_f8;
          local_f8 = local_120;
        }
        if (uVar29 != 0) {
          uVar13 = 0;
          do {
            lVar17 = Schedule::GetBlockById(param_1,uVar13);
            if ((*(ulong *)(local_d0[0] + (uVar13 >> 3 & 0x1ffffffffffffff8)) >> (uVar13 & 0x3f) & 1
                ) != 0) {
              uVar12 = *(uint *)(lVar17 + 4);
              if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
                V8_Fatal("Check failed: %s.","block->rpo_number() >= 0");
              }
              if ((ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 3) <=
                  (ulong)uVar12) goto LAB_01310300;
              if (lVar17 != *(long *)(*(long *)(param_1 + 0x48) + (ulong)uVar12 * 8)) {
                    /* WARNING: Subroutine does not return */
                V8_Fatal("Check failed: %s.","block == rpo_order->at(block->rpo_number())");
              }
            }
            uVar13 = uVar13 + 1;
          } while (uVar13 < uVar23);
        }
        lVar17 = *(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48);
        if (lVar17 != 0) {
          uVar13 = 0;
          do {
            uVar18 = *(ulong *)(*(long *)(*(long *)(param_1 + 0x48) + uVar13 * 8) + 0xa0);
            if ((*(ulong *)(local_d0[0] + (uVar18 >> 3 & 0x1ffffffffffffff8)) >> (uVar18 & 0x3f) & 1
                ) == 0) {
                    /* WARNING: Subroutine does not return */
              V8_Fatal("Check failed: %s.","marked[rpo_order->at(b)->id().ToSize()]");
            }
            uVar13 = uVar13 + 1;
          } while (uVar13 < (ulong)(lVar17 >> 3));
        }
        local_140 = 0;
        local_138 = 0;
        local_130 = 0;
        local_120 = (BitVector *)0x0;
        pZStack_128 = aZStack_b0;
        if (uVar29 != 0) {
          std::__ndk1::
          vector<v8::internal::BitVector*,v8::internal::ZoneAllocator<v8::internal::BitVector*>>::
          __append((vector<v8::internal::BitVector*,v8::internal::ZoneAllocator<v8::internal::BitVector*>>
                    *)&local_140,uVar23,&local_120);
        }
        local_f8 = (BitVector *)0x0;
        local_f0 = 0;
        local_e8 = 0;
        plStack_118 = (long *)0x0;
        local_120 = (BitVector *)0x0;
        local_108 = 0;
        local_110 = (long *)0x0;
        local_d8 = (long *)0x0;
        local_100 = aZStack_b0;
        local_e0 = aZStack_b0;
        std::__ndk1::
        deque<v8::internal::compiler::BasicBlock*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::BasicBlock*>>
        ::__add_back_capacity
                  ((deque<v8::internal::compiler::BasicBlock*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::BasicBlock*>>
                    *)&local_120);
        *(long *)(*(long *)((long)plStack_118 + (local_f0 + local_e8 >> 6 & 0x3fffffffffffff8)) +
                 (local_f0 + local_e8 & 0x1ff) * 8) = lVar27;
        local_e8 = local_e8 + 1;
        if ((ulong)(lStack_98 - (long)local_a0) < 0x10) {
          piVar6 = (int *)Zone::NewExpand(aZStack_b0,0x10);
        }
        else {
          piVar6 = local_a0;
          local_a0 = local_a0 + 4;
        }
        iVar26 = (int)(uVar29 >> 3);
        *piVar6 = iVar26;
        if (iVar26 < 0x41) {
          piVar6[1] = 1;
          piVar6[2] = 0;
          piVar6[3] = 0;
        }
        else {
          iVar9 = iVar26 + 0x3e;
          if (-1 < iVar26 + -1) {
            iVar9 = iVar26 + -1;
          }
          uVar12 = (iVar9 >> 6) + 1;
          piVar6[2] = 0;
          piVar6[3] = 0;
          piVar6[1] = uVar12;
          uVar23 = (ulong)uVar12 * 8;
          if (uVar23 < (ulong)(lStack_98 - (long)local_a0) ||
              uVar23 - (lStack_98 - (long)local_a0) == 0) {
            piVar7 = local_a0;
            local_a0 = local_a0 + (ulong)uVar12 * 2;
          }
          else {
            piVar7 = (int *)Zone::NewExpand(aZStack_b0,uVar23);
          }
          *(int **)(piVar6 + 2) = piVar7;
          if (piVar6[1] == 1) {
            piVar6[2] = 0;
            piVar6[3] = 0;
          }
          else if ((0 < piVar6[1]) && (piVar7[0] = 0, piVar7[1] = 0, 1 < piVar6[1])) {
            lVar17 = 1;
            do {
              *(undefined8 *)(*(long *)(piVar6 + 2) + lVar17 * 8) = 0;
              lVar17 = lVar17 + 1;
            } while (lVar17 < piVar6[1]);
          }
        }
        *(int **)(local_140 + *(long *)(lVar27 + 0xa0) * 8) = piVar6;
        if (local_e8 != 0) {
          iVar9 = iVar26 + 0x3e;
          if (-1 < iVar26 + -1) {
            iVar9 = iVar26 + -1;
          }
          uVar12 = (iVar9 >> 6) + 1;
          uVar23 = (ulong)uVar12 * 8;
          do {
            local_e8 = local_e8 + -1;
            lVar27 = *(long *)(*(long *)((long)plStack_118 + (local_f0 >> 6 & 0x3fffffffffffff8)) +
                              (local_f0 & 0x1ff) * 8);
            uVar29 = local_f0 + 1;
            if (0x3ff < local_f0 + 1) {
              plVar14 = (long *)*plStack_118;
              if ((local_d8 == (long *)0x0) || ((ulong)local_d8[1] < 0x201)) {
                plVar14[1] = 0x200;
                *plVar14 = (long)local_d8;
                local_d8 = plVar14;
              }
              plStack_118 = plStack_118 + 1;
              uVar29 = local_f0 - 0x1ff;
            }
            local_f0 = uVar29;
            lVar17 = *(long *)(lVar27 + 0x10);
            lVar31 = *(long *)(local_140 + *(long *)(lVar27 + 0xa0) * 8);
            if (lVar17 != 0) {
              uVar3 = *(uint *)(lVar17 + 0xa0);
              puVar16 = (ulong *)(lVar31 + 8);
              if (*(int *)(lVar31 + 4) != 1) {
                uVar1 = uVar3 + 0x3f;
                if (-1 < (int)uVar3) {
                  uVar1 = uVar3;
                }
                puVar16 = (ulong *)(*puVar16 + (long)((int)uVar1 >> 6) * 8);
              }
              if ((*puVar16 >> ((ulong)uVar3 & 0x3f) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
                V8_Fatal("Block B%d is not dominated by B%d",(ulong)*(uint *)(lVar27 + 4),
                         (ulong)*(uint *)(lVar17 + 4));
              }
            }
            lVar17 = *(long *)(lVar27 + 0x60);
            if (*(long *)(lVar27 + 0x68) != lVar17) {
              uVar29 = 0;
              do {
                lVar28 = *(long *)(lVar17 + uVar29 * 8);
                lVar17 = *(long *)(local_140 + *(long *)(lVar28 + 0xa0) * 8);
                if (lVar17 == 0) {
                  if ((ulong)(lStack_98 - (long)local_a0) < 0x10) {
                    piVar6 = (int *)Zone::NewExpand(aZStack_b0,0x10);
                  }
                  else {
                    piVar6 = local_a0;
                    local_a0 = local_a0 + 4;
                  }
                  *piVar6 = iVar26;
                  if (iVar26 < 0x41) {
                    piVar6[1] = 1;
LAB_0130fc0c:
                    piVar6[2] = 0;
                    piVar6[3] = 0;
                    lVar17 = *(long *)(lVar31 + 8);
LAB_0130fc14:
                    *(long *)(piVar6 + 2) = lVar17;
                    uVar13 = (ulong)*(uint *)(lVar27 + 0xa0);
LAB_0130fc1c:
                    puVar16 = (ulong *)(piVar6 + 2);
                  }
                  else {
                    piVar6[2] = 0;
                    piVar6[3] = 0;
                    piVar6[1] = uVar12;
                    if ((ulong)(lStack_98 - (long)local_a0) < uVar23) {
                      piVar7 = (int *)Zone::NewExpand(aZStack_b0,uVar23);
                    }
                    else {
                      piVar7 = local_a0;
                      local_a0 = local_a0 + (ulong)uVar12 * 2;
                    }
                    iVar9 = piVar6[1];
                    *(int **)(piVar6 + 2) = piVar7;
                    if (iVar9 == 1) goto LAB_0130fc0c;
                    if (0 < iVar9) {
                      piVar7[0] = 0;
                      piVar7[1] = 0;
                      iVar9 = piVar6[1];
                      if (1 < iVar9) {
                        lVar17 = 1;
                        do {
                          *(undefined8 *)(*(long *)(piVar6 + 2) + lVar17 * 8) = 0;
                          iVar9 = piVar6[1];
                          lVar17 = lVar17 + 1;
                        } while (lVar17 < iVar9);
                      }
                      lVar17 = *(long *)(lVar31 + 8);
                      if (iVar9 != 1) goto LAB_0130fcf4;
                      goto LAB_0130fc14;
                    }
                    lVar17 = *(long *)(lVar31 + 8);
LAB_0130fcf4:
                    uVar3 = *(uint *)(lVar31 + 4);
                    if (uVar3 == 1) {
                      **(long **)(piVar6 + 2) = lVar17;
                      iVar9 = piVar6[1];
                      if (1 < iVar9) {
                        lVar17 = 1;
                        do {
                          *(undefined8 *)(*(long *)(piVar6 + 2) + lVar17 * 8) = 0;
                          iVar9 = piVar6[1];
                          lVar17 = lVar17 + 1;
                        } while (lVar17 < iVar9);
                      }
                    }
                    else {
                      lVar30 = (long)(int)uVar3;
                      if (0 < (int)uVar3) {
                        lVar10 = 0;
                        do {
                          *(undefined8 *)(*(long *)(piVar6 + 2) + lVar10) =
                               *(undefined8 *)(lVar17 + lVar10);
                          lVar10 = lVar10 + 8;
                        } while ((ulong)uVar3 * 8 - lVar10 != 0);
                        iVar9 = piVar6[1];
                      }
                      if ((int)uVar3 < iVar9) {
                        do {
                          *(undefined8 *)(*(long *)(piVar6 + 2) + lVar30 * 8) = 0;
                          iVar9 = piVar6[1];
                          lVar30 = lVar30 + 1;
                        } while (lVar30 < iVar9);
                      }
                    }
                    uVar13 = *(ulong *)(lVar27 + 0xa0);
                    if (iVar9 == 1) {
                      uVar13 = uVar13 & 0xffffffff;
                      goto LAB_0130fc1c;
                    }
                    iVar8 = (int)uVar13;
                    iVar9 = iVar8 + 0x3f;
                    if (-1 < iVar8) {
                      iVar9 = iVar8;
                    }
                    uVar13 = uVar13 & 0xffffffff;
                    puVar16 = (ulong *)(*(long *)(piVar6 + 2) + (long)(iVar9 >> 6) * 8);
                  }
                  *puVar16 = *puVar16 | 1L << (uVar13 & 0x3f);
                  *(int **)(local_140 + *(long *)(lVar28 + 0xa0) * 8) = piVar6;
                  uVar13 = 0;
                  if ((long)local_110 - (long)plStack_118 != 0) {
                    uVar13 = ((long)local_110 - (long)plStack_118) * 0x40 - 1;
                  }
                  uVar18 = local_e8 + local_f0;
                  if (uVar13 == uVar18) {
                    std::__ndk1::
                    deque<v8::internal::compiler::BasicBlock*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::BasicBlock*>>
                    ::__add_back_capacity
                              ((deque<v8::internal::compiler::BasicBlock*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::BasicBlock*>>
                                *)&local_120);
                    uVar18 = local_f0 + local_e8;
                  }
                  *(long *)(*(long *)((long)plStack_118 + (uVar18 >> 6 & 0x3fffffffffffff8)) +
                           (uVar18 & 0x1ff) * 8) = lVar28;
                  local_e8 = local_e8 + 1;
                }
                else {
                  iVar9 = *(int *)(lVar17 + 4);
                  uVar13 = *(ulong *)(lVar27 + 0xa0);
                  puVar16 = (ulong *)(lVar17 + 8);
                  iVar8 = (int)uVar13;
                  puVar15 = puVar16;
                  if (iVar9 != 1) {
                    iVar2 = iVar8 + 0x3f;
                    if (-1 < iVar8) {
                      iVar2 = iVar8;
                    }
                    puVar15 = (ulong *)(*puVar16 + (long)(iVar2 >> 6) * 8);
                  }
                  iVar2 = iVar8 + 0x3f;
                  if (-1 < iVar8) {
                    iVar2 = iVar8;
                  }
                  uVar19 = 1L << (uVar13 & 0x3f);
                  uVar18 = *puVar15 & uVar19;
                  if (uVar18 == 0) {
LAB_0130faa8:
                    if (iVar9 == 1) goto LAB_0130fab0;
                    if (0 < iVar9) {
                      lVar10 = *(long *)(lVar17 + 8);
                      lVar30 = 0;
                      bVar5 = false;
                      do {
                        lVar21 = lVar30 * 8;
                        uVar13 = *(ulong *)(lVar10 + lVar21);
                        lVar30 = lVar30 + 1;
                        *(ulong *)(lVar10 + lVar21) =
                             *(ulong *)(*(long *)(lVar31 + 8) + lVar21) & uVar13;
                        lVar10 = *(long *)(lVar17 + 8);
                        bVar5 = (bool)(bVar5 | *(ulong *)(lVar10 + lVar21) != uVar13);
                      } while (lVar30 < *(int *)(lVar17 + 4));
                      if (!bVar5) goto LAB_0130fb74;
                      goto LAB_0130fb1c;
                    }
                  }
                  else {
                    if (iVar9 != 1) {
                      uVar13 = -(ulong)((uint)(iVar2 >> 6) >> 0x1f) & 0xfffffff800000000 |
                               (ulong)(uint)(iVar2 >> 6) << 3;
                      *(ulong *)(*(long *)(lVar17 + 8) + uVar13) =
                           *(ulong *)(*(long *)(lVar17 + 8) + uVar13) &
                           (uVar19 ^ 0xffffffffffffffff);
                      iVar9 = *(int *)(lVar17 + 4);
                      goto LAB_0130faa8;
                    }
                    *puVar16 = *puVar16 & (1L << (uVar13 & 0x3f) ^ 0xffffffffffffffffU);
LAB_0130fab0:
                    uVar13 = *puVar16;
                    uVar19 = *(ulong *)(lVar31 + 8) & uVar13;
                    *puVar16 = uVar19;
                    if (uVar19 != uVar13) {
LAB_0130fb1c:
                      uVar13 = 0;
                      if ((long)local_110 - (long)plStack_118 != 0) {
                        uVar13 = ((long)local_110 - (long)plStack_118) * 0x40 - 1;
                      }
                      uVar19 = local_e8 + local_f0;
                      if (uVar13 == uVar19) {
                        std::__ndk1::
                        deque<v8::internal::compiler::BasicBlock*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::BasicBlock*>>
                        ::__add_back_capacity
                                  ((deque<v8::internal::compiler::BasicBlock*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::BasicBlock*>>
                                    *)&local_120);
                        uVar19 = local_f0 + local_e8;
                      }
                      *(long *)(*(long *)((long)plStack_118 + (uVar19 >> 6 & 0x3fffffffffffff8)) +
                               (uVar19 & 0x1ff) * 8) = lVar28;
                      local_e8 = local_e8 + 1;
                    }
                  }
LAB_0130fb74:
                  if (uVar18 != 0) {
                    uVar13 = *(ulong *)(lVar27 + 0xa0);
                    if (*(int *)(lVar17 + 4) == 1) {
                      *puVar16 = *puVar16 | 1L << (uVar13 & 0x3f);
                    }
                    else {
                      iVar8 = (int)uVar13;
                      iVar9 = iVar8 + 0x3f;
                      if (-1 < iVar8) {
                        iVar9 = iVar8;
                      }
                      uVar18 = -(ulong)((uint)(iVar9 >> 6) >> 0x1f) & 0xfffffff800000000 |
                               (ulong)(uint)(iVar9 >> 6) << 3;
                      *(ulong *)(*(long *)(lVar17 + 8) + uVar18) =
                           *(ulong *)(*(long *)(lVar17 + 8) + uVar18) | 1L << (uVar13 & 0x3f);
                    }
                  }
                }
                lVar17 = *(long *)(lVar27 + 0x60);
                uVar29 = uVar29 + 1;
              } while (uVar29 < (ulong)(*(long *)(lVar27 + 0x68) - lVar17 >> 3));
            }
          } while (local_e8 != 0);
        }
        plVar14 = *(long **)(param_1 + 0x48);
        plVar11 = *(long **)(param_1 + 0x50);
        if (plVar14 == plVar11) goto LAB_0130ffa0;
        do {
          lVar27 = *plVar14;
          lVar17 = *(long *)(lVar27 + 0x10);
          if (lVar17 != 0) {
            lVar31 = *(long *)(local_140 + *(long *)(lVar27 + 0xa0) * 8);
            iVar26 = *(int *)(lVar31 + 4);
            puVar16 = (ulong *)(lVar31 + 8);
            if (iVar26 != 1) {
              puVar16 = (ulong *)*puVar16;
            }
            uVar23 = *puVar16;
            if (uVar23 == 0) {
              if (1 < iVar26) {
                uVar23 = *(ulong *)(*(long *)(lVar31 + 8) + 8);
                if (uVar23 == 0) {
                  lVar28 = 2;
                  do {
                    if (iVar26 == lVar28) goto LAB_0130fdf0;
                    uVar23 = *(ulong *)(*(long *)(lVar31 + 8) + lVar28 * 8);
                    lVar28 = lVar28 + 1;
                  } while (uVar23 == 0);
                  iVar9 = (int)lVar28 + -1;
                }
                else {
                  iVar9 = 1;
                }
                iVar8 = iVar9 << 6;
                goto LAB_0130fe38;
              }
              uVar23 = 0;
              iVar8 = 0;
              iVar9 = 1;
              if (iVar26 < 2) goto LAB_0130fdf0;
            }
            else {
              iVar9 = 0;
              iVar8 = 0;
LAB_0130fe38:
              uVar29 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
              uVar29 = (uVar29 & 0xcccccccccccccccc) >> 2 | (uVar29 & 0x3333333333333333) << 2;
              uVar29 = (uVar29 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar29 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar29 = (uVar29 & 0xff00ff00ff00ff00) >> 8 | (uVar29 & 0xff00ff00ff00ff) << 8;
              uVar29 = (uVar29 & 0xffff0000ffff0000) >> 0x10 | (uVar29 & 0xffff0000ffff) << 0x10;
              uVar29 = LZCOUNT(uVar29 >> 0x20 | uVar29 << 0x20);
              iVar8 = iVar8 + (int)uVar29;
              uVar23 = (uVar23 >> (uVar29 & 0x3f)) >> 1;
              if (iVar26 <= iVar9) goto LAB_0130fdf0;
            }
            do {
              while( true ) {
                lVar28 = Schedule::GetBlockById(param_1,(long)iVar8);
                if (lVar28 != lVar17) {
                  lVar30 = *(long *)(local_140 + *(long *)(lVar17 + 0xa0) * 8);
                  uVar12 = *(uint *)(lVar28 + 0xa0);
                  puVar16 = (ulong *)(lVar30 + 8);
                  if (*(int *)(lVar30 + 4) != 1) {
                    uVar3 = uVar12 + 0x3f;
                    if (-1 < (int)uVar12) {
                      uVar3 = uVar12;
                    }
                    puVar16 = (ulong *)(*puVar16 + (long)((int)uVar3 >> 6) * 8);
                  }
                  if ((*puVar16 >> ((ulong)uVar12 & 0x3f) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
                    V8_Fatal("Block B%d is not immediately dominated by B%d",
                             (ulong)*(uint *)(lVar27 + 4),(ulong)*(uint *)(lVar17 + 4));
                  }
                }
                iVar8 = iVar8 + 1;
                if (uVar23 == 0) break;
                iVar26 = *(int *)(lVar31 + 4);
LAB_0130ff14:
                uVar29 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
                uVar29 = (uVar29 & 0xcccccccccccccccc) >> 2 | (uVar29 & 0x3333333333333333) << 2;
                uVar29 = (uVar29 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar29 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar29 = (uVar29 & 0xff00ff00ff00ff00) >> 8 | (uVar29 & 0xff00ff00ff00ff) << 8;
                uVar29 = (uVar29 & 0xffff0000ffff0000) >> 0x10 | (uVar29 & 0xffff0000ffff) << 0x10;
                uVar29 = LZCOUNT(uVar29 >> 0x20 | uVar29 << 0x20);
                iVar8 = iVar8 + (int)uVar29;
                uVar23 = (uVar23 >> (uVar29 & 0x3f)) >> 1;
                if (iVar26 <= iVar9) goto LAB_0130fdec;
              }
              iVar26 = *(int *)(lVar31 + 4);
              uVar12 = iVar9 + 1;
              uVar29 = (ulong)uVar12;
              if ((int)uVar12 < iVar26) {
                uVar29 = (ulong)(int)uVar12;
                iVar8 = iVar9 << 6;
                do {
                  uVar23 = *(ulong *)(*(long *)(lVar31 + 8) + uVar29 * 8);
                  if (uVar23 != 0) {
                    iVar8 = iVar8 + 0x40;
                    iVar9 = (int)uVar29;
                    goto LAB_0130ff14;
                  }
                  uVar29 = uVar29 + 1;
                  iVar8 = iVar8 + 0x40;
                } while ((long)uVar29 < (long)iVar26);
              }
              uVar23 = 0;
              iVar9 = (int)uVar29;
            } while (iVar9 < iVar26);
LAB_0130fdec:
            plVar11 = *(long **)(param_1 + 0x50);
          }
LAB_0130fdf0:
          plVar14 = plVar14 + 1;
          if (plVar14 == plVar11) {
LAB_0130ffa0:
            std::__ndk1::
            __deque_base<v8::internal::compiler::BasicBlock*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::BasicBlock*>>
            ::clear((__deque_base<v8::internal::compiler::BasicBlock*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::BasicBlock*>>
                     *)&local_120);
            if (plStack_118 == local_110) {
LAB_0131001c:
              if (((local_120 != (BitVector *)0x0) && (0xf < (ulong)(local_108 - (long)local_120)))
                 && ((uVar23 = local_108 - (long)local_120 >> 3, local_f8 == (BitVector *)0x0 ||
                     (*(ulong *)(local_f8 + 8) <= uVar23)))) {
                *(ulong *)(local_120 + 8) = uVar23;
                *(BitVector **)local_120 = local_f8;
                local_f8 = local_120;
              }
              if (local_140 != 0) {
                local_138 = local_140;
              }
              plVar14 = *(long **)(param_1 + 0x48);
              plVar11 = *(long **)(param_1 + 0x50);
              if (plVar14 != plVar11) {
                do {
                  lVar27 = *plVar14;
                  puVar24 = *(undefined8 **)(lVar27 + 0x40);
                  if (puVar24 != *(undefined8 **)(lVar27 + 0x48)) {
                    do {
                      pNVar25 = (Node *)*puVar24;
                      if (*(short *)(*(long *)pNVar25 + 0x10) == 0x23) {
                        if ((~*(uint *)(pNVar25 + 0x14) & 0xf000000) == 0) {
                          uVar12 = *(uint *)(*(long *)(pNVar25 + 0x20) + 8);
                        }
                        else {
                          uVar12 = *(uint *)(pNVar25 + 0x14) >> 0x18 & 0xf;
                        }
                        if (*(int *)(*(long *)pNVar25 + 0x14) < (int)uVar12) {
                          pNVar25 = (Node *)NodeProperties::GetControlInput(pNVar25,0);
                          if ((*(short *)(*(long *)pNVar25 + 0x10) != 10) &&
                             (*(short *)(*(long *)pNVar25 + 0x10) != 1)) {
                    /* WARNING: Subroutine does not return */
                            V8_Fatal("Check failed: %s.",
                                     "control->opcode() == IrOpcode::kMerge || control->opcode() == IrOpcode::kLoop"
                                    );
                          }
                          lVar17 = *plVar14;
                          lVar27 = Schedule::block(param_1,pNVar25);
                          if (lVar17 != lVar27) {
                    /* WARNING: Subroutine does not return */
                            V8_Fatal("Check failed: %s.","(*b) == schedule->block(control)");
                          }
                          lVar27 = *plVar14;
                        }
                      }
                      puVar24 = puVar24 + 1;
                    } while (puVar24 != *(undefined8 **)(lVar27 + 0x48));
                    plVar11 = *(long **)(param_1 + 0x50);
                  }
                  plVar14 = plVar14 + 1;
                } while (plVar14 != plVar11);
                plVar14 = *(long **)(param_1 + 0x48);
                if (plVar14 != plVar11) {
                  do {
                    lVar27 = *plVar14;
                    pNVar25 = *(Node **)(lVar27 + 0x38);
                    if (pNVar25 != (Node *)0x0) {
                      lVar17 = Schedule::block(param_1,pNVar25);
                      if (lVar27 != lVar17) {
                    /* WARNING: Subroutine does not return */
                        V8_Fatal("Check failed: %s.","block == schedule->block(control)");
                      }
                      FUN_01310380(param_1,lVar27,pNVar25,
                                   (int)((ulong)(*(long *)(lVar27 + 0x48) - *(long *)(lVar27 + 0x40)
                                                ) >> 3) + -1);
                    }
                    lVar17 = *(long *)(lVar27 + 0x40);
                    if (*(long *)(lVar27 + 0x48) != lVar17) {
                      uVar23 = 0;
                      do {
                        FUN_01310380(param_1,lVar27,*(undefined8 *)(lVar17 + uVar23 * 8),
                                     (int)uVar23 + -1);
                        lVar17 = *(long *)(lVar27 + 0x40);
                        uVar23 = uVar23 + 1;
                      } while (uVar23 < (ulong)(*(long *)(lVar27 + 0x48) - lVar17 >> 3));
                    }
                    plVar14 = plVar14 + 1;
                  } while (plVar14 != *(long **)(param_1 + 0x50));
                }
              }
              Zone::~Zone(aZStack_b0);
              if (*(long *)(lVar4 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
                __stack_chk_fail();
              }
              return;
            }
            plVar20 = (long *)*plStack_118;
            plVar14 = plStack_118;
            plVar11 = local_d8;
            if (local_d8 != (long *)0x0) goto LAB_0130ffec;
            do {
              plVar11 = plVar20;
              plVar11[1] = 0x200;
              *plVar11 = (long)local_d8;
              local_d8 = plVar11;
              do {
                plVar14 = plVar14 + 1;
                if (local_110 == plVar14) {
                  if ((long)local_110 - (long)plStack_118 != 0) {
                    local_110 = local_110 +
                                (((long)local_110 - (long)plStack_118) - 8U >> 3 ^
                                0xffffffffffffffff);
                  }
                  goto LAB_0131001c;
                }
                plVar20 = (long *)*plVar14;
                if (plVar11 == (long *)0x0) break;
LAB_0130ffec:
              } while (0x200 < (ulong)plVar11[1]);
            } while( true );
          }
        } while( true );
      }
      lVar17 = plVar14[uVar13 + 1];
      uVar13 = uVar18;
    } while ((int)uVar18 == *(int *)(lVar17 + 4));
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","static_cast<int>(b) == block->rpo_number()");
}

