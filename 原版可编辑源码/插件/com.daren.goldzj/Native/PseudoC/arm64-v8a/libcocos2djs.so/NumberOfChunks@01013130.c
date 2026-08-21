
/* v8::internal::MemoryAllocator::Unmapper::NumberOfChunks() */

int __thiscall v8::internal::MemoryAllocator::Unmapper::NumberOfChunks(Unmapper *this)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  base::Mutex::Lock((Mutex *)(this + 0x10));
  lVar1 = *(long *)(this + 0x38);
  lVar4 = *(long *)(this + 0x40);
  lVar2 = *(long *)(this + 0x50);
  lVar5 = *(long *)(this + 0x58);
  lVar3 = *(long *)(this + 0x68);
  lVar6 = *(long *)(this + 0x70);
  base::Mutex::Unlock((Mutex *)(this + 0x10));
  return (int)((ulong)(lVar6 - lVar3) >> 3) +
         (int)((ulong)(lVar5 - lVar2) >> 3) + (int)((ulong)(lVar4 - lVar1) >> 3);
}

