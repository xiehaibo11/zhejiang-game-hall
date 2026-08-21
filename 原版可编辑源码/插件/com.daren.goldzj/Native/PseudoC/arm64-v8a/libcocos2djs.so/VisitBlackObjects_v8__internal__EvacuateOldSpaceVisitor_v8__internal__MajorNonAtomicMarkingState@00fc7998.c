
/* bool v8::internal::LiveObjectVisitor::VisitBlackObjects<v8::internal::EvacuateOldSpaceVisitor,
   v8::internal::MajorNonAtomicMarkingState>(v8::internal::MemoryChunk*,
   v8::internal::MajorNonAtomicMarkingState*, v8::internal::EvacuateOldSpaceVisitor*,
   v8::internal::LiveObjectVisitor::IterationMode, v8::internal::HeapObject*) */

bool v8::internal::LiveObjectVisitor::
     VisitBlackObjects<v8::internal::EvacuateOldSpaceVisitor,v8::internal::MajorNonAtomicMarkingState>
               (long *param_1,undefined8 param_2,EvacuateVisitorBase *param_3,int param_4,
               ulong *param_5)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  byte *pbVar5;
  bool bVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  bool bVar13;
  uint uVar14;
  long lVar15;
  uint uVar16;
  ulong uVar17;
  byte **local_150;
  byte *local_148;
  char *local_140;
  undefined8 local_138;
  undefined8 local_130;
  long *local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  long *local_108;
  long lStack_100;
  uint local_f8;
  uint local_f4;
  long *local_f0;
  long *local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  long *local_c8;
  long *local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  long *plStack_a8;
  long local_a0;
  uint local_98;
  uint local_94;
  long *local_90;
  long *local_88;
  undefined4 local_80;
  ulong local_78;
  undefined4 local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  if (VisitBlackObjects<v8::internal::EvacuateOldSpaceVisitor,v8::internal::MajorNonAtomicMarkingState>(v8::internal::MemoryChunk*,v8::internal::MajorNonAtomicMarkingState*,v8::internal::EvacuateOldSpaceVisitor*,v8::internal::LiveObjectVisitor::IterationMode,v8::internal::HeapObject*)
      ::trace_event_unique_atomic3152 == (byte *)0x0) {
    plVar7 = (long *)tracing::TraceEventHelper::GetTracingController();
    VisitBlackObjects<v8::internal::EvacuateOldSpaceVisitor,v8::internal::MajorNonAtomicMarkingState>(v8::internal::MemoryChunk*,v8::internal::MajorNonAtomicMarkingState*,v8::internal::EvacuateOldSpaceVisitor*,v8::internal::LiveObjectVisitor::IterationMode,v8::internal::HeapObject*)
    ::trace_event_unique_atomic3152 =
         (byte *)(**(code **)(*plVar7 + 0x10))(plVar7,"disabled-by-default-v8.gc");
  }
  pbVar5 = VisitBlackObjects<v8::internal::EvacuateOldSpaceVisitor,v8::internal::MajorNonAtomicMarkingState>(v8::internal::MemoryChunk*,v8::internal::MajorNonAtomicMarkingState*,v8::internal::EvacuateOldSpaceVisitor*,v8::internal::LiveObjectVisitor::IterationMode,v8::internal::HeapObject*)
           ::trace_event_unique_atomic3152;
  local_150 = (byte **)0x0;
  if ((*VisitBlackObjects<v8::internal::EvacuateOldSpaceVisitor,v8::internal::MajorNonAtomicMarkingState>(v8::internal::MemoryChunk*,v8::internal::MajorNonAtomicMarkingState*,v8::internal::EvacuateOldSpaceVisitor*,v8::internal::LiveObjectVisitor::IterationMode,v8::internal::HeapObject*)
        ::trace_event_unique_atomic3152 & 5) != 0) {
    local_c8 = (long *)0x0;
    local_c0 = (long *)0x0;
    plVar7 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar8 = (**(code **)(*plVar7 + 0x18))
                      (plVar7,0x58,pbVar5,"LiveObjectVisitor::VisitBlackObjects",0,0,0,0,0,0,0,
                       &local_c8,0);
    plVar7 = local_c0;
    local_c0 = (long *)0x0;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 8))();
    }
    plVar7 = local_c8;
    local_c8 = (long *)0x0;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 8))();
    }
    local_150 = &local_148;
    local_140 = "LiveObjectVisitor::VisitBlackObjects";
    local_148 = pbVar5;
    local_138 = uVar8;
  }
  lVar15 = param_1[2];
  lVar10 = param_1[3];
  lVar1 = param_1[5];
  uStack_b8 = *(undefined8 *)(lVar10 + -0x87c0);
  local_c0 = *(long **)(lVar10 + -0x87c8);
  local_b0 = *(undefined8 *)(lVar10 + -0x87d0);
  uVar17 = (ulong)(lVar1 - (long)param_1) >> 7 & 0x1ffffff;
  uVar12 = (ulong)(param_1[4] - (long)param_1) >> 7 & 0x1ffffff;
  uVar16 = (uint)uVar17;
  local_94 = 0;
  local_78 = 0;
  uVar11 = (uint)uVar12;
  local_90 = param_1;
  if (uVar11 != 0) {
    local_90 = (long *)((param_1[4] - (long)param_1 & 0xffffff80U) + (long)param_1);
    local_94 = uVar11;
  }
  uVar14 = (uint)param_1;
  local_f8 = uVar16;
  local_c8 = param_1;
  plStack_a8 = param_1;
  local_a0 = lVar15;
  local_98 = uVar16;
  if (uVar11 < uVar16) {
    local_80 = *(undefined4 *)(lVar15 + uVar12 * 4);
    local_88 = local_90;
    LiveObjectRange<(v8::internal::LiveObjectIterationMode)0>::iterator::AdvanceToNextValidObject
              ((iterator *)&local_c8);
    lVar10 = param_1[3];
    local_f8 = (int)param_1[5] - uVar14 >> 7;
  }
  uStack_118 = *(undefined8 *)(lVar10 + -0x87c0);
  local_120 = *(undefined8 *)(lVar10 + -0x87c8);
  local_110 = *(undefined8 *)(lVar10 + -0x87d0);
  local_f4 = 0;
  local_d8 = 0;
  local_128 = param_1;
  local_108 = param_1;
  lStack_100 = lVar15;
  if (uVar16 == 0) {
    local_f0 = param_1;
    if (local_f8 == 0) goto LAB_00fc7bac;
  }
  else {
    local_f0 = (long *)((lVar1 - (long)param_1 & 0xffffff80U) + (long)param_1);
    local_f4 = uVar16;
    if (local_f8 <= uVar16) {
LAB_00fc7bac:
      local_d8._0_4_ = 0;
      goto LAB_00fc7bb0;
    }
  }
  local_e0 = *(undefined4 *)(lVar15 + uVar17 * 4);
  local_e8 = local_f0;
  LiveObjectRange<(v8::internal::LiveObjectIterationMode)0>::iterator::AdvanceToNextValidObject
            ((iterator *)&local_128);
LAB_00fc7bb0:
  if ((int)local_d8 != (int)local_78) {
    do {
      uVar12 = local_78;
      local_130 = 0;
      if ((*(byte *)((local_78 & 0xfffffffffffc0000) + 10) >> 5 & 1) == 0) {
        uVar9 = *(undefined4 *)(*(long *)((local_78 & 0xfffffffffffc0000) + 0x58) + 0x48);
      }
      else {
        uVar9 = 0;
      }
      uVar17 = EvacuateVisitorBase::TryEvacuateObject(param_3,uVar9,local_78,local_70,&local_130);
      if ((uVar17 & 1) == 0) {
        if (param_4 == 1) {
          uVar11 = (int)uVar12 + ~uVar14 >> 2;
          uVar14 = (int)param_1[4] - uVar14;
          if (uVar14 >> 2 < uVar11) {
            lVar15 = param_1[2];
            uVar11 = uVar11 - 1;
            uVar16 = uVar14 >> 7;
            uVar17 = (ulong)uVar16;
            uVar3 = uVar11 >> 5;
            iVar2 = 1 << (ulong)(uVar14 >> 2 & 0x1f);
            uVar11 = 1 << (ulong)(uVar11 & 0x1f);
            if (uVar16 == uVar3) {
              uVar16 = uVar11 - iVar2;
            }
            else {
              *(uint *)(lVar15 + uVar17 * 4) = *(uint *)(lVar15 + uVar17 * 4) & iVar2 - 1U;
              if (uVar16 + 1 < uVar3) {
                memset((void *)(lVar15 + (ulong)((uVar16 + 1) * 4)),0,
                       (ulong)((uVar3 - uVar16) - 2) * 4 + 4);
              }
              uVar16 = uVar11 - 1;
              uVar17 = (ulong)uVar3;
            }
            *(uint *)(lVar15 + uVar17 * 4) =
                 *(uint *)(lVar15 + uVar17 * 4) & ((uVar16 | uVar11) ^ 0xffffffff);
          }
          *param_5 = uVar12;
        }
        bVar13 = false;
        bVar6 = false;
        if (local_150 == (byte **)0x0) goto LAB_00fc7d24;
        goto LAB_00fc7cfc;
      }
      LiveObjectRange<(v8::internal::LiveObjectIterationMode)0>::iterator::AdvanceToNextValidObject
                ((iterator *)&local_c8);
    } while ((int)local_78 != (int)local_d8);
  }
  if (param_4 == 1) {
    memset((void *)param_1[2],0,0x2000);
    param_1[0xd] = 0;
  }
  bVar13 = true;
  bVar6 = true;
  if (local_150 != (byte **)0x0) {
LAB_00fc7cfc:
    bVar13 = bVar6;
    if (*local_148 != 0) {
      plVar7 = (long *)tracing::TraceEventHelper::GetTracingController();
      (**(code **)(*plVar7 + 0x28))(plVar7,local_148,local_140,local_138);
    }
  }
LAB_00fc7d24:
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar13;
}

