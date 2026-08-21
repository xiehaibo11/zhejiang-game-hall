
/* std::__ndk1::system_error::system_error(int, std::__ndk1::error_category const&) */

void __thiscall
std::__ndk1::system_error::system_error(system_error *this,int param_1,error_category *param_2)

{
  long lVar1;
  int local_78 [2];
  error_category *local_70;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_68 [16];
  void *local_58;
  system_error local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_78[0] = param_1;
  local_70 = param_2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_68,"");
  __init(local_50,local_78,local_68);
  runtime_error::runtime_error((runtime_error *)this,(basic_string *)local_50);
  if (((byte)local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (((byte)local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  *(int *)(this + 0x10) = param_1;
  *(error_category **)(this + 0x18) = param_2;
  *(undefined ***)this = &PTR__system_error_01731238;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

