
/* std::__ndk1::__thread_local_data() */

undefined * std::__ndk1::__thread_local_data(void)

{
  int iVar1;
  
  if (((DAT_01795350 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_01795350), iVar1 != 0)) {
    iVar1 = pthread_key_create((pthread_key_t *)&DAT_01795348,FUN_01212cc0);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      __throw_system_error(iVar1,"__thread_specific_ptr construction failed");
    }
    __cxa_guard_release(&DAT_01795350);
  }
  return &DAT_01795348;
}

