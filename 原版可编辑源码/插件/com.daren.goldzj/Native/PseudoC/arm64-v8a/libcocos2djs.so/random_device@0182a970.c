
/* std::__ndk1::random_device::random_device(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall std::__ndk1::random_device::random_device(random_device *this,basic_string *param_1)

{
  char *pcVar1;
  long lVar2;
  int iVar3;
  int *piVar4;
  basic_string *in_x2;
  basic_string *__file;
  byte local_50 [16];
  char *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  __file = *(basic_string **)(param_1 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    __file = param_1 + 1;
  }
  iVar3 = open((char *)__file,0);
  *(int *)this = iVar3;
  if (-1 < iVar3) {
    if (*(long *)(lVar2 + 0x28) == local_38) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  piVar4 = (int *)__errno();
  iVar3 = *piVar4;
  operator+((__ndk1 *)"random_device failed to open ",(char *)param_1,in_x2);
  pcVar1 = (char *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pcVar1 = local_40;
  }
                    /* WARNING: Subroutine does not return */
  __throw_system_error(iVar3,pcVar1);
}

