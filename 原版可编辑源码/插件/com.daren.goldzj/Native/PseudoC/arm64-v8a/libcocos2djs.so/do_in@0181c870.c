
/* std::__ndk1::codecvt<char16_t, char, mbstate_t>::do_in(mbstate_t&, char const*, char const*, char
   const*&, char16_t*, char16_t*, char16_t*&) const */

void __thiscall
std::__ndk1::codecvt<char16_t,char,mbstate_t>::do_in
          (codecvt<char16_t,char,mbstate_t> *this,mbstate_t *param_1,char *param_2,char *param_3,
          char **param_4,wchar16 *param_5,wchar16 *param_6,wchar16 **param_7)

{
  long lVar1;
  wchar16 *local_48;
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_48 = param_5;
  local_40 = param_2;
  FUN_0181c900(param_2,param_3,&local_40,param_5,param_6,&local_48,0x10ffff,0);
  *param_4 = local_40;
  *param_7 = local_48;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

