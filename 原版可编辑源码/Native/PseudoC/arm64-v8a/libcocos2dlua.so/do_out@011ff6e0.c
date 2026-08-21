
/* std::__ndk1::__codecvt_utf8_utf16<char16_t>::do_out(mbstate_t&, char16_t const*, char16_t const*,
   char16_t const*&, char*, char*, char*&) const */

void __thiscall
std::__ndk1::__codecvt_utf8_utf16<char16_t>::do_out
          (__codecvt_utf8_utf16<char16_t> *this,mbstate_t *param_1,wchar16 *param_2,wchar16 *param_3
          ,wchar16 **param_4,char *param_5,char *param_6,char **param_7)

{
  long lVar1;
  wchar16 *local_48;
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_48 = param_2;
  local_40 = param_5;
  FUN_011fcaf0(param_2,param_3,&local_48,param_5,param_6,&local_40,*(undefined8 *)(this + 0x10),
               *(undefined4 *)(this + 0x18));
  *param_4 = local_48;
  *param_7 = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

