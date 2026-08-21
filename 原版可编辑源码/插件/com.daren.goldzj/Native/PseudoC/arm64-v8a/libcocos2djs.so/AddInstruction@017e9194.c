
/* v8::internal::compiler::InstructionScheduler::AddInstruction(v8::internal::compiler::Instruction*)
    */

void __thiscall
v8::internal::compiler::InstructionScheduler::AddInstruction
          (InstructionScheduler *this,Instruction *param_1)

{
  InstructionScheduler *pIVar1;
  long *plVar2;
  uint uVar3;
  undefined4 uVar4;
  Zone *pZVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  InstructionScheduler *pIVar13;
  int iVar14;
  InstructionScheduler *pIVar15;
  ulong uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  long lVar19;
  long lVar20;
  long *plVar21;
  undefined4 local_64 [3];
  undefined4 *local_58;
  
  uVar3 = GetInstructionFlags(this,param_1);
  if ((uVar3 >> 3 & 1) != 0) {
    if (FLAG_turbo_stress_instruction_scheduling == '\0') {
      Schedule<v8::internal::compiler::InstructionScheduler::CriticalPathFirstQueue>(this);
    }
    else {
      Schedule<v8::internal::compiler::InstructionScheduler::StressSchedulerQueue>(this);
    }
    InstructionSequence::AddInstruction(*(InstructionSequence **)(this + 8),param_1);
    return;
  }
  pZVar5 = *(Zone **)this;
  puVar6 = *(undefined8 **)(pZVar5 + 0x10);
  if ((ulong)(*(long *)(pZVar5 + 0x18) - (long)puVar6) < 0x68) {
    puVar6 = (undefined8 *)Zone::NewExpand(pZVar5,0x68);
  }
  else {
    *(undefined8 **)(pZVar5 + 0x10) = puVar6 + 0xd;
  }
  uVar7 = *(undefined8 *)this;
  *puVar6 = param_1;
  puVar6[7] = 0;
  puVar6[8] = 0;
  puVar6[2] = 0;
  puVar6[1] = 0;
  puVar6[4] = 0;
  puVar6[3] = 0;
  puVar6[5] = uVar7;
  puVar6[6] = 0;
  puVar6[9] = uVar7;
  puVar6[10] = 0;
  *(undefined4 *)(puVar6 + 0xb) = 0;
  uVar4 = GetInstructionLatency(param_1);
  *(undefined4 *)((long)puVar6 + 0x5c) = uVar4;
  puVar6[0xc] = 0xffffffffffffffff;
  if ((((*(uint *)param_1 & 0x1ff) == 0x11) && (param_1[4] == (Instruction)0x1)) &&
     ((*(ulong *)(param_1 + 0x28) & 7) == 1)) {
    lVar19 = *(long *)(this + 0x58);
    uVar8 = *(ulong *)(param_1 + 0x28) & 0x7800000000;
    if ((uVar8 != 0x4800000000) && (uVar8 != 0x3800000000)) goto joined_r0x017e92f0;
    if (lVar19 != 0) {
      lVar9 = *(long *)(lVar19 + 0x10);
      lVar20 = *(long *)(lVar19 + 0x18) - lVar9;
      uVar8 = 0;
      if (lVar20 != 0) {
        uVar8 = lVar20 * 0x40 - 1;
      }
      uVar16 = *(long *)(lVar19 + 0x40) + *(long *)(lVar19 + 0x38);
      if (uVar8 == uVar16) {
        std::__ndk1::
        deque<v8::internal::compiler::InstructionScheduler::ScheduleGraphNode*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::InstructionScheduler::ScheduleGraphNode*>>
        ::__add_back_capacity
                  ((deque<v8::internal::compiler::InstructionScheduler::ScheduleGraphNode*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::InstructionScheduler::ScheduleGraphNode*>>
                    *)(lVar19 + 8));
        lVar9 = *(long *)(lVar19 + 0x10);
        uVar16 = *(long *)(lVar19 + 0x38) + *(long *)(lVar19 + 0x40);
      }
      *(undefined8 **)(*(long *)(lVar9 + (uVar16 >> 6 & 0x3fffffffffffff8)) + (uVar16 & 0x1ff) * 8)
           = puVar6;
      *(long *)(lVar19 + 0x40) = *(long *)(lVar19 + 0x40) + 1;
      *(int *)(puVar6 + 0xb) = *(int *)(puVar6 + 0xb) + 1;
    }
    *(undefined8 **)(this + 0x58) = puVar6;
  }
  else {
    lVar19 = *(long *)(this + 0x58);
joined_r0x017e92f0:
    if (lVar19 != 0) {
      lVar9 = *(long *)(lVar19 + 0x10);
      lVar20 = *(long *)(lVar19 + 0x18) - lVar9;
      uVar8 = 0;
      if (lVar20 != 0) {
        uVar8 = lVar20 * 0x40 - 1;
      }
      uVar16 = *(long *)(lVar19 + 0x40) + *(long *)(lVar19 + 0x38);
      if (uVar8 == uVar16) {
        std::__ndk1::
        deque<v8::internal::compiler::InstructionScheduler::ScheduleGraphNode*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::InstructionScheduler::ScheduleGraphNode*>>
        ::__add_back_capacity
                  ((deque<v8::internal::compiler::InstructionScheduler::ScheduleGraphNode*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::InstructionScheduler::ScheduleGraphNode*>>
                    *)(lVar19 + 8));
        lVar9 = *(long *)(lVar19 + 0x10);
        uVar16 = *(long *)(lVar19 + 0x38) + *(long *)(lVar19 + 0x40);
      }
      *(undefined8 **)(*(long *)(lVar9 + (uVar16 >> 6 & 0x3fffffffffffff8)) + (uVar16 & 0x1ff) * 8)
           = puVar6;
      *(long *)(lVar19 + 0x40) = *(long *)(lVar19 + 0x40) + 1;
      *(int *)(puVar6 + 0xb) = *(int *)(puVar6 + 0xb) + 1;
    }
    if ((*(long *)(this + 0x60) != 0) &&
       (((uVar3 = GetInstructionFlags(this,param_1), (uVar3 >> 2 & 1) != 0 ||
         (uVar3 = *(uint *)param_1, (uVar3 & 0x1ff) == 0x16)) ||
        (((uVar3 & 0x1c000) == 0x18000 ||
         ((((uVar3 >> 0xe & 7) - 3 < 2 ||
           (uVar8 = GetInstructionFlags(this,param_1), (uVar8 & 1) != 0)) ||
          (uVar3 = GetInstructionFlags(this,param_1), (uVar3 >> 1 & 1) != 0)))))))) {
      lVar20 = *(long *)(this + 0x60);
      lVar19 = *(long *)(lVar20 + 0x10);
      lVar9 = *(long *)(lVar20 + 0x18) - lVar19;
      uVar8 = 0;
      if (lVar9 != 0) {
        uVar8 = lVar9 * 0x40 - 1;
      }
      uVar16 = *(long *)(lVar20 + 0x40) + *(long *)(lVar20 + 0x38);
      if (uVar8 == uVar16) {
        std::__ndk1::
        deque<v8::internal::compiler::InstructionScheduler::ScheduleGraphNode*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::InstructionScheduler::ScheduleGraphNode*>>
        ::__add_back_capacity
                  ((deque<v8::internal::compiler::InstructionScheduler::ScheduleGraphNode*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::InstructionScheduler::ScheduleGraphNode*>>
                    *)(lVar20 + 8));
        lVar19 = *(long *)(lVar20 + 0x10);
        uVar16 = *(long *)(lVar20 + 0x38) + *(long *)(lVar20 + 0x40);
      }
      *(undefined8 **)(*(long *)(lVar19 + (uVar16 >> 6 & 0x3fffffffffffff8)) + (uVar16 & 0x1ff) * 8)
           = puVar6;
      *(long *)(lVar20 + 0x40) = *(long *)(lVar20 + 0x40) + 1;
      *(int *)(puVar6 + 0xb) = *(int *)(puVar6 + 0xb) + 1;
    }
    uVar8 = GetInstructionFlags(this,param_1);
    if ((uVar8 & 1) == 0) {
      uVar3 = GetInstructionFlags(this,param_1);
      if ((uVar3 >> 1 & 1) == 0) {
        uVar3 = *(uint *)param_1;
        if ((((uVar3 & 0x1ff) == 0x16) || ((uVar3 & 0x1c000) == 0x18000)) ||
           ((uVar3 >> 0xe & 7) - 3 < 2)) {
          lVar19 = *(long *)(this + 0x30);
          if (lVar19 != 0) {
            lVar9 = *(long *)(lVar19 + 0x10);
            lVar20 = *(long *)(lVar19 + 0x18) - lVar9;
            uVar8 = 0;
            if (lVar20 != 0) {
              uVar8 = lVar20 * 0x40 - 1;
            }
            uVar16 = *(long *)(lVar19 + 0x40) + *(long *)(lVar19 + 0x38);
            if (uVar8 == uVar16) {
              std::__ndk1::
              deque<v8::internal::compiler::InstructionScheduler::ScheduleGraphNode*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::InstructionScheduler::ScheduleGraphNode*>>
              ::__add_back_capacity
                        ((deque<v8::internal::compiler::InstructionScheduler::ScheduleGraphNode*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::InstructionScheduler::ScheduleGraphNode*>>
                          *)(lVar19 + 8));
              lVar9 = *(long *)(lVar19 + 0x10);
              uVar16 = *(long *)(lVar19 + 0x38) + *(long *)(lVar19 + 0x40);
            }
            *(undefined8 **)
             (*(long *)(lVar9 + (uVar16 >> 6 & 0x3fffffffffffff8)) + (uVar16 & 0x1ff) * 8) = puVar6;
            *(long *)(lVar19 + 0x40) = *(long *)(lVar19 + 0x40) + 1;
            *(int *)(puVar6 + 0xb) = *(int *)(puVar6 + 0xb) + 1;
          }
          *(undefined8 **)(this + 0x60) = puVar6;
        }
      }
      else {
        lVar19 = *(long *)(this + 0x30);
        if (lVar19 != 0) {
          lVar9 = *(long *)(lVar19 + 0x10);
          lVar20 = *(long *)(lVar19 + 0x18) - lVar9;
          uVar8 = 0;
          if (lVar20 != 0) {
            uVar8 = lVar20 * 0x40 - 1;
          }
          uVar16 = *(long *)(lVar19 + 0x40) + *(long *)(lVar19 + 0x38);
          if (uVar8 == uVar16) {
            std::__ndk1::
            deque<v8::internal::compiler::InstructionScheduler::ScheduleGraphNode*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::InstructionScheduler::ScheduleGraphNode*>>
            ::__add_back_capacity
                      ((deque<v8::internal::compiler::InstructionScheduler::ScheduleGraphNode*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::InstructionScheduler::ScheduleGraphNode*>>
                        *)(lVar19 + 8));
            lVar9 = *(long *)(lVar19 + 0x10);
            uVar16 = *(long *)(lVar19 + 0x38) + *(long *)(lVar19 + 0x40);
          }
          *(undefined8 **)
           (*(long *)(lVar9 + (uVar16 >> 6 & 0x3fffffffffffff8)) + (uVar16 & 0x1ff) * 8) = puVar6;
          *(long *)(lVar19 + 0x40) = *(long *)(lVar19 + 0x40) + 1;
          *(int *)(puVar6 + 0xb) = *(int *)(puVar6 + 0xb) + 1;
        }
        puVar10 = *(undefined8 **)(this + 0x40);
        if (puVar10 == *(undefined8 **)(this + 0x48)) {
          lVar19 = (long)puVar10 - *(long *)(this + 0x38) >> 3;
          uVar8 = lVar19 + 1;
          if (uVar8 >> 0x1c != 0) goto LAB_017e99ac;
          lVar9 = (long)*(undefined8 **)(this + 0x48) - *(long *)(this + 0x38);
          uVar16 = lVar9 >> 2;
          if (uVar8 <= uVar16) {
            uVar8 = uVar16;
          }
          if (0x7fffffe < (ulong)(lVar9 >> 3)) {
            uVar8 = 0xfffffff;
          }
          if (uVar8 == 0) {
            lVar9 = 0;
          }
          else {
            pZVar5 = *(Zone **)(this + 0x50);
            uVar16 = uVar8 * 8;
            lVar9 = *(long *)(pZVar5 + 0x10);
            if (uVar16 < (ulong)(*(long *)(pZVar5 + 0x18) - lVar9) ||
                uVar16 - (*(long *)(pZVar5 + 0x18) - lVar9) == 0) {
              *(ulong *)(pZVar5 + 0x10) = lVar9 + uVar16;
            }
            else {
              lVar9 = Zone::NewExpand(pZVar5,uVar16);
            }
          }
          puVar10 = (undefined8 *)(lVar9 + lVar19 * 8);
          puVar11 = puVar10 + 1;
          *puVar10 = puVar6;
          puVar18 = *(undefined8 **)(this + 0x38);
          puVar17 = *(undefined8 **)(this + 0x40);
          while (puVar17 != puVar18) {
            puVar17 = puVar17 + -1;
            puVar10 = puVar10 + -1;
            *puVar10 = *puVar17;
          }
          *(undefined8 **)(this + 0x38) = puVar10;
          *(undefined8 **)(this + 0x40) = puVar11;
          *(ulong *)(this + 0x48) = lVar9 + uVar8 * 8;
        }
        else {
          *puVar10 = puVar6;
          *(long *)(this + 0x40) = *(long *)(this + 0x40) + 8;
        }
      }
    }
    else {
      lVar19 = *(long *)(this + 0x30);
      if (lVar19 != 0) {
        lVar9 = *(long *)(lVar19 + 0x10);
        lVar20 = *(long *)(lVar19 + 0x18) - lVar9;
        uVar8 = 0;
        if (lVar20 != 0) {
          uVar8 = lVar20 * 0x40 - 1;
        }
        uVar16 = *(long *)(lVar19 + 0x40) + *(long *)(lVar19 + 0x38);
        if (uVar8 == uVar16) {
          std::__ndk1::
          deque<v8::internal::compiler::InstructionScheduler::ScheduleGraphNode*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::InstructionScheduler::ScheduleGraphNode*>>
          ::__add_back_capacity
                    ((deque<v8::internal::compiler::InstructionScheduler::ScheduleGraphNode*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::InstructionScheduler::ScheduleGraphNode*>>
                      *)(lVar19 + 8));
          lVar9 = *(long *)(lVar19 + 0x10);
          uVar16 = *(long *)(lVar19 + 0x38) + *(long *)(lVar19 + 0x40);
        }
        *(undefined8 **)
         (*(long *)(lVar9 + (uVar16 >> 6 & 0x3fffffffffffff8)) + (uVar16 & 0x1ff) * 8) = puVar6;
        *(long *)(lVar19 + 0x40) = *(long *)(lVar19 + 0x40) + 1;
        *(int *)(puVar6 + 0xb) = *(int *)(puVar6 + 0xb) + 1;
      }
      plVar21 = *(long **)(this + 0x38);
      plVar2 = *(long **)(this + 0x40);
      if (plVar21 != plVar2) {
        do {
          lVar20 = *plVar21;
          lVar19 = *(long *)(lVar20 + 0x10);
          lVar9 = *(long *)(lVar20 + 0x18) - lVar19;
          uVar8 = 0;
          if (lVar9 != 0) {
            uVar8 = lVar9 * 0x40 - 1;
          }
          uVar16 = *(long *)(lVar20 + 0x40) + *(long *)(lVar20 + 0x38);
          if (uVar8 == uVar16) {
            std::__ndk1::
            deque<v8::internal::compiler::InstructionScheduler::ScheduleGraphNode*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::InstructionScheduler::ScheduleGraphNode*>>
            ::__add_back_capacity
                      ((deque<v8::internal::compiler::InstructionScheduler::ScheduleGraphNode*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::InstructionScheduler::ScheduleGraphNode*>>
                        *)(lVar20 + 8));
            lVar19 = *(long *)(lVar20 + 0x10);
            uVar16 = *(long *)(lVar20 + 0x38) + *(long *)(lVar20 + 0x40);
          }
          plVar21 = plVar21 + 1;
          *(undefined8 **)
           (*(long *)(lVar19 + (uVar16 >> 6 & 0x3fffffffffffff8)) + (uVar16 & 0x1ff) * 8) = puVar6;
          *(long *)(lVar20 + 0x40) = *(long *)(lVar20 + 0x40) + 1;
          *(int *)(puVar6 + 0xb) = *(int *)(puVar6 + 0xb) + 1;
        } while (plVar2 != plVar21);
        plVar21 = *(long **)(this + 0x38);
      }
      *(long **)(this + 0x40) = plVar21;
      *(undefined8 **)(this + 0x30) = puVar6;
    }
    uVar3 = *(uint *)(param_1 + 4);
    if ((uVar3 & 0xffff00) != 0) {
      uVar8 = 0;
      pIVar1 = this + 0x70;
      do {
        if (((*(ulong *)(param_1 + (uVar8 + (uVar3 & 0xff)) * 8 + 0x28) & 7) == 1) &&
           (pIVar15 = *(InstructionScheduler **)pIVar1, pIVar15 != (InstructionScheduler *)0x0)) {
          pIVar13 = pIVar1;
          do {
            iVar14 = (int)(*(ulong *)(param_1 + (uVar8 + (uVar3 & 0xff)) * 8 + 0x28) >> 3);
            if (iVar14 <= *(int *)(pIVar15 + 0x20)) {
              pIVar13 = pIVar15;
            }
            pIVar15 = *(InstructionScheduler **)
                       (pIVar15 + (ulong)(*(int *)(pIVar15 + 0x20) < iVar14) * 8);
          } while (pIVar15 != (InstructionScheduler *)0x0);
          if ((pIVar13 != pIVar1) && (*(int *)(pIVar13 + 0x20) <= iVar14)) {
            lVar20 = *(long *)(pIVar13 + 0x28);
            lVar19 = *(long *)(lVar20 + 0x10);
            lVar9 = *(long *)(lVar20 + 0x18) - lVar19;
            uVar16 = 0;
            if (lVar9 != 0) {
              uVar16 = lVar9 * 0x40 - 1;
            }
            uVar12 = *(long *)(lVar20 + 0x40) + *(long *)(lVar20 + 0x38);
            if (uVar16 == uVar12) {
              std::__ndk1::
              deque<v8::internal::compiler::InstructionScheduler::ScheduleGraphNode*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::InstructionScheduler::ScheduleGraphNode*>>
              ::__add_back_capacity
                        ((deque<v8::internal::compiler::InstructionScheduler::ScheduleGraphNode*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::InstructionScheduler::ScheduleGraphNode*>>
                          *)(lVar20 + 8));
              lVar19 = *(long *)(lVar20 + 0x10);
              uVar12 = *(long *)(lVar20 + 0x38) + *(long *)(lVar20 + 0x40);
            }
            *(undefined8 **)
             (*(long *)(lVar19 + (uVar12 >> 6 & 0x3fffffffffffff8)) + (uVar12 & 0x1ff) * 8) = puVar6
            ;
            *(long *)(lVar20 + 0x40) = *(long *)(lVar20 + 0x40) + 1;
            *(int *)(puVar6 + 0xb) = *(int *)(puVar6 + 0xb) + 1;
            uVar3 = *(uint *)(param_1 + 4);
          }
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < (uVar3 >> 8 & 0xffff));
    }
    if ((uVar3 & 0xff) != 0) {
      uVar8 = 0;
      do {
        uVar16 = *(ulong *)(param_1 + uVar8 * 8 + 0x28) & 7;
        if ((uVar16 == 2) || (uVar16 == 1)) {
          local_64[0] = (undefined4)(*(ulong *)(param_1 + uVar8 * 8 + 0x28) >> 3);
          local_58 = local_64;
          lVar19 = std::__ndk1::
                   __tree<std::__ndk1::__value_type<int,v8::internal::compiler::InstructionScheduler::ScheduleGraphNode*>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,v8::internal::compiler::InstructionScheduler::ScheduleGraphNode*>,std::__ndk1::less<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<int,v8::internal::compiler::InstructionScheduler::ScheduleGraphNode*>>>
                   ::
                   __emplace_unique_key_args<int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<int&&>,std::__ndk1::tuple<>>
                             ((int *)(this + 0x68),(piecewise_construct_t *)local_64,
                              (tuple *)&DAT_01a64250,(tuple *)&local_58);
          *(undefined8 **)(lVar19 + 0x28) = puVar6;
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < (byte)param_1[4]);
    }
  }
  puVar10 = *(undefined8 **)(this + 0x18);
  if (puVar10 == *(undefined8 **)(this + 0x20)) {
    lVar19 = (long)puVar10 - *(long *)(this + 0x10) >> 3;
    uVar8 = lVar19 + 1;
    if (uVar8 >> 0x1c != 0) {
LAB_017e99ac:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar9 = (long)*(undefined8 **)(this + 0x20) - *(long *)(this + 0x10);
    uVar16 = lVar9 >> 2;
    if (uVar8 <= uVar16) {
      uVar8 = uVar16;
    }
    if (0x7fffffe < (ulong)(lVar9 >> 3)) {
      uVar8 = 0xfffffff;
    }
    if (uVar8 == 0) {
      lVar9 = 0;
    }
    else {
      pZVar5 = *(Zone **)(this + 0x28);
      uVar16 = uVar8 * 8;
      lVar9 = *(long *)(pZVar5 + 0x10);
      if (uVar16 < (ulong)(*(long *)(pZVar5 + 0x18) - lVar9) ||
          uVar16 - (*(long *)(pZVar5 + 0x18) - lVar9) == 0) {
        *(ulong *)(pZVar5 + 0x10) = lVar9 + uVar16;
      }
      else {
        lVar9 = Zone::NewExpand(pZVar5,uVar16);
      }
    }
    puVar10 = (undefined8 *)(lVar9 + lVar19 * 8);
    puVar17 = puVar10 + 1;
    *puVar10 = puVar6;
    puVar6 = *(undefined8 **)(this + 0x10);
    puVar18 = *(undefined8 **)(this + 0x18);
    while (puVar18 != puVar6) {
      puVar18 = puVar18 + -1;
      puVar10 = puVar10 + -1;
      *puVar10 = *puVar18;
    }
    *(undefined8 **)(this + 0x10) = puVar10;
    *(undefined8 **)(this + 0x18) = puVar17;
    *(ulong *)(this + 0x20) = lVar9 + uVar8 * 8;
  }
  else {
    *puVar10 = puVar6;
    *(long *)(this + 0x18) = *(long *)(this + 0x18) + 8;
  }
  return;
}

