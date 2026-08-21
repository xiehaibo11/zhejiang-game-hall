
/* v8::internal::MemoryChunkLayout::ObjectStartOffsetInMemoryChunk(v8::internal::AllocationSpace) */

long v8::internal::MemoryChunkLayout::ObjectStartOffsetInMemoryChunk(int param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  if (param_1 == 3) {
    if (FLAG_v8_os_page_size == 0) {
      lVar2 = CommitPageSize();
      uVar3 = lVar2 + 0x117U & -lVar2;
      if (FLAG_v8_os_page_size == 0) {
        uVar1 = CommitPageSize();
      }
      else {
        uVar1 = (long)FLAG_v8_os_page_size << 10;
      }
    }
    else {
      uVar1 = (long)FLAG_v8_os_page_size * 0x400;
      uVar3 = uVar1 & (long)FLAG_v8_os_page_size * -0x400;
    }
    return uVar1 + uVar3;
  }
  return 0x118;
}

