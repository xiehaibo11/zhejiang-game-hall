
/* v8::internal::Sweeper::EnsureIterabilityCompleted() */

void __thiscall v8::internal::Sweeper::EnsureIterabilityCompleted(Sweeper *this)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (this[0x140] != (Sweeper)0x0) {
    if ((FLAG_concurrent_sweeping != '\0') && (this[0x141] != (Sweeper)0x0)) {
      iVar2 = CancelableTaskManager::TryAbort
                        (*(CancelableTaskManager **)(*(long *)this + 0x3eb0),
                         *(ulong *)(this + 0x128));
      if (iVar2 != 2) {
        base::Semaphore::Wait((Semaphore *)(this + 0x130));
      }
      this[0x141] = (Sweeper)0x0;
    }
    puVar4 = *(undefined8 **)(this + 0x110);
    puVar1 = *(undefined8 **)(this + 0x118);
    if (puVar4 != puVar1) {
      do {
        puVar3 = puVar4 + 1;
        RawSweep(this,*puVar4,1,FLAG_verify_heap,1);
        puVar4 = puVar3;
      } while (puVar1 != puVar3);
      puVar4 = *(undefined8 **)(this + 0x110);
    }
    *(undefined8 **)(this + 0x118) = puVar4;
    this[0x140] = (Sweeper)0x0;
  }
  return;
}

