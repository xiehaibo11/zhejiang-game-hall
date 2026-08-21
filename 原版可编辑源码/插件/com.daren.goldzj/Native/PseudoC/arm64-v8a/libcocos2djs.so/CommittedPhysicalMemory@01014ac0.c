
/* v8::internal::MemoryChunk::CommittedPhysicalMemory() */

undefined8 __thiscall v8::internal::MemoryChunk::CommittedPhysicalMemory(MemoryChunk *this)

{
  ulong uVar1;
  
  uVar1 = base::OS::HasLazyCommits();
  if (((uVar1 & 1) != 0) &&
     ((((byte)this[10] >> 5 & 1) != 0 || (*(int *)(*(long *)(this + 0x58) + 0x48) != 5)))) {
    this = this + 0x98;
  }
  return *(undefined8 *)this;
}

