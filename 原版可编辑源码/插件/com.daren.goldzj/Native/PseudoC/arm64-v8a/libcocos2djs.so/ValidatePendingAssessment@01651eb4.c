
/* v8::internal::compiler::RegisterAllocatorVerifier::ValidatePendingAssessment(v8::internal::compiler::RpoNumber,
   v8::internal::compiler::InstructionOperand, v8::internal::compiler::BlockAssessments const*,
   v8::internal::compiler::PendingAssessment*, int) */

void __thiscall
v8::internal::compiler::RegisterAllocatorVerifier::ValidatePendingAssessment
          (RegisterAllocatorVerifier *this,int param_2,undefined8 param_3,undefined8 param_4,
          long param_5,int param_6)

{
  RegisterAllocatorVerifier *pRVar1;
  RegisterAllocatorVerifier *pRVar2;
  ulong uVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  bool bVar9;
  bool bVar10;
  Zone *this_00;
  DelayedAssessments *pDVar11;
  __tree_node_base *p_Var12;
  long *plVar13;
  ulong uVar14;
  RegisterAllocatorVerifier *pRVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  long lVar18;
  long lVar19;
  undefined8 *puVar20;
  RegisterAllocatorVerifier *pRVar21;
  long *plVar22;
  ulong uVar23;
  ulong uVar24;
  uint uVar25;
  long *plVar26;
  __tree_node_base *p_Var27;
  uint *puVar28;
  int *piVar29;
  long lVar30;
  __tree_node_base *p_Var31;
  int *piVar32;
  ulong local_130;
  DelayedAssessments *pDStack_128;
  __tree_node_base *local_120;
  __tree_node_base *local_118;
  Zone *local_110;
  long local_108;
  long *local_100;
  long *plStack_f8;
  long *local_f0;
  long local_e8;
  Zone *local_e0;
  long *local_d8;
  ulong local_d0;
  long local_c8;
  Zone *local_c0;
  long *local_b8;
  Zone aZStack_b0 [64];
  long local_70;
  
  lVar8 = tpidr_el0;
  local_70 = *(long *)(lVar8 + 0x28);
  for (plVar13 = *(long **)(param_5 + 0x20); plVar13 != (long *)0x0; plVar13 = (long *)*plVar13) {
    if (*(int *)((long)plVar13 + 0x1c) <= param_6) {
      if (param_6 <= *(int *)((long)plVar13 + 0x1c)) goto LAB_01652618;
      plVar13 = plVar13 + 1;
    }
  }
  Zone::Zone(aZStack_b0,*(AccountingAllocator **)(*(long *)this + 0x20),
             "../../src/compiler/backend/register-allocator-verifier.cc:378");
  local_d8 = (long *)0x0;
  local_d0 = 0;
  local_c8 = 0;
  local_b8 = (long *)0x0;
  local_108 = 0;
  plStack_f8 = (long *)0x0;
  local_100 = (long *)0x0;
  local_e8 = 0;
  local_f0 = (long *)0x0;
  local_118 = (__tree_node_base *)0x0;
  local_120 = (__tree_node_base *)&local_118;
  local_110 = aZStack_b0;
  local_e0 = aZStack_b0;
  local_c0 = aZStack_b0;
  std::__ndk1::
  deque<std::__ndk1::pair<v8::internal::compiler::PendingAssessment_const*,int>,v8::internal::RecyclingZoneAllocator<std::__ndk1::pair<v8::internal::compiler::PendingAssessment_const*,int>>>
  ::__add_back_capacity
            ((deque<std::__ndk1::pair<v8::internal::compiler::PendingAssessment_const*,int>,v8::internal::RecyclingZoneAllocator<std::__ndk1::pair<v8::internal::compiler::PendingAssessment_const*,int>>>
              *)&local_100);
  if (local_f0 == plStack_f8) {
    plVar13 = (long *)0x0;
  }
  else {
    plVar13 = (long *)(*(long *)((long)plStack_f8 + (local_d0 + local_c8 >> 5 & 0x7fffffffffffff8))
                      + (local_d0 + local_c8 & 0xff) * 0x10);
  }
  *plVar13 = param_5;
  *(int *)(plVar13 + 1) = param_6;
  local_c8 = local_c8 + 1;
  p_Var31 = (__tree_node_base *)&local_118;
  p_Var27 = (__tree_node_base *)&local_118;
  if (local_118 != (__tree_node_base *)0x0) {
    p_Var12 = local_118;
    p_Var27 = (__tree_node_base *)&local_118;
    do {
      while (p_Var31 = p_Var12, param_2 < *(int *)(p_Var31 + 0x1c)) {
        p_Var12 = *(__tree_node_base **)p_Var31;
        p_Var27 = p_Var31;
        if (*(__tree_node_base **)p_Var31 == (__tree_node_base *)0x0) {
          lVar19 = *(long *)p_Var31;
          goto joined_r0x01652008;
        }
      }
      if (param_2 <= *(int *)(p_Var31 + 0x1c)) break;
      p_Var27 = p_Var31 + 8;
      p_Var12 = *(__tree_node_base **)p_Var27;
    } while (*(__tree_node_base **)p_Var27 != (__tree_node_base *)0x0);
  }
  lVar19 = *(long *)p_Var27;
joined_r0x01652008:
  if (lVar19 == 0) {
    p_Var12 = *(__tree_node_base **)(local_110 + 0x10);
    if ((ulong)(*(long *)(local_110 + 0x18) - (long)p_Var12) < 0x20) {
      p_Var12 = (__tree_node_base *)Zone::NewExpand(local_110,0x20);
    }
    else {
      *(__tree_node_base **)(local_110 + 0x10) = p_Var12 + 0x20;
    }
    *(int *)(p_Var12 + 0x1c) = param_2;
    *(undefined8 *)p_Var12 = 0;
    *(undefined8 *)(p_Var12 + 8) = 0;
    *(__tree_node_base **)(p_Var12 + 0x10) = p_Var31;
    *(__tree_node_base **)p_Var27 = p_Var12;
    if (*(__tree_node_base **)local_120 != (__tree_node_base *)0x0) {
      p_Var12 = *(__tree_node_base **)p_Var27;
      local_120 = *(__tree_node_base **)local_120;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (local_118,p_Var12);
    local_108 = local_108 + 1;
  }
  if (local_c8 != 0) {
    pRVar1 = this + 0x40;
    pRVar2 = this + 0x60;
    do {
      local_c8 = local_c8 + -1;
      plVar13 = (long *)(*(long *)((long)plStack_f8 + (local_d0 >> 5 & 0x7fffffffffffff8)) +
                        (local_d0 & 0xff) * 0x10);
      lVar19 = *plVar13;
      iVar5 = (int)plVar13[1];
      uVar14 = *(ulong *)(lVar19 + 0x10);
      uVar23 = local_d0 + 1;
      if (0x1ff < local_d0 + 1) {
        plVar13 = (long *)*plStack_f8;
        if ((local_b8 == (long *)0x0) || ((ulong)local_b8[1] < 0x101)) {
          plVar13[1] = 0x100;
          *plVar13 = (long)local_b8;
          local_b8 = plVar13;
        }
        plStack_f8 = plStack_f8 + 1;
        uVar23 = local_d0 - 0xff;
      }
      local_d0 = uVar23;
      lVar19 = *(long *)(lVar19 + 8);
      puVar28 = *(uint **)(lVar19 + 0x20);
      puVar4 = *(uint **)(lVar19 + 0x28);
      if ((ulong)((long)puVar4 - (long)puVar28 >> 2) < 2) {
        puVar17 = *(undefined8 **)(lVar19 + 0x40);
        puVar20 = *(undefined8 **)(lVar19 + 0x48);
        if (puVar20 == puVar17) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","origin->PredecessorCount() > 1 || origin->phis().size() > 0"
                  );
        }
      }
      else {
        puVar17 = *(undefined8 **)(lVar19 + 0x40);
        puVar20 = *(undefined8 **)(lVar19 + 0x48);
      }
      piVar29 = (int *)0x0;
      if (puVar17 != puVar20) {
        do {
          bVar9 = *(int *)*puVar17 != iVar5;
          piVar32 = (int *)*puVar17;
          if (bVar9) {
            piVar32 = piVar29;
          }
          piVar29 = piVar32;
          bVar10 = puVar20 + -1 != puVar17;
          puVar17 = puVar17 + 1;
        } while (bVar9 && bVar10);
      }
      if (puVar28 != puVar4) {
        lVar30 = 0;
        uVar23 = 0x180;
        if (((uint)uVar14 >> 5 & 0xff) < 0xb || (uVar14 & 0x1c) != 4) {
          uVar23 = 0;
        }
        uVar3 = uVar14;
        if ((uVar14 & 4) != 0) {
          uVar3 = uVar14 & 0xffffffffffffe018 | uVar23 | 4;
        }
        do {
          uVar6 = *puVar28;
          iVar7 = iVar5;
          if (piVar29 != (int *)0x0) {
            iVar7 = *(int *)(*(long *)(piVar29 + 4) + lVar30 * 4);
          }
          pRVar21 = *(RegisterAllocatorVerifier **)pRVar1;
          pRVar15 = pRVar1;
          if (pRVar21 == (RegisterAllocatorVerifier *)0x0) {
LAB_01652250:
            if (*(int *)(lVar19 + 0x6c) < 0) {
                    /* WARNING: Subroutine does not return */
              V8_Fatal("Check failed: %s.","origin->IsLoopHeader()");
            }
            pRVar21 = *(RegisterAllocatorVerifier **)pRVar2;
            pRVar15 = pRVar2;
            if (pRVar21 == (RegisterAllocatorVerifier *)0x0) {
LAB_01652294:
              this_00 = *(Zone **)this;
              pDVar11 = *(DelayedAssessments **)(this_00 + 0x10);
              if ((ulong)(*(long *)(this_00 + 0x18) - (long)pDVar11) < 0x20) {
                pDVar11 = (DelayedAssessments *)Zone::NewExpand(this_00,0x20);
              }
              else {
                *(DelayedAssessments **)(this_00 + 0x10) = pDVar11 + 0x20;
              }
              uVar16 = *(undefined8 *)this;
              *(undefined8 *)(pDVar11 + 8) = 0;
              *(DelayedAssessments **)pDVar11 = pDVar11 + 8;
              *(undefined8 *)(pDVar11 + 0x10) = uVar16;
              *(undefined8 *)(pDVar11 + 0x18) = 0;
              local_130 = (ulong)uVar6;
              pDStack_128 = pDVar11;
              std::__ndk1::
              __tree<std::__ndk1::__value_type<v8::internal::compiler::RpoNumber,v8::internal::compiler::RegisterAllocatorVerifier::DelayedAssessments*>,std::__ndk1::__map_value_compare<v8::internal::compiler::RpoNumber,std::__ndk1::__value_type<v8::internal::compiler::RpoNumber,v8::internal::compiler::RegisterAllocatorVerifier::DelayedAssessments*>,std::__ndk1::less<v8::internal::compiler::RpoNumber>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::RpoNumber,v8::internal::compiler::RegisterAllocatorVerifier::DelayedAssessments*>>>
              ::
              __emplace_unique_key_args<v8::internal::compiler::RpoNumber,std::__ndk1::pair<v8::internal::compiler::RpoNumber,v8::internal::compiler::RegisterAllocatorVerifier::DelayedAssessments*>>
                        ((__tree<std::__ndk1::__value_type<v8::internal::compiler::RpoNumber,v8::internal::compiler::RegisterAllocatorVerifier::DelayedAssessments*>,std::__ndk1::__map_value_compare<v8::internal::compiler::RpoNumber,std::__ndk1::__value_type<v8::internal::compiler::RpoNumber,v8::internal::compiler::RegisterAllocatorVerifier::DelayedAssessments*>,std::__ndk1::less<v8::internal::compiler::RpoNumber>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::RpoNumber,v8::internal::compiler::RegisterAllocatorVerifier::DelayedAssessments*>>>
                          *)(this + 0x58),(RpoNumber *)&local_130,(pair *)&local_130);
            }
            else {
              do {
                if ((int)uVar6 <= *(int *)(pRVar21 + 0x20)) {
                  pRVar15 = pRVar21;
                }
                pRVar21 = *(RegisterAllocatorVerifier **)
                           (pRVar21 + (ulong)(*(int *)(pRVar21 + 0x20) < (int)uVar6) * 8);
              } while (pRVar21 != (RegisterAllocatorVerifier *)0x0);
              if ((pRVar15 == pRVar2) || ((int)uVar6 < *(int *)(pRVar15 + 0x20))) goto LAB_01652294;
              pDVar11 = *(DelayedAssessments **)(pRVar15 + 0x28);
            }
            DelayedAssessments::AddDelayedAssessment(pDVar11,uVar14,iVar7);
          }
          else {
            do {
              if ((int)uVar6 <= *(int *)(pRVar21 + 0x20)) {
                pRVar15 = pRVar21;
              }
              pRVar21 = *(RegisterAllocatorVerifier **)
                         (pRVar21 + (ulong)(*(int *)(pRVar21 + 0x20) < (int)uVar6) * 8);
            } while (pRVar21 != (RegisterAllocatorVerifier *)0x0);
            if ((pRVar15 == pRVar1) || ((int)uVar6 < *(int *)(pRVar15 + 0x20))) goto LAB_01652250;
            plVar22 = (long *)(*(long *)(pRVar15 + 0x28) + 8);
            plVar13 = (long *)*plVar22;
            if (plVar13 == (long *)0x0) {
LAB_0165266c:
                    /* WARNING: Subroutine does not return */
              V8_Fatal("Check failed: %s.","found_contribution != pred_assessments->map().end()");
            }
            uVar23 = plVar13[4];
            uVar25 = (uint)uVar23;
            plVar26 = plVar22;
            while( true ) {
              if ((uVar25 >> 2 & 1) != 0) {
                uVar24 = 0x180;
                if (((uint)uVar23 >> 5 & 0xff) < 0xb || (uVar23 & 0x1c) != 4) {
                  uVar24 = 0;
                }
                uVar23 = uVar23 & 0xffffffffffffe018 | uVar24 | 4;
              }
              if (uVar23 >= uVar3) {
                plVar26 = plVar13;
              }
              plVar13 = (long *)plVar13[uVar23 < uVar3];
              if (plVar13 == (long *)0x0) break;
              uVar23 = plVar13[4];
              uVar25 = (uint)uVar23;
            }
            if (plVar26 == plVar22) goto LAB_0165266c;
            uVar23 = plVar26[4];
            if (((uint)uVar23 >> 2 & 1) != 0) {
              uVar24 = 0x180;
              if (((uint)uVar23 >> 5 & 0xff) < 0xb || (uVar23 & 0x1c) != 4) {
                uVar24 = 0;
              }
              uVar23 = uVar23 & 0xffffffffffffe018 | uVar24 | 4;
            }
            if (uVar3 < uVar23) goto LAB_0165266c;
            piVar32 = (int *)plVar26[5];
            if (*piVar32 == 1) {
              p_Var31 = (__tree_node_base *)&local_118;
              p_Var27 = local_118;
              if (local_118 != (__tree_node_base *)0x0) {
                do {
                  if ((int)uVar6 <= *(int *)(p_Var27 + 0x1c)) {
                    p_Var31 = p_Var27;
                  }
                  p_Var12 = p_Var27 + (ulong)(*(int *)(p_Var27 + 0x1c) < (int)uVar6) * 8;
                  p_Var27 = *(__tree_node_base **)p_Var12;
                } while (*(__tree_node_base **)p_Var12 != (__tree_node_base *)0x0);
                if ((p_Var31 != (__tree_node_base *)&local_118) &&
                   (*(int *)(p_Var31 + 0x1c) <= (int)uVar6)) goto LAB_016521f0;
              }
              uVar23 = 0;
              if ((long)local_f0 - (long)plStack_f8 != 0) {
                uVar23 = ((long)local_f0 - (long)plStack_f8) * 0x20 - 1;
              }
              uVar24 = local_c8 + local_d0;
              if (uVar23 == uVar24) {
                std::__ndk1::
                deque<std::__ndk1::pair<v8::internal::compiler::PendingAssessment_const*,int>,v8::internal::RecyclingZoneAllocator<std::__ndk1::pair<v8::internal::compiler::PendingAssessment_const*,int>>>
                ::__add_back_capacity
                          ((deque<std::__ndk1::pair<v8::internal::compiler::PendingAssessment_const*,int>,v8::internal::RecyclingZoneAllocator<std::__ndk1::pair<v8::internal::compiler::PendingAssessment_const*,int>>>
                            *)&local_100);
                uVar24 = local_d0 + local_c8;
              }
              if (local_f0 == plStack_f8) {
                puVar17 = (undefined8 *)0x0;
              }
              else {
                puVar17 = (undefined8 *)
                          (*(long *)((long)plStack_f8 + (uVar24 >> 5 & 0x7fffffffffffff8)) +
                          (uVar24 & 0xff) * 0x10);
              }
              *puVar17 = piVar32;
              *(int *)(puVar17 + 1) = iVar7;
              local_c8 = local_c8 + 1;
              p_Var31 = (__tree_node_base *)&local_118;
              p_Var27 = (__tree_node_base *)&local_118;
              p_Var12 = local_118;
              while (p_Var12 != (__tree_node_base *)0x0) {
                while (p_Var27 = p_Var12, (int)uVar6 < *(int *)(p_Var27 + 0x1c)) {
                  p_Var31 = p_Var27;
                  p_Var12 = *(__tree_node_base **)p_Var27;
                  if (*(__tree_node_base **)p_Var27 == (__tree_node_base *)0x0) {
                    lVar18 = *(long *)p_Var27;
                    goto joined_r0x01652500;
                  }
                }
                if ((int)uVar6 <= *(int *)(p_Var27 + 0x1c)) break;
                p_Var31 = p_Var27 + 8;
                p_Var12 = *(__tree_node_base **)p_Var31;
              }
              lVar18 = *(long *)p_Var31;
joined_r0x01652500:
              if (lVar18 == 0) {
                p_Var12 = *(__tree_node_base **)(local_110 + 0x10);
                if ((ulong)(*(long *)(local_110 + 0x18) - (long)p_Var12) < 0x20) {
                  p_Var12 = (__tree_node_base *)Zone::NewExpand(local_110,0x20);
                }
                else {
                  *(__tree_node_base **)(local_110 + 0x10) = p_Var12 + 0x20;
                }
                *(uint *)(p_Var12 + 0x1c) = uVar6;
                *(undefined8 *)p_Var12 = 0;
                *(undefined8 *)(p_Var12 + 8) = 0;
                *(__tree_node_base **)(p_Var12 + 0x10) = p_Var27;
                *(__tree_node_base **)p_Var31 = p_Var12;
                if (*(__tree_node_base **)local_120 != (__tree_node_base *)0x0) {
                  p_Var12 = *(__tree_node_base **)p_Var31;
                  local_120 = *(__tree_node_base **)local_120;
                }
                std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                          (local_118,p_Var12);
                local_108 = local_108 + 1;
              }
            }
            else if ((*piVar32 == 0) && (piVar32[1] != iVar7)) {
                    /* WARNING: Subroutine does not return */
              V8_Fatal("Check failed: %s.",
                       "FinalAssessment::cast(contribution)->virtual_register() == expected");
            }
          }
LAB_016521f0:
          puVar28 = puVar28 + 1;
          lVar30 = lVar30 + 1;
        } while (puVar28 != puVar4);
      }
    } while (local_c8 != 0);
  }
  local_130 = CONCAT44(local_130._4_4_,param_6);
  std::__ndk1::__tree<int,std::__ndk1::less<int>,v8::internal::ZoneAllocator<int>>::
  __emplace_unique_key_args<int,int_const&>
            ((__tree<int,std::__ndk1::less<int>,v8::internal::ZoneAllocator<int>> *)(param_5 + 0x18)
             ,(int *)&local_130,(int *)&local_130);
  std::__ndk1::
  __tree<v8::internal::compiler::RpoNumber,std::__ndk1::less<v8::internal::compiler::RpoNumber>,v8::internal::ZoneAllocator<v8::internal::compiler::RpoNumber>>
  ::destroy((__tree<v8::internal::compiler::RpoNumber,std::__ndk1::less<v8::internal::compiler::RpoNumber>,v8::internal::ZoneAllocator<v8::internal::compiler::RpoNumber>>
             *)&local_120,(__tree_node *)local_118);
  std::__ndk1::
  __deque_base<std::__ndk1::pair<v8::internal::compiler::PendingAssessment_const*,int>,v8::internal::RecyclingZoneAllocator<std::__ndk1::pair<v8::internal::compiler::PendingAssessment_const*,int>>>
  ::clear((__deque_base<std::__ndk1::pair<v8::internal::compiler::PendingAssessment_const*,int>,v8::internal::RecyclingZoneAllocator<std::__ndk1::pair<v8::internal::compiler::PendingAssessment_const*,int>>>
           *)&local_100);
  if (plStack_f8 != local_f0) {
    plVar26 = (long *)*plStack_f8;
    plVar13 = plStack_f8;
    plVar22 = local_b8;
    if (local_b8 != (long *)0x0) goto LAB_016525a0;
    do {
      plVar22 = plVar26;
      plVar22[1] = 0x100;
      *plVar22 = (long)local_b8;
      local_b8 = plVar22;
      do {
        plVar13 = plVar13 + 1;
        if (local_f0 == plVar13) {
          if ((long)local_f0 - (long)plStack_f8 != 0) {
            local_f0 = local_f0 +
                       (((long)local_f0 - (long)plStack_f8) - 8U >> 3 ^ 0xffffffffffffffff);
          }
          goto LAB_016525d0;
        }
        plVar26 = (long *)*plVar13;
        if (plVar22 == (long *)0x0) break;
LAB_016525a0:
      } while (0x100 < (ulong)plVar22[1]);
    } while( true );
  }
LAB_016525d0:
  if (((local_100 != (long *)0x0) && (0xf < (ulong)(local_e8 - (long)local_100))) &&
     ((uVar23 = local_e8 - (long)local_100 >> 3, local_d8 == (long *)0x0 ||
      ((ulong)local_d8[1] <= uVar23)))) {
    local_100[1] = uVar23;
    *local_100 = (long)local_d8;
    local_d8 = local_100;
  }
  Zone::~Zone(aZStack_b0);
LAB_01652618:
  if (*(long *)(lVar8 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

