
/* v8::internal::SemiSpace::ShrinkTo(unsigned long) */

undefined8 __thiscall v8::internal::SemiSpace::ShrinkTo(SemiSpace *this,ulong param_1)

{
  MemoryChunk *pMVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  
  if (this[0x88] != (SemiSpace)0x0) {
    lVar2 = *(long *)(this + 0x68);
    uVar6 = lVar2 - param_1 >> 0x12;
    uVar5 = (uint)uVar6;
    while (0 < (int)uVar5) {
      pMVar1 = *(MemoryChunk **)(this + 0x28);
      *(undefined8 *)(this + 0x28) = *(undefined8 *)(pMVar1 + 0xe8);
      if (*(MemoryChunk **)(this + 0x20) == pMVar1) {
        *(undefined8 *)(this + 0x20) = *(undefined8 *)(pMVar1 + 0xe0);
      }
      lVar3 = *(long *)(pMVar1 + 0xe0);
      lVar4 = *(long *)(pMVar1 + 0xe8);
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0xe8) = lVar4;
      }
      if (lVar4 != 0) {
        *(long *)(lVar4 + 0xe0) = lVar3;
      }
      *(undefined8 *)(pMVar1 + 0xe0) = 0;
      *(undefined8 *)(pMVar1 + 0xe8) = 0;
      MemoryAllocator::Free<(v8::internal::MemoryAllocator::FreeMode)3>
                (*(MemoryAllocator **)(*(long *)(this + 0x40) + 0x820),pMVar1);
      uVar5 = (int)uVar6 - 1;
      uVar6 = (ulong)uVar5;
    }
    *(ulong *)(this + 0x50) = *(long *)(this + 0x50) - (lVar2 - param_1);
    MemoryAllocator::Unmapper::FreeQueuedChunks
              ((Unmapper *)(*(long *)(*(long *)(this + 0x40) + 0x820) + 0x88));
  }
  *(ulong *)(this + 0x68) = param_1;
  return 1;
}

