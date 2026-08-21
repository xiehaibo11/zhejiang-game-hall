
/* v8::internal::SemiSpace::TearDown() */

void __thiscall v8::internal::SemiSpace::TearDown(SemiSpace *this)

{
  MemoryChunk *pMVar1;
  long lVar2;
  long lVar3;
  MemoryChunk *pMVar4;
  
  if (this[0x88] != (SemiSpace)0x0) {
    while( true ) {
      pMVar1 = *(MemoryChunk **)(this + 0x20);
      pMVar4 = *(MemoryChunk **)(this + 0x28);
      if (pMVar1 == (MemoryChunk *)0x0 && pMVar4 == (MemoryChunk *)0x0) break;
      if (pMVar4 == pMVar1) {
        *(undefined8 *)(this + 0x28) = *(undefined8 *)(pMVar4 + 0xe8);
      }
      pMVar4 = pMVar1 + 0xe0;
      *(undefined8 *)(this + 0x20) = *(undefined8 *)pMVar4;
      lVar2 = *(long *)pMVar4;
      lVar3 = *(long *)(pMVar1 + 0xe8);
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0xe8) = lVar3;
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0xe0) = lVar2;
      }
      *(undefined8 *)pMVar4 = 0;
      *(undefined8 *)(pMVar1 + 0xe8) = 0;
      MemoryAllocator::Free<(v8::internal::MemoryAllocator::FreeMode)3>
                (*(MemoryAllocator **)(*(long *)(this + 0x40) + 0x820),pMVar1);
    }
    *(undefined8 *)(this + 0x90) = 0;
    this[0x88] = (SemiSpace)0x0;
    *(long *)(this + 0x50) = *(long *)(this + 0x50) - *(long *)(this + 0x68);
    MemoryAllocator::Unmapper::FreeQueuedChunks
              ((Unmapper *)(*(long *)(*(long *)(this + 0x40) + 0x820) + 0x88));
  }
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  return;
}

