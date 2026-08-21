
/* v8::internal::MarkCompactCollector::MarkLiveObjects() */

void __thiscall v8::internal::MarkCompactCollector::MarkLiveObjects(MarkCompactCollector *this)

{
  byte *pbVar1;
  MarkCompactCollector *pMVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  byte **local_1a0;
  byte *local_198;
  undefined8 local_190;
  undefined8 local_188;
  byte **local_180;
  byte *local_178;
  undefined8 local_170;
  undefined8 local_168;
  MarkCompactCollector **local_140;
  MarkCompactCollector *local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined **local_120;
  MarkCompactCollector *pMStack_118;
  Scope aSStack_110 [64];
  undefined **local_d0;
  StackGuard *local_c8;
  int local_b0;
  byte **local_a0;
  byte *local_98;
  undefined8 local_90;
  undefined8 local_88;
  Scope aSStack_80 [64];
  long *local_40;
  long *local_38;
  
  GCTracer::Scope::Scope(aSStack_80,*(undefined8 *)(*(long *)(this + 8) + 0x7f8),0x15);
  if (DAT_01d3f1a0 == (byte *)0x0) {
    plVar3 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3f1a0 = (byte *)(**(code **)(*plVar3 + 0x10))(plVar3,"disabled-by-default-v8.gc");
  }
  pbVar1 = DAT_01d3f1a0;
  local_a0 = (byte **)0x0;
  if ((*DAT_01d3f1a0 & 5) != 0) {
    uVar4 = GCTracer::Scope::Name(0x15);
    local_40 = (long *)0x0;
    local_38 = (long *)0x0;
    plVar3 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar4 = (**(code **)(*plVar3 + 0x18))(plVar3,0x58,pbVar1,uVar4,0,0,0,0,0,0,0,&local_40,0);
    plVar3 = local_38;
    local_38 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    plVar3 = local_40;
    local_40 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    local_90 = GCTracer::Scope::Name(0x15);
    local_a0 = &local_98;
    local_98 = pbVar1;
    local_88 = uVar4;
  }
  InterruptsScope::InterruptsScope
            ((InterruptsScope *)&local_d0,*(long *)(this + 8) + -0x8850,0xff,0);
  local_d0 = &PTR__InterruptsScope_01c98490;
  GCTracer::Scope::Scope(aSStack_110,*(undefined8 *)(*(long *)(this + 8) + 0x7f8),0x32);
  if (DAT_01d3f1a8 == (byte *)0x0) {
    plVar3 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3f1a8 = (byte *)(**(code **)(*plVar3 + 0x10))(plVar3,"disabled-by-default-v8.gc");
  }
  pbVar1 = DAT_01d3f1a8;
  local_180 = (byte **)0x0;
  if ((*DAT_01d3f1a8 & 5) != 0) {
    uVar4 = GCTracer::Scope::Name(0x32);
    local_40 = (long *)0x0;
    local_38 = (long *)0x0;
    plVar3 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar4 = (**(code **)(*plVar3 + 0x18))(plVar3,0x58,pbVar1,uVar4,0,0,0,0,0,0,0,&local_40,0);
    plVar3 = local_38;
    local_38 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    plVar3 = local_40;
    local_40 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    local_170 = GCTracer::Scope::Name(0x32);
    local_180 = &local_178;
    local_178 = pbVar1;
    local_168 = uVar4;
  }
  if (this[0x4c] == (MarkCompactCollector)0x0) {
    if (*(int *)(*(IncrementalMarking **)(*(long *)(this + 8) + 0x828) + 0x58) != 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","incremental_marking->IsStopped()");
    }
  }
  else {
    IncrementalMarking::Finalize(*(IncrementalMarking **)(*(long *)(this + 8) + 0x828));
  }
  if ((local_180 != (byte **)0x0) && (*local_178 != 0)) {
    plVar3 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar3 + 0x28))(plVar3,local_178,local_170,local_168);
  }
  GCTracer::Scope::~Scope(aSStack_110);
  LocalEmbedderHeapTracer::EnterFinalPause
            (*(LocalEmbedderHeapTracer **)(*(long *)(this + 8) + 0x870));
  local_120 = &PTR__RootVisitor_01ca83b8;
  pMStack_118 = this;
  GCTracer::Scope::Scope(aSStack_110,*(undefined8 *)(*(long *)(this + 8) + 0x7f8),0x34);
  if (DAT_01d3f1b0 == (byte *)0x0) {
    plVar3 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3f1b0 = (byte *)(**(code **)(*plVar3 + 0x10))(plVar3,"disabled-by-default-v8.gc");
  }
  pbVar1 = DAT_01d3f1b0;
  local_180 = (byte **)0x0;
  if ((*DAT_01d3f1b0 & 5) != 0) {
    uVar4 = GCTracer::Scope::Name(0x34);
    local_40 = (long *)0x0;
    local_38 = (long *)0x0;
    plVar3 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar4 = (**(code **)(*plVar3 + 0x18))(plVar3,0x58,pbVar1,uVar4,0,0,0,0,0,0,0,&local_40,0);
    plVar3 = local_38;
    local_38 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    plVar3 = local_40;
    local_40 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    local_170 = GCTracer::Scope::Name(0x34);
    local_180 = &local_178;
    local_178 = pbVar1;
    local_168 = uVar4;
  }
  local_140 = (MarkCompactCollector **)&PTR__ObjectVisitor_01ca83f0;
  local_138 = this;
  Heap::IterateStrongRoots(*(Heap **)(this + 8),&local_120,5);
  MarkStringTable(this,(ObjectVisitor *)&local_140);
  ProcessTopOptimizedFrame(this,(ObjectVisitor *)&local_140);
  if ((local_180 != (byte **)0x0) && (*local_178 != 0)) {
    plVar3 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar3 + 0x28))(plVar3,local_178,local_170,local_168);
  }
  GCTracer::Scope::~Scope(aSStack_110);
  GCTracer::Scope::Scope(aSStack_110,*(undefined8 *)(*(long *)(this + 8) + 0x7f8),0x33);
  if (DAT_01d3f1b8 == (byte *)0x0) {
    plVar3 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3f1b8 = (byte *)(**(code **)(*plVar3 + 0x10))(plVar3,"disabled-by-default-v8.gc");
  }
  pbVar1 = DAT_01d3f1b8;
  local_180 = (byte **)0x0;
  if ((*DAT_01d3f1b8 & 5) != 0) {
    uVar4 = GCTracer::Scope::Name(0x33);
    local_40 = (long *)0x0;
    local_38 = (long *)0x0;
    plVar3 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar4 = (**(code **)(*plVar3 + 0x18))(plVar3,0x58,pbVar1,uVar4,0,0,0,0,0,0,0,&local_40,0);
    plVar3 = local_38;
    local_38 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    plVar3 = local_40;
    local_40 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    local_170 = GCTracer::Scope::Name(0x33);
    local_180 = &local_178;
    local_178 = pbVar1;
    local_168 = uVar4;
  }
  if (FLAG_parallel_marking != '\0') {
    ConcurrentMarking::RescheduleTasksIfNeeded(*(ConcurrentMarking **)(*(long *)(this + 8) + 0x830))
    ;
  }
  ProcessMarkingWorklist<(v8::internal::MarkCompactCollector::MarkingWorklistProcessingMode)0>
            (this,0);
  if (FLAG_concurrent_marking != '\0' || FLAG_parallel_marking != '\0') {
    ConcurrentMarking::Stop(*(ConcurrentMarking **)(*(long *)(this + 8) + 0x830),1);
    ConcurrentMarking::FlushMemoryChunkData
              (*(MajorNonAtomicMarkingState **)(*(long *)(this + 8) + 0x830));
  }
  ProcessMarkingWorklist<(v8::internal::MarkCompactCollector::MarkingWorklistProcessingMode)0>
            (this,0);
  if ((local_180 != (byte **)0x0) && (*local_178 != 0)) {
    plVar3 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar3 + 0x28))(plVar3,local_178,local_170,local_168);
  }
  GCTracer::Scope::~Scope(aSStack_110);
  GCTracer::Scope::Scope(aSStack_110,*(undefined8 *)(*(long *)(this + 8) + 0x7f8),0x35);
  if (DAT_01d3f1c0 == (MarkCompactCollector *)0x0) {
    plVar3 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3f1c0 = (MarkCompactCollector *)
                   (**(code **)(*plVar3 + 0x10))(plVar3,"disabled-by-default-v8.gc");
  }
  pMVar2 = DAT_01d3f1c0;
  local_140 = (MarkCompactCollector **)0x0;
  if (((byte)*DAT_01d3f1c0 & 5) != 0) {
    uVar4 = GCTracer::Scope::Name(0x35);
    local_40 = (long *)0x0;
    local_38 = (long *)0x0;
    plVar3 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar4 = (**(code **)(*plVar3 + 0x18))(plVar3,0x58,pMVar2,uVar4,0,0,0,0,0,0,0,&local_40,0);
    plVar3 = local_38;
    local_38 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    plVar3 = local_40;
    local_40 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    local_130 = GCTracer::Scope::Name(0x35);
    local_140 = &local_138;
    local_138 = pMVar2;
    local_128 = uVar4;
  }
  GCTracer::Scope::Scope((Scope *)&local_180,*(undefined8 *)(*(long *)(this + 8) + 0x7f8),0x31);
  if (DAT_01d3f1c8 == (byte *)0x0) {
    plVar3 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3f1c8 = (byte *)(**(code **)(*plVar3 + 0x10))(plVar3,"disabled-by-default-v8.gc");
  }
  pbVar1 = DAT_01d3f1c8;
  local_1a0 = (byte **)0x0;
  if ((*DAT_01d3f1c8 & 5) != 0) {
    uVar4 = GCTracer::Scope::Name(0x31);
    local_40 = (long *)0x0;
    local_38 = (long *)0x0;
    plVar3 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar4 = (**(code **)(*plVar3 + 0x18))(plVar3,0x58,pbVar1,uVar4,0,0,0,0,0,0,0,&local_40,0);
    plVar3 = local_38;
    local_38 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    plVar3 = local_40;
    local_40 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    local_190 = GCTracer::Scope::Name(0x31);
    local_1a0 = &local_198;
    local_198 = pbVar1;
    local_188 = uVar4;
  }
  do {
    do {
      PerformWrapperTracing(this);
      ProcessMarkingWorklist<(v8::internal::MarkCompactCollector::MarkingWorklistProcessingMode)0>
                (this,0);
      uVar5 = LocalEmbedderHeapTracer::IsRemoteTracingDone
                        (*(LocalEmbedderHeapTracer **)(*(long *)(this + 8) + 0x870));
    } while ((uVar5 & 1) == 0);
  } while (((*(long *)(*(long *)(this + 0x5d0) + 8) != 0) ||
           (*(long *)(*(long *)(this + 0x5c8) + 8) != 0)) || (*(long *)(this + 0x870) != 0));
  if ((local_1a0 != (byte **)0x0) && (*local_198 != 0)) {
    plVar3 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar3 + 0x28))(plVar3,local_198,local_190,local_188);
  }
  GCTracer::Scope::~Scope((Scope *)&local_180);
  GCTracer::Scope::Scope((Scope *)&local_180,*(undefined8 *)(*(long *)(this + 8) + 0x7f8),0x36);
  if (DAT_01d3f1d0 == (byte *)0x0) {
    plVar3 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3f1d0 = (byte *)(**(code **)(*plVar3 + 0x10))(plVar3,"disabled-by-default-v8.gc");
  }
  pbVar1 = DAT_01d3f1d0;
  local_1a0 = (byte **)0x0;
  if ((*DAT_01d3f1d0 & 5) != 0) {
    uVar4 = GCTracer::Scope::Name(0x36);
    local_40 = (long *)0x0;
    local_38 = (long *)0x0;
    plVar3 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar4 = (**(code **)(*plVar3 + 0x18))(plVar3,0x58,pbVar1,uVar4,0,0,0,0,0,0,0,&local_40,0);
    plVar3 = local_38;
    local_38 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    plVar3 = local_40;
    local_40 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    local_190 = GCTracer::Scope::Name(0x36);
    local_1a0 = &local_198;
    local_198 = pbVar1;
    local_188 = uVar4;
  }
  ProcessEphemeronMarking(this);
  if ((local_1a0 != (byte **)0x0) && (*local_198 != 0)) {
    plVar3 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar3 + 0x28))(plVar3,local_198,local_190,local_188);
  }
  GCTracer::Scope::~Scope((Scope *)&local_180);
  GCTracer::Scope::Scope((Scope *)&local_180,*(undefined8 *)(*(long *)(this + 8) + 0x7f8),0x39);
  if (DAT_01d3f1d8 == (byte *)0x0) {
    plVar3 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3f1d8 = (byte *)(**(code **)(*plVar3 + 0x10))(plVar3,"disabled-by-default-v8.gc");
  }
  pbVar1 = DAT_01d3f1d8;
  local_1a0 = (byte **)0x0;
  if ((*DAT_01d3f1d8 & 5) != 0) {
    uVar4 = GCTracer::Scope::Name(0x39);
    local_40 = (long *)0x0;
    local_38 = (long *)0x0;
    plVar3 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar4 = (**(code **)(*plVar3 + 0x18))(plVar3,0x58,pbVar1,uVar4,0,0,0,0,0,0,0,&local_40,0);
    plVar3 = local_38;
    local_38 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    plVar3 = local_40;
    local_40 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    local_190 = GCTracer::Scope::Name(0x39);
    local_1a0 = &local_198;
    local_198 = pbVar1;
    local_188 = uVar4;
  }
  GlobalHandles::IterateWeakRootsIdentifyFinalizers
            (*(GlobalHandles **)(*(long *)(this + 8) + 0xd90),IsUnmarkedHeapObject);
  ProcessMarkingWorklist<(v8::internal::MarkCompactCollector::MarkingWorklistProcessingMode)0>
            (this,0);
  if ((local_1a0 != (byte **)0x0) && (*local_198 != 0)) {
    plVar3 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar3 + 0x28))(plVar3,local_198,local_190,local_188);
  }
  GCTracer::Scope::~Scope((Scope *)&local_180);
  GCTracer::Scope::Scope((Scope *)&local_180,*(undefined8 *)(*(long *)(this + 8) + 0x7f8),0x3a);
  if (DAT_01d3f1e0 == (byte *)0x0) {
    plVar3 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3f1e0 = (byte *)(**(code **)(*plVar3 + 0x10))(plVar3,"disabled-by-default-v8.gc");
  }
  pbVar1 = DAT_01d3f1e0;
  local_1a0 = (byte **)0x0;
  if ((*DAT_01d3f1e0 & 5) != 0) {
    uVar4 = GCTracer::Scope::Name(0x3a);
    local_40 = (long *)0x0;
    local_38 = (long *)0x0;
    plVar3 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar4 = (**(code **)(*plVar3 + 0x18))(plVar3,0x58,pbVar1,uVar4,0,0,0,0,0,0,0,&local_40,0);
    plVar3 = local_38;
    local_38 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    plVar3 = local_40;
    local_40 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    local_190 = GCTracer::Scope::Name(0x3a);
    local_1a0 = &local_198;
    local_198 = pbVar1;
    local_188 = uVar4;
  }
  GlobalHandles::IterateWeakRootsForFinalizers
            (*(GlobalHandles **)(*(long *)(this + 8) + 0xd90),(RootVisitor *)&local_120);
  ProcessMarkingWorklist<(v8::internal::MarkCompactCollector::MarkingWorklistProcessingMode)0>
            (this,0);
  if ((local_1a0 != (byte **)0x0) && (*local_198 != 0)) {
    plVar3 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar3 + 0x28))(plVar3,local_198,local_190,local_188);
  }
  GCTracer::Scope::~Scope((Scope *)&local_180);
  GCTracer::Scope::Scope((Scope *)&local_180,*(undefined8 *)(*(long *)(this + 8) + 0x7f8),0x3b);
  if (DAT_01d3f1e8 == (byte *)0x0) {
    plVar3 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3f1e8 = (byte *)(**(code **)(*plVar3 + 0x10))(plVar3,"disabled-by-default-v8.gc");
  }
  pbVar1 = DAT_01d3f1e8;
  local_1a0 = (byte **)0x0;
  if ((*DAT_01d3f1e8 & 5) != 0) {
    uVar4 = GCTracer::Scope::Name(0x3b);
    local_40 = (long *)0x0;
    local_38 = (long *)0x0;
    plVar3 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar4 = (**(code **)(*plVar3 + 0x18))(plVar3,0x58,pbVar1,uVar4,0,0,0,0,0,0,0,&local_40,0);
    plVar3 = local_38;
    local_38 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    plVar3 = local_40;
    local_40 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    local_190 = GCTracer::Scope::Name(0x3b);
    local_1a0 = &local_198;
    local_198 = pbVar1;
    local_188 = uVar4;
  }
  ProcessEphemeronMarking(this);
  if ((local_1a0 != (byte **)0x0) && (*local_198 != 0)) {
    plVar3 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar3 + 0x28))(plVar3,local_198,local_190,local_188);
  }
  GCTracer::Scope::~Scope((Scope *)&local_180);
  GlobalHandles::IterateWeakRootsForPhantomHandles
            (*(GlobalHandles **)(*(long *)(this + 8) + 0xd90),IsUnmarkedHeapObject);
  if ((local_140 != (MarkCompactCollector **)0x0) && (*local_138 != (MarkCompactCollector)0x0)) {
    plVar3 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar3 + 0x28))(plVar3,local_138,local_130,local_128);
  }
  GCTracer::Scope::~Scope(aSStack_110);
  if (this[0x4c] != (MarkCompactCollector)0x0) {
    IncrementalMarking::Deactivate();
  }
  *(int *)(this + 0x2704) = *(int *)(this + 0x2704) + 1;
  local_d0 = &PTR__InterruptsScope_01c984b0;
  if (local_b0 != 2) {
    StackGuard::PopInterruptsScope(local_c8);
  }
  if ((local_a0 != (byte **)0x0) && (*local_98 != 0)) {
    plVar3 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar3 + 0x28))(plVar3,local_98,local_90,local_88);
  }
  GCTracer::Scope::~Scope(aSStack_80);
  return;
}

