
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x01018598 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* v8::internal::SemiSpace::Commit() */

undefined8 __thiscall v8::internal::SemiSpace::Commit(SemiSpace *this)

{
  SemiSpace *pSVar1;
  MemoryChunk *pMVar2;
  SemiSpace *pSVar3;
  ulong uVar4;
  SemiSpace *pSVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  
  uVar4 = *(ulong *)(this + 0x68);
  iVar9 = (int)(uVar4 >> 0x12);
  if (0 < iVar9) {
    iVar8 = 0;
    pSVar1 = this + 0x28;
    pSVar3 = this;
    do {
      pSVar3 = (SemiSpace *)
               MemoryAllocator::
               AllocatePage<(v8::internal::MemoryAllocator::AllocationMode)1,v8::internal::SemiSpace>
                         ((MemoryAllocator *)pSVar3,0x3fee8,this,0);
      if (pSVar3 == (SemiSpace *)0x0) {
        if (iVar8 != 0) {
          do {
            pMVar2 = *(MemoryChunk **)(this + 0x28);
            *(undefined8 *)(this + 0x28) = *(undefined8 *)(pMVar2 + 0xe8);
            if (*(MemoryChunk **)(this + 0x20) == pMVar2) {
              *(undefined8 *)(this + 0x20) = *(undefined8 *)(pMVar2 + 0xe0);
            }
            lVar6 = *(long *)(pMVar2 + 0xe0);
            lVar7 = *(long *)(pMVar2 + 0xe8);
            if (lVar6 != 0) {
              *(long *)(lVar6 + 0xe8) = lVar7;
            }
            if (lVar7 != 0) {
              *(long *)(lVar7 + 0xe0) = lVar6;
            }
            *(undefined8 *)(pMVar2 + 0xe0) = 0;
            *(undefined8 *)(pMVar2 + 0xe8) = 0;
            MemoryAllocator::Free<(v8::internal::MemoryAllocator::FreeMode)3>
                      (*(MemoryAllocator **)(*(long *)(this + 0x40) + 0x820),pMVar2);
            iVar8 = iVar8 + -1;
          } while (0 < iVar8);
        }
        return 0;
      }
      lVar6 = *(long *)pSVar1;
      pSVar5 = pSVar1;
      if (lVar6 == 0) {
        *(undefined8 *)(pSVar3 + 0xe0) = 0;
        *(undefined8 *)(pSVar3 + 0xe8) = 0;
        *(SemiSpace **)(this + 0x20) = pSVar3;
      }
      else {
        lVar7 = *(long *)(lVar6 + 0xe0);
        *(long *)(pSVar3 + 0xe0) = lVar7;
        *(long *)(pSVar3 + 0xe8) = lVar6;
        *(SemiSpace **)(lVar6 + 0xe0) = pSVar3;
        if (lVar7 != 0) {
          pSVar5 = (SemiSpace *)(lVar7 + 0xe8);
        }
      }
      iVar8 = iVar8 + 1;
      *(SemiSpace **)pSVar5 = pSVar3;
    } while (iVar9 != iVar8);
    uVar4 = *(ulong *)(this + 0x68);
  }
  *(undefined4 *)(this + 0x98) = 0;
  uVar4 = *(long *)(this + 0x50) + uVar4;
  *(long *)(this + 0x90) = *(long *)(this + 0x20);
  *(ulong *)(this + 0x50) = uVar4;
  if (*(ulong *)(this + 0x58) < uVar4) {
    *(ulong *)(this + 0x58) = uVar4;
  }
  if (*(long *)(this + 0x80) == 0) {
    *(undefined8 *)(this + 0x80) = *(undefined8 *)(*(long *)(this + 0x20) + 0x20);
  }
  this[0x88] = (SemiSpace)0x1;
  return 1;
}

