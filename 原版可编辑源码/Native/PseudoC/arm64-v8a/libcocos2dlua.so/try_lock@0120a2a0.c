
/* std::__ndk1::recursive_timed_mutex::try_lock() */

undefined4 __thiscall std::__ndk1::recursive_timed_mutex::try_lock(recursive_timed_mutex *this)

{
  int iVar1;
  pthread_t __thread1;
  pthread_t __thread2;
  long lVar2;
  undefined4 uVar3;
  
  __thread1 = pthread_self();
  iVar1 = pthread_mutex_trylock((pthread_mutex_t *)this);
  if (iVar1 != 0) {
    return 0;
  }
  lVar2 = *(long *)(this + 0x58);
  if (lVar2 == 0) {
LAB_0120a30c:
    *(long *)(this + 0x58) = lVar2 + 1;
    *(pthread_t *)(this + 0x60) = __thread1;
    uVar3 = 1;
  }
  else {
    __thread2 = *(pthread_t *)(this + 0x60);
    if ((__thread1 == 0) || (__thread2 == 0)) {
      if (__thread2 == 0 && __thread1 == 0) goto joined_r0x0120a308;
    }
    else {
      iVar1 = pthread_equal(__thread1,__thread2);
      if (iVar1 != 0) {
        lVar2 = *(long *)(this + 0x58);
joined_r0x0120a308:
        if (lVar2 != -1) goto LAB_0120a30c;
      }
    }
    uVar3 = 0;
  }
  pthread_mutex_unlock((pthread_mutex_t *)this);
  return uVar3;
}

