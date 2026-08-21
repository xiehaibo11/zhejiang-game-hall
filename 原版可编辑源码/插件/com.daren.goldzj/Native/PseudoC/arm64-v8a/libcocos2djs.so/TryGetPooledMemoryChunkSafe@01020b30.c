
/* v8::internal::MemoryAllocator::Unmapper::TryGetPooledMemoryChunkSafe() */

MemoryChunk * __thiscall
v8::internal::MemoryAllocator::Unmapper::TryGetPooledMemoryChunkSafe(Unmapper *this)

{
  Mutex *this_00;
  long *plVar1;
  undefined8 *puVar2;
  MemoryChunk *pMVar3;
  
  this_00 = (Mutex *)(this + 0x10);
  base::Mutex::Lock(this_00);
  if (*(long *)(this + 0x68) == *(long *)(this + 0x70)) {
    base::Mutex::Unlock(this_00);
  }
  else {
    plVar1 = (long *)(*(long *)(this + 0x70) + -8);
    pMVar3 = (MemoryChunk *)*plVar1;
    *(long **)(this + 0x70) = plVar1;
    base::Mutex::Unlock(this_00);
    if (pMVar3 != (MemoryChunk *)0x0) {
      return pMVar3;
    }
  }
  base::Mutex::Lock(this_00);
  if (*(long *)(this + 0x38) == *(long *)(this + 0x40)) {
    base::Mutex::Unlock(this_00);
    pMVar3 = (MemoryChunk *)0x0;
  }
  else {
    puVar2 = (undefined8 *)(*(long *)(this + 0x40) + -8);
    pMVar3 = (MemoryChunk *)*puVar2;
    *(undefined8 **)(this + 0x40) = puVar2;
    base::Mutex::Unlock(this_00);
    if (pMVar3 != (MemoryChunk *)0x0) {
      MemoryChunk::ReleaseAllAllocatedMemory(pMVar3);
    }
  }
  return pMVar3;
}

