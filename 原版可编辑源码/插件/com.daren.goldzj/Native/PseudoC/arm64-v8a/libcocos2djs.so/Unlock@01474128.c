
/* v8::base::Mutex::Unlock() */

int __thiscall v8::base::Mutex::Unlock(Mutex *this)

{
  int iVar1;
  
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)this);
  return iVar1;
}

