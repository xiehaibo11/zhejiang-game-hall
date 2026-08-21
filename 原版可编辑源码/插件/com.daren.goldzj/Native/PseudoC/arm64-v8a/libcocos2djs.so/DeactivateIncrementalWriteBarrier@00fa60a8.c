
/* v8::internal::IncrementalMarking::DeactivateIncrementalWriteBarrier() */

void __thiscall
v8::internal::IncrementalMarking::DeactivateIncrementalWriteBarrier(IncrementalMarking *this)

{
  long lVar1;
  MemoryChunk *pMVar2;
  
  lVar1 = *(long *)this;
  pMVar2 = *(MemoryChunk **)(*(long *)(lVar1 + 0xf0) + 0x20);
  if (pMVar2 != (MemoryChunk *)0x0) {
    do {
      MemoryChunk::SetOldGenerationPageFlags(pMVar2,false);
      pMVar2 = *(MemoryChunk **)(pMVar2 + 0xe0);
    } while (pMVar2 != (MemoryChunk *)0x0);
    lVar1 = *(long *)this;
  }
  pMVar2 = *(MemoryChunk **)(*(long *)(lVar1 + 0x100) + 0x20);
  if (pMVar2 != (MemoryChunk *)0x0) {
    do {
      MemoryChunk::SetOldGenerationPageFlags(pMVar2,false);
      pMVar2 = *(MemoryChunk **)(pMVar2 + 0xe0);
    } while (pMVar2 != (MemoryChunk *)0x0);
    lVar1 = *(long *)this;
  }
  pMVar2 = *(MemoryChunk **)(*(long *)(lVar1 + 0xf8) + 0x20);
  if (pMVar2 != (MemoryChunk *)0x0) {
    do {
      MemoryChunk::SetOldGenerationPageFlags(pMVar2,false);
      pMVar2 = *(MemoryChunk **)(pMVar2 + 0xe0);
    } while (pMVar2 != (MemoryChunk *)0x0);
    lVar1 = *(long *)this;
  }
  pMVar2 = *(MemoryChunk **)(*(long *)(lVar1 + 0xe8) + 0xf0);
  if (pMVar2 != (MemoryChunk *)0x0) {
    do {
      MemoryChunk::SetYoungGenerationPageFlags(pMVar2,false);
      pMVar2 = *(MemoryChunk **)(pMVar2 + 0xe0);
    } while (pMVar2 != (MemoryChunk *)0x0);
    lVar1 = *(long *)this;
  }
  pMVar2 = *(MemoryChunk **)(*(long *)(lVar1 + 0x118) + 0x20);
  if (pMVar2 != (MemoryChunk *)0x0) {
    do {
      MemoryChunk::SetYoungGenerationPageFlags(pMVar2,false);
      pMVar2 = *(MemoryChunk **)(pMVar2 + 0xe0);
    } while (pMVar2 != (MemoryChunk *)0x0);
    lVar1 = *(long *)this;
  }
  pMVar2 = *(MemoryChunk **)(*(long *)(lVar1 + 0x108) + 0x20);
  if (pMVar2 != (MemoryChunk *)0x0) {
    do {
      MemoryChunk::SetOldGenerationPageFlags(pMVar2,false);
      pMVar2 = *(MemoryChunk **)(pMVar2 + 0xe0);
    } while (pMVar2 != (MemoryChunk *)0x0);
    lVar1 = *(long *)this;
  }
  for (pMVar2 = *(MemoryChunk **)(*(long *)(lVar1 + 0x110) + 0x20); pMVar2 != (MemoryChunk *)0x0;
      pMVar2 = *(MemoryChunk **)(pMVar2 + 0xe0)) {
    MemoryChunk::SetOldGenerationPageFlags(pMVar2,false);
  }
  return;
}

