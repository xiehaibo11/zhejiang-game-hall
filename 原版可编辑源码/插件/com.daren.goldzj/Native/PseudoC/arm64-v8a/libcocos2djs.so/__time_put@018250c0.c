
/* std::__ndk1::__time_put::__time_put(char const*) */

void __thiscall std::__ndk1::__time_put::__time_put(__time_put *this,char *param_1)

{
  long lVar1;
  __locale_t p_Var2;
  size_t __n;
  ulong *puVar3;
  undefined8 uVar4;
  void *__dest;
  ulong uVar5;
  ulong local_68;
  size_t local_60;
  void *local_58;
  ulong local_50;
  ulong uStack_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  p_Var2 = newlocale(0x1fbf,param_1,(__locale_t)0x0);
  *(__locale_t *)this = p_Var2;
  if (p_Var2 != (__locale_t)0x0) {
    if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = (void *)0x0;
  __n = strlen(param_1);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_68 | 1);
    local_68 = CONCAT71(local_68._1_7_,(char)((int)__n << 1));
    if (__n == 0) goto LAB_01825198;
  }
  else {
    uVar5 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar5);
    local_68 = uVar5 | 1;
    local_60 = __n;
    local_58 = __dest;
  }
  memcpy(__dest,param_1,__n);
LAB_01825198:
  *(undefined1 *)((long)__dest + __n) = 0;
  puVar3 = (ulong *)basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    insert((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)&local_68,0,"time_put_byname failed to construct for ");
  local_40 = (void *)puVar3[2];
  uStack_48 = puVar3[1];
  local_50 = *puVar3;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  uVar4 = FUN_01819190(&local_50);
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if ((local_68 & 1) != 0) {
    operator_delete(local_58);
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume(uVar4);
  }
                    /* WARNING: Subroutine does not return */
  _Unwind_Resume(uVar4);
}

