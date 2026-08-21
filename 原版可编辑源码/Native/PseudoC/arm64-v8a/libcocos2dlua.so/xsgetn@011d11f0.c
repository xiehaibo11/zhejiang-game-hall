
/* std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t> >::xsgetn(wchar_t*, long)
    */

long __thiscall
std::__ndk1::basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>>::xsgetn
          (basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,wchar_t *param_1,
          long param_2)

{
  wchar_t wVar1;
  wchar_t *__s2;
  size_t sVar2;
  long lVar3;
  wchar_t *pwVar4;
  size_t __n;
  
  if (param_2 < 1) {
    lVar3 = 0;
  }
  else {
    lVar3 = 0;
    do {
      __s2 = *(wchar_t **)(this + 0x18);
      if (__s2 < *(wchar_t **)(this + 0x20)) {
        sVar2 = (long)*(wchar_t **)(this + 0x20) - (long)__s2 >> 2;
        __n = param_2 - lVar3;
        if ((long)sVar2 <= param_2 - lVar3) {
          __n = sVar2;
        }
        if (0x7ffffffe < (long)__n) {
          __n = 0x7fffffff;
        }
        if (__n != 0) {
          wmemcpy(param_1,__s2,__n);
          __s2 = *(wchar_t **)(this + 0x18);
        }
        pwVar4 = param_1 + __n;
        *(long *)(this + 0x18) = (long)__s2 + ((long)(__n << 0x20) >> 0x1e);
      }
      else {
        wVar1 = (**(code **)(*(long *)this + 0x50))(this);
        if (wVar1 == L'\xffffffff') {
          return lVar3;
        }
        pwVar4 = param_1 + 1;
        *param_1 = wVar1;
        __n = 1;
      }
      lVar3 = __n + lVar3;
      param_1 = pwVar4;
    } while (lVar3 < param_2);
  }
  return lVar3;
}

