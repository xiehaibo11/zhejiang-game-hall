
/* std::__ndk1::locale::locale(std::__ndk1::locale const&, char const*, int) */

void __thiscall std::__ndk1::locale::locale(locale *this,locale *param_1,char *param_2,int param_3)

{
  long lVar1;
  __shared_count *this_00;
  undefined8 uVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_60 [16];
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_2 == (char *)0x0) {
    __throw_runtime_error("locale constructed with null");
  }
  else {
    this_00 = operator_new(0x140);
    uVar2 = *(undefined8 *)param_1;
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_60,param_2);
    FUN_011f6874(this_00,uVar2,local_60,param_3);
    if (((byte)local_60[0] & 1) != 0) {
      operator_delete(local_50);
    }
    *(__shared_count **)this = this_00;
    __shared_count::__add_shared(this_00);
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

