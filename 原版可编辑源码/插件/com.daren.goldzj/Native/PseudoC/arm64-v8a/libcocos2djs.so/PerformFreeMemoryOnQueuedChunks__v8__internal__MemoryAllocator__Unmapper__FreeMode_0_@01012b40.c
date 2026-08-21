
/* void 
   v8::internal::MemoryAllocator::Unmapper::PerformFreeMemoryOnQueuedChunks<(v8::internal::MemoryAllocator::Unmapper::FreeMode)0>()
    */

void __thiscall
v8::internal::MemoryAllocator::Unmapper::
PerformFreeMemoryOnQueuedChunks<(v8::internal::MemoryAllocator::Unmapper::FreeMode)0>
          (Unmapper *this)

{
  Mutex *this_00;
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  MemoryChunk *pMVar9;
  undefined8 uVar10;
  MemoryChunk *local_28;
  
  if (FLAG_trace_unmapper != '\0') {
    lVar6 = *(long *)this;
    base::Mutex::Lock((Mutex *)(this + 0x10));
    lVar7 = *(long *)(this + 0x38);
    lVar3 = *(long *)(this + 0x40);
    lVar1 = *(long *)(this + 0x50);
    lVar4 = *(long *)(this + 0x58);
    lVar2 = *(long *)(this + 0x68);
    lVar5 = *(long *)(this + 0x70);
    base::Mutex::Unlock((Mutex *)(this + 0x10));
    PrintIsolate((void *)(lVar6 + -0x8850),
                 "Unmapper::PerformFreeMemoryOnQueuedChunks: %d queued chunks\n",
                 (ulong)(uint)((int)((ulong)(lVar4 - lVar1) >> 3) +
                               (int)((ulong)(lVar3 - lVar7) >> 3) +
                              (int)((ulong)(lVar5 - lVar2) >> 3)));
  }
  this_00 = (Mutex *)(this + 0x10);
  base::Mutex::Lock(this_00);
  lVar7 = *(long *)(this + 0x40);
  if (*(long *)(this + 0x38) != lVar7) {
    do {
      pMVar9 = *(MemoryChunk **)(lVar7 + -8);
      *(undefined8 **)(this + 0x40) = (undefined8 *)(lVar7 + -8);
      base::Mutex::Unlock(this_00);
      if (pMVar9 == (MemoryChunk *)0x0) goto LAB_01012c6c;
      uVar10 = *(undefined8 *)(pMVar9 + 8);
      PerformFreeMemory(*(MemoryAllocator **)(this + 8),pMVar9);
      if (((uint)uVar10 >> 0xe & 1) != 0) {
        local_28 = pMVar9;
        base::Mutex::Lock(this_00);
        if (*(undefined8 **)(this + 0x70) == *(undefined8 **)(this + 0x78)) {
          std::__ndk1::
          vector<v8::internal::MemoryChunk*,std::__ndk1::allocator<v8::internal::MemoryChunk*>>::
          __push_back_slow_path<v8::internal::MemoryChunk*const&>
                    ((vector<v8::internal::MemoryChunk*,std::__ndk1::allocator<v8::internal::MemoryChunk*>>
                      *)(this + 0x68),&local_28);
        }
        else {
          **(undefined8 **)(this + 0x70) = pMVar9;
          *(long *)(this + 0x70) = *(long *)(this + 0x70) + 8;
        }
        base::Mutex::Unlock(this_00);
      }
      base::Mutex::Lock(this_00);
      lVar7 = *(long *)(this + 0x40);
    } while (*(long *)(this + 0x38) != lVar7);
  }
  base::Mutex::Unlock(this_00);
LAB_01012c6c:
  while( true ) {
    base::Mutex::Lock(this_00);
    if (*(long *)(this + 0x50) == *(long *)(this + 0x58)) {
      base::Mutex::Unlock(this_00);
      return;
    }
    puVar8 = (undefined8 *)(*(long *)(this + 0x58) + -8);
    pMVar9 = (MemoryChunk *)*puVar8;
    *(undefined8 **)(this + 0x58) = puVar8;
    base::Mutex::Unlock(this_00);
    if (pMVar9 == (MemoryChunk *)0x0) break;
    PerformFreeMemory(*(MemoryAllocator **)(this + 8),pMVar9);
  }
  return;
}

