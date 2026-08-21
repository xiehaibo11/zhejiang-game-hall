
/* v8::base::RecursiveMutex::~RecursiveMutex() */

int __thiscall v8::base::RecursiveMutex::~RecursiveMutex(RecursiveMutex *this)

{
  int iVar1;
  
  iVar1 = pthread_mutex_destroy((pthread_mutex_t *)this);
  return iVar1;
}

