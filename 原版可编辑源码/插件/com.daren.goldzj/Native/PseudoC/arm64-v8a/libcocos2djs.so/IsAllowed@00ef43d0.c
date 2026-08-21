
/* v8::internal::PerThreadAssertScope<(v8::internal::PerThreadAssertType)1, false>::IsAllowed() */

bool v8::internal::PerThreadAssertScope<(v8::internal::PerThreadAssertType)1,false>::IsAllowed(void)

{
  int iVar1;
  long lVar2;
  
  if (((DAT_01d3ec30 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_01d3ec30), iVar1 != 0)) {
    DAT_01d3ec28 = base::Thread::CreateThreadLocalKey();
    __cxa_guard_release(&DAT_01d3ec30);
  }
  lVar2 = base::Thread::GetThreadLocal(DAT_01d3ec28);
  if (lVar2 != 0) {
    return *(char *)(lVar2 + 1) != '\0';
  }
  return true;
}

