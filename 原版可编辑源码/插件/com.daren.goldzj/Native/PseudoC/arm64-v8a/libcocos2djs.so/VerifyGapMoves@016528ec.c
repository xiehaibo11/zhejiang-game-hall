
/* v8::internal::compiler::RegisterAllocatorVerifier::VerifyGapMoves() */

void __thiscall
v8::internal::compiler::RegisterAllocatorVerifier::VerifyGapMoves(RegisterAllocatorVerifier *this)

{
  RegisterAllocatorVerifier *pRVar1;
  __tree_node_base *p_Var2;
  __tree_node_base *p_Var3;
  ulong uVar4;
  BlockAssessments *pBVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  BlockAssessments *pBVar9;
  __tree_node_base *p_Var10;
  Zone *this_00;
  ulong *puVar11;
  uint uVar12;
  long *plVar13;
  long *plVar14;
  RegisterAllocatorVerifier *pRVar15;
  long *plVar16;
  ulong uVar17;
  long *plVar18;
  ulong uVar19;
  __tree_node_base *p_Var20;
  long lVar21;
  RegisterAllocatorVerifier *pRVar22;
  BlockAssessments *pBVar23;
  uint uVar24;
  ulong uVar25;
  int *piVar26;
  long lVar27;
  int *piVar28;
  ulong uVar29;
  ulong uVar30;
  InstructionBlock *pIVar31;
  long lVar32;
  undefined4 local_78 [4];
  undefined4 *local_68;
  
  if (*(long *)(this + 0x50) != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","assessments_.empty()");
  }
  if (*(long *)(this + 0x70) != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","outstanding_assessments_.empty()");
  }
  plVar13 = *(long **)(*(long *)(this + 0x10) + 0x10);
  lVar6 = *plVar13;
  lVar7 = plVar13[1];
  if (lVar7 - lVar6 == 0) {
    return;
  }
  uVar19 = 0;
  pRVar1 = this + 0x60;
  do {
    pIVar31 = *(InstructionBlock **)(*plVar13 + uVar19 * 8);
    pBVar9 = (BlockAssessments *)CreateForBlock(this,pIVar31);
    lVar32 = (long)*(int *)(pIVar31 + 0x70);
    if (*(int *)(pIVar31 + 0x70) < *(int *)(pIVar31 + 0x74)) {
      p_Var2 = (__tree_node_base *)(pBVar9 + 8);
      do {
        plVar13 = (long *)(*(long *)(this + 0x18) + lVar32 * 0x18);
        lVar27 = *plVar13;
        BlockAssessments::PerformParallelMoves(pBVar9,*(ParallelMove **)(lVar27 + 8));
        BlockAssessments::PerformParallelMoves(pBVar9,*(ParallelMove **)(lVar27 + 0x10));
        uVar12 = *(uint *)(lVar27 + 4);
        piVar28 = (int *)plVar13[2];
        if ((uVar12 & 0xffff00) == 0) {
          uVar29 = 0;
        }
        else {
          uVar29 = 0;
          piVar26 = piVar28;
          do {
            if (*piVar26 != 1) {
              ValidateUse(this,*(undefined4 *)(pIVar31 + 100),pBVar9,
                          *(undefined8 *)(lVar27 + (uVar29 + (uVar12 & 0xff)) * 8 + 0x28),piVar26[3]
                         );
              uVar12 = *(uint *)(lVar27 + 4);
            }
            uVar29 = uVar29 + 1;
            piVar26 = piVar26 + 4;
          } while (uVar29 < (uVar12 >> 8 & 0xffff));
        }
        if ((uVar12 & 0x3f000000) != 0) {
          uVar30 = 0;
          p_Var10 = *(__tree_node_base **)p_Var2;
          while( true ) {
            if (p_Var10 != (__tree_node_base *)0x0) {
              uVar17 = *(ulong *)(lVar27 + (uVar30 + ((uVar12 >> 8 & 0xffff) + (uVar12 & 0xff))) * 8
                                 + 0x28);
              uVar25 = 0x180;
              if (((uint)uVar17 >> 5 & 0xff) < 0xb || (uVar17 & 0x1c) != 4) {
                uVar25 = 0;
              }
              if ((uVar17 & 4) != 0) {
                uVar17 = uVar17 & 0xffffffffffffe018 | uVar25 | 4;
              }
              uVar25 = *(ulong *)(p_Var10 + 0x20);
              uVar24 = (uint)uVar25;
              p_Var20 = p_Var10;
              p_Var3 = p_Var2;
              while( true ) {
                if ((uVar24 >> 2 & 1) != 0) {
                  uVar4 = 0x180;
                  if (((uint)uVar25 >> 5 & 0xff) < 0xb || (uVar25 & 0x1c) != 4) {
                    uVar4 = 0;
                  }
                  uVar25 = uVar25 & 0xffffffffffffe018 | uVar4 | 4;
                }
                if (uVar25 >= uVar17) {
                  p_Var3 = p_Var20;
                }
                p_Var20 = *(__tree_node_base **)(p_Var20 + (ulong)(uVar25 < uVar17) * 8);
                if (p_Var20 == (__tree_node_base *)0x0) break;
                uVar25 = *(ulong *)(p_Var20 + 0x20);
                uVar24 = (uint)uVar25;
              }
              if (p_Var3 != p_Var2) {
                uVar25 = *(ulong *)(p_Var3 + 0x20);
                if (((uint)uVar25 >> 2 & 1) != 0) {
                  uVar4 = 0x180;
                  if (((uint)uVar25 >> 5 & 0xff) < 0xb || (uVar25 & 0x1c) != 4) {
                    uVar4 = 0;
                  }
                  uVar25 = uVar25 & 0xffffffffffffe018 | uVar4 | 4;
                }
                if (uVar25 <= uVar17) {
                  plVar13 = *(long **)(p_Var3 + 8);
                  if (*(long **)(p_Var3 + 8) == (long *)0x0) {
                    p_Var20 = p_Var3 + 0x10;
                    plVar14 = *(long **)p_Var20;
                    if ((__tree_node_base *)*plVar14 != p_Var3) {
                      do {
                        lVar21 = *(long *)p_Var20;
                        p_Var20 = (__tree_node_base *)(lVar21 + 0x10);
                        plVar14 = *(long **)p_Var20;
                      } while (*plVar14 != lVar21);
                    }
                  }
                  else {
                    do {
                      plVar14 = plVar13;
                      plVar13 = (long *)*plVar14;
                    } while ((long *)*plVar14 != (long *)0x0);
                  }
                  if (*(__tree_node_base **)pBVar9 == p_Var3) {
                    *(long **)pBVar9 = plVar14;
                  }
                  *(long *)(pBVar9 + 0x18) = *(long *)(pBVar9 + 0x18) + -1;
                  std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>(p_Var10,p_Var3);
                  uVar12 = *(uint *)(lVar27 + 4);
                }
              }
            }
            uVar30 = uVar30 + 1;
            uVar29 = uVar29 + 1;
            if ((uVar12 >> 0x18 & 0x3f) <= uVar30) break;
            p_Var10 = *(__tree_node_base **)p_Var2;
          }
        }
        if ((uVar12 >> 0x1e & 1) != 0) {
          BlockAssessments::DropRegisters(pBVar9);
          uVar12 = (uint)*(byte *)(lVar27 + 4);
        }
        if ((uVar12 & 0xff) != 0) {
          uVar30 = 0;
          do {
            iVar8 = (piVar28 + uVar29 * 4)[3];
            BlockAssessments::AddDefinition
                      (pBVar9,*(undefined8 *)(lVar27 + 0x28 + uVar30 * 8),iVar8);
            if (piVar28[uVar29 * 4] == 0xc) {
              this_00 = *(Zone **)this;
              uVar25 = *(ulong *)(lVar27 + 0x28 + uVar30 * 8) & 0x1fe0 |
                       (ulong)(uint)piVar28[2] << 0x23 | 0xc;
              puVar11 = *(ulong **)(this_00 + 0x10);
              if ((ulong)(*(long *)(this_00 + 0x18) - (long)puVar11) < 8) {
                puVar11 = (ulong *)Zone::NewExpand(this_00,8);
              }
              else {
                *(ulong **)(this_00 + 0x10) = puVar11 + 1;
              }
              *puVar11 = uVar25;
              BlockAssessments::AddDefinition(pBVar9,uVar25,iVar8);
            }
            uVar30 = uVar30 + 1;
            piVar28 = piVar28 + 4;
          } while (uVar30 < *(byte *)(lVar27 + 4));
        }
        lVar32 = lVar32 + 1;
      } while (lVar32 < *(int *)(pIVar31 + 0x74));
    }
    local_78[0] = *(undefined4 *)(pIVar31 + 100);
    local_68 = local_78;
    lVar32 = std::__ndk1::
             __tree<std::__ndk1::__value_type<v8::internal::compiler::RpoNumber,v8::internal::compiler::BlockAssessments*>,std::__ndk1::__map_value_compare<v8::internal::compiler::RpoNumber,std::__ndk1::__value_type<v8::internal::compiler::RpoNumber,v8::internal::compiler::BlockAssessments*>,std::__ndk1::less<v8::internal::compiler::RpoNumber>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::RpoNumber,v8::internal::compiler::BlockAssessments*>>>
             ::
             __emplace_unique_key_args<v8::internal::compiler::RpoNumber,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<v8::internal::compiler::RpoNumber&&>,std::__ndk1::tuple<>>
                       (this + 0x38,(piecewise_construct_t *)local_78,(tuple *)&DAT_01a5a609,
                        (tuple *)&local_68);
    *(BlockAssessments **)(lVar32 + 0x28) = pBVar9;
    pRVar22 = *(RegisterAllocatorVerifier **)pRVar1;
    if (pRVar22 != (RegisterAllocatorVerifier *)0x0) {
      iVar8 = *(int *)(pIVar31 + 100);
      pRVar15 = pRVar1;
      do {
        if (iVar8 <= *(int *)(pRVar22 + 0x20)) {
          pRVar15 = pRVar22;
        }
        pRVar22 = *(RegisterAllocatorVerifier **)
                   (pRVar22 + (ulong)(*(int *)(pRVar22 + 0x20) < iVar8) * 8);
      } while (pRVar22 != (RegisterAllocatorVerifier *)0x0);
      if ((pRVar15 != pRVar1) && (*(int *)(pRVar15 + 0x20) <= iVar8)) {
        plVar14 = *(undefined8 **)(pRVar15 + 0x28) + 1;
        plVar13 = (long *)**(undefined8 **)(pRVar15 + 0x28);
        if (plVar13 != plVar14) {
          pBVar9 = pBVar9 + 8;
          pBVar23 = *(BlockAssessments **)pBVar9;
          do {
            if (pBVar23 == (BlockAssessments *)0x0) {
LAB_01652e78:
                    /* WARNING: Subroutine does not return */
              V8_Fatal("Check failed: %s.","found_op != block_assessments->map().end()");
            }
            uVar30 = plVar13[4];
            uVar29 = 0x180;
            if (((uint)uVar30 >> 5 & 0xff) < 0xb || (uVar30 & 0x1c) != 4) {
              uVar29 = 0;
            }
            if ((uVar30 & 4) != 0) {
              uVar30 = uVar30 & 0xffffffffffffe018 | uVar29 | 4;
            }
            uVar29 = *(ulong *)(pBVar23 + 0x20);
            uVar12 = (uint)uVar29;
            pBVar5 = pBVar9;
            while( true ) {
              if ((uVar12 >> 2 & 1) != 0) {
                uVar25 = 0x180;
                if (((uint)uVar29 >> 5 & 0xff) < 0xb || (uVar29 & 0x1c) != 4) {
                  uVar25 = 0;
                }
                uVar29 = uVar29 & 0xffffffffffffe018 | uVar25 | 4;
              }
              if (uVar29 >= uVar30) {
                pBVar5 = pBVar23;
              }
              pBVar23 = *(BlockAssessments **)(pBVar23 + (ulong)(uVar29 < uVar30) * 8);
              if (pBVar23 == (BlockAssessments *)0x0) break;
              uVar29 = *(ulong *)(pBVar23 + 0x20);
              uVar12 = (uint)uVar29;
            }
            if (pBVar5 == pBVar9) goto LAB_01652e78;
            uVar29 = *(ulong *)(pBVar5 + 0x20);
            if (((uint)uVar29 >> 2 & 1) != 0) {
              uVar25 = 0x180;
              if (((uint)uVar29 >> 5 & 0xff) < 0xb || (uVar29 & 0x1c) != 4) {
                uVar25 = 0;
              }
              uVar29 = uVar29 & 0xffffffffffffe018 | uVar25 | 4;
            }
            if (uVar30 < uVar29) goto LAB_01652e78;
            iVar8 = **(int **)(pBVar5 + 0x28);
            if (iVar8 == 1) {
              ValidatePendingAssessment(this,*(undefined4 *)(pIVar31 + 100));
              plVar16 = (long *)plVar13[1];
              if ((long *)plVar13[1] != (long *)0x0) goto LAB_01652dfc;
LAB_01652e0c:
              plVar16 = plVar13 + 2;
              plVar18 = (long *)*plVar16;
              if ((long *)*plVar18 != plVar13) {
                do {
                  lVar32 = *plVar16;
                  plVar16 = (long *)(lVar32 + 0x10);
                  plVar18 = (long *)*plVar16;
                } while (*plVar18 != lVar32);
              }
            }
            else {
              if ((iVar8 == 0) && ((*(int **)(pBVar5 + 0x28))[1] != (int)plVar13[5])) {
                    /* WARNING: Subroutine does not return */
                V8_Fatal("Check failed: %s.",
                         "FinalAssessment::cast(found_op->second)->virtual_register() == vreg");
              }
              plVar16 = (long *)plVar13[1];
              if ((long *)plVar13[1] == (long *)0x0) goto LAB_01652e0c;
LAB_01652dfc:
              do {
                plVar18 = plVar16;
                plVar16 = (long *)*plVar18;
              } while ((long *)*plVar18 != (long *)0x0);
            }
            if (plVar18 == plVar14) break;
            pBVar23 = *(BlockAssessments **)pBVar9;
            plVar13 = plVar18;
          } while( true );
        }
      }
    }
    uVar19 = uVar19 + 1;
    if ((ulong)(lVar7 - lVar6 >> 3) <= uVar19) {
      return;
    }
    plVar13 = *(long **)(*(long *)(this + 0x10) + 0x10);
  } while( true );
}

