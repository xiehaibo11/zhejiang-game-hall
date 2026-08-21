
/* v8::base::OS::GetRandomMmapAddr() */

long v8::base::OS::GetRandomMmapAddr(void)

{
  long lVar1;
  int iVar2;
  code *pcVar3;
  undefined **local_60;
  code *pcStack_58;
  undefined *local_50;
  long *local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (DAT_01d46100 != '\x02') {
    local_60 = &PTR_FUN_01c984d0;
    pcStack_58 = LazyInstanceImpl<v8::base::Mutex,v8::base::StaticallyAllocatedInstanceTrait<v8::base::Mutex>,v8::base::DefaultConstructTrait<v8::base::Mutex>,v8::base::ThreadSafeInitOnceTrait,v8::base::LeakyInstanceTrait<v8::base::Mutex>>
                 ::InitInstance;
    local_50 = &DAT_01d46104;
    local_40 = (long *)&local_60;
    CallOnceImpl(&DAT_01d46100,&local_60);
    if (&local_60 == (undefined ***)local_40) {
      pcVar3 = *(code **)(*local_40 + 0x20);
    }
    else {
      if (local_40 == (long *)0x0) goto LAB_01476e44;
      pcVar3 = *(code **)(*local_40 + 0x28);
    }
    (*pcVar3)();
  }
LAB_01476e44:
  Mutex::Lock((Mutex *)&DAT_01d46104);
  if (((DAT_01d46148 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_01d46148), iVar2 != 0)) {
    RandomNumberGenerator::RandomNumberGenerator((RandomNumberGenerator *)&DAT_01d46130);
    __cxa_guard_release(&DAT_01d46148);
  }
  RandomNumberGenerator::NextBytes((RandomNumberGenerator *)&DAT_01d46130,&local_60,8);
  Mutex::Unlock((Mutex *)&DAT_01d46104);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return ((ulong)local_60 & 0x3ffff000) + 0x20000000;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

