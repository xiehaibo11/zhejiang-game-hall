
/* void 
   v8::internal::LiveObjectVisitor::VisitGreyObjectsNoFail<v8::internal::EvacuateNewSpacePageVisitor<(v8::internal::PageEvacuationMode)1>,
   v8::internal::MinorNonAtomicMarkingState>(v8::internal::MemoryChunk*,
   v8::internal::MinorNonAtomicMarkingState*,
   v8::internal::EvacuateNewSpacePageVisitor<(v8::internal::PageEvacuationMode)1>*,
   v8::internal::LiveObjectVisitor::IterationMode) */

void v8::internal::LiveObjectVisitor::
     VisitGreyObjectsNoFail<v8::internal::EvacuateNewSpacePageVisitor<(v8::internal::PageEvacuationMode)1>,v8::internal::MinorNonAtomicMarkingState>
               (long *param_1,undefined8 param_2,long param_3,int param_4)

{
  uint *puVar1;
  long lVar2;
  long lVar3;
  byte *pbVar4;
  bool bVar5;
  undefined4 uVar6;
  long *plVar7;
  undefined8 uVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
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
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  if (VisitGreyObjectsNoFail<v8::internal::EvacuateNewSpacePageVisitor<(v8::internal::PageEvacuationMode)1>,v8::internal::MinorNonAtomicMarkingState>(v8::internal::MemoryChunk*,v8::internal::MinorNonAtomicMarkingState*,v8::internal::EvacuateNewSpacePageVisitor<(v8::internal::PageEvacuationMode)1>*,v8::internal::LiveObjectVisitor::IterationMode)
      ::trace_event_unique_atomic3207 == (byte *)0x0) {
    plVar7 = (long *)tracing::TraceEventHelper::GetTracingController();
    VisitGreyObjectsNoFail<v8::internal::EvacuateNewSpacePageVisitor<(v8::internal::PageEvacuationMode)1>,v8::internal::MinorNonAtomicMarkingState>(v8::internal::MemoryChunk*,v8::internal::MinorNonAtomicMarkingState*,v8::internal::EvacuateNewSpacePageVisitor<(v8::internal::PageEvacuationMode)1>*,v8::internal::LiveObjectVisitor::IterationMode)
    ::trace_event_unique_atomic3207 =
         (byte *)(**(code **)(*plVar7 + 0x10))(plVar7,"disabled-by-default-v8.gc");
  }
  pbVar4 = VisitGreyObjectsNoFail<v8::internal::EvacuateNewSpacePageVisitor<(v8::internal::PageEvacuationMode)1>,v8::internal::MinorNonAtomicMarkingState>(v8::internal::MemoryChunk*,v8::internal::MinorNonAtomicMarkingState*,v8::internal::EvacuateNewSpacePageVisitor<(v8::internal::PageEvacuationMode)1>*,v8::internal::LiveObjectVisitor::IterationMode)
           ::trace_event_unique_atomic3207;
  local_140 = (byte **)0x0;
  if ((*VisitGreyObjectsNoFail<v8::internal::EvacuateNewSpacePageVisitor<(v8::internal::PageEvacuationMode)1>,v8::internal::MinorNonAtomicMarkingState>(v8::internal::MemoryChunk*,v8::internal::MinorNonAtomicMarkingState*,v8::internal::EvacuateNewSpacePageVisitor<(v8::internal::PageEvacuationMode)1>*,v8::internal::LiveObjectVisitor::IterationMode)
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
    local_140 = &local_138;
    local_130 = "LiveObjectVisitor::VisitGreyObjectsNoFail";
    local_138 = pbVar4;
    local_128 = uVar8;
  }
  if ((*(byte *)(param_1 + 1) >> 5 & 1) != 0) {
    puVar13 = (uint *)param_1[4];
    plVar7 = (long *)((long)puVar13 + 1);
    uVar11 = (long)plVar7 - ((ulong)plVar7 & 0xfffffffffffc0000);
    puVar1 = (uint *)(*(long *)(((ulong)plVar7 & 0xfffffffffffc0000) + 0x108) +
                     (uVar11 >> 7 & 0x1ffffff) * 4);
    uVar9 = 1 << (ulong)((uint)(uVar11 >> 2) & 0x1f);
    local_118 = plVar7;
    if ((uVar9 & *puVar1) != 0) {
      uVar9 = uVar9 << 1;
      bVar5 = uVar9 == 0;
      if (bVar5) {
        uVar9 = 1;
      }
      if ((puVar1[bVar5] & uVar9) == 0) {
        HeapObject::SizeFromMap
                  ((HeapObject *)&local_118,(ulong)plVar7 & 0xffffffff00000000 | (ulong)*puVar13);
        uVar8 = *(undefined8 *)(param_3 + 0x10);
        uVar11 = (ulong)plVar7 & 0xffffffff00000000 | (ulong)*puVar13;
        local_b8 = plVar7;
        uVar6 = HeapObject::SizeFromMap((HeapObject *)&local_b8,uVar11);
        BodyDescriptorApply<v8::internal::CallIterateBody,void,v8::internal::Map,v8::internal::HeapObject,int,v8::internal::RecordMigratedSlotVisitor*>
                  (*(undefined2 *)(uVar11 + 7),uVar11,local_b8,uVar6,uVar8);
      }
    }
    goto joined_r0x00ff5ed4;
  }
  lVar12 = param_1[0x21];
  lVar2 = param_1[5];
  lVar10 = param_1[3];
  uStack_a8 = *(undefined8 *)(lVar10 + -0x87c0);
  local_b0 = *(long **)(lVar10 + -0x87c8);
  local_a0 = *(undefined8 *)(lVar10 + -0x87d0);
  uVar15 = (ulong)(lVar2 - (long)param_1) >> 7 & 0x1ffffff;
  uVar11 = (ulong)(param_1[4] - (long)param_1) >> 7 & 0x1ffffff;
  uVar14 = (uint)uVar15;
  local_84 = 0;
  local_68 = 0;
  uVar9 = (uint)uVar11;
  local_80 = param_1;
  if (uVar9 != 0) {
    local_80 = (long *)((param_1[4] - (long)param_1 & 0xffffff80U) + (long)param_1);
    local_84 = uVar9;
  }
  local_e8 = uVar14;
  local_b8 = param_1;
  plStack_98 = param_1;
  local_90 = lVar12;
  local_88 = uVar14;
  if (uVar9 < uVar14) {
    local_70 = *(undefined4 *)(lVar12 + uVar11 * 4);
    local_78 = local_80;
    LiveObjectRange<(v8::internal::LiveObjectIterationMode)1>::iterator::AdvanceToNextValidObject
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
  lStack_f0 = lVar12;
  if (uVar14 == 0) {
    local_e0 = param_1;
    if (local_e8 != 0) goto LAB_00ff5f58;
LAB_00ff5f80:
    local_c8._0_4_ = 0;
  }
  else {
    local_e0 = (long *)((lVar2 - (long)param_1 & 0xffffff80U) + (long)param_1);
    local_e4 = uVar14;
    if (local_e8 <= uVar14) goto LAB_00ff5f80;
LAB_00ff5f58:
    local_d0 = *(undefined4 *)(lVar12 + uVar15 * 4);
    local_d8 = local_e0;
    LiveObjectRange<(v8::internal::LiveObjectIterationMode)1>::iterator::AdvanceToNextValidObject
              ((iterator *)&local_118);
  }
  if ((int)local_c8 != (int)local_68) {
    do {
      local_120 = local_68;
      uVar8 = *(undefined8 *)(param_3 + 0x10);
      uVar11 = local_68 & 0xffffffff00000000 | (ulong)*(uint *)(local_68 - 1);
      uVar6 = HeapObject::SizeFromMap((HeapObject *)&local_120,uVar11);
      BodyDescriptorApply<v8::internal::CallIterateBody,void,v8::internal::Map,v8::internal::HeapObject,int,v8::internal::RecordMigratedSlotVisitor*>
                (*(undefined2 *)(uVar11 + 7),uVar11,local_120,uVar6,uVar8);
      LiveObjectRange<(v8::internal::LiveObjectIterationMode)1>::iterator::AdvanceToNextValidObject
                ((iterator *)&local_b8);
    } while ((int)local_68 != (int)local_c8);
  }
joined_r0x00ff5ed4:
  if (param_4 == 1) {
    memset((void *)param_1[0x21],0,0x2000);
    param_1[0x20] = 0;
  }
  if ((local_140 != (byte **)0x0) && (*local_138 != 0)) {
    plVar7 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar7 + 0x28))(plVar7,local_138,local_130,local_128);
  }
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

