
/* v8::internal::IncrementalMarking::Stop() */

void __thiscall v8::internal::IncrementalMarking::Stop(IncrementalMarking *this)

{
  IncrementalMarking *pIVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  SpaceIterator aSStack_60 [24];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if (*(int *)(this + 0x58) != 0) {
    if (FLAG_trace_incremental_marking != '\0') {
      uVar4 = Heap::OldGenerationSizeOfObjects(*(Heap **)this);
      uVar6 = *(ulong *)(*(long *)this + 0x5d0) >> 0x14;
      uVar2 = (int)(uVar4 >> 0x14) - (int)uVar6;
      Isolate::PrintWithTimestamp
                ((char *)(*(long *)this + -0x8850),
                 "[IncrementalMarking] Stopping: old generation %dMB, limit %dMB, overshoot %dMB\n",
                 uVar4 >> 0x14,uVar6,(ulong)(uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)));
    }
    SpaceIterator::SpaceIterator(aSStack_60,*(Heap **)this);
    uVar4 = SpaceIterator::HasNext(aSStack_60);
    if ((uVar4 & 1) != 0) {
      do {
        plVar5 = (long *)SpaceIterator::Next(aSStack_60);
        pIVar1 = this + 0x68;
        if (plVar5 != *(long **)(*(long *)this + 0xe8)) {
          pIVar1 = this + 0x88;
        }
        (**(code **)(*plVar5 + 0x18))(plVar5,pIVar1);
        uVar4 = SpaceIterator::HasNext(aSStack_60);
      } while ((uVar4 & 1) != 0);
    }
    this[0x5d] = (IncrementalMarking)0x0;
    StackGuard::ClearInterrupt((StackGuard *)(*(long *)this + -0x8808),2);
    *(undefined4 *)(this + 0x58) = 0;
    *(undefined1 *)(*(long *)this + 0xac0) = 0;
    this[0x5c] = (IncrementalMarking)0x0;
    if ((this[0x5f] != (IncrementalMarking)0x0) &&
       (this[0x5f] = (IncrementalMarking)0x0, FLAG_trace_incremental_marking != '\0')) {
      Isolate::PrintWithTimestamp
                ((char *)(*(long *)this + -0x8850),
                 "[IncrementalMarking] Black allocation finished\n");
    }
    SpaceIterator::~SpaceIterator(aSStack_60);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

