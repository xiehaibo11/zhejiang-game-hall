
/* v8::internal::MemoryAllocator::Unmapper::CancelAndWaitForPendingTasks() */

void __thiscall
v8::internal::MemoryAllocator::Unmapper::CancelAndWaitForPendingTasks(Unmapper *this)

{
  int iVar1;
  long lVar2;
  
  if (0 < *(long *)(this + 0xb0)) {
    lVar2 = 0;
    do {
      iVar1 = CancelableTaskManager::TryAbort
                        (*(CancelableTaskManager **)(*(long *)this + 0x3eb0),
                         *(ulong *)(this + lVar2 * 8 + 0x80));
      if (iVar1 != 2) {
        base::Semaphore::Wait((Semaphore *)(this + 0xa0));
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(long *)(this + 0xb0));
  }
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  if (FLAG_trace_unmapper != '\0') {
    PrintIsolate((void *)(*(long *)this + -0x8850),
                 "Unmapper::CancelAndWaitForPendingTasks: no tasks remaining\n");
    return;
  }
  return;
}

