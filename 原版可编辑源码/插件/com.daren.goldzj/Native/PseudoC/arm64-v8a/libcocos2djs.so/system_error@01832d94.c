
/* std::__ndk1::system_error::system_error(int, std::__ndk1::error_category const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

void __thiscall
std::__ndk1::system_error::system_error
          (system_error *this,int param_1,error_category *param_2,basic_string *param_3)

{
  long lVar1;
  ulong __n;
  void *__src;
  void *__dest;
  ulong uVar2;
  ulong local_a0;
  ulong uStack_98;
  void *local_90;
  int local_80 [2];
  error_category *local_78;
  system_error local_70 [16];
  void *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uStack_98 = 0;
  local_90 = (void *)0x0;
  local_a0 = 0;
  local_80[0] = param_1;
  local_78 = param_2;
  if (((byte)*param_3 & 1) == 0) {
    local_90 = *(void **)(param_3 + 0x10);
    uStack_98 = *(ulong *)(param_3 + 8);
    local_a0 = *(ulong *)param_3;
    goto LAB_01832e58;
  }
  __n = *(ulong *)(param_3 + 8);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  __src = *(void **)(param_3 + 0x10);
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_a0 | 1);
    local_a0 = (ulong)(byte)((int)__n << 1);
    if (__n != 0) goto LAB_01832e44;
  }
  else {
    uVar2 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar2);
    local_a0 = uVar2 | 1;
    uStack_98 = __n;
    local_90 = __dest;
LAB_01832e44:
    memcpy(__dest,__src,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
LAB_01832e58:
  __init(local_70,local_80,&local_a0);
  runtime_error::runtime_error((runtime_error *)this,(basic_string *)local_70);
  if (((byte)local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  if ((local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
  *(int *)(this + 0x10) = param_1;
  *(error_category **)(this + 0x18) = param_2;
  *(undefined ***)this = &PTR__system_error_01cde878;
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

