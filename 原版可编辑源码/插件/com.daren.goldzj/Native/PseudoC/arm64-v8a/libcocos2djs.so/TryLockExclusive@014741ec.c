
/* v8::base::SharedMutex::TryLockExclusive() */

bool __thiscall v8::base::SharedMutex::TryLockExclusive(SharedMutex *this)

{
  int iVar1;
  
  iVar1 = pthread_rwlock_trywrlock((pthread_rwlock_t *)this);
  return iVar1 == 0;
}

