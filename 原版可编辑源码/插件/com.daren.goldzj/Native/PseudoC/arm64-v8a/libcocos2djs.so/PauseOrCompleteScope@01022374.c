
/* v8::internal::Sweeper::PauseOrCompleteScope::PauseOrCompleteScope(v8::internal::Sweeper*) */

void __thiscall
v8::internal::Sweeper::PauseOrCompleteScope::PauseOrCompleteScope
          (PauseOrCompleteScope *this,Sweeper *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  
  *(Sweeper **)this = param_1;
  *(undefined4 *)(param_1 + 0x108) = 1;
  plVar5 = *(long **)this;
  if (*(char *)((long)plVar5 + 0xf9) != '\0') {
    if (FLAG_concurrent_sweeping != '\0') {
      if (0 < (int)plVar5[2]) {
        lVar6 = 0;
        plVar1 = plVar5 + 0x20;
        do {
          iVar4 = CancelableTaskManager::TryAbort
                            (*(CancelableTaskManager **)(*plVar5 + 0x3eb0),plVar5[lVar6 + 3]);
          if (iVar4 == 2) {
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar3) {
                *plVar1 = *plVar1 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          else {
            base::Semaphore::Wait((Semaphore *)(plVar5 + 6));
          }
          lVar6 = lVar6 + 1;
        } while (lVar6 < (int)plVar5[2]);
      }
      *(undefined4 *)(plVar5 + 2) = 0;
      plVar5 = *(long **)this;
    }
    if (((plVar5[0x16] == plVar5[0x17]) && (plVar5[0x19] == plVar5[0x1a])) &&
       (plVar5[0x1c] == plVar5[0x1d])) {
      MarkCompactCollector::EnsureSweepingCompleted(*(MarkCompactCollector **)(*plVar5 + 0x800));
      return;
    }
  }
  return;
}

