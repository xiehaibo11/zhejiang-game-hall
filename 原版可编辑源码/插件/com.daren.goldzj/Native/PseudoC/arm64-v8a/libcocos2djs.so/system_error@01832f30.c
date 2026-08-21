
/* std::__ndk1::system_error::system_error(int, std::__ndk1::error_category const&, char const*) */

void __thiscall
std::__ndk1::system_error::system_error
          (system_error *this,int param_1,error_category *param_2,char *param_3)

{
  long lVar1;
  size_t __n;
  void *__dest;
  ulong uVar2;
  ulong local_98;
  size_t local_90;
  void *local_88;
  int local_80 [2];
  error_category *local_78;
  system_error local_70 [16];
  void *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_90 = 0;
  local_88 = (void *)0x0;
  local_98 = 0;
  local_80[0] = param_1;
  local_78 = param_2;
  __n = strlen(param_3);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_98 | 1);
    local_98 = CONCAT71(local_98._1_7_,(char)((int)__n << 1));
    if (__n == 0) goto LAB_01832fdc;
  }
  else {
    uVar2 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar2);
    local_98 = uVar2 | 1;
    local_90 = __n;
    local_88 = __dest;
  }
  memcpy(__dest,param_3,__n);
LAB_01832fdc:
  *(undefined1 *)((long)__dest + __n) = 0;
  __init(local_70,local_80,&local_98);
  runtime_error::runtime_error((runtime_error *)this,(basic_string *)local_70);
  if (((byte)local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  if ((local_98 & 1) != 0) {
    operator_delete(local_88);
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

