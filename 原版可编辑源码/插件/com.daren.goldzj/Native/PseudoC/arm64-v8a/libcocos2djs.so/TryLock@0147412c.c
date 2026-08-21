
/* v8::base::Mutex::TryLock() */

bool __thiscall v8::base::Mutex::TryLock(Mutex *this)

{
  int iVar1;
  
  iVar1 = pthread_mutex_trylock((pthread_mutex_t *)this);
  return iVar1 != 0x10;
}

