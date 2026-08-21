
/* v8::internal::MemoryChunk::DiscardUnusedMemory(unsigned long, unsigned long) */

void __thiscall
v8::internal::MemoryChunk::DiscardUnusedMemory(MemoryChunk *this,ulong param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (FLAG_v8_os_page_size == 0) {
    lVar2 = CommitPageSize();
  }
  else {
    lVar2 = (long)FLAG_v8_os_page_size << 10;
  }
  if (lVar2 + 0xcU <= param_2) {
    uVar4 = param_1 + lVar2 + 0xb & -lVar2;
    uVar5 = param_2 + param_1 & -lVar2;
    if (uVar4 <= uVar5 && uVar5 - uVar4 != 0) {
      lVar2 = 0;
      if (uVar4 <= uVar5) {
        lVar2 = uVar5 - uVar4;
      }
      lVar1 = 0x20;
      if ((*(ulong *)(this + 8) & 1) != 0) {
        lVar1 = 0x28;
      }
      plVar3 = *(long **)(*(long *)(*(long *)(this + 0x18) + 0x820) + lVar1);
      uVar4 = (**(code **)(*plVar3 + 0x50))(plVar3,uVar4,lVar2);
      if ((uVar4 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.",
                 "page_allocator->DiscardSystemPages( reinterpret_cast<void*>(memory_area.begin()), memory_area.size())"
                );
      }
    }
  }
  return;
}

