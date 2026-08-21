
/* std::__ndk1::__sp_mut::lock() */

int __thiscall std::__ndk1::__sp_mut::lock(__sp_mut *this)

{
  int iVar1;
  int iVar2;
  pthread_mutex_t *__mutex;
  
  __mutex = *(pthread_mutex_t **)this;
  iVar2 = 0x11;
  while( true ) {
    iVar1 = pthread_mutex_trylock(__mutex);
    if (iVar1 == 0) {
      return 0;
    }
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) break;
    sched_yield();
  }
  iVar2 = pthread_mutex_lock(__mutex);
  return iVar2;
}

