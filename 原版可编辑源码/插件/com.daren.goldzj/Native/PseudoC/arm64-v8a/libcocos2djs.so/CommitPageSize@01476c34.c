
/* v8::base::OS::CommitPageSize() */

long v8::base::OS::CommitPageSize(void)

{
  int iVar1;
  
  if (((DAT_01d460f8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_01d460f8), iVar1 != 0)) {
    iVar1 = getpagesize();
    DAT_01d460f0 = (long)iVar1;
    __cxa_guard_release(&DAT_01d460f8);
  }
  return DAT_01d460f0;
}

