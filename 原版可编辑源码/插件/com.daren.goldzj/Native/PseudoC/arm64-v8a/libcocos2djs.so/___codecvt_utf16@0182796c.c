
/* std::__ndk1::__codecvt_utf16<wchar_t, true>::~__codecvt_utf16() */

void __thiscall
std::__ndk1::__codecvt_utf16<wchar_t,true>::~__codecvt_utf16(__codecvt_utf16<wchar_t,true> *this)

{
  codecvt<wchar_t,char,mbstate_t>::~codecvt((codecvt<wchar_t,char,mbstate_t> *)this);
  operator_delete(this);
  return;
}

