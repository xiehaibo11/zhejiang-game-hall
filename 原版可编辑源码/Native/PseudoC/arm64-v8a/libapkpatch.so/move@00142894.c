
/* std::__ndk1::char_traits<wchar_t>::move(wchar_t*, wchar_t const*, unsigned long) */

void std::__ndk1::char_traits<wchar_t>::move(wchar_t *param_1,wchar_t *param_2,ulong param_3)

{
  if (param_3 != 0) {
    wmemmove(param_1,param_2,param_3);
  }
  return;
}

