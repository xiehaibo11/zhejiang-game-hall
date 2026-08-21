
/* std::__ndk1::random_device::TEMPNAMEPLACEHOLDERVALUE() */

void __thiscall std::__ndk1::random_device::operator()(random_device *this)

{
  long lVar1;
  ssize_t sVar2;
  int *piVar3;
  undefined4 *__buf;
  size_t __nbytes;
  undefined4 local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __buf = &local_3c;
  __nbytes = 4;
  do {
    while (sVar2 = read(*(int *)this,__buf,__nbytes), sVar2 != -1) {
      if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        __throw_system_error(0x3d,"random_device got EOF");
      }
      __nbytes = __nbytes - sVar2;
      __buf = (undefined4 *)((long)__buf + sVar2);
      if (__nbytes == 0) goto LAB_0182aac0;
    }
    piVar3 = (int *)__errno();
    if (*piVar3 != 4) {
                    /* WARNING: Subroutine does not return */
      __throw_system_error(*piVar3,"random_device got an unexpected error");
    }
  } while (__nbytes != 0);
LAB_0182aac0:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_3c);
  }
  return;
}

