
/* WARNING: Removing unreachable block (ram,0x0147a668) */
/* v8::sampler::AtomicGuard::AtomicGuard(std::__ndk1::atomic<bool>*, bool) */

void __thiscall
v8::sampler::AtomicGuard::AtomicGuard(AtomicGuard *this,atomic *param_1,bool param_2)

{
  char cVar1;
  bool bVar2;
  
  *(atomic **)this = param_1;
  this[8] = (AtomicGuard)0x0;
  do {
    while (*param_1 != (atomic)0x0) {
      ClearExclusiveLocal();
      this[8] = (AtomicGuard)0x0;
      if (!param_2) {
        return;
      }
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = (atomic)0x1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  this[8] = (AtomicGuard)0x1;
  return;
}

