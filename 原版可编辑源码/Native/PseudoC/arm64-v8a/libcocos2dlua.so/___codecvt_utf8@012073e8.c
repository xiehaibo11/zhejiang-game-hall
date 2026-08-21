
/* std::__ndk1::__codecvt_utf8<wchar_t>::~__codecvt_utf8() */

void __thiscall std::__ndk1::__codecvt_utf8<wchar_t>::~__codecvt_utf8(__codecvt_utf8<wchar_t> *this)

{
  codecvt<wchar_t,char,mbstate_t>::~codecvt((codecvt<wchar_t,char,mbstate_t> *)this);
  operator_delete(this);
  return;
}

