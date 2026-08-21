
/* std::__ndk1::locale::locale(char const*) */

void __thiscall std::__ndk1::locale::locale(locale *this,char *param_1)

{
  long lVar1;
  __shared_count *this_00;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1 == (char *)0x0) {
    __throw_runtime_error("locale constructed with null");
  }
  else {
    this_00 = operator_new(0x140);
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_50,param_1);
    FUN_011f43c4(this_00,local_50,0);
    if (((byte)local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
    *(__shared_count **)this = this_00;
    __shared_count::__add_shared(this_00);
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

