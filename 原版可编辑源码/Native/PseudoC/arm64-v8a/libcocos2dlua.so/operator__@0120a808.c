
/* std::__ndk1::random_device::TEMPNAMEPLACEHOLDERVALUE() */

void __thiscall std::__ndk1::random_device::operator()(random_device *this)

{
  long lVar1;
  int *piVar2;
  long lVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined4 local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  puVar4 = &local_3c;
  lVar5 = 4;
  do {
    while (lVar3 = __read_chk(*(undefined4 *)this,puVar4,lVar5,0xffffffffffffffff), lVar3 != -1) {
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        __throw_system_error(0x3d,"random_device got EOF");
      }
      lVar5 = lVar5 - lVar3;
      puVar4 = (undefined4 *)((long)puVar4 + lVar3);
      if (lVar5 == 0) goto LAB_0120a878;
    }
    piVar2 = (int *)__errno();
    if (*piVar2 != 4) {
                    /* WARNING: Subroutine does not return */
      __throw_system_error(*piVar2,"random_device got an unexpected error");
    }
  } while (lVar5 != 0);
LAB_0120a878:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_3c);
}

