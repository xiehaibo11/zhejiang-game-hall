
/* v8::internal::MemoryChunkLayout::CodePageGuardStartOffset() */

ulong v8::internal::MemoryChunkLayout::CodePageGuardStartOffset(void)

{
  long lVar1;
  
  if (FLAG_v8_os_page_size == 0) {
    lVar1 = CommitPageSize();
  }
  else {
    lVar1 = (long)FLAG_v8_os_page_size << 10;
  }
  return lVar1 + 0x117U & -lVar1;
}

