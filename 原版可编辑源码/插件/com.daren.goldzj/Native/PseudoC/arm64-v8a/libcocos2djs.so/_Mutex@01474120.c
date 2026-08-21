
/* v8::base::Mutex::~Mutex() */

int __thiscall v8::base::Mutex::~Mutex(Mutex *this)

{
  int iVar1;
  
  iVar1 = pthread_mutex_destroy((pthread_mutex_t *)this);
  return iVar1;
}

