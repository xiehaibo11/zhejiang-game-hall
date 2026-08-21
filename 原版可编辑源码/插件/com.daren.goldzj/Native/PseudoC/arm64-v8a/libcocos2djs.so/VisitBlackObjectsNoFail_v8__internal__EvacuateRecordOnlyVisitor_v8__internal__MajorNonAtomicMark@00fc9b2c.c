
/* void 
   v8::internal::LiveObjectVisitor::VisitBlackObjectsNoFail<v8::internal::EvacuateRecordOnlyVisitor,
   v8::internal::MajorNonAtomicMarkingState>(v8::internal::MemoryChunk*,
   v8::internal::MajorNonAtomicMarkingState*, v8::internal::EvacuateRecordOnlyVisitor*,
   v8::internal::LiveObjectVisitor::IterationMode) */

void v8::internal::LiveObjectVisitor::
     VisitBlackObjectsNoFail<v8::internal::EvacuateRecordOnlyVisitor,v8::internal::MajorNonAtomicMarkingState>
               (undefined **param_1,undefined8 param_2,long param_3,int param_4)

{
  undefined **ppuVar1;
  uint *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  byte *pbVar6;
  bool bVar7;
  undefined4 uVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined *puVar11;
  uint uVar12;
  ulong uVar13;
  uint *puVar14;
  uint uVar15;
  ulong uVar16;
  byte **local_158;
  byte *local_150;
  char *local_148;
  undefined8 local_140;
  undefined **local_138;
  undefined8 uStack_130;
  long local_128;
  ulong local_120;
  undefined **local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined **local_f8;
  undefined *puStack_f0;
  uint local_e8;
  uint local_e4;
  undefined **local_e0;
  undefined **local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined **local_b8;
  long *local_b0;
  long lStack_a8;
  undefined8 local_a0;
  undefined **ppuStack_98;
  undefined *local_90;
  uint local_88;
  uint local_84;
  undefined **local_80;
  undefined **local_78;
  undefined4 local_70;
  ulong local_68;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  if (VisitBlackObjectsNoFail<v8::internal::EvacuateRecordOnlyVisitor,v8::internal::MajorNonAtomicMarkingState>(v8::internal::MemoryChunk*,v8::internal::MajorNonAtomicMarkingState*,v8::internal::EvacuateRecordOnlyVisitor*,v8::internal::LiveObjectVisitor::IterationMode)
      ::trace_event_unique_atomic3178 == (byte *)0x0) {
    plVar9 = (long *)tracing::TraceEventHelper::GetTracingController();
    VisitBlackObjectsNoFail<v8::internal::EvacuateRecordOnlyVisitor,v8::internal::MajorNonAtomicMarkingState>(v8::internal::MemoryChunk*,v8::internal::MajorNonAtomicMarkingState*,v8::internal::EvacuateRecordOnlyVisitor*,v8::internal::LiveObjectVisitor::IterationMode)
    ::trace_event_unique_atomic3178 =
         (byte *)(**(code **)(*plVar9 + 0x10))(plVar9,"disabled-by-default-v8.gc");
  }
  pbVar6 = VisitBlackObjectsNoFail<v8::internal::EvacuateRecordOnlyVisitor,v8::internal::MajorNonAtomicMarkingState>(v8::internal::MemoryChunk*,v8::internal::MajorNonAtomicMarkingState*,v8::internal::EvacuateRecordOnlyVisitor*,v8::internal::LiveObjectVisitor::IterationMode)
           ::trace_event_unique_atomic3178;
  local_158 = (byte **)0x0;
  if ((*VisitBlackObjectsNoFail<v8::internal::EvacuateRecordOnlyVisitor,v8::internal::MajorNonAtomicMarkingState>(v8::internal::MemoryChunk*,v8::internal::MajorNonAtomicMarkingState*,v8::internal::EvacuateRecordOnlyVisitor*,v8::internal::LiveObjectVisitor::IterationMode)
        ::trace_event_unique_atomic3178 & 5) != 0) {
    local_b8 = (undefined **)0x0;
    local_b0 = (long *)0x0;
    plVar9 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar10 = (**(code **)(*plVar9 + 0x18))
                       (plVar9,0x58,pbVar6,"LiveObjectVisitor::VisitBlackObjectsNoFail",0,0,0,0,0,0,
                        0,&local_b8,0);
    plVar9 = local_b0;
    local_b0 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 8))();
    }
    ppuVar1 = local_b8;
    local_b8 = (undefined **)0x0;
    if (ppuVar1 != (undefined **)0x0) {
      (**(code **)(*ppuVar1 + 8))();
    }
    local_158 = &local_150;
    local_148 = "LiveObjectVisitor::VisitBlackObjectsNoFail";
    local_150 = pbVar6;
    local_140 = uVar10;
  }
  if ((*(byte *)(param_1 + 1) >> 5 & 1) != 0) {
    puVar14 = (uint *)param_1[4];
    ppuVar1 = (undefined **)((long)puVar14 + 1);
    uVar13 = (long)ppuVar1 - ((ulong)ppuVar1 & 0xfffffffffffc0000);
    puVar2 = (uint *)(*(long *)(((ulong)ppuVar1 & 0xfffffffffffc0000) + 0x10) +
                     (uVar13 >> 7 & 0x1ffffff) * 4);
    uVar12 = 1 << (ulong)((uint)(uVar13 >> 2) & 0x1f);
    local_138 = ppuVar1;
    if ((uVar12 & *puVar2) != 0) {
      uVar12 = uVar12 << 1;
      bVar7 = uVar12 == 0;
      if (bVar7) {
        uVar12 = 1;
      }
      if ((puVar2[bVar7] & uVar12) != 0) {
        HeapObject::SizeFromMap
                  ((HeapObject *)&local_138,(ulong)ppuVar1 & 0xffffffff00000000 | (ulong)*puVar14);
        lStack_a8 = *(long *)(param_3 + 8);
        local_b0 = *(long **)(lStack_a8 + 0x800);
        local_b8 = &PTR__ObjectVisitor_01ca85c8;
        uVar13 = (ulong)ppuVar1 & 0xffffffff00000000 | (ulong)*puVar14;
        local_118 = ppuVar1;
        uVar8 = HeapObject::SizeFromMap((HeapObject *)&local_118,uVar13);
        BodyDescriptorApply<v8::internal::CallIterateBody,void,v8::internal::Map,v8::internal::HeapObject,int,v8::internal::RecordMigratedSlotVisitor*>
                  (*(undefined2 *)(uVar13 + 7),uVar13,local_118,uVar8,&local_b8);
      }
    }
    goto joined_r0x00fc9d58;
  }
  puVar3 = param_1[2];
  puVar11 = param_1[3];
  puVar4 = param_1[5];
  lStack_a8 = *(long *)(puVar11 + -0x87c0);
  local_b0 = *(long **)(puVar11 + -0x87c8);
  local_a0 = *(undefined8 *)(puVar11 + -0x87d0);
  uVar16 = (ulong)((long)puVar4 - (long)param_1) >> 7 & 0x1ffffff;
  uVar13 = (ulong)((long)param_1[4] - (long)param_1) >> 7 & 0x1ffffff;
  uVar15 = (uint)uVar16;
  local_84 = 0;
  local_68 = 0;
  uVar12 = (uint)uVar13;
  local_80 = param_1;
  if (uVar12 != 0) {
    local_80 = (undefined **)(((long)param_1[4] - (long)param_1 & 0xffffff80U) + (long)param_1);
    local_84 = uVar12;
  }
  local_e8 = uVar15;
  local_b8 = param_1;
  ppuStack_98 = param_1;
  local_90 = puVar3;
  local_88 = uVar15;
  if (uVar12 < uVar15) {
    local_70 = *(undefined4 *)(puVar3 + uVar13 * 4);
    local_78 = local_80;
    LiveObjectRange<(v8::internal::LiveObjectIterationMode)0>::iterator::AdvanceToNextValidObject
              ((iterator *)&local_b8);
    puVar11 = param_1[3];
    local_e8 = (uint)(*(int *)(param_1 + 5) - (int)param_1) >> 7;
  }
  uStack_108 = *(undefined8 *)(puVar11 + -0x87c0);
  local_110 = *(undefined8 *)(puVar11 + -0x87c8);
  local_100 = *(undefined8 *)(puVar11 + -0x87d0);
  local_e4 = 0;
  local_c8 = 0;
  local_118 = param_1;
  local_f8 = param_1;
  puStack_f0 = puVar3;
  if (uVar15 == 0) {
    local_e0 = param_1;
    if (local_e8 != 0) goto LAB_00fc9ddc;
LAB_00fc9e04:
    local_c8._0_4_ = 0;
  }
  else {
    local_e0 = (undefined **)(((long)puVar4 - (long)param_1 & 0xffffff80U) + (long)param_1);
    local_e4 = uVar15;
    if (local_e8 <= uVar15) goto LAB_00fc9e04;
LAB_00fc9ddc:
    local_d0 = *(undefined4 *)(puVar3 + uVar16 * 4);
    local_d8 = local_e0;
    LiveObjectRange<(v8::internal::LiveObjectIterationMode)0>::iterator::AdvanceToNextValidObject
              ((iterator *)&local_118);
  }
  if ((int)local_c8 != (int)local_68) {
    do {
      local_120 = local_68;
      local_128 = *(long *)(param_3 + 8);
      uStack_130 = *(undefined8 *)(local_128 + 0x800);
      uVar13 = local_68 & 0xffffffff00000000 | (ulong)*(uint *)(local_68 - 1);
      local_138 = &PTR__ObjectVisitor_01ca85c8;
      uVar8 = HeapObject::SizeFromMap((HeapObject *)&local_120,uVar13);
      BodyDescriptorApply<v8::internal::CallIterateBody,void,v8::internal::Map,v8::internal::HeapObject,int,v8::internal::RecordMigratedSlotVisitor*>
                (*(undefined2 *)(uVar13 + 7),uVar13,local_120,uVar8,&local_138);
      LiveObjectRange<(v8::internal::LiveObjectIterationMode)0>::iterator::AdvanceToNextValidObject
                ((iterator *)&local_b8);
    } while ((int)local_68 != (int)local_c8);
  }
joined_r0x00fc9d58:
  if (param_4 == 1) {
    memset(param_1[2],0,0x2000);
    param_1[0xd] = (undefined *)0x0;
  }
  if ((local_158 != (byte **)0x0) && (*local_150 != 0)) {
    plVar9 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar9 + 0x28))(plVar9,local_150,local_148,local_140);
  }
  if (*(long *)(lVar5 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

