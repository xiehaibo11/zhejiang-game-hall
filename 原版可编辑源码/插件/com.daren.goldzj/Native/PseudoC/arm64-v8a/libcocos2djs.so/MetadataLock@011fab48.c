
/* v8::internal::trap_handler::MetadataLock::MetadataLock() */

void __thiscall v8::internal::trap_handler::MetadataLock::MetadataLock(MetadataLock *this)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  
  if (g_thread_in_wasm_code != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  do {
    bVar3 = (byte)spinlock_;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(&spinlock_,0x10);
    if (bVar2) {
      spinlock_._0_1_ = 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while ((cVar1 != '\0') || ((bVar3 & 1) != 0));
  return;
}

