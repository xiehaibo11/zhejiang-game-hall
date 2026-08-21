
/* std::__ndk1::recursive_timed_mutex::lock() */

void __thiscall std::__ndk1::recursive_timed_mutex::lock(recursive_timed_mutex *this)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  pthread_t __thread1;
  ulong uVar4;
  ulong uVar5;
  pthread_t __thread2;
  pthread_mutex_t *local_48;
  char local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __thread1 = pthread_self();
  local_40 = '\x01';
  local_48 = (pthread_mutex_t *)this;
  iVar2 = pthread_mutex_lock((pthread_mutex_t *)this);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    __throw_system_error(iVar2,"mutex lock failed");
  }
  __thread2 = *(pthread_t *)(this + 0x60);
  if ((__thread1 == 0) || (__thread2 == 0)) {
    uVar5 = 0;
    uVar4 = 0;
    if (__thread2 != 0 || __thread1 != 0) goto LAB_0120a1fc;
  }
  else {
    uVar3 = pthread_equal(__thread1,__thread2);
    uVar5 = (ulong)uVar3;
    uVar4 = uVar5;
    if (uVar3 == 0) {
LAB_0120a1fc:
      if (*(long *)(this + 0x58) != 0) {
        do {
          uVar5 = condition_variable::wait
                            ((condition_variable *)(this + 0x28),(unique_lock *)&local_48);
        } while (*(long *)(this + 0x58) != 0);
      }
      *(undefined8 *)(this + 0x58) = 1;
      *(pthread_t *)(this + 0x60) = __thread1;
      goto joined_r0x0120a1ec;
    }
  }
  if (*(long *)(this + 0x58) == -1) {
                    /* WARNING: Subroutine does not return */
    __throw_system_error(0xb,"recursive_timed_mutex lock limit reached");
  }
  *(long *)(this + 0x58) = *(long *)(this + 0x58) + 1;
  uVar5 = uVar4;
joined_r0x0120a1ec:
  if (local_40 != '\0') {
    uVar3 = pthread_mutex_unlock(local_48);
    uVar5 = (ulong)uVar3;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

