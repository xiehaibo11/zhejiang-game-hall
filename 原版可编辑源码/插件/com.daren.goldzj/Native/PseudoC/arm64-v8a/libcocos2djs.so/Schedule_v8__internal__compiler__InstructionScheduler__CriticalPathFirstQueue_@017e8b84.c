
/* void 
   v8::internal::compiler::InstructionScheduler::Schedule<v8::internal::compiler::InstructionScheduler::CriticalPathFirstQueue>()
    */

void __thiscall
v8::internal::compiler::InstructionScheduler::
Schedule<v8::internal::compiler::InstructionScheduler::CriticalPathFirstQueue>
          (InstructionScheduler *this)

{
  ulong uVar1;
  long *plVar2;
  int iVar3;
  long ****pppplVar4;
  long lVar5;
  long ***ppplVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  int iVar13;
  int iVar14;
  long ****pppplVar15;
  long ***ppplVar16;
  long *plVar17;
  long *****ppppplVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  long *****ppppplVar21;
  long ****local_80;
  long ****local_78;
  long local_70;
  Zone *local_68;
  
  local_80 = (long ****)&local_80;
  local_78 = (long ****)&local_80;
  local_70 = 0;
  local_68 = *(Zone **)this;
  plVar17 = *(long **)(this + 0x10);
  plVar7 = *(long **)(this + 0x18);
  if (plVar7 != plVar17) {
    do {
      plVar7 = plVar7 + -1;
      lVar8 = *plVar7;
      uVar10 = *(ulong *)(lVar8 + 0x38);
      lVar5 = *(long *)(lVar8 + 0x10);
      plVar9 = (long *)(lVar5 + (uVar10 >> 6 & 0x3fffffffffffff8));
      if (*(long *)(lVar8 + 0x18) == lVar5) {
LAB_017e8bd0:
        iVar13 = 0;
      }
      else {
        uVar1 = *(long *)(lVar8 + 0x40) + uVar10;
        plVar11 = (long *)(*plVar9 + (uVar10 & 0x1ff) * 8);
        plVar2 = (long *)(*(long *)(lVar5 + (uVar1 >> 6 & 0x3fffffffffffff8)) + (uVar1 & 0x1ff) * 8)
        ;
        if (plVar11 == plVar2) goto LAB_017e8bd0;
        iVar14 = 0;
        do {
          plVar12 = plVar11 + 1;
          iVar13 = *(int *)(*plVar11 + 0x60);
          if (*(int *)(*plVar11 + 0x60) <= iVar14) {
            iVar13 = iVar14;
          }
          if ((long)plVar12 - *plVar9 == 0x1000) {
            plVar9 = plVar9 + 1;
            plVar12 = (long *)*plVar9;
          }
          plVar11 = plVar12;
          iVar14 = iVar13;
        } while (plVar12 != plVar2);
      }
      *(int *)(lVar8 + 0x60) = *(int *)(lVar8 + 0x5c) + iVar13;
    } while (plVar7 != plVar17);
    puVar19 = *(undefined8 **)(this + 0x10);
    puVar20 = *(undefined8 **)(this + 0x18);
    if (puVar19 != puVar20) {
      lVar5 = 0;
      do {
        ppplVar16 = (long ***)*puVar19;
        if (*(int *)(ppplVar16 + 0xb) == 0) {
          ppppplVar18 = (long *****)local_78;
          ppppplVar21 = &local_80;
          if (&local_80 != (long *****)local_78) {
            do {
              ppppplVar21 = ppppplVar18;
              if (*(int *)(ppppplVar18[2] + 0xc) < *(int *)(ppplVar16 + 0xc)) break;
              ppppplVar18 = (long *****)ppppplVar18[1];
              ppppplVar21 = &local_80;
            } while (&local_80 != ppppplVar18);
          }
          pppplVar15 = *(long *****)(local_68 + 0x10);
          if ((ulong)(*(long *)(local_68 + 0x18) - (long)pppplVar15) < 0x18) {
            pppplVar15 = (long ****)Zone::NewExpand(local_68,0x18);
          }
          else {
            *(long *****)(local_68 + 0x10) = pppplVar15 + 3;
          }
          *pppplVar15 = (long ***)0x0;
          pppplVar15[2] = ppplVar16;
          (*ppppplVar21)[1] = (long ***)pppplVar15;
          *pppplVar15 = (long ***)*ppppplVar18;
          *ppppplVar21 = pppplVar15;
          pppplVar15[1] = (long ***)ppppplVar21;
          lVar5 = local_70 + 1;
          local_70 = lVar5;
        }
        puVar19 = puVar19 + 1;
      } while (puVar19 != puVar20);
      if (lVar5 != 0) {
        iVar13 = 0;
        do {
          ppppplVar18 = (long *****)local_78;
          if (&local_80 != (long *****)local_78) {
            do {
              ppppplVar21 = ppppplVar18;
              if (*(int *)((long)ppppplVar18[2] + 100) <= iVar13) break;
              ppppplVar18 = (long *****)ppppplVar18[1];
              ppppplVar21 = &local_80;
            } while (&local_80 != ppppplVar18);
            if (&local_80 != ppppplVar21) {
              pppplVar15 = ppppplVar21[2];
              (*ppppplVar21)[1] = (long ***)ppppplVar21[1];
              *ppppplVar21[1] = (long ***)*ppppplVar21;
              local_70 = local_70 + -1;
              if (pppplVar15 != (long ****)0x0) {
                InstructionSequence::AddInstruction
                          (*(InstructionSequence **)(this + 8),(Instruction *)*pppplVar15);
                ppplVar6 = pppplVar15[7];
                ppplVar16 = pppplVar15[2];
                plVar17 = (long *)((long)ppplVar16 + ((ulong)ppplVar6 >> 6 & 0x3fffffffffffff8));
                if (pppplVar15[3] == ppplVar16) {
                  puVar19 = (undefined8 *)0x0;
                  puVar20 = (undefined8 *)0x0;
                  goto LAB_017e8e34;
                }
                puVar19 = (undefined8 *)(*plVar17 + ((ulong)ppplVar6 & 0x1ff) * 8);
                puVar20 = (undefined8 *)
                          (*(long *)((long)ppplVar16 +
                                    ((ulong)((long)pppplVar15[8] + (long)ppplVar6) >> 6 &
                                    0x3fffffffffffff8)) +
                          ((long)pppplVar15[8] + (long)ppplVar6 & 0x1ffU) * 8);
                if (puVar19 != puVar20) {
LAB_017e8e3c:
                  do {
                    ppplVar16 = (long ***)*puVar19;
                    iVar3 = *(int *)(ppplVar16 + 0xb);
                    *(int *)(ppplVar16 + 0xb) = iVar3 + -1;
                    iVar14 = *(int *)((long)pppplVar15 + 0x5c) + iVar13;
                    if (iVar14 <= *(int *)((long)ppplVar16 + 100)) {
                      iVar14 = *(int *)((long)ppplVar16 + 100);
                    }
                    *(int *)((long)ppplVar16 + 100) = iVar14;
                    if (iVar3 + -1 == 0) {
                      ppppplVar18 = &local_80;
                      ppppplVar21 = (long *****)local_78;
                      if (&local_80 != (long *****)local_78) {
                        do {
                          ppppplVar18 = ppppplVar21;
                          if (*(int *)(ppppplVar21[2] + 0xc) < *(int *)(ppplVar16 + 0xc)) break;
                          ppppplVar21 = (long *****)ppppplVar21[1];
                          ppppplVar18 = &local_80;
                        } while (&local_80 != ppppplVar21);
                      }
                      pppplVar4 = *(long *****)(local_68 + 0x10);
                      if ((ulong)(*(long *)(local_68 + 0x18) - (long)pppplVar4) < 0x18) {
                        pppplVar4 = (long ****)Zone::NewExpand(local_68,0x18);
                      }
                      else {
                        *(long *****)(local_68 + 0x10) = pppplVar4 + 3;
                      }
                      *pppplVar4 = (long ***)0x0;
                      pppplVar4[2] = ppplVar16;
                      (*ppppplVar18)[1] = (long ***)pppplVar4;
                      *pppplVar4 = (long ***)*ppppplVar21;
                      *ppppplVar18 = pppplVar4;
                      pppplVar4[1] = (long ***)ppppplVar18;
                      local_70 = local_70 + 1;
                    }
                    puVar19 = puVar19 + 1;
                    if ((long)puVar19 - *plVar17 != 0x1000) {
LAB_017e8e34:
                      if (puVar19 == puVar20) break;
                      goto LAB_017e8e3c;
                    }
                    plVar17 = plVar17 + 1;
                    puVar19 = (undefined8 *)*plVar17;
                  } while (puVar19 != puVar20);
                }
              }
            }
          }
          iVar13 = iVar13 + 1;
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

