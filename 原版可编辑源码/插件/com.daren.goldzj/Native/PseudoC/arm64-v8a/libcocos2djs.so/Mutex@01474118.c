
/* v8::base::Mutex::Mutex() */

int __thiscall v8::base::Mutex::Mutex(Mutex *this)

{
  int iVar1;
  
  iVar1 = pthread_mutex_init((pthread_mutex_t *)this,(pthread_mutexattr_t *)0x0);
  return iVar1;
}

