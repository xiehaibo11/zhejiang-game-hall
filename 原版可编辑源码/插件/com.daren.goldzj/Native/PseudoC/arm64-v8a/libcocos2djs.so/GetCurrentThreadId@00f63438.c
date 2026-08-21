
/* v8::internal::ThreadId::GetCurrentThreadId() */

uint v8::internal::ThreadId::GetCurrentThreadId(void)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  if (((DAT_01d3edb8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_01d3edb8), iVar4 != 0)) {
    DAT_01d3edb0 = base::Thread::CreateThreadLocalKey();
    __cxa_guard_release(&DAT_01d3edb8);
  }
  iVar4 = DAT_01d3edb0;
  uVar3 = base::Thread::GetThreadLocal(DAT_01d3edb0);
  if (uVar3 == 0) {
    do {
      uVar3 = DAT_01d2ee98;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1d2ee98,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        DAT_01d2ee98 = DAT_01d2ee98 + 1;
      }
    } while (cVar1 != '\0');
    if ((int)uVar3 < 1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","1 <= thread_id");
    }
    base::Thread::SetThreadLocal(iVar4,(void *)(ulong)uVar3);
  }
  return uVar3;
}

