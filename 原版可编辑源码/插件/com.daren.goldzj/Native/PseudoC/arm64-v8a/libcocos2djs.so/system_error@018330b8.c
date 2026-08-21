
/* std::__ndk1::system_error::system_error(int, std::__ndk1::error_category const&) */

void __thiscall
std::__ndk1::system_error::system_error(system_error *this,int param_1,error_category *param_2)

{
  long lVar1;
  ulong local_78 [2];
  void *local_68;
  int local_60 [2];
  error_category *local_58;
  system_error local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_78[1] = 0;
  local_68 = (void *)0x0;
  local_78[0] = 0;
  local_60[0] = param_1;
  local_58 = param_2;
  __init(local_50,local_60,local_78);
  runtime_error::runtime_error((runtime_error *)this,(basic_string *)local_50);
  if (((byte)local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if ((local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  *(int *)(this + 0x10) = param_1;
  *(error_category **)(this + 0x18) = param_2;
  *(undefined ***)this = &PTR__system_error_01cde878;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

