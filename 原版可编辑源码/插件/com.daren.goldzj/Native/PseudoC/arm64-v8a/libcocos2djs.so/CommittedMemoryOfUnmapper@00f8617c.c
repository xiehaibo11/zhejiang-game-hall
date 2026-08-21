
/* v8::internal::Heap::CommittedMemoryOfUnmapper() */

undefined8 __thiscall v8::internal::Heap::CommittedMemoryOfUnmapper(Heap *this)

{
  undefined8 uVar1;
  
  if (*(long *)(this + 0xe8) != 0) {
    uVar1 = MemoryAllocator::Unmapper::CommittedBufferedMemory
                      ((Unmapper *)(*(long *)(this + 0x820) + 0x88));
    return uVar1;
  }
  return 0;
}

