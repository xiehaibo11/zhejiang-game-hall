
/* std::__ndk1::recursive_mutex::try_lock() */

bool __thiscall std::__ndk1::recursive_mutex::try_lock(recursive_mutex *this)

{
  int iVar1;
  
  iVar1 = pthread_mutex_trylock((pthread_mutex_t *)this);
  return iVar1 == 0;
}

