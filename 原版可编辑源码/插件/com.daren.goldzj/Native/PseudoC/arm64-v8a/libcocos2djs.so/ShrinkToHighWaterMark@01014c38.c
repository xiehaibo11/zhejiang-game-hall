
/* v8::internal::Page::ShrinkToHighWaterMark() */

ulong __thiscall v8::internal::Page::ShrinkToHighWaterMark(Page *this)

{
  Page *pPVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  Page *local_28;
  
  if (*(long *)(this + 0x48) == 0) {
    uVar5 = 0;
  }
  else {
    pPVar1 = this + *(long *)(this + 0x98);
    local_28 = pPVar1 + 1;
    lVar4 = *(long *)(this + 0x28);
    uVar5 = 0;
    if (lVar4 - (long)pPVar1 != 0) {
      uVar6 = (ulong)local_28 & 0xffffffff00000000;
      uVar7 = uVar6 | 7;
      if ((*(ushort *)(uVar7 + *(uint *)pPVar1) | 1) != 0xa1) {
LAB_01014d98:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","filler.IsFreeSpaceOrFiller()");
      }
      if (FLAG_v8_os_page_size == 0) {
        lVar3 = CommitPageSize();
      }
      else {
        lVar3 = (long)FLAG_v8_os_page_size << 10;
      }
      uVar5 = lVar4 - (long)pPVar1 & -lVar3;
      if (uVar5 != 0) {
        if (FLAG_trace_gc_verbose != '\0') {
          PrintIsolate((void *)(*(long *)(this + 0x18) + -0x8850),
                       "Shrinking page %p: end %p -> %p\n",this,*(long *)(this + 0x28),
                       *(long *)(this + 0x28) - uVar5);
        }
        Heap::CreateFillerObjectAt
                  (*(Heap **)(this + 0x18),pPVar1,*(int *)(this + 0x28) - ((int)pPVar1 + (int)uVar5)
                   ,1,1);
        MemoryAllocator::PartialFreeMemory
                  (*(MemoryAllocator **)(*(long *)(this + 0x18) + 0x820),(MemoryChunk *)this,
                   (ulong)(this + (*(long *)this - uVar5)),uVar5,*(long *)(this + 0x28) - uVar5);
        if (pPVar1 != *(Page **)(this + 0x28)) {
          if ((*(ushort *)(uVar7 + *(uint *)pPVar1) | 1) != 0xa1) goto LAB_01014d98;
          iVar2 = HeapObject::SizeFromMap((HeapObject *)&local_28,uVar6 | *(uint *)pPVar1);
          if (pPVar1 + iVar2 != *(Page **)(this + 0x28)) {
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.","filler.address() + filler.Size() == area_end()");
          }
        }
      }
    }
  }
  return uVar5;
}

