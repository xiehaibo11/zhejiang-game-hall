
/* v8::internal::MarkCompactCollector::ProcessEphemeronsUntilFixpoint() */

void __thiscall
v8::internal::MarkCompactCollector::ProcessEphemeronsUntilFixpoint(MarkCompactCollector *this)

{
  int iVar1;
  byte *pbVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  MarkCompactCollector *pMVar7;
  int iVar8;
  byte **local_d8;
  byte *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  Scope aSStack_b8 [64];
  long *local_78;
  long *local_70;
  
  iVar1 = FLAG_ephemeron_fixpoint_iterations;
  PerformWrapperTracing(this);
  if (0 < iVar1) {
    iVar8 = 0;
    do {
      uVar4 = (ulong)*(uint *)(this + 0x10a0);
      pMVar7 = this + 0xdf8;
      if (0 < (int)*(uint *)(this + 0x10a0)) {
        do {
          if ((*(long *)(*(long *)pMVar7 + 8) != 0) || (*(long *)(*(long *)(pMVar7 + -8) + 8) != 0))
          {
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.","AreLocalsEmpty()");
          }
          uVar4 = uVar4 - 1;
          pMVar7 = pMVar7 + 0x50;
        } while (uVar4 != 0);
      }
      uVar4 = (ulong)*(uint *)(this + 0x1358);
      pMVar7 = this + 0x10b0;
      if (0 < (int)*(uint *)(this + 0x1358)) {
        do {
          if ((*(long *)(*(long *)pMVar7 + 8) != 0) || (*(long *)(*(long *)(pMVar7 + -8) + 8) != 0))
          {
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.","other.AreLocalsEmpty()");
          }
          uVar4 = uVar4 - 1;
          pMVar7 = pMVar7 + 0x50;
        } while (uVar4 != 0);
      }
      uVar6 = *(undefined8 *)(this + 0x1098);
      *(undefined8 *)(this + 0x1098) = *(undefined8 *)(this + 0x1350);
      *(undefined8 *)(this + 0x1350) = uVar6;
      *(undefined4 *)(*(long *)(*(long *)(this + 8) + 0x830) + 0x430) = 0;
      GCTracer::Scope::Scope(aSStack_b8,*(undefined8 *)(*(long *)(this + 8) + 0x7f8),0x37);
      if (DAT_01d3f178 == (byte *)0x0) {
        plVar3 = (long *)tracing::TraceEventHelper::GetTracingController();
        DAT_01d3f178 = (byte *)(**(code **)(*plVar3 + 0x10))(plVar3,"disabled-by-default-v8.gc");
      }
      pbVar2 = DAT_01d3f178;
      local_d8 = (byte **)0x0;
      if ((*DAT_01d3f178 & 5) != 0) {
        uVar6 = GCTracer::Scope::Name(0x37);
        local_78 = (long *)0x0;
        local_70 = (long *)0x0;
        plVar3 = (long *)tracing::TraceEventHelper::GetTracingController();
        uVar6 = (**(code **)(*plVar3 + 0x18))(plVar3,0x58,pbVar2,uVar6,0,0,0,0,0,0,0,&local_78,0);
        plVar3 = local_70;
        local_70 = (long *)0x0;
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 8))();
        }
        plVar3 = local_78;
        local_78 = (long *)0x0;
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 8))();
        }
        local_c8 = GCTracer::Scope::Name(0x37);
        local_d8 = &local_d0;
        local_d0 = pbVar2;
        local_c0 = uVar6;
      }
      if (FLAG_parallel_marking != '\0') {
        ConcurrentMarking::RescheduleTasksIfNeeded
                  (*(ConcurrentMarking **)(*(long *)(this + 8) + 0x830));
      }
      uVar4 = ProcessEphemerons(this);
      if (FLAG_concurrent_marking != '\0' || FLAG_parallel_marking != '\0') {
        ConcurrentMarking::Stop(*(ConcurrentMarking **)(*(long *)(this + 8) + 0x830),1);
        ConcurrentMarking::FlushMemoryChunkData
                  (*(MajorNonAtomicMarkingState **)(*(long *)(this + 8) + 0x830));
      }
      if ((local_d8 != (byte **)0x0) && (*local_d0 != 0)) {
        plVar3 = (long *)tracing::TraceEventHelper::GetTracingController();
        (**(code **)(*plVar3 + 0x28))(plVar3,local_d0,local_c8,local_c0);
      }
      GCTracer::Scope::~Scope(aSStack_b8);
      uVar5 = (ulong)*(uint *)(this + 0x10a0);
      pMVar7 = this + 0xdf8;
      if (0 < (int)*(uint *)(this + 0x10a0)) {
        do {
          if ((*(long *)(*(long *)pMVar7 + 8) != 0) || (*(long *)(*(long *)(pMVar7 + -8) + 8) != 0))
          goto LAB_00fb8ea4;
          uVar5 = uVar5 - 1;
          pMVar7 = pMVar7 + 0x50;
        } while (uVar5 != 0);
      }
      if (*(long *)(this + 0x1098) != 0) goto LAB_00fb8ea4;
      uVar5 = (ulong)*(uint *)(this + 0x1610);
      pMVar7 = this + 0x1368;
      if (0 < (int)*(uint *)(this + 0x1610)) {
        do {
          if ((*(long *)(*(long *)pMVar7 + 8) != 0) || (*(long *)(*(long *)(pMVar7 + -8) + 8) != 0))
          goto LAB_00fb8eb8;
          uVar5 = uVar5 - 1;
          pMVar7 = pMVar7 + 0x50;
        } while (uVar5 != 0);
      }
      if (*(long *)(this + 0x1608) != 0) goto LAB_00fb8eb8;
      if ((((((((uVar4 & 1) == 0) && (*(long *)(*(long *)(this + 0x60) + 8) == 0)) &&
             (*(long *)(*(long *)(this + 0x58) + 8) == 0)) &&
            ((*(long *)(*(long *)(this + 0x318) + 8) == 0 &&
             (*(long *)(*(long *)(this + 0x310) + 8) == 0)))) &&
           ((*(long *)(this + 0x300) == 0 &&
            ((*(long *)(this + 0x5b8) == 0 &&
             ((*(byte *)(*(long *)(*(long *)(this + 8) + 0x830) + 0x430) & 1) == 0)))))) &&
          (*(long *)(*(long *)(this + 0x5d0) + 8) == 0)) &&
         (((*(long *)(*(long *)(this + 0x5c8) + 8) == 0 && (*(long *)(this + 0x870) == 0)) &&
          (uVar4 = LocalEmbedderHeapTracer::IsRemoteTracingDone
                             (*(LocalEmbedderHeapTracer **)(*(long *)(this + 8) + 0x870)),
          (uVar4 & 1) != 0)))) goto LAB_00fb8dc8;
      iVar8 = iVar8 + 1;
      PerformWrapperTracing(this);
    } while (iVar8 < iVar1);
  }
  ProcessEphemeronsLinear(this);
LAB_00fb8dc8:
  if ((((*(long *)(*(long *)(this + 0x60) + 8) != 0) || (*(long *)(*(long *)(this + 0x58) + 8) != 0)
       ) || ((*(long *)(*(long *)(this + 0x318) + 8) != 0 ||
             ((*(long *)(*(long *)(this + 0x310) + 8) != 0 || (*(long *)(this + 0x300) != 0)))))) ||
     (*(long *)(this + 0x5b8) != 0)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","marking_worklist()->IsEmpty()");
  }
  uVar4 = (ulong)*(uint *)(this + 0x10a0);
  if (0 < (int)*(uint *)(this + 0x10a0)) {
    pMVar7 = this + 0xdf8;
    do {
      if ((*(long *)(*(long *)pMVar7 + 8) != 0) || (*(long *)(*(long *)(pMVar7 + -8) + 8) != 0))
      goto LAB_00fb8ea4;
      uVar4 = uVar4 - 1;
      pMVar7 = pMVar7 + 0x50;
    } while (uVar4 != 0);
  }
  if (*(long *)(this + 0x1098) != 0) {
LAB_00fb8ea4:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","weak_objects_.current_ephemerons.IsEmpty()");
  }
  uVar4 = (ulong)*(uint *)(this + 0x1610);
  if (0 < (int)*(uint *)(this + 0x1610)) {
    pMVar7 = this + 0x1368;
    do {
      if ((*(long *)(*(long *)pMVar7 + 8) != 0) || (*(long *)(*(long *)(pMVar7 + -8) + 8) != 0))
      goto LAB_00fb8eb8;
      uVar4 = uVar4 - 1;
      pMVar7 = pMVar7 + 0x50;
    } while (uVar4 != 0);
  }
  if (*(long *)(this + 0x1608) == 0) {
    return;
  }
LAB_00fb8eb8:
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","weak_objects_.discovered_ephemerons.IsEmpty()");
}

