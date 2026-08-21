
/* v8::internal::IncrementalMarking::StepSizeToMakeProgress() */

ulong __thiscall v8::internal::IncrementalMarking::StepSizeToMakeProgress(IncrementalMarking *this)

{
  long lVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(*(long *)(*(long *)this + 0xe8) + 0x138);
  lVar1 = MemoryChunkLayout::AllocatableMemoryInDataPage();
  uVar2 = Heap::CanExpandOldGeneration(*(Heap **)this,(uVar2 >> 0x12) * lVar1 + 0x4000000);
  if ((uVar2 & 1) == 0) {
    uVar2 = Heap::OldGenerationSizeOfObjects(*(Heap **)this);
    uVar2 = uVar2 >> 5;
  }
  else {
    uVar2 = *(ulong *)(this + 0x28) >> 8;
    if (uVar2 < 0x10001) {
      uVar2 = 0x10000;
    }
    if (0x3ffff < uVar2) {
      uVar2 = 0x40000;
    }
  }
  return uVar2;
}

