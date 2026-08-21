
/* v8::internal::Heap::Scavenge() */

void __thiscall v8::internal::Heap::Scavenge(Heap *this)

{
  Heap *pHVar1;
  IncrementalMarking IVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  byte *pbVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  IncrementalMarking *this_00;
  Logger *pLVar10;
  PauseAllocationObserversScope aPStack_d0 [8];
  byte **local_c8;
  byte *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  Scope aSStack_a8 [64];
  long *local_68;
  long *local_60;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  GCTracer::Scope::Scope(aSStack_a8,*(undefined8 *)(this + 0x7f8),0x5a);
  if (DAT_01d3f0c0 == (byte *)0x0) {
    plVar7 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3f0c0 = (byte *)(**(code **)(*plVar7 + 0x10))(plVar7,"disabled-by-default-v8.gc");
  }
  pbVar6 = DAT_01d3f0c0;
  local_c8 = (byte **)0x0;
  if ((*DAT_01d3f0c0 & 5) != 0) {
    uVar8 = GCTracer::Scope::Name(0x5a);
    local_68 = (long *)0x0;
    local_60 = (long *)0x0;
    plVar7 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar8 = (**(code **)(*plVar7 + 0x18))(plVar7,0x58,pbVar6,uVar8,0,0,0,0,0,0,0,&local_68,0);
    plVar7 = local_60;
    local_60 = (long *)0x0;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 8))();
    }
    plVar7 = local_68;
    local_68 = (long *)0x0;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 8))();
    }
    local_b8 = GCTracer::Scope::Name(0x5a);
    local_c8 = &local_c0;
    local_c0 = pbVar6;
    local_b0 = uVar8;
  }
  base::Mutex::Lock((Mutex *)(this + 0xb18));
  ConcurrentMarking::PauseScope::PauseScope
            ((PauseScope *)&local_68,*(ConcurrentMarking **)(this + 0x830));
  pHVar1 = this + 0xb8;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pHVar1,0x10);
    if (bVar4) {
      *(long *)pHVar1 = *(long *)pHVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  PauseAllocationObserversScope::PauseAllocationObserversScope(aPStack_d0,this);
  this_00 = *(IncrementalMarking **)(this + 0x828);
  IVar2 = this_00[0x5f];
  if (IVar2 != (IncrementalMarking)0x0) {
    IncrementalMarking::PauseBlackAllocation(this_00);
  }
  Sweeper::EnsureIterabilityCompleted(*(Sweeper **)(*(long *)(this + 0x800) + 0x26f8));
  *(undefined4 *)(this + 0x178) = 1;
  NewSpace::Flip(*(NewSpace **)(this + 0xe8));
  NewSpace::ResetLinearAllocationArea(*(NewSpace **)(this + 0xe8));
  NewLargeObjectSpace::Flip(*(NewLargeObjectSpace **)(this + 0x118));
  *(undefined8 *)(*(long *)(this + 0x118) + 0x80) = 0;
  pLVar10 = *(Logger **)(*(long *)(this + 0x30) + 0x9558);
  uVar9 = Logger::is_logging(pLVar10);
  if ((uVar9 & 1) != 0) {
    Logger::ResourceEvent(pLVar10,"scavenge","begin");
  }
  ScavengerCollector::CollectGarbage(*(ScavengerCollector **)(this + 0x810));
  pLVar10 = *(Logger **)(*(long *)(this + 0x30) + 0x9558);
  uVar9 = Logger::is_logging(pLVar10);
  if ((uVar9 & 1) != 0) {
    Logger::ResourceEvent(pLVar10,"scavenge","end");
  }
  *(undefined4 *)(this + 0x178) = 0;
  if (IVar2 != (IncrementalMarking)0x0) {
    IncrementalMarking::StartBlackAllocation(this_00);
  }
  PauseAllocationObserversScope::~PauseAllocationObserversScope(aPStack_d0);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pHVar1,0x10);
    if (bVar4) {
      *(long *)pHVar1 = *(long *)pHVar1 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  ConcurrentMarking::PauseScope::~PauseScope((PauseScope *)&local_68);
  base::Mutex::Unlock((Mutex *)(this + 0xb18));
  if ((local_c8 != (byte **)0x0) && (*local_c0 != 0)) {
    plVar7 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar7 + 0x28))(plVar7,local_c0,local_b8,local_b0);
  }
  GCTracer::Scope::~Scope(aSStack_a8);
  if (*(long *)(lVar5 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

