
/* v8::internal::Heap::HandleGCRequest() */

void __thiscall v8::internal::Heap::HandleGCRequest(Heap *this)

{
  ulong uVar1;
  long lVar2;
  
  if ((0 < FLAG_stress_scavenge) &&
     (uVar1 = StressScavengeObserver::HasRequestedGC(*(StressScavengeObserver **)(this + 0x198)),
     (uVar1 & 1) != 0)) {
    *(undefined4 *)(this + 0xad4) = 1;
    CollectGarbage(this,2,0x15,0);
    *(undefined4 *)(this + 0xad4) = 0;
    StressScavengeObserver::RequestedGCDone(*(StressScavengeObserver **)(this + 0x198));
    return;
  }
  lVar2 = *(long *)(this + 0x828);
  if (*(int *)(this + 0xc0) != 0) {
    *(undefined4 *)(lVar2 + 100) = 0;
    CheckMemoryPressure(this);
    return;
  }
  if (*(int *)(lVar2 + 100) == 2) {
    if ((1 < *(int *)(lVar2 + 0x58)) && (*(char *)(lVar2 + 0x60) == '\0')) {
      *(undefined4 *)(lVar2 + 100) = 0;
      FinalizeIncrementalMarkingIncrementally(this,8);
      return;
    }
  }
  else if (*(int *)(lVar2 + 100) == 1) {
    *(undefined4 *)(lVar2 + 100) = 0;
    CollectGarbage(this,2,8,*(undefined4 *)(this + 0xad8));
    *(undefined4 *)(this + 0xad4) = 0;
  }
  return;
}

