
/* std::__ndk1::mutex::unlock() */

int __thiscall std::__ndk1::mutex::unlock(mutex *this)

{
  int iVar1;
  
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)this);
  return iVar1;
}

