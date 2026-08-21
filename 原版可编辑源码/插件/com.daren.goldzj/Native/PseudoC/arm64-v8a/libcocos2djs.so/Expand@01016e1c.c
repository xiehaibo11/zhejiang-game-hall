
/* v8::internal::PagedSpace::Expand() */

undefined4 __thiscall v8::internal::PagedSpace::Expand(PagedSpace *this)

{
  Mutex *this_00;
  long lVar1;
  ulong uVar2;
  MemoryChunk *pMVar3;
  Page *pPVar4;
  undefined4 uVar5;
  ulong uVar6;
  
  this_00 = (Mutex *)(*(long *)(*(long *)(this + 0x40) + (long)*(int *)(this + 0x48) * 8 + 0x128) +
                     0xc0);
  base::Mutex::Lock(this_00);
  uVar6 = (ulong)*(int *)(this + 0xa0);
  uVar2 = Heap::CanExpandOldGeneration(*(Heap **)(this + 0x40),uVar6);
  if ((((uVar2 & 1) == 0) ||
      (pMVar3 = (MemoryChunk *)
                MemoryAllocator::AllocateChunk
                          (*(MemoryAllocator **)(*(long *)(this + 0x40) + 0x820),uVar6,uVar6,
                           *(undefined4 *)(this + 0x98),this), pMVar3 == (MemoryChunk *)0x0)) ||
     (pPVar4 = (Page *)InitializePage(this,pMVar3), pPVar4 == (Page *)0x0)) {
    uVar5 = 0;
  }
  else {
    if (*(char *)(*(long *)(this + 0x40) + 0xb44) == '\0') {
      *(ulong *)(pPVar4 + 8) = *(ulong *)(pPVar4 + 8) | 0x80;
    }
    AddPage(this,pPVar4);
    lVar1 = *(long *)(pPVar4 + 0x20);
    uVar2 = *(long *)(pPVar4 + 0x28) - lVar1;
    if (uVar2 != 0) {
      Heap::CreateFillerObjectAt(*(Heap **)(this + 0x40),lVar1,uVar2 & 0xffffffff,1,1);
      (**(code **)(**(long **)(this + 0x60) + 0x18))(*(long **)(this + 0x60),lVar1,uVar2,0);
      *(ulong *)(this + 0xb8) = *(long *)(this + 0xb8) - uVar2;
    }
    Heap::NotifyOldGenerationExpansion(*(Heap **)(this + 0x40));
    uVar5 = 1;
  }
  base::Mutex::Unlock(this_00);
  return uVar5;
}

