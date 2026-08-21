
/* std::__ndk1::ctype_byname<char>::ctype_byname(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, unsigned long) */

void __thiscall
std::__ndk1::ctype_byname<char>::ctype_byname
          (ctype_byname<char> *this,basic_string *param_1,ulong param_2)

{
  long lVar1;
  __locale_t p_Var2;
  basic_string *pbVar3;
  basic_string *__locale;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this[0x18] = (ctype_byname<char>)0x0;
  *(undefined **)(this + 0x10) = &DAT_01a64ec8;
  *(undefined ***)this = &PTR__ctype_byname_01cdbaf0;
  *(ulong *)(this + 8) = param_2 - 1;
  __locale = *(basic_string **)(param_1 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    __locale = param_1 + 1;
  }
  pbVar3 = (basic_string *)0x0;
  p_Var2 = newlocale(0x1fbf,(char *)__locale,(__locale_t)0x0);
  *(__locale_t *)(this + 0x20) = p_Var2;
  if (p_Var2 == (__locale_t)0x0) {
    operator+((__ndk1 *)"ctype_byname<char>::ctype_byname failed to construct for ",(char *)param_1,
              pbVar3);
    FUN_01819190(auStack_50);
  }
  else if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

