
/* std::__ndk1::__thread_local_data() */

undefined * std::__ndk1::__thread_local_data(void)

{
  int iVar1;
  
  if (((DAT_01d53e40 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_01d53e40), iVar1 != 0)) {
    iVar1 = pthread_key_create((pthread_key_t *)&DAT_01d53e38,FUN_018337b0);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      __throw_system_error(iVar1,"__thread_specific_ptr construction failed");
    }
    __cxa_guard_release(&DAT_01d53e40);
  }
  return &DAT_01d53e38;
}

