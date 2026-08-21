
/* v8::internal::MemoryAllocator::Unmapper::NumberOfCommittedChunks() */

long __thiscall v8::internal::MemoryAllocator::Unmapper::NumberOfCommittedChunks(Unmapper *this)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  base::Mutex::Lock((Mutex *)(this + 0x10));
  lVar1 = *(long *)(this + 0x38);
  lVar3 = *(long *)(this + 0x40);
  lVar2 = *(long *)(this + 0x50);
  lVar4 = *(long *)(this + 0x58);
  base::Mutex::Unlock((Mutex *)(this + 0x10));
  return (lVar4 - lVar2 >> 3) + (lVar3 - lVar1 >> 3);
}

