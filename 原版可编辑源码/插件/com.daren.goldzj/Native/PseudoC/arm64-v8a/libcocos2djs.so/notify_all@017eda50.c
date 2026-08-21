
/* std::__ndk1::condition_variable::notify_all() */

int __thiscall std::__ndk1::condition_variable::notify_all(condition_variable *this)

{
  int iVar1;
  
  iVar1 = pthread_cond_broadcast((pthread_cond_t *)this);
  return iVar1;
}

