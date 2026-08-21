
/* v8::base::RandomNumberGenerator::SetEntropySource(bool (*)(unsigned char*, unsigned long)) */

void v8::base::RandomNumberGenerator::SetEntropySource(_func_bool_uchar_ptr_ulong *param_1)

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
  if (DAT_01d460b8 != '\x02') {
    local_70 = &PTR_FUN_01c984d0;
    pcStack_68 = LazyInstanceImpl<v8::base::Mutex,v8::base::StaticallyAllocatedInstanceTrait<v8::base::Mutex>,v8::base::DefaultConstructTrait<v8::base::Mutex>,v8::base::ThreadSafeInitOnceTrait,v8::base::LeakyInstanceTrait<v8::base::Mutex>>
                 ::InitInstance;
    local_60 = &DAT_01d460bc;
    local_50 = (long *)&local_70;
    CallOnceImpl(&DAT_01d460b8,&local_70);
    if (&local_70 == (undefined ***)local_50) {
      pcVar2 = *(code **)(*local_50 + 0x20);
    }
    else {
      if (local_50 == (long *)0x0) goto LAB_01475f1c;
      pcVar2 = *(code **)(*local_50 + 0x28);
    }
    (*pcVar2)();
  }
LAB_01475f1c:
  Mutex::Lock((Mutex *)&DAT_01d460bc);
  DAT_01d460b0 = param_1;
  Mutex::Unlock((Mutex *)&DAT_01d460bc);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

