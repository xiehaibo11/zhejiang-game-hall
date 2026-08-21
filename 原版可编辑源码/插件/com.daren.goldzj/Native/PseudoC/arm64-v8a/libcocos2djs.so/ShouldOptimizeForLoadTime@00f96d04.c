
/* v8::internal::Heap::ShouldOptimizeForLoadTime() */

bool __thiscall v8::internal::Heap::ShouldOptimizeForLoadTime(Heap *this)

{
  bool bVar1;
  ulong uVar2;
  long *plVar3;
  double dVar4;
  double dVar5;
  
  if ((*(int *)(this + 0x2e00) == 3) &&
     (uVar2 = AllocationLimitOvershotByLargeMargin(this), (uVar2 & 1) == 0)) {
    plVar3 = (long *)V8::GetCurrentPlatform();
    dVar4 = (double)(**(code **)(*plVar3 + 0x78))();
    dVar5 = (double)Isolate::LoadStartTimeMs((Isolate *)(this + -0x8850));
    bVar1 = dVar4 * 1000.0 < dVar5 + 7000.0;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

