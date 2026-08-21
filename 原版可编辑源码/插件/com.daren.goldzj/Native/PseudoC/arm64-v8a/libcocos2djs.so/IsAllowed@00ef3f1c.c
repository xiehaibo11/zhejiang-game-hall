
/* v8::internal::PerThreadAssertScope<(v8::internal::PerThreadAssertType)0, false>::IsAllowed() */

bool v8::internal::PerThreadAssertScope<(v8::internal::PerThreadAssertType)0,false>::IsAllowed(void)

{
  int iVar1;
  char *pcVar2;
  
  if (((DAT_01d3ec30 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_01d3ec30), iVar1 != 0)) {
    DAT_01d3ec28 = base::Thread::CreateThreadLocalKey();
    __cxa_guard_release(&DAT_01d3ec30);
  }
  pcVar2 = (char *)base::Thread::GetThreadLocal(DAT_01d3ec28);
  if (pcVar2 != (char *)0x0) {
    return *pcVar2 != '\0';
  }
  return true;
}

