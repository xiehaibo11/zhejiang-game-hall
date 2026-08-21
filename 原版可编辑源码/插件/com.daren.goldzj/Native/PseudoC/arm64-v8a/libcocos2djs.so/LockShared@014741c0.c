
/* v8::base::SharedMutex::LockShared() */

int __thiscall v8::base::SharedMutex::LockShared(SharedMutex *this)

{
  int iVar1;
  
  iVar1 = pthread_rwlock_rdlock((pthread_rwlock_t *)this);
  return iVar1;
}

