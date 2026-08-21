
/* v8::base::RecursiveMutex::Unlock() */

int __thiscall v8::base::RecursiveMutex::Unlock(RecursiveMutex *this)

{
  int iVar1;
  
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)this);
  return iVar1;
}

