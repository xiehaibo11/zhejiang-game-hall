
/* v8::base::OS::SetRandomMmapSeed(long) */

void v8::base::OS::SetRandomMmapSeed(long param_1)

{
  long lVar1;
  int iVar2;
  code *pcVar3;
  undefined **local_70;
  code *pcStack_68;
  undefined *local_60;
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1 == 0) goto LAB_01476d64;
  if (DAT_01d46100 != '\x02') {
    local_70 = &PTR_FUN_01c984d0;
    pcStack_68 = LazyInstanceImpl<v8::base::Mutex,v8::base::StaticallyAllocatedInstanceTrait<v8::base::Mutex>,v8::base::DefaultConstructTrait<v8::base::Mutex>,v8::base::ThreadSafeInitOnceTrait,v8::base::LeakyInstanceTrait<v8::base::Mutex>>
                 ::InitInstance;
    local_60 = &DAT_01d46104;
    local_50 = (long *)&local_70;
    CallOnceImpl(&DAT_01d46100,&local_70);
    if (&local_70 == (undefined ***)local_50) {
      pcVar3 = *(code **)(*local_50 + 0x20);
    }
    else {
      if (local_50 == (long *)0x0) goto LAB_01476d2c;
      pcVar3 = *(code **)(*local_50 + 0x28);
    }
    (*pcVar3)();
  }
LAB_01476d2c:
  Mutex::Lock((Mutex *)&DAT_01d46104);
  if (((DAT_01d46148 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_01d46148), iVar2 != 0)) {
    RandomNumberGenerator::RandomNumberGenerator((RandomNumberGenerator *)&DAT_01d46130);
    __cxa_guard_release(&DAT_01d46148);
  }
  RandomNumberGenerator::SetSeed((RandomNumberGenerator *)&DAT_01d46130,param_1);
  Mutex::Unlock((Mutex *)&DAT_01d46104);
LAB_01476d64:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

