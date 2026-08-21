
/* v8::base::SharedMutex::UnlockShared() */

int __thiscall v8::base::SharedMutex::UnlockShared(SharedMutex *this)

{
  int iVar1;
  
  iVar1 = pthread_rwlock_unlock((pthread_rwlock_t *)this);
  return iVar1;
}

