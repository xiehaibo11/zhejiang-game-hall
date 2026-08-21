
/* v8::internal::DisableEmbeddedBlobRefcounting() */

void v8::internal::DisableEmbeddedBlobRefcounting(void)

{
  long lVar1;
  code *pcVar2;
  undefined **local_60;
  code *pcStack_58;
  undefined *local_50;
  long *local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (DAT_01d3ed00 != '\x02') {
    local_60 = &PTR_FUN_01c984d0;
    pcStack_58 = base::
                 LazyInstanceImpl<v8::base::Mutex,v8::base::StaticallyAllocatedInstanceTrait<v8::base::Mutex>,v8::base::DefaultConstructTrait<v8::base::Mutex>,v8::base::ThreadSafeInitOnceTrait,v8::base::LeakyInstanceTrait<v8::base::Mutex>>
                 ::InitInstance;
    local_50 = &DAT_01d3ed04;
    local_40 = (long *)&local_60;
    base::CallOnceImpl(&DAT_01d3ed00,&local_60);
    if (&local_60 == (undefined ***)local_40) {
      pcVar2 = *(code **)(*local_40 + 0x20);
    }
    else {
      if (local_40 == (long *)0x0) goto LAB_00f4b784;
      pcVar2 = *(code **)(*local_40 + 0x28);
    }
    (*pcVar2)();
  }
LAB_00f4b784:
  base::Mutex::Lock((Mutex *)&DAT_01d3ed04);
  DAT_01d3ece0 = 1;
  base::Mutex::Unlock((Mutex *)&DAT_01d3ed04);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

