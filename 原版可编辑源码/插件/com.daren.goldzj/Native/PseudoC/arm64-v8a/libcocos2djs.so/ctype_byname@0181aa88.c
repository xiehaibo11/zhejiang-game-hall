
/* std::__ndk1::ctype_byname<char>::ctype_byname(char const*, unsigned long) */

void __thiscall
std::__ndk1::ctype_byname<char>::ctype_byname(ctype_byname<char> *this,char *param_1,ulong param_2)

{
  long lVar1;
  __locale_t p_Var2;
  size_t __n;
  ulong *puVar3;
  undefined8 uVar4;
  void *__dest;
  ulong uVar5;
  ulong local_78;
  size_t local_70;
  void *local_68;
  ulong local_60;
  ulong uStack_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *(undefined ***)this = &PTR__ctype_byname_01cdbaf0;
  *(ulong *)(this + 8) = param_2 - 1;
  this[0x18] = (ctype_byname<char>)0x0;
  *(undefined **)(this + 0x10) = &DAT_01a64ec8;
  p_Var2 = newlocale(0x1fbf,param_1,(__locale_t)0x0);
  *(__locale_t *)(this + 0x20) = p_Var2;
  if (p_Var2 != (__locale_t)0x0) {
    if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  local_78 = 0;
  local_70 = 0;
  local_68 = (void *)0x0;
  __n = strlen(param_1);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_78 | 1);
    local_78 = CONCAT71(local_78._1_7_,(char)((int)__n << 1));
    if (__n == 0) goto LAB_0181ab8c;
  }
  else {
    uVar5 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar5);
    local_78 = uVar5 | 1;
    local_70 = __n;
    local_68 = __dest;
  }
  memcpy(__dest,param_1,__n);
LAB_0181ab8c:
  *(undefined1 *)((long)__dest + __n) = 0;
  puVar3 = (ulong *)basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    insert((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)&local_78,0,
                           "ctype_byname<char>::ctype_byname failed to construct for ");
  local_50 = (void *)puVar3[2];
  uStack_58 = puVar3[1];
  local_60 = *puVar3;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  uVar4 = FUN_01819190(&local_60);
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  *(undefined ***)this = &PTR__ctype_01cdba88;
  if ((*(void **)(this + 0x10) != (void *)0x0) && (this[0x18] != (ctype_byname<char>)0x0)) {
    operator_delete__(*(void **)(this + 0x10));
  }
  __shared_weak_count::~__shared_weak_count((__shared_weak_count *)this);
                    /* WARNING: Subroutine does not return */
  _Unwind_Resume(uVar4);
}

