
/* std::__ndk1::mutex::~mutex() */

int __thiscall std::__ndk1::mutex::~mutex(mutex *this)

{
  int iVar1;
  
  iVar1 = pthread_mutex_destroy((pthread_mutex_t *)this);
  return iVar1;
}

