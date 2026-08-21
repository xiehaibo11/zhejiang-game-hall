
/* v8::internal::LargeObjectSpace::FreeUnmarkedObjects() */

void __thiscall v8::internal::LargeObjectSpace::FreeUnmarkedObjects(LargeObjectSpace *this)

{
  uint *puVar1;
  uint uVar2;
  LargePage *pLVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  Logger *this_00;
  MemoryAllocator *pMVar10;
  long lVar11;
  LargePage *this_01;
  LargePage *pLVar12;
  ulong local_68;
  
  if (*(LargePage **)(this + 0x20) == (LargePage *)0x0) {
    lVar11 = 0;
  }
  else {
    lVar11 = 0;
    this_01 = *(LargePage **)(this + 0x20);
    do {
      while( true ) {
        pLVar12 = *(LargePage **)(this_01 + 0xe0);
        local_68 = (long)*(uint **)(this_01 + 0x20) + 1;
        iVar5 = HeapObject::SizeFromMap
                          ((HeapObject *)&local_68,
                           local_68 & 0xffffffff00000000 | (ulong)**(uint **)(this_01 + 0x20));
        uVar7 = local_68;
        lVar9 = (long)iVar5;
        uVar8 = local_68 - (local_68 & 0xfffffffffffc0000);
        puVar1 = (uint *)(*(long *)((local_68 & 0xfffffffffffc0000) + 0x10) +
                         (uVar8 >> 7 & 0x1ffffff) * 4);
        uVar2 = 1 << (ulong)((uint)(uVar8 >> 2) & 0x1f);
        if ((uVar2 & *puVar1) != 0) break;
LAB_0101dfa8:
        (**(code **)(*(long *)this + 0x90))(this,this_01,lVar9);
        pMVar10 = *(MemoryAllocator **)(*(long *)(this + 0x40) + 0x820);
        this_00 = *(Logger **)(*(long *)pMVar10 + 0x9558);
        uVar7 = Logger::is_logging(this_00);
        if ((uVar7 & 1) != 0) {
          Logger::DeleteEvent(this_00,"MemoryChunk",this_01);
        }
        MemoryAllocator::UnregisterMemory(pMVar10,(MemoryChunk *)this_01);
        Heap::RememberUnmappedPage
                  ((Heap *)(*(long *)pMVar10 + 0x8850),(ulong)this_01,
                   (bool)((byte)(*(ulong *)(this_01 + 8) >> 6) & 1));
        *(ulong *)(this_01 + 8) = *(ulong *)(this_01 + 8) | 0x2000;
        MemoryAllocator::Unmapper::AddMemoryChunkSafe
                  ((Unmapper *)(pMVar10 + 0x88),(MemoryChunk *)this_01);
joined_r0x0101e0ec:
        this_01 = pLVar12;
        if (pLVar12 == (LargePage *)0x0) goto LAB_0101e0f8;
      }
      uVar2 = uVar2 << 1;
      bVar4 = uVar2 == 0;
      if (bVar4) {
        uVar2 = 1;
      }
      if ((puVar1[bVar4] & uVar2) == 0) goto LAB_0101dfa8;
      lVar11 = lVar11 + lVar9;
      if (((byte)this_01[8] & 1) != 0) goto joined_r0x0101e0ec;
      if (FLAG_v8_os_page_size == 0) {
        lVar6 = CommitPageSize();
      }
      else {
        lVar6 = (long)FLAG_v8_os_page_size << 10;
      }
      uVar8 = ((uVar7 - (long)this_01) + lVar9 + lVar6) - 2 & -lVar6;
      uVar7 = base::OS::HasLazyCommits();
      pLVar3 = this_01;
      if (((uVar7 & 1) != 0) &&
         ((((byte)this_01[10] >> 5 & 1) != 0 || (*(int *)(*(long *)(this_01 + 0x58) + 0x48) != 5))))
      {
        pLVar3 = this_01 + 0x98;
      }
      if (this_01 + uVar8 != (LargePage *)0x0) {
        if (uVar8 < *(ulong *)pLVar3) {
          LargePage::ClearOutOfLiveRangeSlots(this_01,(ulong)(this_01 + uVar8));
          lVar9 = *(long *)(this_01 + 0x20);
          pMVar10 = *(MemoryAllocator **)(*(long *)(this + 0x40) + 0x820);
          uVar7 = *(long *)this_01 - uVar8;
          iVar5 = HeapObject::SizeFromMap
                            ((HeapObject *)&local_68,
                             local_68 & 0xffffffff00000000 | (ulong)*(uint *)(local_68 - 1));
          MemoryAllocator::PartialFreeMemory
                    (pMVar10,(MemoryChunk *)this_01,(ulong)(this_01 + uVar8),uVar7,lVar9 + iVar5);
          *(ulong *)(this + 0x68) = *(long *)(this + 0x68) - uVar7;
          *(ulong *)(this + 0x50) = *(long *)(this + 0x50) - uVar7;
        }
        goto joined_r0x0101e0ec;
      }
      this_01 = pLVar12;
    } while (pLVar12 != (LargePage *)0x0);
  }
LAB_0101e0f8:
  *(long *)(this + 0x78) = lVar11;
  return;
}

