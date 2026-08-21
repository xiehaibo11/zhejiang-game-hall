
/* std::__ndk1::system_error::system_error(std::__ndk1::error_code, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
std::__ndk1::system_error::system_error
          (system_error *this,undefined8 param_2,undefined8 param_3,ulong *param_4)

{
  long lVar1;
  ulong __n;
  void *__src;
  void *__dest;
  ulong uVar2;
  ulong local_90;
  ulong uStack_88;
  void *local_80;
  system_error local_70 [16];
  void *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uStack_88 = 0;
  local_80 = (void *)0x0;
  local_90 = 0;
  local_58 = param_2;
  uStack_50 = param_3;
  if ((*param_4 & 1) == 0) {
    local_80 = (void *)param_4[2];
    uStack_88 = param_4[1];
    local_90 = *param_4;
    goto LAB_01832a5c;
  }
  __n = param_4[1];
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  __src = (void *)param_4[2];
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_90 | 1);
    local_90 = (ulong)(byte)((int)__n << 1);
    if (__n != 0) goto LAB_01832a48;
  }
  else {
    uVar2 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar2);
    local_90 = uVar2 | 1;
    uStack_88 = __n;
    local_80 = __dest;
LAB_01832a48:
    memcpy(__dest,__src,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
LAB_01832a5c:
  __init(local_70,&local_58,&local_90);
  runtime_error::runtime_error((runtime_error *)this,(basic_string *)local_70);
  if (((byte)local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
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

