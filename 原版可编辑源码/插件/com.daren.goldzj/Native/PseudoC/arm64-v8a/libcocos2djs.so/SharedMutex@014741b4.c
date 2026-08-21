
/* v8::base::SharedMutex::SharedMutex() */

int __thiscall v8::base::SharedMutex::SharedMutex(SharedMutex *this)

{
  int iVar1;
  
  iVar1 = pthread_rwlock_init((pthread_rwlock_t *)this,(pthread_rwlockattr_t *)0x0);
  return iVar1;
}

