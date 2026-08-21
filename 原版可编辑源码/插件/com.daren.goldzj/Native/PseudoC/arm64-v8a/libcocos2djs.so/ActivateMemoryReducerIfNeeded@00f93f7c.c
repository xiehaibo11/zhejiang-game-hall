
/* v8::internal::Heap::ActivateMemoryReducerIfNeeded() */

void __thiscall v8::internal::Heap::ActivateMemoryReducerIfNeeded(Heap *this)

{
  ulong uVar1;
  long *plVar2;
  
  if (((*(int *)(this + 0x1b0) == 0) && (uVar1 = CommittedMemory(this), 0x1c0000 < uVar1)) &&
     (this[0x2e6c] != (Heap)0x0)) {
    plVar2 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar2 + 0x78))();
    MemoryReducer::NotifyPossibleGarbage(*(Event **)(this + 0x848));
  }
  return;
}

