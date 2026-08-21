
/* v8::internal::ToSpaceUpdatingItem<v8::internal::MinorNonAtomicMarkingState>::ProcessVisitLive()
    */

void __thiscall
v8::internal::ToSpaceUpdatingItem<v8::internal::MinorNonAtomicMarkingState>::ProcessVisitLive
          (ToSpaceUpdatingItem<v8::internal::MinorNonAtomicMarkingState> *this)

{
  long lVar1;
  long lVar2;
  byte *pbVar3;
  undefined4 uVar4;
  long *plVar5;
  undefined8 uVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  ulong local_148;
  ulong uStack_140;
  undefined **local_138;
  undefined **ppuStack_130;
  byte **local_128;
  byte *local_120;
  char *local_118;
  undefined8 local_110;
  long *local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  long *plStack_e8;
  long local_e0;
  uint local_d8;
  uint local_d4;
  long *local_d0;
  long *local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  long *local_a8;
  long *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long *plStack_88;
  long local_80;
  uint local_78;
  uint local_74;
  long *local_70;
  long *local_68;
  undefined4 local_60;
  ulong local_58;
  uint local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (ProcessVisitLive()::trace_event_unique_atomic3383 == (byte *)0x0) {
    plVar5 = (long *)tracing::TraceEventHelper::GetTracingController();
    ProcessVisitLive()::trace_event_unique_atomic3383 =
         (byte *)(**(code **)(*plVar5 + 0x10))(plVar5,"disabled-by-default-v8.gc");
  }
  pbVar3 = ProcessVisitLive()::trace_event_unique_atomic3383;
  local_128 = (byte **)0x0;
  if ((*ProcessVisitLive()::trace_event_unique_atomic3383 & 5) != 0) {
    local_a8 = (long *)0x0;
    local_a0 = (long *)0x0;
    plVar5 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar6 = (**(code **)(*plVar5 + 0x18))
                      (plVar5,0x58,pbVar3,"ToSpaceUpdatingItem::ProcessVisitLive",0,0,0,0,0,0,0,
                       &local_a8,0);
    plVar5 = local_a0;
    local_a0 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    plVar5 = local_a8;
    local_a8 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    local_128 = &local_120;
    local_118 = "ToSpaceUpdatingItem::ProcessVisitLive";
    local_120 = pbVar3;
    local_110 = uVar6;
  }
  local_138 = &PTR__PointersUpdatingVisitor_01ca8690;
  ppuStack_130 = &PTR__PointersUpdatingVisitor_01ca8738;
  plVar5 = *(long **)(this + 0x10);
  lVar10 = plVar5[0x21];
  lVar1 = plVar5[5];
  lVar9 = plVar5[3];
  uStack_98 = *(undefined8 *)(lVar9 + -0x87c0);
  local_a0 = *(long **)(lVar9 + -0x87c8);
  uVar12 = (ulong)(lVar1 - (long)plVar5) >> 7 & 0x1ffffff;
  uVar8 = (ulong)(plVar5[4] - (long)plVar5) >> 7 & 0x1ffffff;
  local_90 = *(undefined8 *)(lVar9 + -0x87d0);
  uVar11 = (uint)uVar12;
  local_74 = 0;
  local_58 = 0;
  uVar7 = (uint)uVar8;
  local_a8 = plVar5;
  plStack_88 = plVar5;
  local_80 = lVar10;
  local_78 = uVar11;
  if (uVar7 == 0) {
    local_70 = plVar5;
    if (uVar11 == 0) goto LAB_00fee290;
  }
  else {
    local_70 = (long *)((plVar5[4] - (long)plVar5 & 0xffffff80U) + (long)plVar5);
    local_138 = &PTR__PointersUpdatingVisitor_01ca8690;
    ppuStack_130 = &PTR__PointersUpdatingVisitor_01ca8738;
    local_74 = uVar7;
    if (uVar11 <= uVar7) goto LAB_00fee290;
  }
  local_60 = *(undefined4 *)(lVar10 + uVar8 * 4);
  local_138 = &PTR__PointersUpdatingVisitor_01ca8690;
  ppuStack_130 = &PTR__PointersUpdatingVisitor_01ca8738;
  local_68 = local_70;
  LiveObjectRange<(v8::internal::LiveObjectIterationMode)2>::iterator::AdvanceToNextValidObject
            ((iterator *)&local_a8);
LAB_00fee290:
  lVar9 = plVar5[3];
  uStack_f8 = *(undefined8 *)(lVar9 + -0x87c0);
  local_100 = *(undefined8 *)(lVar9 + -0x87c8);
  local_f0 = *(undefined8 *)(lVar9 + -0x87d0);
  local_b8 = 0;
  local_d8 = (uint)((int)plVar5[5] - (int)plVar5) >> 7;
  local_d4 = 0;
  local_d0 = plVar5;
  if (uVar11 != 0) {
    local_d0 = (long *)((lVar1 - (long)plVar5 & 0xffffff80U) + (long)plVar5);
    local_d4 = uVar11;
  }
  local_108 = plVar5;
  plStack_e8 = plVar5;
  local_e0 = lVar10;
  if (uVar11 < local_d8) {
    local_c0 = *(undefined4 *)(lVar10 + uVar12 * 4);
    local_c8 = local_d0;
    LiveObjectRange<(v8::internal::LiveObjectIterationMode)2>::iterator::AdvanceToNextValidObject
              ((iterator *)&local_108);
  }
  else {
    local_b8._0_4_ = 0;
  }
  if ((int)local_b8 != (int)local_58) {
    do {
      uStack_140 = (ulong)local_50;
      local_148 = local_58;
      uVar8 = local_58 & 0xffffffff00000000 | (ulong)*(uint *)(local_58 - 1);
      uVar4 = HeapObject::SizeFromMap((HeapObject *)&local_148,uVar8);
      BodyDescriptorApply<v8::internal::CallIterateBody,void,v8::internal::Map,v8::internal::HeapObject,int,v8::internal::PointersUpdatingVisitor*>
                (*(undefined2 *)(uVar8 + 7),uVar8,local_148,uVar4,&local_138);
      LiveObjectRange<(v8::internal::LiveObjectIterationMode)2>::iterator::AdvanceToNextValidObject
                ((iterator *)&local_a8);
    } while ((int)local_58 != (int)local_b8);
  }
  if ((local_128 != (byte **)0x0) && (*local_120 != 0)) {
    plVar5 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar5 + 0x28))(plVar5,local_120,local_118,local_110);
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

