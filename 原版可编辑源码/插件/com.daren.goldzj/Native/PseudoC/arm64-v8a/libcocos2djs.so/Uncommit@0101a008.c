
/* v8::internal::SemiSpace::Uncommit() */

undefined8 __thiscall v8::internal::SemiSpace::Uncommit(SemiSpace *this)

{
  long lVar1;
  long lVar2;
  MemoryChunk *pMVar3;
  MemoryChunk *pMVar4;
  
  pMVar3 = *(MemoryChunk **)(this + 0x20);
  pMVar4 = *(MemoryChunk **)(this + 0x28);
  if (pMVar3 != (MemoryChunk *)0x0 || pMVar4 != (MemoryChunk *)0x0) {
    do {
      if (pMVar4 == pMVar3) {
        *(undefined8 *)(this + 0x28) = *(undefined8 *)(pMVar3 + 0xe8);
      }
      pMVar4 = pMVar3 + 0xe0;
      *(long *)(this + 0x20) = *(long *)pMVar4;
      lVar1 = *(long *)pMVar4;
      lVar2 = *(long *)(pMVar3 + 0xe8);
      if (lVar1 != 0) {
        *(long *)(lVar1 + 0xe8) = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0xe0) = lVar1;
      }
      *(long *)pMVar4 = 0;
      *(undefined8 *)(pMVar3 + 0xe8) = 0;
      MemoryAllocator::Free<(v8::internal::MemoryAllocator::FreeMode)3>
                (*(MemoryAllocator **)(*(long *)(this + 0x40) + 0x820),pMVar3);
      pMVar3 = *(MemoryChunk **)(this + 0x20);
      pMVar4 = *(MemoryChunk **)(this + 0x28);
    } while (pMVar3 != (MemoryChunk *)0x0 || pMVar4 != (MemoryChunk *)0x0);
  }
  *(undefined8 *)(this + 0x90) = 0;
  this[0x88] = (SemiSpace)0x0;
  *(long *)(this + 0x50) = *(long *)(this + 0x50) - *(long *)(this + 0x68);
  MemoryAllocator::Unmapper::FreeQueuedChunks
            ((Unmapper *)(*(long *)(*(long *)(this + 0x40) + 0x820) + 0x88));
  return 1;
}

