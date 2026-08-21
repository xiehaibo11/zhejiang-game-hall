
/* v8::internal::compiler::MoveOptimizer::OptimizeMerge(v8::internal::compiler::InstructionBlock*)
    */

void __thiscall
v8::internal::compiler::MoveOptimizer::OptimizeMerge(MoveOptimizer *this,InstructionBlock *param_1)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  ulong *puVar6;
  undefined8 *puVar7;
  bool bVar8;
  bool bVar9;
  ParallelMove *this_00;
  __tree_node_base *p_Var10;
  bool bVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  __tree_node_base *p_Var15;
  undefined8 *puVar16;
  __tree_node_base *p_Var17;
  ParallelMove *pPVar18;
  uint uVar19;
  long lVar20;
  ulong uVar21;
  undefined8 *puVar22;
  ulong uVar23;
  ulong *puVar24;
  int *piVar25;
  ulong uVar26;
  long *plVar27;
  ulong uVar28;
  undefined8 *puVar29;
  long lVar30;
  ulong uVar31;
  Instruction *pIVar32;
  int *piVar33;
  vector<v8::internal::compiler::InstructionOperand,v8::internal::ZoneAllocator<v8::internal::compiler::InstructionOperand>>
  *this_01;
  Instruction *pIVar34;
  Zone *pZVar35;
  InstructionOperand *pIVar36;
  __tree_node_base *p_Var37;
  undefined8 uVar38;
  long *plVar39;
  __tree_node_base *local_80;
  __tree_node_base *local_78;
  Zone *local_70;
  long local_68;
  
  piVar33 = *(int **)(param_1 + 0x20);
  piVar5 = *(int **)(param_1 + 0x28);
  if (piVar33 != piVar5) {
    lVar13 = *(long *)(this + 8);
    lVar14 = **(long **)(lVar13 + 0x10);
    piVar25 = piVar33;
    do {
      if ((ulong)((*(long **)(lVar13 + 0x10))[1] - lVar14 >> 3) <= (ulong)(long)*piVar25)
      goto LAB_0164e478;
      plVar27 = *(long **)(lVar14 + (long)*piVar25 * 8);
      if (1 < (ulong)(plVar27[1] - *plVar27 >> 2)) {
        return;
      }
      uVar28 = ((long)*(int *)((long)plVar27 + 0x74) + *(long *)(lVar13 + 0xb0)) - 1;
      lVar30 = *(long *)(*(long *)(*(long *)(lVar13 + 0x88) + (uVar28 >> 6 & 0x3fffffffffffff8)) +
                        (uVar28 & 0x1ff) * 8);
      uVar12 = *(uint *)(lVar30 + 4);
      if ((uVar12 & 0x7f000000) != 0 || (int)((ulong)uVar12 & 0xff) != 0) {
        return;
      }
      uVar19 = uVar12 >> 8 & 0xffff;
      uVar28 = (ulong)uVar19;
      if (uVar19 != 0) {
        puVar24 = (ulong *)(lVar30 + ((ulong)uVar12 & 0xff) * 8 + 0x28);
        do {
          if ((*puVar24 & 6) != 2) {
            return;
          }
          uVar28 = uVar28 - 1;
          puVar24 = puVar24 + 1;
        } while (uVar28 != 0);
      }
      piVar25 = piVar25 + 1;
    } while (piVar25 != piVar5);
  }
  local_70 = *(Zone **)this;
  local_68 = 0;
  local_78 = (__tree_node_base *)0x0;
  if (piVar33 == piVar5) {
    return;
  }
  lVar14 = 0;
  lVar13 = 0;
  local_80 = (__tree_node_base *)&local_78;
  do {
    lVar20 = *(long *)(this + 8);
    lVar30 = **(long **)(lVar20 + 0x10);
    if ((ulong)((*(long **)(lVar20 + 0x10))[1] - lVar30 >> 3) <= (ulong)(long)*piVar33)
    goto LAB_0164e478;
    uVar28 = ((long)*(int *)(*(long *)(lVar30 + (long)*piVar33 * 8) + 0x74) +
             *(long *)(lVar20 + 0xb0)) - 1;
    plVar27 = *(long **)(*(long *)(*(long *)(*(long *)(lVar20 + 0x88) +
                                            (uVar28 >> 6 & 0x3fffffffffffff8)) +
                                  (uVar28 & 0x1ff) * 8) + 8);
    if (plVar27 == (long *)0x0) {
      return;
    }
    plVar39 = (long *)*plVar27;
    plVar27 = (long *)plVar27[1];
    if (plVar39 == plVar27) {
      return;
    }
    do {
      uVar28 = *(ulong *)*plVar39;
      if ((uVar28 & 7) != 0) {
        uVar12 = (uint)uVar28;
        uVar21 = uVar28;
        if ((uVar12 >> 2 & 1) != 0) {
          uVar21 = 0x180;
          if ((uVar12 >> 5 & 0xff) < 0xb || (uVar28 & 0x1c) != 4) {
            uVar21 = 0;
          }
          uVar21 = uVar28 & 0xffffffffffffe018 | uVar21 | 4;
        }
        uVar31 = ((ulong *)*plVar39)[1];
        uVar19 = (uint)uVar31;
        uVar23 = uVar31;
        if ((uVar19 >> 2 & 1) != 0) {
          uVar23 = 0x180;
          if ((uVar19 >> 5 & 0xff) < 0xb || (uVar31 & 0x1c) != 4) {
            uVar23 = 0;
          }
          uVar23 = uVar31 & 0xffffffffffffe018 | uVar23 | 4;
        }
        if (uVar21 != uVar23) {
          p_Var15 = (__tree_node_base *)&local_78;
          p_Var37 = (__tree_node_base *)&local_78;
          if (local_78 == (__tree_node_base *)0x0) {
LAB_0164dbe8:
            lVar30 = *(long *)p_Var37;
          }
          else {
            uVar21 = 0x180;
            if ((uVar12 >> 5 & 0xff) < 0xb || (uVar28 & 0x1c) != 4) {
              uVar21 = 0;
            }
            uVar23 = 0x180;
            if ((uVar19 >> 5 & 0xff) < 0xb || (uVar31 & 0x1c) != 4) {
              uVar23 = 0;
            }
            uVar1 = uVar28;
            if ((uVar28 & 4) != 0) {
              uVar1 = uVar28 & 0xffffffffffffe018 | uVar21 | 4;
            }
            p_Var10 = local_78;
            uVar21 = uVar31;
            if ((uVar31 & 4) != 0) {
              uVar21 = uVar31 & 0xffffffffffffe018 | uVar23 | 4;
            }
            do {
              while( true ) {
                p_Var15 = p_Var10;
                uVar26 = *(ulong *)(p_Var15 + 0x20);
                uVar12 = (uint)uVar26;
                uVar23 = uVar26;
                if ((uVar12 >> 2 & 1) != 0) {
                  uVar23 = 0x180;
                  if ((uVar12 >> 5 & 0xff) < 0xb || (uVar26 & 0x1c) != 4) {
                    uVar23 = 0;
                  }
                  uVar23 = uVar26 & 0xffffffffffffe018 | uVar23 | 4;
                }
                if (uVar1 != uVar23) break;
                uVar23 = *(ulong *)(p_Var15 + 0x28);
                if (((uint)uVar23 >> 2 & 1) != 0) {
                  uVar2 = 0x180;
                  if (((uint)uVar23 >> 5 & 0xff) < 0xb || (uVar23 & 0x1c) != 4) {
                    uVar2 = 0;
                  }
                  uVar23 = uVar23 & 0xffffffffffffe018 | uVar2 | 4;
                }
                if (uVar21 < uVar23) goto LAB_0164db8c;
LAB_0164daf8:
                uVar23 = uVar26;
                if ((uVar12 >> 2 & 1) != 0) {
                  uVar23 = 0x180;
                  if ((uVar12 >> 5 & 0xff) < 0xb || (uVar26 & 0x1c) != 4) {
                    uVar23 = 0;
                  }
                  uVar23 = uVar26 & 0xffffffffffffe018 | uVar23 | 4;
                }
                if (uVar23 == uVar1) {
                  uVar23 = *(ulong *)(p_Var15 + 0x28);
                  if (((uint)uVar23 >> 2 & 1) != 0) {
                    uVar26 = 0x180;
                    if (((uint)uVar23 >> 5 & 0xff) < 0xb || (uVar23 & 0x1c) != 4) {
                      uVar26 = 0;
                    }
                    uVar23 = uVar23 & 0xffffffffffffe018 | uVar26 | 4;
                  }
                  if (uVar21 <= uVar23) goto LAB_0164dbe8;
                }
                else {
                  if ((uVar12 >> 2 & 1) != 0) {
                    uVar23 = 0x180;
                    if ((uVar12 >> 5 & 0xff) < 0xb || (uVar26 & 0x1c) != 4) {
                      uVar23 = 0;
                    }
                    uVar26 = uVar26 & 0xffffffffffffe018 | uVar23 | 4;
                  }
                  if (uVar1 <= uVar26) goto LAB_0164dbe8;
                }
                p_Var37 = p_Var15 + 8;
                p_Var10 = *(__tree_node_base **)p_Var37;
                if (*(__tree_node_base **)p_Var37 == (__tree_node_base *)0x0) goto LAB_0164dbe8;
              }
              uVar23 = uVar26;
              if ((uVar12 >> 2 & 1) != 0) {
                uVar23 = 0x180;
                if ((uVar12 >> 5 & 0xff) < 0xb || (uVar26 & 0x1c) != 4) {
                  uVar23 = 0;
                }
                uVar23 = uVar26 & 0xffffffffffffe018 | uVar23 | 4;
              }
              if (uVar23 <= uVar1) goto LAB_0164daf8;
LAB_0164db8c:
              p_Var10 = *(__tree_node_base **)p_Var15;
              p_Var37 = p_Var15;
            } while (*(__tree_node_base **)p_Var15 != (__tree_node_base *)0x0);
            lVar30 = *(long *)p_Var15;
          }
          if (lVar30 == 0) {
            p_Var10 = *(__tree_node_base **)(local_70 + 0x10);
            if ((ulong)(*(long *)(local_70 + 0x18) - (long)p_Var10) < 0x38) {
              p_Var10 = (__tree_node_base *)Zone::NewExpand(local_70,0x38);
            }
            else {
              *(__tree_node_base **)(local_70 + 0x10) = p_Var10 + 0x38;
            }
            *(ulong *)(p_Var10 + 0x20) = uVar28;
            *(ulong *)(p_Var10 + 0x28) = uVar31;
            *(undefined4 *)(p_Var10 + 0x30) = 1;
            *(undefined8 *)p_Var10 = 0;
            *(undefined8 *)(p_Var10 + 8) = 0;
            *(__tree_node_base **)(p_Var10 + 0x10) = p_Var15;
            *(__tree_node_base **)p_Var37 = p_Var10;
            if (*(__tree_node_base **)local_80 != (__tree_node_base *)0x0) {
              p_Var10 = *(__tree_node_base **)p_Var37;
              local_80 = *(__tree_node_base **)local_80;
            }
            std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                      (local_78,p_Var10);
            lVar14 = local_68 + 1;
            local_68 = lVar14;
          }
          else {
            uVar12 = *(int *)(lVar30 + 0x30) + 1;
            *(uint *)(lVar30 + 0x30) = uVar12;
            if ((ulong)uVar12 == *(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x20) >> 2) {
              lVar13 = lVar13 + 1;
            }
          }
        }
      }
      plVar39 = plVar39 + 1;
    } while (plVar39 != plVar27);
    piVar33 = piVar33 + 1;
  } while (piVar33 != piVar5);
  if (lVar13 == 0) {
    return;
  }
  if (lVar14 == 0) {
    return;
  }
  uVar28 = *(long *)(*(long *)(this + 8) + 0xb0) + (long)*(int *)(param_1 + 0x70);
  lVar30 = *(long *)(*(long *)(*(long *)(*(long *)(this + 8) + 0x88) +
                              (uVar28 >> 6 & 0x3fffffffffffff8)) + (uVar28 & 0x1ff) * 8);
  if (lVar13 != lVar14) {
    this_01 = (vector<v8::internal::compiler::InstructionOperand,v8::internal::ZoneAllocator<v8::internal::compiler::InstructionOperand>>
               *)(this + 0x30);
    *(undefined8 *)(this + 0x38) = *(undefined8 *)this_01;
    if ((__tree_node_base *)&local_78 != local_80) {
      p_Var15 = *(__tree_node_base **)(local_80 + 8);
      p_Var37 = local_80;
      p_Var10 = local_80;
      if (*(__tree_node_base **)(local_80 + 8) != (__tree_node_base *)0x0) goto LAB_0164dd14;
LAB_0164dd24:
      p_Var15 = p_Var37 + 0x10;
      p_Var17 = *(__tree_node_base **)p_Var15;
      if (*(__tree_node_base **)*(__tree_node_base **)p_Var15 != p_Var37) {
        do {
          lVar14 = *(long *)p_Var15;
          p_Var15 = (__tree_node_base *)(lVar14 + 0x10);
          p_Var17 = *(__tree_node_base **)p_Var15;
        } while (*(long *)*(__tree_node_base **)p_Var15 != lVar14);
      }
      do {
        p_Var10 = p_Var17;
        if ((ulong)*(uint *)(p_Var37 + 0x30) !=
            *(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x20) >> 2) {
          puVar16 = *(undefined8 **)(this + 0x38);
          uVar38 = *(undefined8 *)(p_Var37 + 0x28);
          if (puVar16 == *(undefined8 **)(this + 0x40)) {
            lVar14 = (long)puVar16 - *(long *)this_01 >> 3;
            uVar28 = lVar14 + 1;
            if (uVar28 >> 0x1c != 0) goto LAB_0164e478;
            lVar13 = (long)*(undefined8 **)(this + 0x40) - *(long *)this_01;
            uVar21 = lVar13 >> 2;
            if (uVar28 <= uVar21) {
              uVar28 = uVar21;
            }
            if (0x7fffffe < (ulong)(lVar13 >> 3)) {
              uVar28 = 0xfffffff;
            }
            if (uVar28 == 0) {
              lVar13 = 0;
            }
            else {
              pZVar35 = *(Zone **)(this + 0x48);
              uVar21 = uVar28 * 8;
              lVar13 = *(long *)(pZVar35 + 0x10);
              if (uVar21 < (ulong)(*(long *)(pZVar35 + 0x18) - lVar13) ||
                  uVar21 - (*(long *)(pZVar35 + 0x18) - lVar13) == 0) {
                *(ulong *)(pZVar35 + 0x10) = lVar13 + uVar21;
              }
              else {
                lVar13 = Zone::NewExpand(pZVar35,uVar21);
              }
            }
            puVar16 = (undefined8 *)(lVar13 + lVar14 * 8);
            puVar22 = puVar16 + 1;
            *puVar16 = uVar38;
            puVar7 = *(undefined8 **)(this + 0x30);
            puVar29 = *(undefined8 **)(this + 0x38);
            while (puVar29 != puVar7) {
              puVar29 = puVar29 + -1;
              puVar16 = puVar16 + -1;
              *puVar16 = *puVar29;
            }
            *(undefined8 **)(this + 0x30) = puVar16;
            *(undefined8 **)(this + 0x38) = puVar22;
            *(ulong *)(this + 0x40) = lVar13 + uVar28 * 8;
            p_Var15 = *(__tree_node_base **)(p_Var37 + 8);
            if (*(__tree_node_base **)(p_Var37 + 8) == (__tree_node_base *)0x0) goto LAB_0164de3c;
LAB_0164de2c:
            do {
              p_Var17 = p_Var15;
              p_Var15 = *(__tree_node_base **)p_Var17;
            } while (*(__tree_node_base **)p_Var17 != (__tree_node_base *)0x0);
          }
          else {
            *puVar16 = uVar38;
            *(long *)(this + 0x38) = *(long *)(this + 0x38) + 8;
            p_Var15 = *(__tree_node_base **)(p_Var37 + 8);
            if (*(__tree_node_base **)(p_Var37 + 8) != (__tree_node_base *)0x0) goto LAB_0164de2c;
LAB_0164de3c:
            p_Var15 = p_Var37 + 0x10;
            p_Var17 = *(__tree_node_base **)p_Var15;
            if (*(__tree_node_base **)p_Var17 != p_Var37) {
              do {
                lVar14 = *(long *)p_Var15;
                p_Var15 = (__tree_node_base *)(lVar14 + 0x10);
                p_Var17 = *(__tree_node_base **)p_Var15;
              } while (*(long *)p_Var17 != lVar14);
            }
          }
          if (local_80 == p_Var37) {
            local_80 = p_Var17;
          }
          local_68 = local_68 + -1;
          std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>(local_78,p_Var37);
        }
        if ((__tree_node_base *)&local_78 == p_Var10) break;
        p_Var15 = *(__tree_node_base **)(p_Var10 + 8);
        p_Var37 = p_Var10;
        if (*(__tree_node_base **)(p_Var10 + 8) == (__tree_node_base *)0x0) goto LAB_0164dd24;
LAB_0164dd14:
        do {
          p_Var17 = p_Var15;
          p_Var15 = *(__tree_node_base **)p_Var17;
          p_Var37 = p_Var10;
        } while (p_Var15 != (__tree_node_base *)0x0);
      } while( true );
    }
LAB_0164de8c:
    if ((__tree_node_base *)&local_78 != local_80) {
      bVar11 = false;
      p_Var15 = *(__tree_node_base **)(local_80 + 8);
      p_Var37 = local_80;
      p_Var10 = local_80;
      if (*(__tree_node_base **)(local_80 + 8) != (__tree_node_base *)0x0) goto LAB_0164dee4;
LAB_0164def4:
      p_Var15 = p_Var37 + 0x10;
      p_Var17 = *(__tree_node_base **)p_Var15;
      if (*(__tree_node_base **)*(__tree_node_base **)p_Var15 != p_Var37) {
        do {
          lVar14 = *(long *)p_Var15;
          p_Var15 = (__tree_node_base *)(lVar14 + 0x10);
          p_Var17 = *(__tree_node_base **)p_Var15;
        } while (*(long *)*(__tree_node_base **)p_Var15 != lVar14);
      }
      do {
        p_Var10 = p_Var17;
        puVar24 = *(ulong **)(this + 0x30);
        puVar6 = *(ulong **)(this + 0x38);
        if (puVar24 != puVar6) {
          uVar21 = *(ulong *)(p_Var37 + 0x20);
          uVar28 = 0x180;
          if (((uint)uVar21 >> 5 & 0xff) < 0xb || (uVar21 & 0x1c) != 4) {
            uVar28 = 0;
          }
          if ((uVar21 & 4) != 0) {
            uVar21 = uVar21 & 0xffffffffffffe018 | uVar28 | 4;
          }
LAB_0164df58:
          uVar28 = *puVar24;
          if (((uint)uVar28 >> 2 & 1) != 0) {
            uVar23 = 0x180;
            if (((uint)uVar28 >> 5 & 0xff) < 0xb || (uVar28 & 0x1c) != 4) {
              uVar23 = 0;
            }
            uVar28 = uVar28 & 0xffffffffffffe018 | uVar23 | 4;
          }
          if (uVar28 != uVar21) goto code_r0x0164df88;
          if (puVar6 == *(ulong **)(this + 0x40)) {
            std::__ndk1::
            vector<v8::internal::compiler::InstructionOperand,v8::internal::ZoneAllocator<v8::internal::compiler::InstructionOperand>>
            ::__push_back_slow_path<v8::internal::compiler::InstructionOperand_const&>
                      (this_01,(InstructionOperand *)(p_Var37 + 0x28));
            p_Var15 = *(__tree_node_base **)(p_Var37 + 8);
          }
          else {
            *puVar6 = *(ulong *)(p_Var37 + 0x28);
            *(long *)(this + 0x38) = *(long *)(this + 0x38) + 8;
            p_Var15 = *(__tree_node_base **)(p_Var37 + 8);
          }
          if (p_Var15 == (__tree_node_base *)0x0) {
            p_Var15 = p_Var37 + 0x10;
            p_Var17 = *(__tree_node_base **)p_Var15;
            if (*(__tree_node_base **)p_Var17 != p_Var37) {
              do {
                lVar14 = *(long *)p_Var15;
                p_Var15 = (__tree_node_base *)(lVar14 + 0x10);
                p_Var17 = *(__tree_node_base **)p_Var15;
              } while (*(long *)p_Var17 != lVar14);
            }
          }
          else {
            do {
              p_Var17 = p_Var15;
              p_Var15 = *(__tree_node_base **)p_Var17;
            } while (*(__tree_node_base **)p_Var17 != (__tree_node_base *)0x0);
          }
          if (local_80 == p_Var37) {
            local_80 = p_Var17;
          }
          local_68 = local_68 + -1;
          std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>(local_78,p_Var37);
          bVar11 = true;
        }
LAB_0164ded0:
        if ((__tree_node_base *)&local_78 == p_Var10) {
          if (!bVar11) break;
          goto LAB_0164de8c;
        }
        p_Var15 = *(__tree_node_base **)(p_Var10 + 8);
        p_Var37 = p_Var10;
        if (*(__tree_node_base **)(p_Var10 + 8) == (__tree_node_base *)0x0) goto LAB_0164def4;
LAB_0164dee4:
        do {
          p_Var17 = p_Var15;
          p_Var15 = *(__tree_node_base **)p_Var17;
          p_Var37 = p_Var10;
        } while (p_Var15 != (__tree_node_base *)0x0);
      } while( true );
    }
    if (local_68 == 0) {
      return;
    }
  }
  this_00 = *(ParallelMove **)(lVar30 + 8);
  if (this_00 == (ParallelMove *)0x0) {
    bVar11 = true;
  }
  else {
    if (*(long *)this_00 == *(long *)(this_00 + 8)) {
      bVar11 = true;
      goto LAB_0164e0a8;
    }
    pPVar18 = *(ParallelMove **)(lVar30 + 0x10);
    bVar11 = false;
    *(ParallelMove **)(lVar30 + 8) = pPVar18;
    *(ParallelMove **)(lVar30 + 0x10) = this_00;
    this_00 = pPVar18;
    if (pPVar18 != (ParallelMove *)0x0) goto LAB_0164e0a8;
  }
  pZVar35 = *(Zone **)(*(long *)(this + 8) + 8);
  this_00 = *(ParallelMove **)(pZVar35 + 0x10);
  if ((ulong)(*(long *)(pZVar35 + 0x18) - (long)this_00) < 0x20) {
    this_00 = (ParallelMove *)Zone::NewExpand(pZVar35,0x20);
  }
  else {
    *(ParallelMove **)(pZVar35 + 0x10) = this_00 + 0x20;
  }
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this_00 + 8) = 0;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(Zone **)(this_00 + 0x18) = pZVar35;
  *(ParallelMove **)(lVar30 + 8) = this_00;
LAB_0164e0a8:
  piVar33 = *(int **)(param_1 + 0x20);
  piVar5 = *(int **)(param_1 + 0x28);
  if (piVar33 != piVar5) {
    bVar8 = true;
    do {
      lVar13 = *(long *)(this + 8);
      lVar14 = **(long **)(lVar13 + 0x10);
      if ((ulong)((*(long **)(lVar13 + 0x10))[1] - lVar14 >> 3) <= (ulong)(long)*piVar33) {
LAB_0164e478:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar28 = ((long)*(int *)(*(long *)(lVar14 + (long)*piVar33 * 8) + 0x74) +
               *(long *)(lVar13 + 0xb0)) - 1;
      plVar27 = *(long **)(*(long *)(*(long *)(*(long *)(lVar13 + 0x88) +
                                              (uVar28 >> 6 & 0x3fffffffffffff8)) +
                                    (uVar28 & 0x1ff) * 8) + 8);
      puVar7 = (undefined8 *)plVar27[1];
      for (puVar16 = (undefined8 *)*plVar27; puVar16 != puVar7; puVar16 = puVar16 + 1) {
        pIVar36 = (InstructionOperand *)*puVar16;
        uVar28 = *(ulong *)pIVar36;
        if ((uVar28 & 7) != 0) {
          uVar12 = (uint)uVar28;
          uVar21 = uVar28;
          if ((uVar12 >> 2 & 1) != 0) {
            uVar21 = 0x180;
            if ((uVar12 >> 5 & 0xff) < 0xb || (uVar28 & 0x1c) != 4) {
              uVar21 = 0;
            }
            uVar21 = uVar28 & 0xffffffffffffe018 | uVar21 | 4;
          }
          uVar23 = *(ulong *)(pIVar36 + 8);
          uVar19 = (uint)uVar23;
          uVar31 = uVar23;
          if ((uVar19 >> 2 & 1) != 0) {
            uVar31 = 0x180;
            if ((uVar19 >> 5 & 0xff) < 0xb || (uVar23 & 0x1c) != 4) {
              uVar31 = 0;
            }
            uVar31 = uVar23 & 0xffffffffffffe018 | uVar31 | 4;
          }
          if ((uVar21 != uVar31) && (local_78 != (__tree_node_base *)0x0)) {
            uVar21 = 0x180;
            if ((uVar12 >> 5 & 0xff) < 0xb || (uVar28 & 0x1c) != 4) {
              uVar21 = 0;
            }
            uVar31 = 0x180;
            if ((uVar19 >> 5 & 0xff) < 0xb || (uVar23 & 0x1c) != 4) {
              uVar31 = 0;
            }
            if ((uVar28 & 4) != 0) {
              uVar28 = uVar28 & 0xffffffffffffe018 | uVar21 | 4;
            }
            p_Var15 = (__tree_node_base *)&local_78;
            p_Var37 = local_78;
            if ((uVar23 & 4) != 0) {
              uVar23 = uVar23 & 0xffffffffffffe018 | uVar31 | 4;
            }
            do {
              uVar31 = *(ulong *)(p_Var37 + 0x20);
              uVar12 = (uint)uVar31;
              uVar21 = uVar31;
              if ((uVar12 >> 2 & 1) != 0) {
                uVar21 = 0x180;
                if ((uVar12 >> 5 & 0xff) < 0xb || (uVar31 & 0x1c) != 4) {
                  uVar21 = 0;
                }
                uVar21 = uVar31 & 0xffffffffffffe018 | uVar21 | 4;
              }
              if (uVar21 == uVar28) {
                uVar21 = *(ulong *)(p_Var37 + 0x28);
                if (((uint)uVar21 >> 2 & 1) != 0) {
                  uVar31 = 0x180;
                  if (((uint)uVar21 >> 5 & 0xff) < 0xb || (uVar21 & 0x1c) != 4) {
                    uVar31 = 0;
                  }
                  uVar21 = uVar21 & 0xffffffffffffe018 | uVar31 | 4;
                }
                bVar9 = uVar23 <= uVar21;
              }
              else {
                if ((uVar12 >> 2 & 1) != 0) {
                  uVar21 = 0x180;
                  if ((uVar12 >> 5 & 0xff) < 0xb || (uVar31 & 0x1c) != 4) {
                    uVar21 = 0;
                  }
                  uVar31 = uVar31 & 0xffffffffffffe018 | uVar21 | 4;
                }
                bVar9 = uVar28 <= uVar31;
              }
              lVar14 = 8;
              if (bVar9) {
                lVar14 = 0;
                p_Var15 = p_Var37;
              }
              p_Var10 = p_Var37 + lVar14;
              p_Var37 = *(__tree_node_base **)p_Var10;
            } while (*(__tree_node_base **)p_Var10 != (__tree_node_base *)0x0);
            if (p_Var15 != (__tree_node_base *)&local_78) {
              uVar31 = *(ulong *)(p_Var15 + 0x20);
              uVar12 = (uint)uVar31;
              uVar21 = uVar31;
              if ((uVar12 >> 2 & 1) != 0) {
                uVar21 = 0x180;
                if ((uVar12 >> 5 & 0xff) < 0xb || (uVar31 & 0x1c) != 4) {
                  uVar21 = 0;
                }
                uVar21 = uVar31 & 0xffffffffffffe018 | uVar21 | 4;
              }
              if (uVar28 == uVar21) {
                uVar28 = *(ulong *)(p_Var15 + 0x28);
                if (((uint)uVar28 >> 2 & 1) != 0) {
                  uVar21 = 0x180;
                  if (((uint)uVar28 >> 5 & 0xff) < 0xb || (uVar28 & 0x1c) != 4) {
                    uVar21 = 0;
                  }
                  uVar28 = uVar28 & 0xffffffffffffe018 | uVar21 | 4;
                }
                if (uVar28 <= uVar23) {
LAB_0164e338:
                  if (bVar8) {
                    ParallelMove::AddMove(this_00,pIVar36,pIVar36 + 8,*(Zone **)(this_00 + 0x18));
                  }
                  *(undefined8 *)pIVar36 = 0;
                  *(undefined8 *)(pIVar36 + 8) = 0;
                }
              }
              else {
                if ((uVar12 >> 2 & 1) != 0) {
                  uVar21 = 0x180;
                  if ((uVar12 >> 5 & 0xff) < 0xb || (uVar31 & 0x1c) != 4) {
                    uVar21 = 0;
                  }
                  uVar31 = uVar31 & 0xffffffffffffe018 | uVar21 | 4;
                }
                if (uVar31 <= uVar28) goto LAB_0164e338;
              }
            }
          }
        }
      }
      piVar33 = piVar33 + 1;
      bVar8 = false;
    } while (piVar33 != piVar5);
  }
  if (!bVar11) {
    CompressMoves(this,*(ParallelMove **)(lVar30 + 8),*(ZoneVector **)(lVar30 + 0x10));
  }
  iVar3 = *(int *)(param_1 + 0x70);
  iVar4 = *(int *)(param_1 + 0x74);
  lVar14 = (long)iVar3;
  uVar28 = *(long *)(*(long *)(this + 8) + 0xb0) + lVar14;
  pIVar32 = *(Instruction **)
             (*(long *)(*(long *)(*(long *)(this + 8) + 0x88) + (uVar28 >> 6 & 0x3fffffffffffff8)) +
             (uVar28 & 0x1ff) * 8);
  RemoveClobberedDestinations(this,pIVar32);
  if (iVar3 < iVar4 + -1) {
    do {
      uVar28 = lVar14 + *(long *)(*(long *)(this + 8) + 0xb0) + 1;
      lVar14 = lVar14 + 1;
      pIVar34 = *(Instruction **)
                 (*(long *)(*(long *)(*(long *)(this + 8) + 0x88) +
                           (uVar28 >> 6 & 0x3fffffffffffff8)) + (uVar28 & 0x1ff) * 8);
      MigrateMoves(this,pIVar34,pIVar32);
      RemoveClobberedDestinations(this,pIVar34);
      pIVar32 = pIVar34;
    } while (iVar4 + -1 != lVar14);
  }
  return;
code_r0x0164df88:
  puVar24 = puVar24 + 1;
  if (puVar6 == puVar24) goto LAB_0164ded0;
  goto LAB_0164df58;
}

