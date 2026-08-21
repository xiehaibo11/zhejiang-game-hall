
/* v8::internal::MemoryAllocator::Unmapper::PrepareForGC() */

void __thiscall v8::internal::MemoryAllocator::Unmapper::PrepareForGC(Unmapper *this)

{
  Mutex *this_00;
  undefined8 *puVar1;
  MemoryChunk *pMVar2;
  
  this_00 = (Mutex *)(this + 0x10);
  while( true ) {
    base::Mutex::Lock(this_00);
    if (*(long *)(this + 0x50) == *(long *)(this + 0x58)) {
      base::Mutex::Unlock(this_00);
      return;
    }
    puVar1 = (undefined8 *)(*(long *)(this + 0x58) + -8);
    pMVar2 = (MemoryChunk *)*puVar1;
    *(undefined8 **)(this + 0x58) = puVar1;
    base::Mutex::Unlock(this_00);
    if (pMVar2 == (MemoryChunk *)0x0) break;
    PerformFreeMemory(*(MemoryAllocator **)(this + 8),pMVar2);
  }
  return;
}

