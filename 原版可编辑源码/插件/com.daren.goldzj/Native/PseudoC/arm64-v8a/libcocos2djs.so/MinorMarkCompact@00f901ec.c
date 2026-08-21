
/* v8::internal::Heap::MinorMarkCompact() */

void __thiscall v8::internal::Heap::MinorMarkCompact(Heap *this)

{
  Heap *pHVar1;
  IncrementalMarking IVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  byte *pbVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  Logger *pLVar10;
  IncrementalMarking *this_00;
  byte **local_c0;
  byte *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  Scope aSStack_a0 [64];
  PauseAllocationObserversScope aPStack_60 [8];
  long *local_58;
  long *local_50;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  PauseAllocationObserversScope::PauseAllocationObserversScope(aPStack_60,this);
  *(undefined4 *)(this + 0x178) = 3;
  pLVar10 = *(Logger **)(*(long *)(this + 0x30) + 0x9558);
  uVar7 = Logger::is_logging(pLVar10);
  if ((uVar7 & 1) != 0) {
    Logger::ResourceEvent(pLVar10,"MinorMarkCompact","begin");
  }
  GCTracer::Scope::Scope(aSStack_a0,*(undefined8 *)(this + 0x7f8),0x3f);
  if (DAT_01d3f0a0 == (byte *)0x0) {
    plVar8 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3f0a0 = (byte *)(**(code **)(*plVar8 + 0x10))(plVar8,"disabled-by-default-v8.gc");
  }
  pbVar6 = DAT_01d3f0a0;
  local_c0 = (byte **)0x0;
  if ((*DAT_01d3f0a0 & 5) != 0) {
    uVar9 = GCTracer::Scope::Name(0x3f);
    local_58 = (long *)0x0;
    local_50 = (long *)0x0;
    plVar8 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar9 = (**(code **)(*plVar8 + 0x18))(plVar8,0x58,pbVar6,uVar9,0,0,0,0,0,0,0,&local_58,0);
    plVar8 = local_50;
    local_50 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 8))();
    }
    plVar8 = local_58;
    local_58 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 8))();
    }
    local_b0 = GCTracer::Scope::Name(0x3f);
    local_c0 = &local_b8;
    local_b8 = pbVar6;
    local_a8 = uVar9;
  }
  pHVar1 = this + 0xb8;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pHVar1,0x10);
    if (bVar4) {
      *(long *)pHVar1 = *(long *)pHVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  this_00 = *(IncrementalMarking **)(this + 0x828);
  IVar2 = this_00[0x5f];
  if (IVar2 != (IncrementalMarking)0x0) {
    IncrementalMarking::PauseBlackAllocation(this_00);
  }
  ConcurrentMarking::PauseScope::PauseScope
            ((PauseScope *)&local_58,*(ConcurrentMarking **)(this + 0x830));
  MinorMarkCompactCollector::CollectGarbage(*(MinorMarkCompactCollector **)(this + 0x808));
  pLVar10 = *(Logger **)(*(long *)(this + 0x30) + 0x9558);
  uVar7 = Logger::is_logging(pLVar10);
  if ((uVar7 & 1) != 0) {
    Logger::ResourceEvent(pLVar10,"MinorMarkCompact","end");
  }
  *(undefined4 *)(this + 0x178) = 0;
  ConcurrentMarking::PauseScope::~PauseScope((PauseScope *)&local_58);
  if (IVar2 != (IncrementalMarking)0x0) {
    IncrementalMarking::StartBlackAllocation(this_00);
  }
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pHVar1,0x10);
    if (bVar4) {
      *(long *)pHVar1 = *(long *)pHVar1 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if ((local_c0 != (byte **)0x0) && (*local_b8 != 0)) {
    plVar8 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar8 + 0x28))(plVar8,local_b8,local_b0,local_a8);
  }
  GCTracer::Scope::~Scope(aSStack_a0);
  PauseAllocationObserversScope::~PauseAllocationObserversScope(aPStack_60);
  if (*(long *)(lVar5 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

