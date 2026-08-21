
/* void 
   v8::internal::LiveObjectVisitor::VisitGreyObjectsNoFail<v8::internal::EvacuateNewSpacePageVisitor<(v8::internal::PageEvacuationMode)0>,
   v8::internal::MinorNonAtomicMarkingState>(v8::internal::MemoryChunk*,
   v8::internal::MinorNonAtomicMarkingState*,
   v8::internal::EvacuateNewSpacePageVisitor<(v8::internal::PageEvacuationMode)0>*,
   v8::internal::LiveObjectVisitor::IterationMode) */

void v8::internal::LiveObjectVisitor::
     VisitGreyObjectsNoFail<v8::internal::EvacuateNewSpacePageVisitor<(v8::internal::PageEvacuationMode)0>,v8::internal::MinorNonAtomicMarkingState>
               (long *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  uint *puVar1;
  long lVar2;
  long lVar3;
  byte *pbVar4;
  bool bVar5;
  undefined4 uVar6;
  long *plVar7;
  undefined8 uVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  byte **local_138;
  byte *local_130;
  char *local_128;
  undefined8 local_120;
  long *local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  long *local_f8;
  long lStack_f0;
  uint local_e8;
  uint local_e4;
  long *local_e0;
  long *local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  long *local_b8;
  long *local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  long *plStack_98;
  long local_90;
  uint local_88;
  uint local_84;
  long *local_80;
  long *local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  if (VisitGreyObjectsNoFail<v8::internal::EvacuateNewSpacePageVisitor<(v8::internal::PageEvacuationMode)0>,v8::internal::MinorNonAtomicMarkingState>(v8::internal::MemoryChunk*,v8::internal::MinorNonAtomicMarkingState*,v8::internal::EvacuateNewSpacePageVisitor<(v8::internal::PageEvacuationMode)0>*,v8::internal::LiveObjectVisitor::IterationMode)
      ::trace_event_unique_atomic3207 == (byte *)0x0) {
    plVar7 = (long *)tracing::TraceEventHelper::GetTracingController();
    VisitGreyObjectsNoFail<v8::internal::EvacuateNewSpacePageVisitor<(v8::internal::PageEvacuationMode)0>,v8::internal::MinorNonAtomicMarkingState>(v8::internal::MemoryChunk*,v8::internal::MinorNonAtomicMarkingState*,v8::internal::EvacuateNewSpacePageVisitor<(v8::internal::PageEvacuationMode)0>*,v8::internal::LiveObjectVisitor::IterationMode)
    ::trace_event_unique_atomic3207 =
         (byte *)(**(code **)(*plVar7 + 0x10))(plVar7,"disabled-by-default-v8.gc");
  }
  pbVar4 = VisitGreyObjectsNoFail<v8::internal::EvacuateNewSpacePageVisitor<(v8::internal::PageEvacuationMode)0>,v8::internal::MinorNonAtomicMarkingState>(v8::internal::MemoryChunk*,v8::internal::MinorNonAtomicMarkingState*,v8::internal::EvacuateNewSpacePageVisitor<(v8::internal::PageEvacuationMode)0>*,v8::internal::LiveObjectVisitor::IterationMode)
           ::trace_event_unique_atomic3207;
  local_138 = (byte **)0x0;
  if ((*VisitGreyObjectsNoFail<v8::internal::EvacuateNewSpacePageVisitor<(v8::internal::PageEvacuationMode)0>,v8::internal::MinorNonAtomicMarkingState>(v8::internal::MemoryChunk*,v8::internal::MinorNonAtomicMarkingState*,v8::internal::EvacuateNewSpacePageVisitor<(v8::internal::PageEvacuationMode)0>*,v8::internal::LiveObjectVisitor::IterationMode)
        ::trace_event_unique_atomic3207 & 5) != 0) {
    local_b8 = (long *)0x0;
    local_b0 = (long *)0x0;
    plVar7 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar8 = (**(code **)(*plVar7 + 0x18))
                      (plVar7,0x58,pbVar4,"LiveObjectVisitor::VisitGreyObjectsNoFail",0,0,0,0,0,0,0,
                       &local_b8,0);
    plVar7 = local_b0;
    local_b0 = (long *)0x0;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 8))();
    }
    plVar7 = local_b8;
    local_b8 = (long *)0x0;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 8))();
    }
    local_138 = &local_130;
    local_128 = "LiveObjectVisitor::VisitGreyObjectsNoFail";
    local_130 = pbVar4;
    local_120 = uVar8;
  }
  if ((*(byte *)(param_1 + 1) >> 5 & 1) != 0) {
    plVar7 = (long *)(param_1[4] + 1);
    uVar12 = (long)plVar7 - ((ulong)plVar7 & 0xfffffffffffc0000);
    puVar1 = (uint *)(*(long *)(((ulong)plVar7 & 0xfffffffffffc0000) + 0x108) +
                     (uVar12 >> 7 & 0x1ffffff) * 4);
    uVar10 = 1 << (ulong)((uint)(uVar12 >> 2) & 0x1f);
    local_b8 = plVar7;
    if ((uVar10 & *puVar1) != 0) {
      uVar10 = uVar10 << 1;
      bVar5 = uVar10 == 0;
      if (bVar5) {
        uVar10 = 1;
      }
      if ((puVar1[bVar5] & uVar10) == 0) {
        uVar6 = HeapObject::SizeFromMap
                          ((HeapObject *)&local_b8,
                           (ulong)plVar7 & 0xffffffff00000000 | (ulong)*(uint *)param_1[4]);
        EvacuateNewSpacePageVisitor<(v8::internal::PageEvacuationMode)0>::Visit
                  (param_3,plVar7,uVar6);
      }
    }
    goto joined_r0x00ff6250;
  }
  lVar13 = param_1[0x21];
  lVar2 = param_1[5];
  lVar11 = param_1[3];
  uStack_a8 = *(undefined8 *)(lVar11 + -0x87c0);
  local_b0 = *(long **)(lVar11 + -0x87c8);
  local_a0 = *(undefined8 *)(lVar11 + -0x87d0);
  uVar15 = (ulong)(lVar2 - (long)param_1) >> 7 & 0x1ffffff;
  uVar12 = (ulong)(param_1[4] - (long)param_1) >> 7 & 0x1ffffff;
  uVar14 = (uint)uVar15;
  local_84 = 0;
  local_68 = 0;
  uVar10 = (uint)uVar12;
  local_80 = param_1;
  if (uVar10 != 0) {
    local_80 = (long *)((param_1[4] - (long)param_1 & 0xffffff80U) + (long)param_1);
    local_84 = uVar10;
  }
  local_e8 = uVar14;
  local_b8 = param_1;
  plStack_98 = param_1;
  local_90 = lVar13;
  local_88 = uVar14;
  if (uVar10 < uVar14) {
    local_70 = *(undefined4 *)(lVar13 + uVar12 * 4);
    local_78 = local_80;
    LiveObjectRange<(v8::internal::LiveObjectIterationMode)1>::iterator::AdvanceToNextValidObject
              ((iterator *)&local_b8);
    lVar11 = param_1[3];
    local_e8 = (uint)((int)param_1[5] - (int)param_1) >> 7;
  }
  uStack_108 = *(undefined8 *)(lVar11 + -0x87c0);
  local_110 = *(undefined8 *)(lVar11 + -0x87c8);
  local_100 = *(undefined8 *)(lVar11 + -0x87d0);
  local_e4 = 0;
  local_c8 = 0;
  local_118 = param_1;
  local_f8 = param_1;
  lStack_f0 = lVar13;
  if (uVar14 == 0) {
    local_e0 = param_1;
    if (local_e8 != 0) goto LAB_00ff62d4;
LAB_00ff62fc:
    iVar9 = 0;
  }
  else {
    local_e0 = (long *)((lVar2 - (long)param_1 & 0xffffff80U) + (long)param_1);
    local_e4 = uVar14;
    if (local_e8 <= uVar14) goto LAB_00ff62fc;
LAB_00ff62d4:
    local_d0 = *(undefined4 *)(lVar13 + uVar15 * 4);
    local_d8 = local_e0;
    LiveObjectRange<(v8::internal::LiveObjectIterationMode)1>::iterator::AdvanceToNextValidObject
              ((iterator *)&local_118);
    iVar9 = (int)local_c8;
  }
  if (iVar9 != (int)local_68) {
    do {
      EvacuateNewSpacePageVisitor<(v8::internal::PageEvacuationMode)0>::Visit
                (param_3,local_68,local_60);
      LiveObjectRange<(v8::internal::LiveObjectIterationMode)1>::iterator::AdvanceToNextValidObject
                ((iterator *)&local_b8);
    } while ((int)local_68 != (int)local_c8);
  }
joined_r0x00ff6250:
  if (param_4 == 1) {
    memset((void *)param_1[0x21],0,0x2000);
    param_1[0x20] = 0;
  }
  if ((local_138 != (byte **)0x0) && (*local_130 != 0)) {
    plVar7 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar7 + 0x28))(plVar7,local_130,local_128,local_120);
  }
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

