
/* v8::internal::IncrementalMarking::ScheduleBytesToMarkBasedOnAllocation() */

void __thiscall
v8::internal::IncrementalMarking::ScheduleBytesToMarkBasedOnAllocation(IncrementalMarking *this)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  Heap *this_00;
  long lVar5;
  
  uVar3 = *(ulong *)(*(long *)(*(long *)this + 0xe8) + 0x138);
  lVar2 = MemoryChunkLayout::AllocatableMemoryInDataPage();
  uVar3 = Heap::CanExpandOldGeneration(*(Heap **)this,(uVar3 >> 0x12) * lVar2 + 0x4000000);
  if ((uVar3 & 1) == 0) {
    uVar3 = Heap::OldGenerationSizeOfObjects(*(Heap **)this);
    uVar3 = uVar3 >> 5;
  }
  else {
    uVar3 = *(ulong *)(this + 0x28) >> 8;
    if (uVar3 < 0x10001) {
      uVar3 = 0x10000;
    }
    if (0x3ffff < uVar3) {
      uVar3 = 0x40000;
    }
  }
  this_00 = *(Heap **)this;
  lVar5 = *(long *)(this_00 + 0x888);
  lVar2 = Heap::OldGenerationSizeOfObjects(this_00);
  lVar2 = (lVar2 + lVar5) - *(long *)(this_00 + 0x890);
  uVar4 = lVar2 - *(long *)(this + 0x30);
  uVar1 = uVar4 + uVar3;
  *(long *)(this + 0x30) = lVar2;
  lVar2 = *(ulong *)(this + 0x40) + uVar1;
  if (CARRY8(*(ulong *)(this + 0x40),uVar1)) {
    lVar2 = -1;
  }
  *(long *)(this + 0x40) = lVar2;
  if (FLAG_trace_incremental_marking == '\0') {
    return;
  }
  Isolate::PrintWithTimestamp
            ((char *)(*(long *)this + -0x8850),
             "[IncrementalMarking] Scheduled %zuKB to mark based on allocation (progress=%zuKB, allocation=%zuKB)\n"
             ,uVar1 >> 10,uVar3 >> 10,uVar4 >> 10);
  return;
}

