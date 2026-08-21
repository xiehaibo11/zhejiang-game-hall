
/* v8::internal::MemoryAllocator::Unmapper::FreeQueuedChunks() */

void __thiscall v8::internal::MemoryAllocator::Unmapper::FreeQueuedChunks(Unmapper *this)

{
  Unmapper *pUVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  CancelableTask *pCVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  CancelableTask *local_48;
  
  if (*(int *)(*(long *)this + 0x178) == 4 || FLAG_concurrent_sweeping == '\0') {
    PerformFreeMemoryOnQueuedChunks<(v8::internal::MemoryAllocator::Unmapper::FreeMode)0>(this);
    return;
  }
  pUVar1 = this + 0xb8;
  if ((*(long *)pUVar1 == 0) && (0 < *(long *)(this + 0xb0))) {
    lVar8 = 0;
    do {
      iVar4 = CancelableTaskManager::TryAbort
                        (*(CancelableTaskManager **)(*(long *)this + 0x3eb0),
                         *(ulong *)(this + lVar8 * 8 + 0x80));
      if (iVar4 != 2) {
        base::Semaphore::Wait((Semaphore *)(this + 0xa0));
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(long *)(this + 0xb0));
    *(undefined8 *)(this + 0xb0) = 0;
    *(undefined8 *)(this + 0xb8) = 0;
    if (FLAG_trace_unmapper != '\0') {
      PrintIsolate((void *)(*(long *)this + -0x8850),
                   "Unmapper::CancelAndWaitForPendingTasks: no tasks remaining\n");
    }
  }
  if (*(long *)(this + 0xb0) == 4) {
    if (FLAG_trace_unmapper != '\0') {
      PrintIsolate((void *)(*(long *)this + -0x8850),
                   "Unmapper::FreeQueuedChunks: reached task limit (%d)\n",4);
      return;
    }
  }
  else {
    lVar8 = *(long *)this;
    pCVar5 = operator_new(0x38);
    CancelableTask::CancelableTask(pCVar5,(Isolate *)(lVar8 + -0x8850));
    *(undefined ***)pCVar5 = &PTR__CancelableTask_01caa2b8;
    *(undefined **)(pCVar5 + 0x20) = &DAT_01caa2e8;
    *(Unmapper **)(pCVar5 + 0x28) = this;
    cVar2 = FLAG_trace_unmapper;
    *(undefined8 *)(pCVar5 + 0x30) = *(undefined8 *)(lVar8 + 0x7f8);
    if (cVar2 != '\0') {
      PrintIsolate((void *)(*(long *)this + -0x8850),"Unmapper::FreeQueuedChunks: new task id=%lu\n"
                   ,*(undefined8 *)(pCVar5 + 0x18));
    }
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pUVar1,0x10);
      if (bVar3) {
        *(long *)pUVar1 = *(long *)pUVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar8 = *(long *)(this + 0xb0);
    uVar7 = *(undefined8 *)(pCVar5 + 0x18);
    *(long *)(this + 0xb0) = lVar8 + 1;
    *(undefined8 *)(this + lVar8 * 8 + 0x80) = uVar7;
    plVar6 = (long *)V8::GetCurrentPlatform();
    local_48 = pCVar5 + 0x20;
    (**(code **)(*plVar6 + 0x38))(plVar6,&local_48);
    pCVar5 = local_48;
    local_48 = (CancelableTask *)0x0;
    if (pCVar5 != (CancelableTask *)0x0) {
      (**(code **)(*(long *)pCVar5 + 8))();
    }
  }
  return;
}

