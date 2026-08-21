
/* std::__ndk1::recursive_mutex::recursive_mutex() */

void __thiscall std::__ndk1::recursive_mutex::recursive_mutex(recursive_mutex *this)

{
  long lVar1;
  int iVar2;
  int local_44;
  pthread_mutexattr_t apStack_40 [2];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_44 = pthread_mutexattr_init(apStack_40);
  if (local_44 == 0) {
    local_44 = pthread_mutexattr_settype(apStack_40,1);
    if (local_44 == 0) {
      local_44 = pthread_mutex_init((pthread_mutex_t *)this,apStack_40);
      iVar2 = pthread_mutexattr_destroy(apStack_40);
      if (local_44 == 0) {
        if (iVar2 == 0) {
          if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return;
        }
        pthread_mutex_destroy((pthread_mutex_t *)this);
        local_44 = iVar2;
      }
    }
    else {
      pthread_mutexattr_destroy(apStack_40);
    }
  }
                    /* WARNING: Subroutine does not return */
  __throw_system_error(local_44,"recursive_mutex constructor failed");
}

