
/* std::__ndk1::__time_put::__time_put(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall std::__ndk1::__time_put::__time_put(__time_put *this,basic_string *param_1)

{
  long lVar1;
  __locale_t p_Var2;
  basic_string *pbVar3;
  basic_string *__locale;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __locale = *(basic_string **)(param_1 + 0x10);
  pbVar3 = (basic_string *)0x0;
  if (((byte)*param_1 & 1) == 0) {
    __locale = param_1 + 1;
  }
  p_Var2 = newlocale(0x1fbf,(char *)__locale,(__locale_t)0x0);
  *(__locale_t *)this = p_Var2;
  if (p_Var2 == (__locale_t)0x0) {
    operator+((__ndk1 *)"time_put_byname failed to construct for ",(char *)param_1,pbVar3);
    FUN_011f98b4(auStack_50);
  }
  else if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

