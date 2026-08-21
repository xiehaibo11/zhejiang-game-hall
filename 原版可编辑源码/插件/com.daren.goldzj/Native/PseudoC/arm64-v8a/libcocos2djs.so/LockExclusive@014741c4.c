
/* v8::base::SharedMutex::LockExclusive() */

int __thiscall v8::base::SharedMutex::LockExclusive(SharedMutex *this)

{
  int iVar1;
  
  iVar1 = pthread_rwlock_wrlock((pthread_rwlock_t *)this);
  return iVar1;
}

