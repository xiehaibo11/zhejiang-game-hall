
/* v8::internal::FutexWaitListNode::NotifyWake() */

void __thiscall v8::internal::FutexWaitListNode::NotifyWake(FutexWaitListNode *this)

{
  long lVar1;
  code *pcVar2;
  undefined **local_70;
  code *pcStack_68;
  undefined *local_60;
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (FutexEmulation::mutex_ != '\x02') {
    local_60 = &DAT_01d3ec9c;
    local_70 = &PTR_FUN_01c984d0;
    pcStack_68 = base::
                 LazyInstanceImpl<v8::base::Mutex,v8::base::StaticallyAllocatedInstanceTrait<v8::base::Mutex>,v8::base::DefaultConstructTrait<v8::base::Mutex>,v8::base::ThreadSafeInitOnceTrait,v8::base::LeakyInstanceTrait<v8::base::Mutex>>
                 ::InitInstance;
    local_50 = (long *)&local_70;
    base::CallOnceImpl(&FutexEmulation::mutex_,&local_70);
    if (&local_70 == (undefined ***)local_50) {
      pcVar2 = *(code **)(*local_50 + 0x20);
    }
    else {
      if (local_50 == (long *)0x0) goto LAB_00f4a260;
      pcVar2 = *(code **)(*local_50 + 0x28);
    }
    (*pcVar2)();
  }
LAB_00f4a260:
  base::Mutex::Lock((Mutex *)&DAT_01d3ec9c);
  base::ConditionVariable::NotifyOne((ConditionVariable *)this);
  this[0x51] = (FutexWaitListNode)0x1;
  base::Mutex::Unlock((Mutex *)&DAT_01d3ec9c);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

