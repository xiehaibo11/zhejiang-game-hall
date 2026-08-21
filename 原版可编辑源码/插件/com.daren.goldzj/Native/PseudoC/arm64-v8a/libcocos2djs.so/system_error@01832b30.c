
/* std::__ndk1::system_error::system_error(std::__ndk1::error_code, char const*) */

void __thiscall
std::__ndk1::system_error::system_error
          (system_error *this,undefined8 param_2,undefined8 param_3,char *param_4)

{
  long lVar1;
  size_t __n;
  void *__dest;
  ulong uVar2;
  ulong local_88;
  size_t local_80;
  void *local_78;
  system_error local_70 [16];
  void *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_88 = 0;
  local_80 = 0;
  local_78 = (void *)0x0;
  local_58 = param_2;
  uStack_50 = param_3;
  __n = strlen(param_4);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_88 | 1);
    local_88 = CONCAT71(local_88._1_7_,(char)((int)__n << 1));
    if (__n == 0) goto LAB_01832bcc;
  }
  else {
    uVar2 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar2);
    local_88 = uVar2 | 1;
    local_80 = __n;
    local_78 = __dest;
  }
  memcpy(__dest,param_4,__n);
LAB_01832bcc:
  *(undefined1 *)((long)__dest + __n) = 0;
  __init(local_70,&local_58,&local_88);
  runtime_error::runtime_error((runtime_error *)this,(basic_string *)local_70);
  if (((byte)local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  if ((local_88 & 1) != 0) {
    operator_delete(local_78);
  }
  *(undefined ***)this = &PTR__system_error_01cde878;
  *(undefined8 *)(this + 0x18) = uStack_50;
  *(undefined8 *)(this + 0x10) = local_58;
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

