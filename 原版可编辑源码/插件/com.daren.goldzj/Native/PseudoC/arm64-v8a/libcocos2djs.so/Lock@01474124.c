
/* v8::base::Mutex::Lock() */

int __thiscall v8::base::Mutex::Lock(Mutex *this)

{
  int iVar1;
  
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)this);
  return iVar1;
}

