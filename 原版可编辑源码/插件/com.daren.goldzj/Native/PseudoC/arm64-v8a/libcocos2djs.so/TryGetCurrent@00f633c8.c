
/* v8::internal::ThreadId::TryGetCurrent() */

int v8::internal::ThreadId::TryGetCurrent(void)

{
  int iVar1;
  int iVar2;
  
  if (((DAT_01d3edb8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_01d3edb8), iVar2 != 0)) {
    DAT_01d3edb0 = base::Thread::CreateThreadLocalKey();
    __cxa_guard_release(&DAT_01d3edb8);
  }
  iVar1 = base::Thread::GetThreadLocal(DAT_01d3edb0);
  iVar2 = -1;
  if (iVar1 != 0) {
    iVar2 = iVar1;
  }
  return iVar2;
}

