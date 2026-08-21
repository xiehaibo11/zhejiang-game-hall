
/* std::__ndk1::ctype<wchar_t>::do_widen(char const*, char const*, wchar_t*) const */

char * __thiscall
std::__ndk1::ctype<wchar_t>::do_widen
          (ctype<wchar_t> *this,char *param_1,char *param_2,wchar_t *param_3)

{
  char *pcVar1;
  
  pcVar1 = param_1;
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_3 = (uint)(byte)*param_1;
    pcVar1 = param_2;
    param_3 = param_3 + 1;
  }
  return pcVar1;
}

