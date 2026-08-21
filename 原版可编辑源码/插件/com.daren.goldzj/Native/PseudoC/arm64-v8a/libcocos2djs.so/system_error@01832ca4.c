
/* std::__ndk1::system_error::system_error(std::__ndk1::error_code) */

void __thiscall
std::__ndk1::system_error::system_error(system_error *this,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong local_68 [2];
  void *local_58;
  system_error local_50 [16];
  void *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_68[0] = 0;
  local_68[1] = 0;
  local_58 = (void *)0x0;
  local_38 = param_2;
  uStack_30 = param_3;
  __init(local_50,&local_38,local_68);
  runtime_error::runtime_error((runtime_error *)this,(basic_string *)local_50);
  if (((byte)local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  *(undefined ***)this = &PTR__system_error_01cde878;
  *(undefined8 *)(this + 0x18) = uStack_30;
  *(undefined8 *)(this + 0x10) = local_38;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

