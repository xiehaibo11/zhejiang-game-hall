
/* std::__ndk1::condition_variable::__do_timed_wait(std::__ndk1::unique_lock<std::__ndk1::mutex>&,
   std::__ndk1::chrono::time_point<std::__ndk1::chrono::system_clock,
   std::__ndk1::chrono::duration<long long, std::__ndk1::ratio<1l, 1000000000l> > >) */

void __thiscall
std::__ndk1::condition_variable::__do_timed_wait
          (condition_variable *this,undefined8 *param_1,long param_3)

{
  long lVar1;
  int iVar2;
  timespec local_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (*(char *)(param_1 + 1) == '\0') {
                    /* WARNING: Subroutine does not return */
    __throw_system_error(1,"condition_variable::timed wait: mutex not locked");
  }
  if (0x59682f000000e940 < param_3) {
    param_3 = 0x59682f000000e941;
  }
  local_38.tv_sec = param_3 / 1000000000;
  local_38.tv_nsec = param_3 % 1000000000;
  iVar2 = pthread_cond_timedwait((pthread_cond_t *)this,(pthread_mutex_t *)*param_1,&local_38);
  if ((iVar2 != 0) && (iVar2 != 0x6e)) {
                    /* WARNING: Subroutine does not return */
    __throw_system_error(iVar2,"condition_variable timed_wait failed");
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

