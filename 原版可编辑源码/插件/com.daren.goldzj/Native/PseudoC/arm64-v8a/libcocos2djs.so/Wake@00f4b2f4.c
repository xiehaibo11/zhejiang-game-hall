
/* v8::internal::FutexEmulation::Wake(v8::internal::Handle<v8::internal::JSArrayBuffer>, unsigned
   long, unsigned int) */

ulong v8::internal::FutexEmulation::Wake(long *param_1,long param_2,int param_3)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  ConditionVariable *this;
  long lVar4;
  ulong uVar5;
  undefined **local_90;
  code *pcStack_88;
  undefined8 *local_80;
  long *local_70;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  lVar4 = *(long *)(*param_1 + 0x13);
  if (mutex_ != '\x02') {
    local_90 = &PTR_FUN_01c984d0;
    local_80 = (undefined8 *)&DAT_01d3ec9c;
    pcStack_88 = base::
                 LazyInstanceImpl<v8::base::Mutex,v8::base::StaticallyAllocatedInstanceTrait<v8::base::Mutex>,v8::base::DefaultConstructTrait<v8::base::Mutex>,v8::base::ThreadSafeInitOnceTrait,v8::base::LeakyInstanceTrait<v8::base::Mutex>>
                 ::InitInstance;
    local_70 = (long *)&local_90;
    base::CallOnceImpl(&mutex_,&local_90);
    if (&local_90 == (undefined ***)local_70) {
      pcVar3 = *(code **)(*local_70 + 0x20);
    }
    else {
      if (local_70 == (long *)0x0) goto LAB_00f4b3a0;
      pcVar3 = *(code **)(*local_70 + 0x28);
    }
    (*pcVar3)();
  }
LAB_00f4b3a0:
  base::Mutex::Lock((Mutex *)&DAT_01d3ec9c);
  if (wait_list_ != '\x02') {
    local_90 = &PTR_FUN_01c984d0;
    local_80 = &DAT_01d3ecd0;
    pcStack_88 = base::
                 LazyInstanceImpl<v8::internal::FutexWaitList,v8::base::StaticallyAllocatedInstanceTrait<v8::internal::FutexWaitList>,v8::base::DefaultConstructTrait<v8::internal::FutexWaitList>,v8::base::ThreadSafeInitOnceTrait,v8::base::LeakyInstanceTrait<v8::internal::FutexWaitList>>
                 ::InitInstance;
    local_70 = (long *)&local_90;
    base::CallOnceImpl(&wait_list_,&local_90);
    if (&local_90 == (undefined ***)local_70) {
      pcVar3 = *(code **)(*local_70 + 0x20);
    }
    else {
      if (local_70 == (long *)0x0) goto LAB_00f4b414;
      pcVar3 = *(code **)(*local_70 + 0x28);
    }
    (*pcVar3)();
  }
LAB_00f4b414:
  uVar5 = 0;
  if ((param_3 != 0) && (DAT_01d3ecd0 != (ConditionVariable *)0x0)) {
    uVar5 = 0;
    this = DAT_01d3ecd0;
    do {
      if (((lVar4 == *(long *)(this + 0x40)) && (*(long *)(this + 0x48) == param_2)) &&
         (this[0x50] != (ConditionVariable)0x0)) {
        this[0x50] = (ConditionVariable)0x0;
        base::ConditionVariable::NotifyOne(this);
        iVar1 = param_3 + -1;
        if (param_3 == -1) {
          iVar1 = -1;
        }
        uVar5 = (ulong)((int)uVar5 + 1);
        param_3 = iVar1;
      }
    } while ((param_3 != 0) &&
            (this = *(ConditionVariable **)(this + 0x38), this != (ConditionVariable *)0x0));
  }
  base::Mutex::Unlock((Mutex *)&DAT_01d3ec9c);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return -(uVar5 >> 0x1f) & 0xfffffffe00000000 | uVar5 << 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

