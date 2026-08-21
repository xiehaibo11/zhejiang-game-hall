
/* v8::internal::Heap::CheckMemoryPressure() */

void __thiscall v8::internal::Heap::CheckMemoryPressure(Heap *this)

{
  Heap *pHVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  
  pHVar1 = this + 0xc0;
  if (*(int *)pHVar1 != 0) {
    Isolate::AbortConcurrentOptimization(this + -0x8850,1);
  }
  iVar2 = *(int *)pHVar1;
  *(int *)pHVar1 = 0;
  if (iVar2 == 1) {
    if ((FLAG_incremental_marking != '\0') &&
       (*(int *)(*(IncrementalMarking **)(this + 0x828) + 0x58) == 0)) {
      *(undefined8 *)(this + 0xad4) = 1;
      IncrementalMarking::Start(*(IncrementalMarking **)(this + 0x828),0x10);
    }
  }
  else if (iVar2 == 2) {
    CollectGarbageOnMemoryPressure(this);
    lVar4 = *(long *)(this + 0x848);
    goto joined_r0x00f8b5c0;
  }
  lVar4 = *(long *)(this + 0x848);
joined_r0x00f8b5c0:
  if (lVar4 != 0) {
    plVar3 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar3 + 0x78))();
    MemoryReducer::NotifyPossibleGarbage(*(Event **)(this + 0x848));
  }
  return;
}

