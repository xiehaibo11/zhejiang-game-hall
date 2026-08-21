
/* v8::internal::PagedSpace::TearDown() */

void __thiscall v8::internal::PagedSpace::TearDown(PagedSpace *this)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  MemoryChunk *pMVar4;
  MemoryChunk *pMVar5;
  MemoryAllocator *this_00;
  Logger *this_01;
  
  pMVar5 = *(MemoryChunk **)(this + 0x20);
  if (pMVar5 == (MemoryChunk *)0x0 && *(MemoryChunk **)(this + 0x28) == (MemoryChunk *)0x0) {
LAB_010160d8:
    *(undefined8 *)(this + 0xa8) = 0;
    *(undefined8 *)(this + 0xb0) = 0;
    *(undefined8 *)(this + 0xb8) = 0;
    return;
  }
  if (*(MemoryChunk **)(this + 0x28) != pMVar5) goto LAB_01016084;
  do {
    *(undefined8 *)(this + 0x28) = *(undefined8 *)(pMVar5 + 0xe8);
LAB_01016084:
    do {
      pMVar4 = pMVar5 + 0xe0;
      *(long *)(this + 0x20) = *(long *)pMVar4;
      lVar1 = *(long *)pMVar4;
      lVar2 = *(long *)(pMVar5 + 0xe8);
      if (lVar1 != 0) {
        *(long *)(lVar1 + 0xe8) = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0xe0) = lVar1;
      }
      *(long *)pMVar4 = 0;
      *(undefined8 *)(pMVar5 + 0xe8) = 0;
      this_00 = *(MemoryAllocator **)(*(long *)(this + 0x40) + 0x820);
      this_01 = *(Logger **)(*(long *)this_00 + 0x9558);
      uVar3 = Logger::is_logging(this_01);
      if ((uVar3 & 1) != 0) {
        Logger::DeleteEvent(this_01,"MemoryChunk",pMVar5);
      }
      MemoryAllocator::UnregisterMemory(this_00,pMVar5);
      Heap::RememberUnmappedPage
                ((Heap *)(*(long *)this_00 + 0x8850),(ulong)pMVar5,
                 (bool)((byte)(*(ulong *)(pMVar5 + 8) >> 6) & 1));
      *(ulong *)(pMVar5 + 8) = *(ulong *)(pMVar5 + 8) | 0x2000;
      MemoryAllocator::PerformFreeMemory(this_00,pMVar5);
      pMVar5 = *(MemoryChunk **)(this + 0x20);
      if (pMVar5 == (MemoryChunk *)0x0 && *(MemoryChunk **)(this + 0x28) == (MemoryChunk *)0x0)
      goto LAB_010160d8;
    } while (*(MemoryChunk **)(this + 0x28) != pMVar5);
  } while( true );
}

