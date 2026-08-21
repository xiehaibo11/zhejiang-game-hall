
/* std::__ndk1::condition_variable::wait(std::__ndk1::unique_lock<std::__ndk1::mutex>&) */

void __thiscall std::__ndk1::condition_variable::wait(condition_variable *this,unique_lock *param_1)

{
  int iVar1;
  
  if (param_1[8] == (unique_lock)0x0) {
                    /* WARNING: Subroutine does not return */
    __throw_system_error(1,"condition_variable::wait: mutex not locked");
  }
  iVar1 = pthread_cond_wait((pthread_cond_t *)this,*(pthread_mutex_t **)param_1);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __throw_system_error(iVar1,"condition_variable wait failed");
}

