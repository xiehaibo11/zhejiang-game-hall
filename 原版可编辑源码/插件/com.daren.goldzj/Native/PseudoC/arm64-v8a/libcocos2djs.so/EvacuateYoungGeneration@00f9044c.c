
/* v8::internal::Heap::EvacuateYoungGeneration() */

void __thiscall v8::internal::Heap::EvacuateYoungGeneration(Heap *this)

{
  long lVar1;
  LargePage *pLVar2;
  byte *pbVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  NewSpace *this_00;
  long lVar7;
  long lVar8;
  Logger *pLVar9;
  Page *pPVar10;
  LargePage *pLVar11;
  ulong uVar12;
  byte **local_b8;
  byte *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  Scope aSStack_98 [64];
  long *local_58;
  long *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  GCTracer::Scope::Scope(aSStack_98,*(undefined8 *)(this + 0x7f8),0x58);
  if (DAT_01d3f0b8 == (byte *)0x0) {
    plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3f0b8 = (byte *)(**(code **)(*plVar4 + 0x10))(plVar4,"disabled-by-default-v8.gc");
  }
  pbVar3 = DAT_01d3f0b8;
  local_b8 = (byte **)0x0;
  if ((*DAT_01d3f0b8 & 5) != 0) {
    uVar5 = GCTracer::Scope::Name(0x58);
    local_58 = (long *)0x0;
    local_50 = (long *)0x0;
    plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar5 = (**(code **)(*plVar4 + 0x18))(plVar4,0x58,pbVar3,uVar5,0,0,0,0,0,0,0,&local_58,0);
    plVar4 = local_50;
    local_50 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    plVar4 = local_58;
    local_58 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    local_a8 = GCTracer::Scope::Name(0x58);
    local_b8 = &local_b0;
    local_b0 = pbVar3;
    local_a0 = uVar5;
  }
  base::Mutex::Lock((Mutex *)(this + 0xb18));
  ConcurrentMarking::PauseScope::PauseScope
            ((PauseScope *)&local_58,*(ConcurrentMarking **)(this + 0x830));
  Sweeper::EnsureIterabilityCompleted(*(Sweeper **)(*(long *)(this + 0x800) + 0x26f8));
  *(undefined4 *)(this + 0x178) = 1;
  pLVar9 = *(Logger **)(*(long *)(this + 0x30) + 0x9558);
  uVar6 = Logger::is_logging(pLVar9);
  if ((uVar6 & 1) != 0) {
    Logger::ResourceEvent(pLVar9,"scavenge","begin");
  }
  this_00 = *(NewSpace **)(this + 0xe8);
  uVar12 = *(ulong *)((*(long *)(this_00 + 0x68) - 4U & 0xfffffffffffc0000) + 0xe0);
  uVar6 = *(ulong *)(*(long *)(this_00 + 0xf0) + 0x20) & 0xfffffffffffc0000;
  while (uVar12 != uVar6) {
    uVar6 = *(ulong *)(uVar6 + 0xe0);
    pPVar10 = *(Page **)(uVar6 + 0xe8);
    SemiSpace::RemovePage((SemiSpace *)(this_00 + 0x170),pPVar10);
    Page::ConvertNewToOld(pPVar10);
    if (1 < *(int *)(*(long *)(this + 0x828) + 0x58)) {
      MarkCompactCollector::RecordLiveSlotsOnPage(*(MarkCompactCollector **)(this + 0x800),pPVar10);
    }
    this_00 = *(NewSpace **)(this + 0xe8);
  }
  uVar6 = NewSpace::Rebalance(this_00);
  if ((uVar6 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FatalProcessOutOfMemory(this,"NewSpace::Rebalance");
  }
  NewSpace::ResetLinearAllocationArea(*(NewSpace **)(this + 0xe8));
  SemiSpace::set_age_mark
            ((SemiSpace *)(*(long *)(this + 0xe8) + 0xd0),*(ulong *)(*(long *)(this + 0xe8) + 0x68))
  ;
  pLVar2 = *(LargePage **)(*(long *)(this + 0x118) + 0x20);
  while (pLVar2 != (LargePage *)0x0) {
    pLVar11 = *(LargePage **)(pLVar2 + 0xe0);
    OldLargeObjectSpace::PromoteNewLargeObject(*(OldLargeObjectSpace **)(this + 0x108),pLVar2);
    pLVar2 = pLVar11;
  }
  ExternalStringTable::PromoteYoung((ExternalStringTable *)(this + 0xae0));
  lVar7 = (**(code **)(**(long **)(this + 0xe8) + 0x48))();
  lVar8 = (**(code **)(**(long **)(this + 0x118) + 0x48))(*(long **)(this + 0x118));
  lVar8 = lVar8 + lVar7;
  *(long *)(this + 0xb0) = lVar8;
  *(long *)(this + 0xa8) = *(long *)(this + 0xa8) + lVar8;
  *(long *)(this + 0x7a0) = *(long *)(this + 0x7a0) + lVar8;
  pLVar9 = *(Logger **)(*(long *)(this + 0x30) + 0x9558);
  uVar6 = Logger::is_logging(pLVar9);
  if ((uVar6 & 1) != 0) {
    Logger::ResourceEvent(pLVar9,"scavenge","end");
  }
  *(undefined4 *)(this + 0x178) = 0;
  ConcurrentMarking::PauseScope::~PauseScope((PauseScope *)&local_58);
  base::Mutex::Unlock((Mutex *)(this + 0xb18));
  if ((local_b8 != (byte **)0x0) && (*local_b0 != 0)) {
    plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar4 + 0x28))(plVar4,local_b0,local_a8,local_a0);
  }
  GCTracer::Scope::~Scope(aSStack_98);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

