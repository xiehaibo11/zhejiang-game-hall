
/* WARNING: Removing unreachable block (ram,0x0182a548) */
/* std::__ndk1::recursive_timed_mutex::try_lock() */

undefined4 __thiscall std::__ndk1::recursive_timed_mutex::try_lock(recursive_timed_mutex *this)

{
  long lVar1;
  int iVar2;
  pthread_t __thread1;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  __thread1 = pthread_self();
  iVar2 = pthread_mutex_trylock((pthread_mutex_t *)this);
  if (iVar2 == 0) {
    lVar4 = 0;
    if ((*(long *)(this + 0x58) == 0) ||
       ((iVar2 = pthread_equal(__thread1,*(pthread_t *)(this + 0x60)), iVar2 != 0 &&
        (lVar4 = *(long *)(this + 0x58), lVar4 != -1)))) {
      *(long *)(this + 0x58) = lVar4 + 1;
      *(pthread_t *)(this + 0x60) = __thread1;
      uVar5 = 1;
    }
    else {
      uVar5 = 0;
    }
    iVar2 = pthread_mutex_unlock((pthread_mutex_t *)this);
  }
  else {
    uVar5 = 0;
  }
  if (*(long *)(lVar1 + 0x28) != lVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar2);
  }
  return uVar5;
}

