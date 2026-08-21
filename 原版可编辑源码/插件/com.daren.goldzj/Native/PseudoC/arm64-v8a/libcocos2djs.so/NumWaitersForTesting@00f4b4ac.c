
/* v8::internal::FutexEmulation::NumWaitersForTesting(v8::internal::Handle<v8::internal::JSArrayBuffer>,
   unsigned long) */

ulong v8::internal::FutexEmulation::NumWaitersForTesting(long *param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined **local_80;
  code *pcStack_78;
  undefined8 *local_70;
  long *local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar5 = *(long *)(*param_1 + 0x13);
  if (mutex_ != '\x02') {
    local_80 = &PTR_FUN_01c984d0;
    local_70 = (undefined8 *)&DAT_01d3ec9c;
    pcStack_78 = base::
                 LazyInstanceImpl<v8::base::Mutex,v8::base::StaticallyAllocatedInstanceTrait<v8::base::Mutex>,v8::base::DefaultConstructTrait<v8::base::Mutex>,v8::base::ThreadSafeInitOnceTrait,v8::base::LeakyInstanceTrait<v8::base::Mutex>>
                 ::InitInstance;
    local_60 = (long *)&local_80;
    base::CallOnceImpl(&mutex_,&local_80);
    if (&local_80 == (undefined ***)local_60) {
      pcVar2 = *(code **)(*local_60 + 0x20);
    }
    else {
      if (local_60 == (long *)0x0) goto LAB_00f4b550;
      pcVar2 = *(code **)(*local_60 + 0x28);
    }
    (*pcVar2)();
  }
LAB_00f4b550:
  base::Mutex::Lock((Mutex *)&DAT_01d3ec9c);
  if (wait_list_ != '\x02') {
    local_80 = &PTR_FUN_01c984d0;
    local_70 = &DAT_01d3ecd0;
    pcStack_78 = base::
                 LazyInstanceImpl<v8::internal::FutexWaitList,v8::base::StaticallyAllocatedInstanceTrait<v8::internal::FutexWaitList>,v8::base::DefaultConstructTrait<v8::internal::FutexWaitList>,v8::base::ThreadSafeInitOnceTrait,v8::base::LeakyInstanceTrait<v8::internal::FutexWaitList>>
                 ::InitInstance;
    local_60 = (long *)&local_80;
    base::CallOnceImpl(&wait_list_,&local_80);
    if (&local_80 == (undefined ***)local_60) {
      pcVar2 = *(code **)(*local_60 + 0x20);
    }
    else {
      if (local_60 == (long *)0x0) goto LAB_00f4b5c4;
      pcVar2 = *(code **)(*local_60 + 0x28);
    }
    (*pcVar2)();
  }
LAB_00f4b5c4:
  if (DAT_01d3ecd0 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    lVar3 = DAT_01d3ecd0;
    do {
      if ((lVar5 == *(long *)(lVar3 + 0x40)) && (*(long *)(lVar3 + 0x48) == param_2)) {
        uVar4 = (ulong)((int)uVar4 + (uint)*(byte *)(lVar3 + 0x50));
      }
      lVar3 = *(long *)(lVar3 + 0x38);
    } while (lVar3 != 0);
  }
  base::Mutex::Unlock((Mutex *)&DAT_01d3ec9c);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return -(uVar4 >> 0x1f) & 0xfffffffe00000000 | uVar4 << 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

