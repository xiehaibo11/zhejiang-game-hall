
/* std::__ndk1::condition_variable::~condition_variable() */

int __thiscall std::__ndk1::condition_variable::~condition_variable(condition_variable *this)

{
  int iVar1;
  
  iVar1 = pthread_cond_destroy((pthread_cond_t *)this);
  return iVar1;
}

