
/* std::__ndk1::codecvt<char16_t, char, mbstate_t>::do_out(mbstate_t&, char16_t const*, char16_t
   const*, char16_t const*&, char*, char*, char*&) const */

void __thiscall
std::__ndk1::codecvt<char16_t,char,mbstate_t>::do_out
          (codecvt<char16_t,char,mbstate_t> *this,mbstate_t *param_1,wchar16 *param_2,
          wchar16 *param_3,wchar16 **param_4,char *param_5,char *param_6,char **param_7)

{
  long lVar1;
  char *local_48;
  wchar16 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_48 = param_5;
  local_40 = param_2;
  FUN_0181c5ec(param_2,param_3,&local_40,param_5,param_6,&local_48,0x10ffff,0);
  *param_4 = local_40;
  *param_7 = local_48;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

