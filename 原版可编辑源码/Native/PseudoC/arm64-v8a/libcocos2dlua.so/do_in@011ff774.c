
/* std::__ndk1::__codecvt_utf8_utf16<char16_t>::do_in(mbstate_t&, char const*, char const*, char
   const*&, char16_t*, char16_t*, char16_t*&) const */

void __thiscall
std::__ndk1::__codecvt_utf8_utf16<char16_t>::do_in
          (__codecvt_utf8_utf16<char16_t> *this,mbstate_t *param_1,char *param_2,char *param_3,
          char **param_4,wchar16 *param_5,wchar16 *param_6,wchar16 **param_7)

{
  wchar16 *local_30;
  char *local_28;
  
  local_30 = param_5;
  local_28 = param_2;
  FUN_011fcd98(param_2,param_3,&local_28,param_5,param_6,&local_30,*(undefined8 *)(this + 0x10),
               *(undefined4 *)(this + 0x18));
  *param_4 = local_28;
  *param_7 = local_30;
  return;
}

