
/* void 
   v8::internal::LiveObjectVisitor::VisitBlackObjectsNoFail<v8::internal::EvacuateNewSpacePageVisitor<(v8::internal::PageEvacuationMode)1>,
   v8::internal::MajorNonAtomicMarkingState>(v8::internal::MemoryChunk*,
   v8::internal::MajorNonAtomicMarkingState*,
   v8::internal::EvacuateNewSpacePageVisitor<(v8::internal::PageEvacuationMode)1>*,
   v8::internal::LiveObjectVisitor::IterationMode) */

void v8::internal::LiveObjectVisitor::
     VisitBlackObjectsNoFail<v8::internal::EvacuateNewSpacePageVisitor<(v8::internal::PageEvacuationMode)1>,v8::internal::MajorNonAtomicMarkingState>
               (long *param_1,undefined8 param_2,long param_3,int param_4)

{
  uint *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  byte *pbVar5;
  bool bVar6;
  undefined4 uVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  uint *puVar13;
  uint uVar14;
  ulong uVar15;
  byte **local_140;
  byte *local_138;
  char *local_130;
  undefined8 local_128;
  ulong local_120;
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
  ulong local_68;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  if (VisitBlackObjectsNoFail<v8::internal::EvacuateNewSpacePageVisitor<(v8::internal::PageEvacuationMode)1>,v8::internal::MajorNonAtomicMarkingState>(v8::internal::MemoryChunk*,v8::internal::MajorNonAtomicMarkingState*,v8::internal::EvacuateNewSpacePageVisitor<(v8::internal::PageEvacuationMode)1>*,v8::internal::LiveObjectVisitor::IterationMode)
      ::trace_event_unique_atomic3178 == (byte *)0x0) {
    plVar8 = (long *)tracing::TraceEventHelper::GetTracingController();
    VisitBlackObjectsNoFail<v8::internal::EvacuateNewSpacePageVisitor<(v8::internal::PageEvacuationMode)1>,v8::internal::MajorNonAtomicMarkingState>(v8::internal::MemoryChunk*,v8::internal::MajorNonAtomicMarkingState*,v8::internal::EvacuateNewSpacePageVisitor<(v8::internal::PageEvacuationMode)1>*,v8::internal::LiveObjectVisitor::IterationMode)
    ::trace_event_unique_atomic3178 =
         (byte *)(**(code **)(*plVar8 + 0x10))(plVar8,"disabled-by-default-v8.gc");
  }
  pbVar5 = VisitBlackObjectsNoFail<v8::internal::EvacuateNewSpacePageVisitor<(v8::internal::PageEvacuationMode)1>,v8::internal::MajorNonAtomicMarkingState>(v8::internal::MemoryChunk*,v8::internal::MajorNonAtomicMarkingState*,v8::internal::EvacuateNewSpacePageVisitor<(v8::internal::PageEvacuationMode)1>*,v8::internal::LiveObjectVisitor::IterationMode)
           ::trace_event_unique_atomic3178;
  local_140 = (byte **)0x0;
  if ((*VisitBlackObjectsNoFail<v8::internal::EvacuateNewSpacePageVisitor<(v8::internal::PageEvacuationMode)1>,v8::internal::MajorNonAtomicMarkingState>(v8::internal::MemoryChunk*,v8::internal::MajorNonAtomicMarkingState*,v8::internal::EvacuateNewSpacePageVisitor<(v8::internal::PageEvacuationMode)1>*,v8::internal::LiveObjectVisitor::IterationMode)
        ::trace_event_unique_atomic3178 & 5) != 0) {
    local_b8 = (long *)0x0;
    local_b0 = (long *)0x0;
    plVar8 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar9 = (**(code **)(*plVar8 + 0x18))
                      (plVar8,0x58,pbVar5,"LiveObjectVisitor::VisitBlackObjectsNoFail",0,0,0,0,0,0,0
                       ,&local_b8,0);
    plVar8 = local_b0;
    local_b0 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 8))();
    }
    plVar8 = local_b8;
    local_b8 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 8))();
    }
    local_140 = &local_138;
    local_130 = "LiveObjectVisitor::VisitBlackObjectsNoFail";
    local_138 = pbVar5;
    local_128 = uVar9;
  }
  if ((*(byte *)(param_1 + 1) >> 5 & 1) != 0) {
    puVar13 = (uint *)param_1[4];
    plVar8 = (long *)((long)puVar13 + 1);
    uVar12 = (long)plVar8 - ((ulong)plVar8 & 0xfffffffffffc0000);
    puVar1 = (uint *)(*(long *)(((ulong)plVar8 & 0xfffffffffffc0000) + 0x10) +
                     (uVar12 >> 7 & 0x1ffffff) * 4);
    uVar11 = 1 << (ulong)((uint)(uVar12 >> 2) & 0x1f);
    local_118 = plVar8;
    if ((uVar11 & *puVar1) != 0) {
      uVar11 = uVar11 << 1;
      bVar6 = uVar11 == 0;
      if (bVar6) {
        uVar11 = 1;
      }
      if ((puVar1[bVar6] & uVar11) != 0) {
        HeapObject::SizeFromMap
                  ((HeapObject *)&local_118,(ulong)plVar8 & 0xffffffff00000000 | (ulong)*puVar13);
        uVar9 = *(undefined8 *)(param_3 + 0x10);
        uVar12 = (ulong)plVar8 & 0xffffffff00000000 | (ulong)*puVar13;
        local_b8 = plVar8;
        uVar7 = HeapObject::SizeFromMap((HeapObject *)&local_b8,uVar12);
        BodyDescriptorApply<v8::internal::CallIterateBody,void,v8::internal::Map,v8::internal::HeapObject,int,v8::internal::RecordMigratedSlotVisitor*>
                  (*(undefined2 *)(uVar12 + 7),uVar12,local_b8,uVar7,uVar9);
      }
    }
    goto joined_r0x00fc74c4;
  }
  lVar2 = param_1[2];
  lVar10 = param_1[3];
  lVar3 = param_1[5];
  uStack_a8 = *(undefined8 *)(lVar10 + -0x87c0);
  local_b0 = *(long **)(lVar10 + -0x87c8);
  local_a0 = *(undefined8 *)(lVar10 + -0x87d0);
  uVar15 = (ulong)(lVar3 - (long)param_1) >> 7 & 0x1ffffff;
  uVar12 = (ulong)(param_1[4] - (long)param_1) >> 7 & 0x1ffffff;
  uVar14 = (uint)uVar15;
  local_84 = 0;
  local_68 = 0;
  uVar11 = (uint)uVar12;
  local_80 = param_1;
  if (uVar11 != 0) {
    local_80 = (long *)((param_1[4] - (long)param_1 & 0xffffff80U) + (long)param_1);
    local_84 = uVar11;
  }
  local_e8 = uVar14;
  local_b8 = param_1;
  plStack_98 = param_1;
  local_90 = lVar2;
  local_88 = uVar14;
  if (uVar11 < uVar14) {
    local_70 = *(undefined4 *)(lVar2 + uVar12 * 4);
    local_78 = local_80;
    LiveObjectRange<(v8::internal::LiveObjectIterationMode)0>::iterator::AdvanceToNextValidObject
              ((iterator *)&local_b8);
    lVar10 = param_1[3];
    local_e8 = (uint)((int)param_1[5] - (int)param_1) >> 7;
  }
  uStack_108 = *(undefined8 *)(lVar10 + -0x87c0);
  local_110 = *(undefined8 *)(lVar10 + -0x87c8);
  local_100 = *(undefined8 *)(lVar10 + -0x87d0);
  local_e4 = 0;
  local_c8 = 0;
  local_118 = param_1;
  local_f8 = param_1;
  lStack_f0 = lVar2;
  if (uVar14 == 0) {
    local_e0 = param_1;
    if (local_e8 != 0) goto LAB_00fc7548;
LAB_00fc7570:
    local_c8._0_4_ = 0;
  }
  else {
    local_e0 = (long *)((lVar3 - (long)param_1 & 0xffffff80U) + (long)param_1);
    local_e4 = uVar14;
    if (local_e8 <= uVar14) goto LAB_00fc7570;
LAB_00fc7548:
    local_d0 = *(undefined4 *)(lVar2 + uVar15 * 4);
    local_d8 = local_e0;
    LiveObjectRange<(v8::internal::LiveObjectIterationMode)0>::iterator::AdvanceToNextValidObject
              ((iterator *)&local_118);
  }
  if ((int)local_c8 != (int)local_68) {
    do {
      local_120 = local_68;
      uVar9 = *(undefined8 *)(param_3 + 0x10);
      uVar12 = local_68 & 0xffffffff00000000 | (ulong)*(uint *)(local_68 - 1);
      uVar7 = HeapObject::SizeFromMap((HeapObject *)&local_120,uVar12);
      BodyDescriptorApply<v8::internal::CallIterateBody,void,v8::internal::Map,v8::internal::HeapObject,int,v8::internal::RecordMigratedSlotVisitor*>
                (*(undefined2 *)(uVar12 + 7),uVar12,local_120,uVar7,uVar9);
      LiveObjectRange<(v8::internal::LiveObjectIterationMode)0>::iterator::AdvanceToNextValidObject
                ((iterator *)&local_b8);
    } while ((int)local_68 != (int)local_c8);
  }
joined_r0x00fc74c4:
  if (param_4 == 1) {
    memset((void *)param_1[2],0,0x2000);
    param_1[0xd] = 0;
  }
  if ((local_140 != (byte **)0x0) && (*local_138 != 0)) {
    plVar8 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar8 + 0x28))(plVar8,local_138,local_130,local_128);
  }
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

