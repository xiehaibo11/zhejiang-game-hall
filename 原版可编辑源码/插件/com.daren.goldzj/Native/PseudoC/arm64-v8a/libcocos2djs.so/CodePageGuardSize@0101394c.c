
/* v8::internal::MemoryChunkLayout::CodePageGuardSize() */

long v8::internal::MemoryChunkLayout::CodePageGuardSize(void)

{
  long lVar1;
  
  if (FLAG_v8_os_page_size != 0) {
    return (long)FLAG_v8_os_page_size << 10;
  }
  lVar1 = CommitPageSize();
  return lVar1;
}

