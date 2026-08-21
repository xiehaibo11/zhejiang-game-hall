
/* universe::TanGaoXiong::removeFile(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) const */

void universe::TanGaoXiong::removeFile(basic_string *param_1)

{
  char *__filename;
  long lVar1;
  int iVar2;
  ulong uVar3;
  basic_string *in_x1;
  basic_string *in_x2;
  basic_string *__filename_00;
  byte local_50 [16];
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = (**(code **)(*(long *)param_1 + 0x40))();
  if ((uVar3 & 1) == 0) {
    std::__ndk1::operator+((__ndk1 *)(param_1 + 8),in_x1,in_x2);
    __filename = (char *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      __filename = local_40;
    }
    iVar2 = ::remove(__filename);
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  else {
    __filename_00 = *(basic_string **)(in_x1 + 0x10);
    if (((byte)*in_x1 & 1) == 0) {
      __filename_00 = in_x1 + 1;
    }
    iVar2 = ::remove((char *)__filename_00);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2 == 0);
}

