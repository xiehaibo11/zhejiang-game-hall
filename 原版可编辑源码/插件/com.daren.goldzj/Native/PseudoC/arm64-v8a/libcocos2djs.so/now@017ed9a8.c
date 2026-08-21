
/* std::__ndk1::chrono::steady_clock::now() */

long std::__ndk1::chrono::steady_clock::now(void)

{
  long lVar1;
  int iVar2;
  int *piVar3;
  timespec local_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  iVar2 = clock_gettime(1,&local_38);
  if (iVar2 != 0) {
    piVar3 = (int *)__errno();
                    /* WARNING: Subroutine does not return */
    __throw_system_error(*piVar3,"clock_gettime(CLOCK_MONOTONIC) failed");
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return local_38.tv_nsec + local_38.tv_sec * 1000000000;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

