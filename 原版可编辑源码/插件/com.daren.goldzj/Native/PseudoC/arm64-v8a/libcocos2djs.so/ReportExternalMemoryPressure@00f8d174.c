
/* v8::internal::Heap::ReportExternalMemoryPressure() */

void __thiscall v8::internal::Heap::ReportExternalMemoryPressure(Heap *this)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  
  if ((long)(*(long *)(this + -0x8820) + (*(ulong *)(this + 0x58) >> 1)) < *(long *)(this + -0x8830)
     ) {
    *(undefined4 *)(this + 0xad4) = 1;
    uVar4 = 0x38;
  }
  else {
    if (*(int *)(*(IncrementalMarking **)(this + 0x828) + 0x58) != 0) {
      dVar5 = ((double)*(long *)(this + -0x8830) / (double)*(long *)(this + -0x8828)) * 5.0;
      if (dVar5 <= 5.0) {
        dVar5 = 5.0;
      }
      if (10.0 < dVar5) {
        dVar5 = 10.0;
      }
      plVar2 = (long *)V8::GetCurrentPlatform();
      dVar6 = (double)(**(code **)(*plVar2 + 0x78))();
      *(uint *)(this + 0xad8) = *(uint *)(this + 0xad8) | 0x28;
      IncrementalMarking::AdvanceWithDeadline
                ((IncrementalMarking *)(dVar6 * 1000.0 + dVar5),*(undefined8 *)(this + 0x828),0,0);
      return;
    }
    uVar3 = IncrementalMarking::CanBeActivated(*(IncrementalMarking **)(this + 0x828));
    if ((uVar3 & 1) != 0) {
      if ((((FLAG_optimize_for_size == '\0') && (this[0x2e6c] == (Heap)0x0)) &&
          (this[0x2e6d] == (Heap)0x0)) && (*(int *)(this + 0xc0) == 0)) {
        uVar1 = CanExpandOldGeneration(this,*(ulong *)(this + 0x58) >> 3);
        uVar1 = ~uVar1 & 1;
      }
      else {
        uVar1 = 1;
      }
      *(uint *)(this + 0xad4) = uVar1;
      *(undefined4 *)(this + 0xad8) = 0x28;
      IncrementalMarking::Start(*(IncrementalMarking **)(this + 0x828),7);
      return;
    }
    uVar4 = 0x28;
    *(undefined4 *)(this + 0xad4) = 0;
  }
  CollectGarbage(this,2,7,uVar4);
  *(undefined4 *)(this + 0xad4) = 0;
  return;
}

