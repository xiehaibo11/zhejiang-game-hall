
/* std::__ndk1::timed_mutex::try_lock() */

bool __thiscall std::__ndk1::timed_mutex::try_lock(timed_mutex *this)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = pthread_mutex_trylock((pthread_mutex_t *)this);
  if (iVar1 == 0) {
    bVar2 = this[0x58] == (timed_mutex)0x0;
    if (bVar2) {
      this[0x58] = (timed_mutex)0x1;
    }
    pthread_mutex_unlock((pthread_mutex_t *)this);
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}

