
/* v8::internal::AtomicsWaitWakeHandle::Wake() */

void __thiscall v8::internal::AtomicsWaitWakeHandle::Wake(AtomicsWaitWakeHandle *this)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined **local_90;
  code *pcStack_88;
  undefined *local_80;
  long *local_70;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (FutexEmulation::mutex_ != '\x02') {
    local_90 = &PTR_FUN_01c984d0;
    local_80 = &DAT_01d3ec9c;
    pcStack_88 = base::
                 LazyInstanceImpl<v8::base::Mutex,v8::base::StaticallyAllocatedInstanceTrait<v8::base::Mutex>,v8::base::DefaultConstructTrait<v8::base::Mutex>,v8::base::ThreadSafeInitOnceTrait,v8::base::LeakyInstanceTrait<v8::base::Mutex>>
                 ::InitInstance;
    local_70 = (long *)&local_90;
    base::CallOnceImpl(&FutexEmulation::mutex_,&local_90);
    if (&local_90 == (undefined ***)local_70) {
      pcVar2 = *(code **)(*local_70 + 0x20);
    }
    else {
      if (local_70 == (long *)0x0) goto LAB_00f4a3ac;
      pcVar2 = *(code **)(*local_70 + 0x28);
    }
    (*pcVar2)();
  }
LAB_00f4a3ac:
  base::Mutex::Lock((Mutex *)&DAT_01d3ec9c);
  this[8] = (AtomicsWaitWakeHandle)0x1;
  base::Mutex::Unlock((Mutex *)&DAT_01d3ec9c);
  lVar3 = *(long *)this;
  if (FutexEmulation::mutex_ != '\x02') {
    local_90 = &PTR_FUN_01c984d0;
    pcStack_88 = base::
                 LazyInstanceImpl<v8::base::Mutex,v8::base::StaticallyAllocatedInstanceTrait<v8::base::Mutex>,v8::base::DefaultConstructTrait<v8::base::Mutex>,v8::base::ThreadSafeInitOnceTrait,v8::base::LeakyInstanceTrait<v8::base::Mutex>>
                 ::InitInstance;
    local_80 = &DAT_01d3ec9c;
    local_70 = (long *)&local_90;
    base::CallOnceImpl(&FutexEmulation::mutex_,&local_90);
    if (&local_90 == (undefined ***)local_70) {
      pcVar2 = *(code **)(*local_70 + 0x20);
    }
    else {
      if (local_70 == (long *)0x0) goto LAB_00f4a424;
      pcVar2 = *(code **)(*local_70 + 0x28);
    }
    (*pcVar2)();
  }
LAB_00f4a424:
  base::Mutex::Lock((Mutex *)&DAT_01d3ec9c);
  base::ConditionVariable::NotifyOne((ConditionVariable *)(lVar3 + 0xc6a8));
  *(undefined1 *)(lVar3 + 0xc6f9) = 1;
  base::Mutex::Unlock((Mutex *)&DAT_01d3ec9c);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

