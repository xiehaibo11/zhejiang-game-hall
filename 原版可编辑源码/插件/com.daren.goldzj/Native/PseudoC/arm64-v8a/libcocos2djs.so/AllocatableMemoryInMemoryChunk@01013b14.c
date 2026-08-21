
/* v8::internal::MemoryChunkLayout::AllocatableMemoryInMemoryChunk(v8::internal::AllocationSpace) */

long v8::internal::MemoryChunkLayout::AllocatableMemoryInMemoryChunk(int param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  if (param_1 != 3) {
    return 0x3fee8;
  }
  lVar2 = (long)FLAG_v8_os_page_size;
  if (FLAG_v8_os_page_size == 0) {
    lVar3 = CommitPageSize();
    lVar2 = (long)FLAG_v8_os_page_size;
    lVar3 = 0x4000000000000 - (lVar3 << 0x20) >> 0x20;
    if (FLAG_v8_os_page_size == 0) {
      lVar2 = CommitPageSize();
      uVar4 = lVar2 + 0x117U & -lVar2;
      if (FLAG_v8_os_page_size == 0) {
        uVar1 = CommitPageSize();
      }
      else {
        uVar1 = (long)FLAG_v8_os_page_size << 10;
      }
      goto LAB_01013b7c;
    }
  }
  else {
    lVar3 = 0x4000000000000 - (lVar2 << 0x2a) >> 0x20;
  }
  uVar1 = lVar2 * 0x400;
  uVar4 = uVar1 & lVar2 * -0x400;
LAB_01013b7c:
  return (lVar3 - uVar4) - uVar1;
}

