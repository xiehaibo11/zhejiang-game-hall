
/* v8::internal::ReadOnlySpace::Seal(v8::internal::ReadOnlySpace::SealMode) */

void __thiscall v8::internal::ReadOnlySpace::Seal(ReadOnlySpace *this,int param_2)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  MemoryAllocator *this_00;
  undefined8 *puVar4;
  MemoryChunk *pMVar5;
  
  PagedSpace::FreeLinearAllocationArea((PagedSpace *)this);
  this[0xe8] = (ReadOnlySpace)0x1;
  this_00 = *(MemoryAllocator **)(*(long *)(this + 0x40) + 0x820);
  if (param_2 == 0) {
    pMVar5 = *(MemoryChunk **)(this + 0x20);
    *(undefined8 *)(this + 0x40) = 0;
    for (; pMVar5 != (MemoryChunk *)0x0; pMVar5 = *(MemoryChunk **)(pMVar5 + 0xe0)) {
      MemoryAllocator::UnregisterMemory(this_00,pMVar5);
      MemoryChunk::ReleaseAllocatedMemoryNeededForWritableChunk();
      iVar3 = -1;
      do {
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(*(long *)(*(long *)(pMVar5 + 0x58) + 0x60) + 8));
      *(undefined8 *)(pMVar5 + 0x18) = 0;
      *(undefined8 *)(pMVar5 + 0x58) = 0;
    }
  }
  puVar4 = *(undefined8 **)(this + 0x20);
  while( true ) {
    if (puVar4 == (undefined8 *)0x0) {
      return;
    }
    lVar1 = 0x20;
    if ((puVar4[1] & 1) != 0) {
      lVar1 = 0x28;
    }
    uVar2 = SetPermissions(*(undefined8 *)(this_00 + lVar1),puVar4,*puVar4,1);
    if ((uVar2 & 1) == 0) break;
    puVar4 = (undefined8 *)puVar4[0x1c];
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","SetPermissions(page_allocator, p->address(), p->size(), access)");
}

