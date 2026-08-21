
/* v8::base::RecursiveMutex::Lock() */

int __thiscall v8::base::RecursiveMutex::Lock(RecursiveMutex *this)

{
  int iVar1;
  
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)this);
  return iVar1;
}

