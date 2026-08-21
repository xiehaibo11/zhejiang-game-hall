
/* v8::internal::MemoryChunkLayout::ObjectEndOffsetInCodePage() */

long v8::internal::MemoryChunkLayout::ObjectEndOffsetInCodePage(void)

{
  long lVar1;
  
  if (FLAG_v8_os_page_size == 0) {
    lVar1 = CommitPageSize();
  }
  else {
    lVar1 = (long)FLAG_v8_os_page_size << 10;
  }
  return 0x4000000000000 - (lVar1 << 0x20) >> 0x20;
}

