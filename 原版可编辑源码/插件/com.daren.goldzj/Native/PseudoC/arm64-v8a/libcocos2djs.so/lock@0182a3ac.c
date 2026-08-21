
/* std::__ndk1::recursive_timed_mutex::lock() */

void __thiscall std::__ndk1::recursive_timed_mutex::lock(recursive_timed_mutex *this)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  pthread_t __thread1;
  ulong uVar4;
  long lVar5;
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
  iVar2 = pthread_equal(__thread1,*(pthread_t *)(this + 0x60));
  lVar5 = *(long *)(this + 0x58);
  if (iVar2 == 0) {
    if (lVar5 == 0) {
      *(undefined8 *)(this + 0x58) = 1;
      *(pthread_t *)(this + 0x60) = __thread1;
    }
    else {
      do {
        uVar4 = condition_variable::wait
                          ((condition_variable *)(this + 0x28),(unique_lock *)&local_48);
      } while (*(long *)(this + 0x58) != 0);
      *(undefined8 *)(this + 0x58) = 1;
      *(pthread_t *)(this + 0x60) = __thread1;
      if (local_40 == '\0') goto LAB_0182a41c;
    }
  }
  else {
    if (lVar5 == -1) {
                    /* WARNING: Subroutine does not return */
      __throw_system_error(0xb,"recursive_timed_mutex lock limit reached");
    }
    *(long *)(this + 0x58) = lVar5 + 1;
  }
  uVar3 = pthread_mutex_unlock(local_48);
  uVar4 = (ulong)uVar3;
LAB_0182a41c:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}

