
/* v8::internal::NewSpace::Shrink() */

void __thiscall v8::internal::NewSpace::Shrink(NewSpace *this)

{
  ulong uVar1;
  long lVar2;
  MemoryChunk *pMVar3;
  MemoryChunk *pMVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  
  uVar7 = *(ulong *)(this + 0x148);
  lVar2 = (**(code **)(*(long *)this + 0x48))();
  uVar1 = lVar2 << 1;
  if ((ulong)(lVar2 << 1) <= uVar7) {
    uVar1 = uVar7;
  }
  uVar7 = uVar1 + 0x3ffff & 0xfffffffffffc0000;
  uVar1 = *(ulong *)(this + 0x138) - uVar7;
  if (uVar7 <= *(ulong *)(this + 0x138) && uVar1 != 0) {
    if (this[0x158] != (NewSpace)0x0) {
      uVar10 = uVar1 >> 0x12;
      uVar8 = (uint)uVar10;
      while (0 < (int)uVar8) {
        pMVar4 = *(MemoryChunk **)(this + 0xf8);
        *(undefined8 *)(this + 0xf8) = *(undefined8 *)(pMVar4 + 0xe8);
        if (*(MemoryChunk **)(this + 0xf0) == pMVar4) {
          *(undefined8 *)(this + 0xf0) = *(undefined8 *)(pMVar4 + 0xe0);
        }
        lVar2 = *(long *)(pMVar4 + 0xe0);
        lVar5 = *(long *)(pMVar4 + 0xe8);
        if (lVar2 != 0) {
          *(long *)(lVar2 + 0xe8) = lVar5;
        }
        if (lVar5 != 0) {
          *(long *)(lVar5 + 0xe0) = lVar2;
        }
        *(undefined8 *)(pMVar4 + 0xe0) = 0;
        *(undefined8 *)(pMVar4 + 0xe8) = 0;
        MemoryAllocator::Free<(v8::internal::MemoryAllocator::FreeMode)3>
                  (*(MemoryAllocator **)(*(long *)(this + 0x110) + 0x820),pMVar4);
        uVar8 = (int)uVar10 - 1;
        uVar10 = (ulong)uVar8;
      }
      *(ulong *)(this + 0x120) = *(long *)(this + 0x120) - uVar1;
      MemoryAllocator::Unmapper::FreeQueuedChunks
                ((Unmapper *)(*(long *)(*(long *)(this + 0x110) + 0x820) + 0x88));
    }
    pMVar4 = *(MemoryChunk **)(this + 400);
    *(ulong *)(this + 0x138) = uVar7;
    *(undefined4 *)(this + 0x208) = 0;
    *(MemoryChunk **)(this + 0x200) = pMVar4;
    if (this[0x1f8] != (NewSpace)0x0) {
      lVar2 = *(long *)(this + 0x1d8);
      iVar9 = (int)(lVar2 - uVar7 >> 0x12);
      if (0 < iVar9) {
        while( true ) {
          iVar9 = iVar9 + -1;
          pMVar3 = *(MemoryChunk **)(this + 0x198);
          *(undefined8 *)(this + 0x198) = *(undefined8 *)(pMVar3 + 0xe8);
          if (pMVar4 == pMVar3) {
            *(undefined8 *)(this + 400) = *(undefined8 *)(pMVar3 + 0xe0);
          }
          lVar5 = *(long *)(pMVar3 + 0xe0);
          lVar6 = *(long *)(pMVar3 + 0xe8);
          if (lVar5 != 0) {
            *(long *)(lVar5 + 0xe8) = lVar6;
          }
          if (lVar6 != 0) {
            *(long *)(lVar6 + 0xe0) = lVar5;
          }
          *(undefined8 *)(pMVar3 + 0xe0) = 0;
          *(undefined8 *)(pMVar3 + 0xe8) = 0;
          MemoryAllocator::Free<(v8::internal::MemoryAllocator::FreeMode)3>
                    (*(MemoryAllocator **)(*(long *)(this + 0x1b0) + 0x820),pMVar3);
          if (iVar9 < 1) break;
          pMVar4 = *(MemoryChunk **)(this + 400);
        }
      }
      *(ulong *)(this + 0x1c0) = *(long *)(this + 0x1c0) - (lVar2 - uVar7);
      MemoryAllocator::Unmapper::FreeQueuedChunks
                ((Unmapper *)(*(long *)(*(long *)(this + 0x1b0) + 0x820) + 0x88));
    }
    *(ulong *)(this + 0x1d8) = uVar7;
  }
  return;
}

