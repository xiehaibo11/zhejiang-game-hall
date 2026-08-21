
/* v8::internal::NewSpace::Grow() */

void __thiscall v8::internal::NewSpace::Grow(NewSpace *this)

{
  MemoryChunk *pMVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  
  uVar3 = *(ulong *)(this + 0x140);
  if ((ulong)(*(long *)(this + 0x138) * (long)FLAG_semi_space_growth_factor) <=
      *(ulong *)(this + 0x140)) {
    uVar3 = *(long *)(this + 0x138) * (long)FLAG_semi_space_growth_factor;
  }
  uVar2 = SemiSpace::GrowTo((SemiSpace *)(this + 0xd0),uVar3);
  if (((uVar2 & 1) != 0) &&
     (uVar3 = SemiSpace::GrowTo((SemiSpace *)(this + 0x170),uVar3), (uVar3 & 1) == 0)) {
    lVar6 = *(long *)(this + 0x1d8);
    if (this[0x158] != (NewSpace)0x0) {
      uVar2 = *(long *)(this + 0x138) - lVar6;
      uVar3 = uVar2 >> 0x12;
      uVar7 = (uint)uVar3;
      while (0 < (int)uVar7) {
        pMVar1 = *(MemoryChunk **)(this + 0xf8);
        *(undefined8 *)(this + 0xf8) = *(undefined8 *)(pMVar1 + 0xe8);
        if (*(MemoryChunk **)(this + 0xf0) == pMVar1) {
          *(undefined8 *)(this + 0xf0) = *(undefined8 *)(pMVar1 + 0xe0);
        }
        lVar4 = *(long *)(pMVar1 + 0xe0);
        lVar5 = *(long *)(pMVar1 + 0xe8);
        if (lVar4 != 0) {
          *(long *)(lVar4 + 0xe8) = lVar5;
        }
        if (lVar5 != 0) {
          *(long *)(lVar5 + 0xe0) = lVar4;
        }
        *(undefined8 *)(pMVar1 + 0xe0) = 0;
        *(undefined8 *)(pMVar1 + 0xe8) = 0;
        MemoryAllocator::Free<(v8::internal::MemoryAllocator::FreeMode)3>
                  (*(MemoryAllocator **)(*(long *)(this + 0x110) + 0x820),pMVar1);
        uVar7 = (int)uVar3 - 1;
        uVar3 = (ulong)uVar7;
      }
      *(ulong *)(this + 0x120) = *(long *)(this + 0x120) - uVar2;
      MemoryAllocator::Unmapper::FreeQueuedChunks
                ((Unmapper *)(*(long *)(*(long *)(this + 0x110) + 0x820) + 0x88));
    }
    *(long *)(this + 0x138) = lVar6;
  }
  return;
}

