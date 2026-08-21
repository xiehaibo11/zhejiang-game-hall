
/* std::__ndk1::condition_variable::notify_one() */

int __thiscall std::__ndk1::condition_variable::notify_one(condition_variable *this)

{
  int iVar1;
  
  iVar1 = pthread_cond_signal((pthread_cond_t *)this);
  return iVar1;
}

