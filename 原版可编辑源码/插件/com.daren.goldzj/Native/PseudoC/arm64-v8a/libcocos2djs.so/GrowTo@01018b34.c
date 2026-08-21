
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x01018c04 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* v8::internal::SemiSpace::GrowTo(unsigned long) */

undefined8 __thiscall v8::internal::SemiSpace::GrowTo(SemiSpace *this,ulong param_1)

{
  SemiSpace *pSVar1;
  ulong uVar2;
  MemoryChunk *pMVar3;
  SemiSpace *pSVar4;
  Page *pPVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  
  pSVar4 = this;
  if ((this[0x88] == (SemiSpace)0x0) &&
     (pSVar4 = (SemiSpace *)Commit(this), ((ulong)pSVar4 & 1) == 0)) {
LAB_01018cb8:
    uVar6 = 0;
  }
  else {
    lVar7 = *(long *)(this + 0x68);
    iVar11 = (int)(param_1 - lVar7 >> 0x12);
    if (0 < iVar11) {
      iVar10 = 0;
      pSVar1 = this + 0x28;
      do {
        pPVar5 = MemoryAllocator::
                 AllocatePage<(v8::internal::MemoryAllocator::AllocationMode)1,v8::internal::SemiSpace>
                           ((MemoryAllocator *)pSVar4,0x3fee8,this,0);
        if (pPVar5 == (Page *)0x0) {
          if (iVar10 != 0) {
            do {
              pMVar3 = *(MemoryChunk **)(this + 0x28);
              *(undefined8 *)(this + 0x28) = *(undefined8 *)(pMVar3 + 0xe8);
              if (*(MemoryChunk **)(this + 0x20) == pMVar3) {
                *(undefined8 *)(this + 0x20) = *(undefined8 *)(pMVar3 + 0xe0);
              }
              lVar7 = *(long *)(pMVar3 + 0xe0);
              lVar8 = *(long *)(pMVar3 + 0xe8);
              if (lVar7 != 0) {
                *(long *)(lVar7 + 0xe8) = lVar8;
              }
              if (lVar8 != 0) {
                *(long *)(lVar8 + 0xe0) = lVar7;
              }
              *(undefined8 *)(pMVar3 + 0xe0) = 0;
              *(undefined8 *)(pMVar3 + 0xe8) = 0;
              MemoryAllocator::Free<(v8::internal::MemoryAllocator::FreeMode)3>
                        (*(MemoryAllocator **)(*(long *)(this + 0x40) + 0x820),pMVar3);
              iVar10 = iVar10 + -1;
            } while (0 < iVar10);
          }
          goto LAB_01018cb8;
        }
        lVar8 = *(long *)pSVar1;
        pSVar4 = pSVar1;
        if (lVar8 == 0) {
          *(undefined8 *)(pPVar5 + 0xe0) = 0;
          *(undefined8 *)(pPVar5 + 0xe8) = 0;
          *(Page **)(this + 0x20) = pPVar5;
        }
        else {
          lVar9 = *(long *)(lVar8 + 0xe0);
          *(long *)(pPVar5 + 0xe0) = lVar9;
          *(long *)(pPVar5 + 0xe8) = lVar8;
          *(Page **)(lVar8 + 0xe0) = pPVar5;
          if (lVar9 != 0) {
            pSVar4 = (SemiSpace *)(lVar9 + 0xe8);
          }
        }
        *(Page **)pSVar4 = pPVar5;
        pSVar4 = *(SemiSpace **)(pPVar5 + 0x10);
        memset(pSVar4,0,0x2000);
        *(undefined8 *)(pPVar5 + 0x68) = 0;
        iVar10 = iVar10 + 1;
        *(ulong *)(pPVar5 + 8) =
             *(ulong *)(pPVar5 + 8) & 0xfffffffffffbfff9 | *(ulong *)(*(long *)pSVar1 + 8) & 0x40006
        ;
      } while (iVar11 != iVar10);
    }
    uVar2 = *(long *)(this + 0x50) + (param_1 - lVar7);
    *(ulong *)(this + 0x50) = uVar2;
    if (*(ulong *)(this + 0x58) < uVar2) {
      *(ulong *)(this + 0x58) = uVar2;
    }
    uVar6 = 1;
    *(ulong *)(this + 0x68) = param_1;
  }
  return uVar6;
}

