
/* v8::internal::Heap::ReduceNewSpaceSize() */

void __thiscall v8::internal::Heap::ReduceNewSpaceSize(Heap *this)

{
  long lVar1;
  ulong uVar2;
  NewLargeObjectSpace *this_00;
  double dVar3;
  
  dVar3 = (double)GCTracer::CurrentAllocationThroughputInBytesPerMillisecond
                            (*(GCTracer **)(this + 0x7f8));
  if ((FLAG_predictable == '\0') &&
     ((((byte)this[0xad4] & 1) != 0 || ((dVar3 != 0.0 && (dVar3 < 1000.0)))))) {
    NewSpace::Shrink(*(NewSpace **)(this + 0xe8));
    this_00 = *(NewLargeObjectSpace **)(this + 0x118);
    uVar2 = *(ulong *)(*(long *)(this + 0xe8) + 0x138);
    lVar1 = MemoryChunkLayout::AllocatableMemoryInDataPage();
    NewLargeObjectSpace::SetCapacity(this_00,(uVar2 >> 0x12) * lVar1);
    if (*(char *)(*(long *)(this + 0xe8) + 0x1f8) != '\0') {
      SemiSpace::Uncommit((SemiSpace *)(*(long *)(this + 0xe8) + 0x170));
      return;
    }
  }
  return;
}

