
/* v8::base::SharedMutex::TryLockShared() */

bool __thiscall v8::base::SharedMutex::TryLockShared(SharedMutex *this)

{
  int iVar1;
  
  iVar1 = pthread_rwlock_tryrdlock((pthread_rwlock_t *)this);
  return iVar1 == 0;
}

