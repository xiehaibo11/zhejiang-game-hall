
/* v8::sampler::SignalHandler::IncreaseSamplerCount() */

void v8::sampler::SignalHandler::IncreaseSamplerCount(void)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  code *pcVar4;
  _union_1457 local_70;
  code *local_68;
  undefined *local_60;
  _union_1457 *local_50;
  ulong local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(ulong *)(lVar2 + 0x28);
  if (mutex_ != '\x02') {
    local_60 = &DAT_01d4618c;
    local_70.sa_handler = (__sighandler_t)&PTR_FUN_01c984d0;
    local_68 = base::
               LazyInstanceImpl<v8::base::Mutex,v8::base::StaticallyAllocatedInstanceTrait<v8::base::Mutex>,v8::base::DefaultConstructTrait<v8::base::Mutex>,v8::base::ThreadSafeInitOnceTrait,v8::base::LeakyInstanceTrait<v8::base::Mutex>>
               ::InitInstance;
    local_50 = &local_70;
    base::CallOnceImpl(&mutex_,&local_70);
    if (&local_70 == local_50) {
      pcVar4 = *(code **)((long)*local_50 + 0x20);
    }
    else {
      if (local_50 == (_union_1457 *)0x0) goto LAB_0147aeb8;
      pcVar4 = *(code **)((long)*local_50 + 0x28);
    }
    (*pcVar4)();
  }
LAB_0147aeb8:
  base::Mutex::Lock((Mutex *)&DAT_01d4618c);
  iVar3 = client_count_ + 1;
  bVar1 = client_count_ == 0;
  client_count_ = iVar3;
  if (bVar1) {
    local_68 = HandleProfilerSignal;
    sigemptyset((sigset_t *)&stack0xffffffffffffffa0);
    local_70._0_4_ = 0x10000004;
    iVar3 = sigaction(0x1b,(sigaction *)&local_70,(sigaction *)old_signal_handler_);
    signal_handler_installed_ = iVar3 == 0;
  }
  base::Mutex::Unlock((Mutex *)&DAT_01d4618c);
  if (*(ulong *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

