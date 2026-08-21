
/* void 
   v8::internal::compiler::InstructionScheduler::Schedule<v8::internal::compiler::InstructionScheduler::StressSchedulerQueue>()
    */

void __thiscall
v8::internal::compiler::InstructionScheduler::
Schedule<v8::internal::compiler::InstructionScheduler::StressSchedulerQueue>
          (InstructionScheduler *this)

{
  ulong uVar1;
  long *plVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  long ****pppplVar6;
  long lVar7;
  long ***ppplVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  int iVar15;
  long ****pppplVar16;
  long ***ppplVar17;
  long *plVar18;
  long *****ppppplVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  long *****ppppplVar22;
  long ****local_80;
  long ****local_78;
  long local_70;
  Zone *local_68;
  
  local_80 = (long ****)&local_80;
  local_78 = (long ****)&local_80;
  local_70 = 0;
  local_68 = *(Zone **)this;
  plVar18 = *(long **)(this + 0x10);
  plVar9 = *(long **)(this + 0x18);
  if (plVar9 != plVar18) {
    do {
      plVar9 = plVar9 + -1;
      lVar10 = *plVar9;
      uVar12 = *(ulong *)(lVar10 + 0x38);
      lVar7 = *(long *)(lVar10 + 0x10);
      plVar11 = (long *)(lVar7 + (uVar12 >> 6 & 0x3fffffffffffff8));
      if (*(long *)(lVar10 + 0x18) == lVar7) {
LAB_017e8794:
        iVar15 = 0;
      }
      else {
        uVar1 = *(long *)(lVar10 + 0x40) + uVar12;
        plVar13 = (long *)(*plVar11 + (uVar12 & 0x1ff) * 8);
        plVar2 = (long *)(*(long *)(lVar7 + (uVar1 >> 6 & 0x3fffffffffffff8)) + (uVar1 & 0x1ff) * 8)
        ;
        if (plVar13 == plVar2) goto LAB_017e8794;
        iVar5 = 0;
        do {
          plVar14 = plVar13 + 1;
          iVar15 = *(int *)(*plVar13 + 0x60);
          if (*(int *)(*plVar13 + 0x60) <= iVar5) {
            iVar15 = iVar5;
          }
          if ((long)plVar14 - *plVar11 == 0x1000) {
            plVar11 = plVar11 + 1;
            plVar14 = (long *)*plVar11;
          }
          plVar13 = plVar14;
          iVar5 = iVar15;
        } while (plVar14 != plVar2);
      }
      *(int *)(lVar10 + 0x60) = *(int *)(lVar10 + 0x5c) + iVar15;
    } while (plVar9 != plVar18);
    puVar20 = *(undefined8 **)(this + 0x10);
    puVar21 = *(undefined8 **)(this + 0x18);
    if (puVar20 != puVar21) {
      lVar7 = 0;
      do {
        ppplVar17 = (long ***)*puVar20;
        if (*(int *)(ppplVar17 + 0xb) == 0) {
          ppppplVar19 = (long *****)local_78;
          ppppplVar22 = &local_80;
          if (&local_80 != (long *****)local_78) {
            do {
              ppppplVar22 = ppppplVar19;
              if (*(int *)(ppppplVar19[2] + 0xc) < *(int *)(ppplVar17 + 0xc)) break;
              ppppplVar19 = (long *****)ppppplVar19[1];
              ppppplVar22 = &local_80;
            } while (&local_80 != ppppplVar19);
          }
          pppplVar16 = *(long *****)(local_68 + 0x10);
          if ((ulong)(*(long *)(local_68 + 0x18) - (long)pppplVar16) < 0x18) {
            pppplVar16 = (long ****)Zone::NewExpand(local_68,0x18);
          }
          else {
            *(long *****)(local_68 + 0x10) = pppplVar16 + 3;
          }
          *pppplVar16 = (long ***)0x0;
          pppplVar16[2] = ppplVar17;
          (*ppppplVar22)[1] = (long ***)pppplVar16;
          *pppplVar16 = (long ***)*ppppplVar19;
          *ppppplVar22 = pppplVar16;
          pppplVar16[1] = (long ***)ppppplVar22;
          lVar7 = local_70 + 1;
          local_70 = lVar7;
        }
        puVar20 = puVar20 + 1;
      } while (puVar20 != puVar21);
      if (lVar7 != 0) {
        iVar15 = 0;
        do {
          ppppplVar19 = (long *****)local_78;
          if (this[0x88] != (InstructionScheduler)0x1) {
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.","storage_.is_populated_");
          }
          iVar5 = base::RandomNumberGenerator::NextInt
                            ((RandomNumberGenerator *)(this + 0x90),(int)lVar7);
          lVar7 = (long)iVar5;
          if (iVar5 < 0) {
            do {
              ppppplVar19 = (long *****)*ppppplVar19;
              bVar4 = lVar7 != -1;
              lVar7 = lVar7 + 1;
            } while (bVar4);
          }
          else if (iVar5 != 0) {
            do {
              ppppplVar19 = (long *****)ppppplVar19[1];
              lVar7 = lVar7 + -1;
            } while (0 < lVar7);
          }
          pppplVar16 = ppppplVar19[2];
          (*ppppplVar19)[1] = (long ***)ppppplVar19[1];
          *ppppplVar19[1] = (long ***)*ppppplVar19;
          local_70 = local_70 + -1;
          if (pppplVar16 != (long ****)0x0) {
            InstructionSequence::AddInstruction
                      (*(InstructionSequence **)(this + 8),(Instruction *)*pppplVar16);
            ppplVar8 = pppplVar16[7];
            ppplVar17 = pppplVar16[2];
            plVar18 = (long *)((long)ppplVar17 + ((ulong)ppplVar8 >> 6 & 0x3fffffffffffff8));
            if (pppplVar16[3] == ppplVar17) {
              puVar20 = (undefined8 *)0x0;
              puVar21 = (undefined8 *)0x0;
              goto LAB_017e89fc;
            }
            puVar20 = (undefined8 *)(*plVar18 + ((ulong)ppplVar8 & 0x1ff) * 8);
            puVar21 = (undefined8 *)
                      (*(long *)((long)ppplVar17 +
                                ((ulong)((long)pppplVar16[8] + (long)ppplVar8) >> 6 &
                                0x3fffffffffffff8)) +
                      ((long)pppplVar16[8] + (long)ppplVar8 & 0x1ffU) * 8);
            if (puVar20 != puVar21) {
LAB_017e8a04:
              do {
                ppplVar17 = (long ***)*puVar20;
                iVar3 = *(int *)(ppplVar17 + 0xb);
                *(int *)(ppplVar17 + 0xb) = iVar3 + -1;
                iVar5 = *(int *)((long)pppplVar16 + 0x5c) + iVar15;
                if (iVar5 <= *(int *)((long)ppplVar17 + 100)) {
                  iVar5 = *(int *)((long)ppplVar17 + 100);
                }
                *(int *)((long)ppplVar17 + 100) = iVar5;
                if (iVar3 + -1 == 0) {
                  ppppplVar19 = &local_80;
                  ppppplVar22 = (long *****)local_78;
                  if (&local_80 != (long *****)local_78) {
                    do {
                      ppppplVar19 = ppppplVar22;
                      if (*(int *)(ppppplVar22[2] + 0xc) < *(int *)(ppplVar17 + 0xc)) break;
                      ppppplVar22 = (long *****)ppppplVar22[1];
                      ppppplVar19 = &local_80;
                    } while (&local_80 != ppppplVar22);
                  }
                  pppplVar6 = *(long *****)(local_68 + 0x10);
                  if ((ulong)(*(long *)(local_68 + 0x18) - (long)pppplVar6) < 0x18) {
                    pppplVar6 = (long ****)Zone::NewExpand(local_68,0x18);
                  }
                  else {
                    *(long *****)(local_68 + 0x10) = pppplVar6 + 3;
                  }
                  *pppplVar6 = (long ***)0x0;
                  pppplVar6[2] = ppplVar17;
                  (*ppppplVar19)[1] = (long ***)pppplVar6;
                  *pppplVar6 = (long ***)*ppppplVar22;
                  *ppppplVar19 = pppplVar6;
                  pppplVar6[1] = (long ***)ppppplVar19;
                  local_70 = local_70 + 1;
                }
                puVar20 = puVar20 + 1;
                if ((long)puVar20 - *plVar18 != 0x1000) {
LAB_017e89fc:
                  if (puVar20 == puVar21) break;
                  goto LAB_017e8a04;
                }
                plVar18 = plVar18 + 1;
                puVar20 = (undefined8 *)*plVar18;
              } while (puVar20 != puVar21);
            }
          }
          iVar15 = iVar15 + 1;
          lVar7 = local_70;
        } while (local_70 != 0);
      }
    }
  }
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(this + 0x10);
  std::__ndk1::
  __tree<std::__ndk1::__value_type<int,v8::internal::compiler::InstructionScheduler::ScheduleGraphNode*>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,v8::internal::compiler::InstructionScheduler::ScheduleGraphNode*>,std::__ndk1::less<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<int,v8::internal::compiler::InstructionScheduler::ScheduleGraphNode*>>>
  ::destroy((__tree<std::__ndk1::__value_type<int,v8::internal::compiler::InstructionScheduler::ScheduleGraphNode*>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,v8::internal::compiler::InstructionScheduler::ScheduleGraphNode*>,std::__ndk1::less<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<int,v8::internal::compiler::InstructionScheduler::ScheduleGraphNode*>>>
             *)(this + 0x68),*(__tree_node **)(this + 0x70));
  *(undefined8 *)(this + 0x80) = 0;
  *(InstructionScheduler **)(this + 0x68) = this + 0x70;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x40) = *(undefined8 *)(this + 0x38);
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  if (local_70 != 0) {
    (*local_78)[1] = (long **)local_80[1];
    *local_80[1] = (long **)*local_78;
    for (; (long *****)local_78 != &local_80; local_78 = (long ****)local_78[1]) {
    }
  }
  return;
}

