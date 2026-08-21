
/* std::__ndk1::future_error::future_error(std::__ndk1::error_code) */

void __thiscall
std::__ndk1::future_error::future_error(future_error *this,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  basic_string local_50 [16];
  void *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = param_2;
  uStack_30 = param_3;
  error_code::message((error_code *)&local_38);
  logic_error::logic_error((logic_error *)this,local_50);
  if (((byte)local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  *(undefined ***)this = &PTR__future_error_017313a8;
  *(undefined8 *)(this + 0x18) = uStack_30;
  *(undefined8 *)(this + 0x10) = local_38;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

