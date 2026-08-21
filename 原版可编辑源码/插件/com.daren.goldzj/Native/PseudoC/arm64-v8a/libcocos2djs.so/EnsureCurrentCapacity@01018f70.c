
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x010190c0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* v8::internal::SemiSpace::EnsureCurrentCapacity() */

undefined8 __thiscall v8::internal::SemiSpace::EnsureCurrentCapacity(SemiSpace *this)

{
  SemiSpace *pSVar1;
  MemoryAllocator *this_00;
  Page *pPVar2;
  MemoryChunk *pMVar3;
  MemoryChunk *pMVar4;
  SemiSpace *pSVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  MemoryChunk *pMVar10;
  
  if (this[0x88] != (SemiSpace)0x0) {
    pMVar3 = *(MemoryChunk **)(this + 0x20);
    iVar9 = 0;
    iVar8 = (int)(*(ulong *)(this + 0x68) >> 0x12);
    this_00 = (MemoryAllocator *)this;
    if ((0 < iVar8) && (pMVar3 != (MemoryChunk *)0x0)) {
      iVar9 = 0;
      do {
        pMVar3 = *(MemoryChunk **)(pMVar3 + 0xe0);
        iVar9 = iVar9 + 1;
        if (iVar8 <= iVar9) break;
      } while (pMVar3 != (MemoryChunk *)0x0);
    }
    while (pMVar3 != (MemoryChunk *)0x0) {
      pMVar4 = pMVar3 + 0xe0;
      pMVar10 = *(MemoryChunk **)pMVar4;
      if (*(MemoryChunk **)(this + 0x28) == pMVar3) {
        *(undefined8 *)(this + 0x28) = *(undefined8 *)(pMVar3 + 0xe8);
      }
      if (*(MemoryChunk **)(this + 0x20) == pMVar3) {
        *(undefined8 *)(this + 0x20) = *(undefined8 *)pMVar4;
        lVar6 = *(long *)(pMVar3 + 0xe0);
        lVar7 = *(long *)(pMVar3 + 0xe8);
      }
      else {
        lVar6 = *(long *)(pMVar3 + 0xe0);
        lVar7 = *(long *)(pMVar3 + 0xe8);
      }
      if (lVar6 != 0) {
        *(long *)(lVar6 + 0xe8) = lVar7;
      }
      if (lVar7 != 0) {
        *(long *)(lVar7 + 0xe0) = lVar6;
      }
      *(undefined8 *)pMVar4 = 0;
      *(undefined8 *)(pMVar3 + 0xe8) = 0;
      *(ulong *)(pMVar3 + 8) = *(ulong *)(pMVar3 + 8) & 0xffffffffffffffe7;
      this_00 = *(MemoryAllocator **)(*(long *)(this + 0x40) + 0x820);
      MemoryAllocator::Free<(v8::internal::MemoryAllocator::FreeMode)3>(this_00,pMVar3);
      pMVar3 = pMVar10;
    }
    if (iVar9 < iVar8) {
      pSVar1 = this + 0x28;
      iVar8 = iVar8 - iVar9;
      do {
        pPVar2 = MemoryAllocator::
                 AllocatePage<(v8::internal::MemoryAllocator::AllocationMode)1,v8::internal::SemiSpace>
                           (this_00,0x3fee8,this,0);
        if (pPVar2 == (Page *)0x0) {
          return 0;
        }
        lVar6 = *(long *)pSVar1;
        pSVar5 = pSVar1;
        if (lVar6 == 0) {
          *(undefined8 *)(pPVar2 + 0xe0) = 0;
          *(undefined8 *)(pPVar2 + 0xe8) = 0;
          *(Page **)(this + 0x20) = pPVar2;
        }
        else {
          lVar7 = *(long *)(lVar6 + 0xe0);
          *(long *)(pPVar2 + 0xe0) = lVar7;
          *(long *)(pPVar2 + 0xe8) = lVar6;
          *(Page **)(lVar6 + 0xe0) = pPVar2;
          if (lVar7 != 0) {
            pSVar5 = (SemiSpace *)(lVar7 + 0xe8);
          }
        }
        *(Page **)pSVar5 = pPVar2;
        memset(*(void **)(pPVar2 + 0x10),0,0x2000);
        *(undefined8 *)(pPVar2 + 0x68) = 0;
        *(undefined8 *)(pPVar2 + 8) = *(undefined8 *)(*(long *)(this + 0x20) + 8);
        this_00 = *(MemoryAllocator **)(this + 0x40);
        Heap::CreateFillerObjectAt
                  ((Heap *)this_00,*(undefined8 *)(pPVar2 + 0x20),
                   *(int *)(pPVar2 + 0x28) - (int)*(undefined8 *)(pPVar2 + 0x20),1,1);
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      return 1;
    }
  }
  return 1;
}

