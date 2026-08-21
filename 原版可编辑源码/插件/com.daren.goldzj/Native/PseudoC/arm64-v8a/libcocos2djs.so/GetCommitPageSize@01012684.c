
/* v8::internal::MemoryAllocator::GetCommitPageSize() */

long v8::internal::MemoryAllocator::GetCommitPageSize(void)

{
  long lVar1;
  
  if (FLAG_v8_os_page_size != 0) {
    return (long)FLAG_v8_os_page_size << 10;
  }
  lVar1 = CommitPageSize();
  return lVar1;
}

