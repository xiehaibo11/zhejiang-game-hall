
/* std::__ndk1::__sp_mut::lock() */

int __thiscall std::__ndk1::__sp_mut::lock(__sp_mut *this)

{
  int iVar1;
  pthread_mutex_t *__mutex;
  uint uVar2;
  
  __mutex = *(pthread_mutex_t **)this;
  uVar2 = 0xffffffff;
  while( true ) {
    iVar1 = pthread_mutex_trylock(__mutex);
    if (iVar1 == 0) {
      return 0;
    }
    uVar2 = uVar2 + 1;
    if (0xf < uVar2) break;
    sched_yield();
  }
  iVar1 = pthread_mutex_lock(__mutex);
  return iVar1;
}

