
/* v8::internal::ToSpaceUpdatingItem<v8::internal::MajorNonAtomicMarkingState>::ProcessVisitAll() */

void __thiscall
v8::internal::ToSpaceUpdatingItem<v8::internal::MajorNonAtomicMarkingState>::ProcessVisitAll
          (ToSpaceUpdatingItem<v8::internal::MajorNonAtomicMarkingState> *this)

{
  byte *pbVar1;
  undefined **ppuVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  uint *puVar7;
  ulong local_68;
  byte **local_60;
  byte *local_58;
  char *local_50;
  undefined8 local_48;
  undefined **local_40;
  undefined **local_38;
  
  if (ProcessVisitAll()::trace_event_unique_atomic3370 == (byte *)0x0) {
    plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
    ProcessVisitAll()::trace_event_unique_atomic3370 =
         (byte *)(**(code **)(*plVar4 + 0x10))(plVar4,"disabled-by-default-v8.gc");
  }
  pbVar1 = ProcessVisitAll()::trace_event_unique_atomic3370;
  local_60 = (byte **)0x0;
  if ((*ProcessVisitAll()::trace_event_unique_atomic3370 & 5) != 0) {
    local_40 = (undefined **)0x0;
    local_38 = (undefined **)0x0;
    plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar5 = (**(code **)(*plVar4 + 0x18))
                      (plVar4,0x58,pbVar1,"ToSpaceUpdatingItem::ProcessVisitAll",0,0,0,0,0,0,0,
                       &local_40,0);
    ppuVar2 = local_38;
    local_38 = (undefined **)0x0;
    if (ppuVar2 != (undefined **)0x0) {
      (**(code **)((long)*ppuVar2 + 8))();
    }
    ppuVar2 = local_40;
    local_40 = (undefined **)0x0;
    if (ppuVar2 != (undefined **)0x0) {
      (**(code **)(*ppuVar2 + 8))();
    }
    local_60 = &local_58;
    local_50 = "ToSpaceUpdatingItem::ProcessVisitAll";
    local_58 = pbVar1;
    local_48 = uVar5;
  }
  local_40 = &PTR__PointersUpdatingVisitor_01ca8690;
  local_38 = &PTR__PointersUpdatingVisitor_01ca8738;
  puVar7 = *(uint **)(this + 0x18);
  if (puVar7 < *(uint **)(this + 0x20)) {
    do {
      local_68 = (long)puVar7 + 1;
      uVar6 = local_68 & 0xffffffff00000000 | (ulong)*puVar7;
      iVar3 = HeapObject::SizeFromMap((HeapObject *)&local_68,uVar6);
      BodyDescriptorApply<v8::internal::CallIterateBody,void,v8::internal::Map,v8::internal::HeapObject,int,v8::internal::PointersUpdatingVisitor*>
                (*(undefined2 *)(uVar6 + 7),uVar6,local_68,iVar3,&local_40);
      puVar7 = (uint *)((long)puVar7 + (long)iVar3);
    } while (puVar7 < *(uint **)(this + 0x20));
  }
  if ((local_60 != (byte **)0x0) && (*local_58 != 0)) {
    plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar4 + 0x28))(plVar4,local_58,local_50,local_48);
  }
  return;
}

