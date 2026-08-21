
/* std::__ndk1::recursive_mutex::~recursive_mutex() */

int __thiscall std::__ndk1::recursive_mutex::~recursive_mutex(recursive_mutex *this)

{
  int iVar1;
  
  iVar1 = pthread_mutex_destroy((pthread_mutex_t *)this);
  return iVar1;
}

