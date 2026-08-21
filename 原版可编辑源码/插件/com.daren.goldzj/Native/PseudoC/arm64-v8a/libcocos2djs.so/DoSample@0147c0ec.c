
/* v8::sampler::Sampler::DoSample() */

void __thiscall v8::sampler::Sampler::DoSample(Sampler *this)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  ulong uVar4;
  code *pcVar5;
  undefined **local_70;
  code *pcStack_68;
  undefined *local_60;
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (SignalHandler::mutex_ != '\x02') {
    local_60 = &DAT_01d4618c;
    local_70 = &PTR_FUN_01c984d0;
    pcStack_68 = base::
                 LazyInstanceImpl<v8::base::Mutex,v8::base::StaticallyAllocatedInstanceTrait<v8::base::Mutex>,v8::base::DefaultConstructTrait<v8::base::Mutex>,v8::base::ThreadSafeInitOnceTrait,v8::base::LeakyInstanceTrait<v8::base::Mutex>>
                 ::InitInstance;
    local_50 = (long *)&local_70;
    base::CallOnceImpl(&SignalHandler::mutex_,&local_70);
    if (&local_70 == (undefined ***)local_50) {
      pcVar5 = *(code **)(*local_50 + 0x20);
    }
    else {
      if (local_50 == (long *)0x0) goto LAB_0147c184;
      pcVar5 = *(code **)(*local_50 + 0x28);
    }
    (*pcVar5)();
  }
LAB_0147c184:
  base::Mutex::Lock((Mutex *)&DAT_01d4618c);
  cVar2 = SignalHandler::signal_handler_installed_;
  uVar4 = base::Mutex::Unlock((Mutex *)&DAT_01d4618c);
  if (cVar2 != '\0') {
    this[0x21] = (Sampler)0x1;
    uVar3 = pthread_kill(**(pthread_t **)(this + 0x28),0x1b);
    uVar4 = (ulong)uVar3;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

