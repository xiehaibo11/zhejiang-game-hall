
/* v8::internal::LargeObjectSpace::TearDown() */

void __thiscall v8::internal::LargeObjectSpace::TearDown(LargeObjectSpace *this)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  MemoryChunk *pMVar4;
  Logger *pLVar5;
  MemoryAllocator *this_00;
  
  pMVar4 = *(MemoryChunk **)(this + 0x20);
  while ((pMVar4 != (MemoryChunk *)0x0 || (*(long *)(this + 0x28) != 0))) {
    pLVar5 = *(Logger **)(*(long *)(this + 0x40) + 0xd08);
    uVar1 = Logger::is_logging(pLVar5);
    if ((uVar1 & 1) != 0) {
      Logger::DeleteEvent(pLVar5,"LargeObjectChunk",pMVar4);
    }
    if (*(MemoryChunk **)(this + 0x28) == pMVar4) {
      *(undefined8 *)(this + 0x28) = *(undefined8 *)(pMVar4 + 0xe8);
    }
    if (*(MemoryChunk **)(this + 0x20) == pMVar4) {
      *(undefined8 *)(this + 0x20) = *(undefined8 *)(pMVar4 + 0xe0);
    }
    lVar2 = *(long *)(pMVar4 + 0xe0);
    lVar3 = *(long *)(pMVar4 + 0xe8);
    if (lVar2 != 0) {
      *(long *)(lVar2 + 0xe8) = lVar3;
    }
    if (lVar3 != 0) {
      *(long *)(lVar3 + 0xe0) = lVar2;
    }
    *(undefined8 *)(pMVar4 + 0xe0) = 0;
    *(undefined8 *)(pMVar4 + 0xe8) = 0;
    this_00 = *(MemoryAllocator **)(*(long *)(this + 0x40) + 0x820);
    pLVar5 = *(Logger **)(*(long *)this_00 + 0x9558);
    uVar1 = Logger::is_logging(pLVar5);
    if ((uVar1 & 1) != 0) {
      Logger::DeleteEvent(pLVar5,"MemoryChunk",pMVar4);
    }
    MemoryAllocator::UnregisterMemory(this_00,pMVar4);
    Heap::RememberUnmappedPage
              ((Heap *)(*(long *)this_00 + 0x8850),(ulong)pMVar4,
               (bool)((byte)(*(ulong *)(pMVar4 + 8) >> 6) & 1));
    *(ulong *)(pMVar4 + 8) = *(ulong *)(pMVar4 + 8) | 0x2000;
    MemoryAllocator::PerformFreeMemory(this_00,pMVar4);
    pMVar4 = *(MemoryChunk **)(this + 0x20);
  }
  return;
}

