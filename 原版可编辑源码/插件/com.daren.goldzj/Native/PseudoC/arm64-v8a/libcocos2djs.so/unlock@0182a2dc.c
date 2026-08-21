
/* std::__ndk1::timed_mutex::unlock() */

int __thiscall std::__ndk1::timed_mutex::unlock(timed_mutex *this)

{
  int iVar1;
  
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)this);
  if (iVar1 == 0) {
    this[0x58] = (timed_mutex)0x0;
    condition_variable::notify_one((condition_variable *)(this + 0x28));
    iVar1 = pthread_mutex_unlock((pthread_mutex_t *)this);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __throw_system_error(iVar1,"mutex lock failed");
}

