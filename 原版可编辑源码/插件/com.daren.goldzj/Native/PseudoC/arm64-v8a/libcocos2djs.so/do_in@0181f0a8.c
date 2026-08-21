
/* std::__ndk1::__codecvt_utf8_utf16<wchar_t>::do_in(mbstate_t&, char const*, char const*, char
   const*&, wchar_t*, wchar_t*, wchar_t*&) const */

void __thiscall
std::__ndk1::__codecvt_utf8_utf16<wchar_t>::do_in
          (__codecvt_utf8_utf16<wchar_t> *this,mbstate_t *param_1,char *param_2,char *param_3,
          char **param_4,wchar_t *param_5,wchar_t *param_6,wchar_t **param_7)

{
  long lVar1;
  wchar_t *local_48;
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_48 = param_5;
  local_40 = param_2;
  FUN_0181f13c(param_2,param_3,&local_40,param_5,param_6,&local_48,*(undefined8 *)(this + 0x18),
               *(undefined4 *)(this + 0x20));
  *param_4 = local_40;
  *param_7 = local_48;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

