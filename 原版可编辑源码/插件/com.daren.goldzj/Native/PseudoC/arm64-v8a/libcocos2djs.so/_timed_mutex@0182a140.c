
/* std::__ndk1::timed_mutex::~timed_mutex() */

int __thiscall std::__ndk1::timed_mutex::~timed_mutex(timed_mutex *this)

{
  int iVar1;
  
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)this);
  if (iVar1 == 0) {
    pthread_mutex_unlock((pthread_mutex_t *)this);
    condition_variable::~condition_variable((condition_variable *)(this + 0x28));
    iVar1 = pthread_mutex_destroy((pthread_mutex_t *)this);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __throw_system_error(iVar1,"mutex lock failed");
}

