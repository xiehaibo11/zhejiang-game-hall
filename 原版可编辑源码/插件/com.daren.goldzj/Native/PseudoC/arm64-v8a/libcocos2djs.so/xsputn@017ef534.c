
/* std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t> >::xsputn(wchar_t const*,
   long) */

long __thiscall
std::__ndk1::basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>>::xsputn
          (basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,wchar_t *param_1,
          long param_2)

{
  size_t __n;
  int iVar1;
  wchar_t *__s1;
  size_t sVar2;
  long lVar3;
  
  if (param_2 < 1) {
    lVar3 = 0;
  }
  else {
    lVar3 = 0;
    do {
      while( true ) {
        __s1 = *(wchar_t **)(this + 0x30);
        if (*(wchar_t **)(this + 0x38) <= __s1) break;
        sVar2 = (long)*(wchar_t **)(this + 0x38) - (long)__s1 >> 2;
        __n = param_2 - lVar3;
        if ((long)sVar2 <= param_2 - lVar3) {
          __n = sVar2;
        }
        if (__n != 0) {
          wmemcpy(__s1,param_1,__n);
          __s1 = *(wchar_t **)(this + 0x30);
        }
        param_1 = param_1 + __n;
        lVar3 = __n + lVar3;
        *(wchar_t **)(this + 0x30) = __s1 + __n;
        if (param_2 <= lVar3) {
          return lVar3;
        }
      }
      iVar1 = (**(code **)(*(long *)this + 0x68))(this,*param_1);
      if (iVar1 == -1) {
        return lVar3;
      }
      param_1 = param_1 + 1;
      lVar3 = lVar3 + 1;
    } while (lVar3 < param_2);
  }
  return lVar3;
}

