
/* std::__ndk1::codecvt<wchar_t, char, mbstate_t>::do_max_length() const */

ulong __thiscall
std::__ndk1::codecvt<wchar_t,char,mbstate_t>::do_max_length(codecvt<wchar_t,char,mbstate_t> *this)

{
  __locale_t __dataset;
  size_t sVar1;
  
  if (*(__locale_t *)(this + 0x10) == (__locale_t)0x0) {
    sVar1 = 1;
  }
  else {
    __dataset = uselocale(*(__locale_t *)(this + 0x10));
    sVar1 = __ctype_get_mb_cur_max();
    if (__dataset != (__locale_t)0x0) {
      uselocale(__dataset);
    }
  }
  return sVar1 & 0xffffffff;
}

