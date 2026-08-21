
/* v8::internal::MinorMarkCompactCollector::CollectGarbage() */

void __thiscall
v8::internal::MinorMarkCompactCollector::CollectGarbage(MinorMarkCompactCollector *this)

{
  long *plVar1;
  long lVar2;
  byte *pbVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  code *pcVar7;
  MemoryChunk *pMVar8;
  byte **local_f0;
  byte *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined **local_d0;
  undefined **local_c8;
  Heap *local_c0;
  long local_b8;
  long *local_90;
  long *local_88;
  byte **local_80;
  byte *local_78;
  undefined8 local_70;
  undefined8 local_68;
  byte ***local_60;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  GCTracer::Scope::Scope((Scope *)&local_d0,*(undefined8 *)(*(long *)(this + 8) + 0x7f8),0x57);
  if (DAT_01d3f2c8 == (byte *)0x0) {
    plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3f2c8 = (byte *)(**(code **)(*plVar4 + 0x10))(plVar4,"disabled-by-default-v8.gc");
  }
  pbVar3 = DAT_01d3f2c8;
  local_80 = (byte **)0x0;
  if ((*DAT_01d3f2c8 & 5) != 0) {
    uVar5 = GCTracer::Scope::Name(0x57);
    local_90 = (long *)0x0;
    local_88 = (long *)0x0;
    plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar5 = (**(code **)(*plVar4 + 0x18))(plVar4,0x58,pbVar3,uVar5,0,0,0,0,0,0,0,&local_90,0);
    plVar4 = local_88;
    local_88 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    plVar4 = local_90;
    local_90 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    local_70 = GCTracer::Scope::Name(0x57);
    local_80 = &local_78;
    local_78 = pbVar3;
    local_68 = uVar5;
  }
  Sweeper::EnsureIterabilityCompleted
            (*(Sweeper **)(*(long *)(*(long *)(this + 8) + 0x800) + 0x26f8));
  plVar4 = *(long **)(this + 0x50);
  plVar1 = *(long **)(this + 0x58);
  if (plVar4 != plVar1) {
    do {
      lVar6 = *plVar4;
      if (((uint)*(ulong *)(lVar6 + 8) >> 0x11 & 1) != 0) {
        *(ulong *)(lVar6 + 8) = *(ulong *)(lVar6 + 8) & 0xfffffffffffdffff;
        memset(*(void **)(lVar6 + 0x108),0,0x2000);
        *(undefined8 *)(lVar6 + 0x100) = 0;
      }
      plVar4 = plVar4 + 1;
    } while (plVar1 != plVar4);
    plVar4 = *(long **)(this + 0x50);
  }
  *(long **)(this + 0x58) = plVar4;
  if ((local_80 != (byte **)0x0) && (*local_78 != 0)) {
    plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar4 + 0x28))(plVar4,local_78,local_70,local_68);
  }
  GCTracer::Scope::~Scope((Scope *)&local_d0);
  MarkLiveObjects(this);
  ClearNonLiveReferences(this);
  if (FLAG_verify_heap != '\0') {
    local_c0 = *(Heap **)(this + 8);
    local_d0 = &PTR_FUN_01ca88b8;
    local_c8 = &PTR_FUN_01ca8990;
    local_b8 = *(long *)(local_c0 + 0x808) + 0x69;
    FUN_00fd6280(&local_d0);
  }
  Evacuate(this);
  if (FLAG_verify_heap != '\0') {
    local_c0 = *(Heap **)(this + 8);
    local_d0 = &PTR_FUN_01ca89c8;
    local_c8 = &PTR_FUN_01ca8a88;
    Heap::IterateStrongRoots(local_c0,&local_c8,3);
    FUN_00fdac6c(&local_d0,*(undefined8 *)(local_c0 + 0xe8));
    FUN_00fdad80(&local_d0,*(undefined8 *)(local_c0 + 0xf0));
    FUN_00fdad80(&local_d0,*(undefined8 *)(local_c0 + 0xf8));
    FUN_00fdad80(&local_d0,*(undefined8 *)(local_c0 + 0x100));
  }
  GCTracer::Scope::Scope((Scope *)&local_d0,*(undefined8 *)(*(long *)(this + 8) + 0x7f8),0x55);
  if (DAT_01d3f2d0 == (byte *)0x0) {
    plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3f2d0 = (byte *)(**(code **)(*plVar4 + 0x10))(plVar4,"disabled-by-default-v8.gc");
  }
  pbVar3 = DAT_01d3f2d0;
  local_80 = (byte **)0x0;
  if ((*DAT_01d3f2d0 & 5) != 0) {
    uVar5 = GCTracer::Scope::Name(0x55);
    local_90 = (long *)0x0;
    local_88 = (long *)0x0;
    plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar5 = (**(code **)(*plVar4 + 0x18))(plVar4,0x58,pbVar3,uVar5,0,0,0,0,0,0,0,&local_90,0);
    plVar4 = local_88;
    local_88 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    plVar4 = local_90;
    local_90 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    local_70 = GCTracer::Scope::Name(0x55);
    local_80 = &local_78;
    local_78 = pbVar3;
    local_68 = uVar5;
  }
  IncrementalMarking::UpdateMarkingWorklistAfterScavenge
            (*(IncrementalMarking **)(*(long *)(this + 8) + 0x828));
  if ((local_80 != (byte **)0x0) && (*local_78 != 0)) {
    plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar4 + 0x28))(plVar4,local_78,local_70,local_68);
  }
  GCTracer::Scope::~Scope((Scope *)&local_d0);
  GCTracer::Scope::Scope((Scope *)&local_d0,*(undefined8 *)(*(long *)(this + 8) + 0x7f8),0x56);
  if (DAT_01d3f2d8 == (byte *)0x0) {
    plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3f2d8 = (byte *)(**(code **)(*plVar4 + 0x10))(plVar4,"disabled-by-default-v8.gc");
  }
  pbVar3 = DAT_01d3f2d8;
  local_f0 = (byte **)0x0;
  if ((*DAT_01d3f2d8 & 5) != 0) {
    uVar5 = GCTracer::Scope::Name(0x56);
    local_90 = (long *)0x0;
    local_88 = (long *)0x0;
    plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar5 = (**(code **)(*plVar4 + 0x18))(plVar4,0x58,pbVar3,uVar5,0,0,0,0,0,0,0,&local_90,0);
    plVar4 = local_88;
    local_88 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    plVar4 = local_90;
    local_90 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    local_e0 = GCTracer::Scope::Name(0x56);
    local_f0 = &local_e8;
    local_e8 = pbVar3;
    local_d8 = uVar5;
  }
  lVar6 = *(long *)(this + 8);
  pMVar8 = *(MemoryChunk **)(*(long *)(lVar6 + 0xe8) + 400);
  if (pMVar8 != (MemoryChunk *)0x0) {
    do {
      memset(*(void **)(pMVar8 + 0x108),0,0x2000);
      *(undefined8 *)(pMVar8 + 0x100) = 0;
      if (FLAG_concurrent_marking != '\0') {
        ConcurrentMarking::ClearMemoryChunkData
                  (*(ConcurrentMarking **)(*(long *)(this + 8) + 0x830),pMVar8);
      }
      pMVar8 = *(MemoryChunk **)(pMVar8 + 0xe0);
    } while (pMVar8 != (MemoryChunk *)0x0);
    lVar6 = *(long *)(this + 8);
  }
  local_80 = &PTR_FUN_01ca8f70;
  local_60 = &local_80;
  NewLargeObjectSpace::FreeDeadObjects
            (*(NewLargeObjectSpace **)(lVar6 + 0x118),(function *)&local_80);
  if (&local_80 == local_60) {
    pcVar7 = (code *)(*local_60)[4];
  }
  else {
    if (local_60 == (byte ***)0x0) goto LAB_00fd59c4;
    pcVar7 = (code *)(*local_60)[5];
  }
  (*pcVar7)();
LAB_00fd59c4:
  if ((local_f0 != (byte **)0x0) && (*local_e8 != 0)) {
    plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar4 + 0x28))(plVar4,local_e8,local_e0,local_d8);
  }
  GCTracer::Scope::~Scope((Scope *)&local_d0);
  lVar6 = *(long *)(this + 8);
  *(long *)(lVar6 + -0x8830) = *(long *)(lVar6 + -0x8830) - *(long *)(lVar6 + 0x28);
  *(long *)(lVar6 + 0x28) = 0;
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

