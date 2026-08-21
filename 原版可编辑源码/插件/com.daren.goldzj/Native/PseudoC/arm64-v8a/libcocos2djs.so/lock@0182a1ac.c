
/* std::__ndk1::timed_mutex::lock() */

void __thiscall std::__ndk1::timed_mutex::lock(timed_mutex *this)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  pthread_mutex_t *local_48;
  char local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = '\x01';
  local_48 = (pthread_mutex_t *)this;
  iVar2 = pthread_mutex_lock((pthread_mutex_t *)this);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    __throw_system_error(iVar2,"mutex lock failed");
  }
  if (this[0x58] == (timed_mutex)0x0) {
    this[0x58] = (timed_mutex)0x1;
  }
  else {
    do {
      uVar4 = condition_variable::wait((condition_variable *)(this + 0x28),(unique_lock *)&local_48)
      ;
    } while (this[0x58] != (timed_mutex)0x0);
    this[0x58] = (timed_mutex)0x1;
    if (local_40 == '\0') goto LAB_0182a228;
  }
  uVar3 = pthread_mutex_unlock(local_48);
  uVar4 = (ulong)uVar3;
LAB_0182a228:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}

