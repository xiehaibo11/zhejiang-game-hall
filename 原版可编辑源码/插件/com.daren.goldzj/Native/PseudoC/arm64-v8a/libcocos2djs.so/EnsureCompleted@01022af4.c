
/* v8::internal::Sweeper::EnsureCompleted() */

void __thiscall v8::internal::Sweeper::EnsureCompleted(Sweeper *this)

{
  Sweeper *pSVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  
  if (this[0xf9] != (Sweeper)0x0) {
    EnsureIterabilityCompleted(this);
    ParallelSweepSpace(this,2,0,0,1);
    ParallelSweepSpace(this,3,0,0,1);
    ParallelSweepSpace(this,4,0,0,1);
    if (FLAG_concurrent_sweeping != '\0') {
      if (0 < *(int *)(this + 0x10)) {
        lVar5 = 0;
        pSVar1 = this + 0x100;
        do {
          iVar4 = CancelableTaskManager::TryAbort
                            (*(CancelableTaskManager **)(*(long *)this + 0x3eb0),
                             *(ulong *)(this + lVar5 * 8 + 0x18));
          if (iVar4 == 2) {
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(pSVar1,0x10);
              if (bVar3) {
                *(long *)pSVar1 = *(long *)pSVar1 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          else {
            base::Semaphore::Wait((Semaphore *)(this + 0x30));
          }
          lVar5 = lVar5 + 1;
        } while (lVar5 < *(int *)(this + 0x10));
      }
      *(undefined4 *)(this + 0x10) = 0;
    }
    if (((*(long *)(this + 0xb0) != *(long *)(this + 0xb8)) ||
        (*(long *)(this + 200) != *(long *)(this + 0xd0))) ||
       (*(long *)(this + 0xe0) != *(long *)(this + 0xe8))) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","sweeping_list_[GetSweepSpaceIndex(space)].empty()");
    }
    this[0xf9] = (Sweeper)0x0;
  }
  return;
}

