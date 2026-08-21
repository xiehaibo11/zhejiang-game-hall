
/* void 
   v8::internal::MemoryAllocator::Unmapper::PerformFreeMemoryOnQueuedChunks<(v8::internal::MemoryAllocator::Unmapper::FreeMode)1>()
    */

void __thiscall
v8::internal::MemoryAllocator::Unmapper::
PerformFreeMemoryOnQueuedChunks<(v8::internal::MemoryAllocator::Unmapper::FreeMode)1>
          (Unmapper *this)

{
  Mutex *this_00;
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  void *pvVar10;
  MemoryChunk *pMVar11;
  undefined8 uVar12;
  MemoryChunk *local_28;
  
  if (FLAG_trace_unmapper != '\0') {
    lVar7 = *(long *)this;
    base::Mutex::Lock((Mutex *)(this + 0x10));
    lVar8 = *(long *)(this + 0x38);
    lVar3 = *(long *)(this + 0x40);
    lVar1 = *(long *)(this + 0x50);
    lVar4 = *(long *)(this + 0x58);
    lVar2 = *(long *)(this + 0x68);
    lVar5 = *(long *)(this + 0x70);
    base::Mutex::Unlock((Mutex *)(this + 0x10));
    PrintIsolate((void *)(lVar7 + -0x8850),
                 "Unmapper::PerformFreeMemoryOnQueuedChunks: %d queued chunks\n",
                 (ulong)(uint)((int)((ulong)(lVar4 - lVar1) >> 3) +
                               (int)((ulong)(lVar3 - lVar8) >> 3) +
                              (int)((ulong)(lVar5 - lVar2) >> 3)));
  }
  this_00 = (Mutex *)(this + 0x10);
  base::Mutex::Lock(this_00);
  lVar8 = *(long *)(this + 0x40);
  if (*(long *)(this + 0x38) != lVar8) {
    do {
      pMVar11 = *(MemoryChunk **)(lVar8 + -8);
      *(undefined8 **)(this + 0x40) = (undefined8 *)(lVar8 + -8);
      base::Mutex::Unlock(this_00);
      if (pMVar11 == (MemoryChunk *)0x0) goto LAB_01013034;
      uVar12 = *(undefined8 *)(pMVar11 + 8);
      PerformFreeMemory(*(MemoryAllocator **)(this + 8),pMVar11);
      if (((uint)uVar12 >> 0xe & 1) != 0) {
        local_28 = pMVar11;
        base::Mutex::Lock(this_00);
        if (*(undefined8 **)(this + 0x70) == *(undefined8 **)(this + 0x78)) {
          std::__ndk1::
          vector<v8::internal::MemoryChunk*,std::__ndk1::allocator<v8::internal::MemoryChunk*>>::
          __push_back_slow_path<v8::internal::MemoryChunk*const&>
                    ((vector<v8::internal::MemoryChunk*,std::__ndk1::allocator<v8::internal::MemoryChunk*>>
                      *)(this + 0x68),&local_28);
        }
        else {
          **(undefined8 **)(this + 0x70) = pMVar11;
          *(long *)(this + 0x70) = *(long *)(this + 0x70) + 8;
        }
        base::Mutex::Unlock(this_00);
      }
      base::Mutex::Lock(this_00);
      lVar8 = *(long *)(this + 0x40);
    } while (*(long *)(this + 0x38) != lVar8);
  }
  base::Mutex::Unlock(this_00);
LAB_01013034:
  do {
    base::Mutex::Lock(this_00);
    if (*(long *)(this + 0x68) == *(long *)(this + 0x70)) {
      base::Mutex::Unlock(this_00);
LAB_010130b4:
      while( true ) {
        base::Mutex::Lock(this_00);
        if (*(long *)(this + 0x50) == *(long *)(this + 0x58)) {
          base::Mutex::Unlock(this_00);
          return;
        }
        puVar9 = (undefined8 *)(*(long *)(this + 0x58) + -8);
        pMVar11 = (MemoryChunk *)*puVar9;
        *(undefined8 **)(this + 0x58) = puVar9;
        base::Mutex::Unlock(this_00);
        if (pMVar11 == (MemoryChunk *)0x0) break;
        PerformFreeMemory(*(MemoryAllocator **)(this + 8),pMVar11);
      }
      return;
    }
    puVar9 = (undefined8 *)(*(long *)(this + 0x70) + -8);
    pvVar10 = (void *)*puVar9;
    *(undefined8 **)(this + 0x70) = puVar9;
    base::Mutex::Unlock(this_00);
    if (pvVar10 == (void *)0x0) goto LAB_010130b4;
    uVar6 = FreePages(*(PageAllocator **)(*(long *)(this + 8) + 0x20),pvVar10,0x40000);
    if ((uVar6 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","FreePages(page_allocator, reinterpret_cast<void*>(base), size)")
      ;
    }
  } while( true );
}

