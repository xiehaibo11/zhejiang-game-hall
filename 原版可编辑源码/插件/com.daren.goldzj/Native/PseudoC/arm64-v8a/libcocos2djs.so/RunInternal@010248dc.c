
/* v8::internal::Sweeper::SweeperTask::RunInternal() */

void __thiscall v8::internal::Sweeper::SweeperTask::RunInternal(SweeperTask *this)

{
  Mutex *pMVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  byte *pbVar6;
  WorkerThreadRuntimeCallStats *pWVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  Sweeper *pSVar11;
  byte **local_d0;
  byte *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  BackgroundScope aBStack_b0 [64];
  long *local_70;
  long *local_68;
  undefined8 local_48;
  
  pWVar7 = (WorkerThreadRuntimeCallStats *)
           GCTracer::worker_thread_runtime_call_stats(*(GCTracer **)(this + 0x48));
  WorkerThreadRuntimeCallStatsScope::WorkerThreadRuntimeCallStatsScope
            ((WorkerThreadRuntimeCallStatsScope *)&local_48,pWVar7);
  GCTracer::BackgroundScope::BackgroundScope(aBStack_b0,*(undefined8 *)(this + 0x48),6,local_48);
  if (RunInternal()::trace_event_unique_atomic98 == (byte *)0x0) {
    plVar8 = (long *)tracing::TraceEventHelper::GetTracingController();
    RunInternal()::trace_event_unique_atomic98 =
         (byte *)(**(code **)(*plVar8 + 0x10))(plVar8,"disabled-by-default-v8.gc");
  }
  pbVar6 = RunInternal()::trace_event_unique_atomic98;
  local_d0 = (byte **)0x0;
  if ((*RunInternal()::trace_event_unique_atomic98 & 5) != 0) {
    uVar9 = GCTracer::BackgroundScope::Name(6);
    local_70 = (long *)0x0;
    local_68 = (long *)0x0;
    plVar8 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar9 = (**(code **)(*plVar8 + 0x18))(plVar8,0x58,pbVar6,uVar9,0,0,0,0,0,0,0,&local_70,0);
    plVar8 = local_68;
    local_68 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 8))();
    }
    plVar8 = local_70;
    local_70 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 8))();
    }
    local_c0 = GCTracer::BackgroundScope::Name(6);
    local_d0 = &local_c8;
    local_c8 = pbVar6;
    local_b8 = uVar9;
  }
  iVar2 = *(int *)(this + 0x40);
  iVar5 = (iVar2 + -2) % 3;
  if ((iVar5 + 2 != 3) && (pSVar11 = *(Sweeper **)(this + 0x28), ((byte)pSVar11[0x108] & 1) == 0)) {
    pMVar1 = (Mutex *)(pSVar11 + 0x40);
    while( true ) {
      base::Mutex::Lock(pMVar1);
      lVar10 = *(long *)(pSVar11 + (long)iVar5 * 0x18 + 0xb8);
      if (*(long *)(pSVar11 + (long)iVar5 * 0x18 + 0xb0) == lVar10) break;
      plVar8 = (long *)(lVar10 + -8);
      lVar10 = *plVar8;
      *(long **)(pSVar11 + (long)iVar5 * 0x18 + 0xb8) = plVar8;
      base::Mutex::Unlock(pMVar1);
      if ((lVar10 == 0) ||
         (ParallelSweepPage(pSVar11,lVar10,iVar5 + 2,1), ((byte)pSVar11[0x108] & 1) != 0))
      goto LAB_01024ab4;
    }
    base::Mutex::Unlock(pMVar1);
  }
LAB_01024ab4:
  iVar5 = (iVar2 + -1) % 3;
  if ((iVar5 + 2 != 3) && (pSVar11 = *(Sweeper **)(this + 0x28), ((byte)pSVar11[0x108] & 1) == 0)) {
    pMVar1 = (Mutex *)(pSVar11 + 0x40);
    while( true ) {
      base::Mutex::Lock(pMVar1);
      lVar10 = *(long *)(pSVar11 + (long)iVar5 * 0x18 + 0xb8);
      if (*(long *)(pSVar11 + (long)iVar5 * 0x18 + 0xb0) == lVar10) break;
      plVar8 = (long *)(lVar10 + -8);
      lVar10 = *plVar8;
      *(long **)(pSVar11 + (long)iVar5 * 0x18 + 0xb8) = plVar8;
      base::Mutex::Unlock(pMVar1);
      if ((lVar10 == 0) ||
         (ParallelSweepPage(pSVar11,lVar10,iVar5 + 2,1), ((byte)pSVar11[0x108] & 1) != 0))
      goto LAB_01024b58;
    }
    base::Mutex::Unlock(pMVar1);
  }
LAB_01024b58:
  iVar2 = iVar2 % 3;
  if ((iVar2 + 2 != 3) && (pSVar11 = *(Sweeper **)(this + 0x28), ((byte)pSVar11[0x108] & 1) == 0)) {
    pMVar1 = (Mutex *)(pSVar11 + 0x40);
    while( true ) {
      base::Mutex::Lock(pMVar1);
      lVar10 = *(long *)(pSVar11 + (long)iVar2 * 0x18 + 0xb8);
      if (*(long *)(pSVar11 + (long)iVar2 * 0x18 + 0xb0) == lVar10) break;
      plVar8 = (long *)(lVar10 + -8);
      lVar10 = *plVar8;
      *(long **)(pSVar11 + (long)iVar2 * 0x18 + 0xb8) = plVar8;
      base::Mutex::Unlock(pMVar1);
      if ((lVar10 == 0) ||
         (ParallelSweepPage(pSVar11,lVar10,iVar2 + 2,1), ((byte)pSVar11[0x108] & 1) != 0))
      goto LAB_01024c00;
    }
    base::Mutex::Unlock(pMVar1);
  }
LAB_01024c00:
  plVar8 = *(long **)(this + 0x38);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar4) {
      *plVar8 = *plVar8 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  base::Semaphore::Signal(*(Semaphore **)(this + 0x30));
  if ((local_d0 != (byte **)0x0) && (*local_c8 != 0)) {
    plVar8 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar8 + 0x28))(plVar8,local_c8,local_c0,local_b8);
  }
  GCTracer::BackgroundScope::~BackgroundScope(aBStack_b0);
  WorkerThreadRuntimeCallStatsScope::~WorkerThreadRuntimeCallStatsScope
            ((WorkerThreadRuntimeCallStatsScope *)&local_48);
  return;
}

