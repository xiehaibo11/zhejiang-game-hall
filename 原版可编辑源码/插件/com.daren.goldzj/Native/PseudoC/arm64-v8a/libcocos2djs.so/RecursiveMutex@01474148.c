
/* v8::base::RecursiveMutex::RecursiveMutex() */

int __thiscall v8::base::RecursiveMutex::RecursiveMutex(RecursiveMutex *this)

{
  int iVar1;
  pthread_mutexattr_t apStack_8 [2];
  
  pthread_mutexattr_init(apStack_8);
  pthread_mutexattr_settype(apStack_8,1);
  pthread_mutex_init((pthread_mutex_t *)this,apStack_8);
  iVar1 = pthread_mutexattr_destroy(apStack_8);
  return iVar1;
}

