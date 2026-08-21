
/* v8::base::SharedMutex::~SharedMutex() */

int __thiscall v8::base::SharedMutex::~SharedMutex(SharedMutex *this)

{
  int iVar1;
  
  iVar1 = pthread_rwlock_destroy((pthread_rwlock_t *)this);
  return iVar1;
}

