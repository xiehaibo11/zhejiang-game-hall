
/* v8::internal::NewLargeObjectSpace::FreeDeadObjects(std::__ndk1::function<bool
   (v8::internal::HeapObject)> const&) */

void __thiscall
v8::internal::NewLargeObjectSpace::FreeDeadObjects(NewLargeObjectSpace *this,function *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  MemoryAllocator *this_00;
  Logger *this_01;
  long lVar6;
  MemoryChunk *pMVar7;
  MemoryChunk *pMVar8;
  ulong local_70;
  ulong local_68;
  
  if (*(MemoryChunk **)(this + 0x20) == (MemoryChunk *)0x0) {
    *(undefined8 *)(this + 0x78) = 0;
  }
  else {
    lVar6 = 0;
    bVar2 = false;
    iVar1 = *(int *)(*(long *)(*(long *)(this + 0x40) + 0x828) + 0x58);
    pMVar7 = *(MemoryChunk **)(this + 0x20);
LAB_0101ec4c:
    do {
      pMVar8 = *(MemoryChunk **)(pMVar7 + 0xe0);
      local_70 = (long)*(uint **)(pMVar7 + 0x20) + 1;
      iVar3 = HeapObject::SizeFromMap
                        ((HeapObject *)&local_70,
                         local_70 & 0xffffffff00000000 | (ulong)**(uint **)(pMVar7 + 0x20));
      local_68 = local_70;
      plVar5 = *(long **)(param_1 + 0x20);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_008589d0();
      }
      uVar4 = (**(code **)(*plVar5 + 0x30))(plVar5,&local_68);
      if ((uVar4 & 1) == 0) {
        lVar6 = lVar6 + iVar3;
      }
      else {
        (**(code **)(*(long *)this + 0x90))(this,pMVar7,(long)iVar3);
        this_00 = *(MemoryAllocator **)(*(long *)(this + 0x40) + 0x820);
        this_01 = *(Logger **)(*(long *)this_00 + 0x9558);
        uVar4 = Logger::is_logging(this_01);
        if ((uVar4 & 1) != 0) {
          Logger::DeleteEvent(this_01,"MemoryChunk",pMVar7);
        }
        MemoryAllocator::UnregisterMemory(this_00,pMVar7);
        Heap::RememberUnmappedPage
                  ((Heap *)(*(long *)this_00 + 0x8850),(ulong)pMVar7,
                   (bool)((byte)(*(ulong *)(pMVar7 + 8) >> 6) & 1));
        *(ulong *)(pMVar7 + 8) = *(ulong *)(pMVar7 + 8) | 0x2000;
        MemoryAllocator::Unmapper::AddMemoryChunkSafe((Unmapper *)(this_00 + 0x88),pMVar7);
        bVar2 = true;
        if ((1 < iVar1) && (FLAG_concurrent_marking != '\0')) {
          ConcurrentMarking::ClearMemoryChunkData
                    (*(ConcurrentMarking **)(*(long *)(this + 0x40) + 0x830),pMVar7);
          bVar2 = true;
          pMVar7 = pMVar8;
          if (pMVar8 == (MemoryChunk *)0x0) break;
          goto LAB_0101ec4c;
        }
      }
      pMVar7 = pMVar8;
    } while (pMVar8 != (MemoryChunk *)0x0);
    *(long *)(this + 0x78) = lVar6;
    if (bVar2) {
      MemoryAllocator::Unmapper::FreeQueuedChunks
                ((Unmapper *)(*(long *)(*(long *)(this + 0x40) + 0x820) + 0x88));
    }
  }
  return;
}

