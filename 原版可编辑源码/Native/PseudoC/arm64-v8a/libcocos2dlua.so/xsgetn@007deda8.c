
/* std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::xsgetn(char*, long) */

long __thiscall
std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::xsgetn
          (basic_streambuf<char,std::__ndk1::char_traits<char>> *this,char *param_1,long param_2)

{
  void *__src;
  int iVar1;
  size_t sVar2;
  long lVar3;
  char *pcVar4;
  size_t __n;
  
  if (param_2 < 1) {
    lVar3 = 0;
  }
  else {
    lVar3 = 0;
    do {
      __src = *(void **)(this + 0x18);
      if (__src < *(void **)(this + 0x20)) {
        sVar2 = (long)*(void **)(this + 0x20) - (long)__src;
        __n = param_2 - lVar3;
        if ((long)sVar2 <= param_2 - lVar3) {
          __n = sVar2;
        }
        if (0x7ffffffe < (long)__n) {
          __n = 0x7fffffff;
        }
        if (__n != 0) {
          memcpy(param_1,__src,__n);
        }
        pcVar4 = param_1 + __n;
        *(long *)(this + 0x18) = *(long *)(this + 0x18) + (long)(int)__n;
      }
      else {
        iVar1 = (**(code **)(*(long *)this + 0x50))(this);
        if (iVar1 == -1) {
          return lVar3;
        }
        pcVar4 = param_1 + 1;
        *param_1 = (char)iVar1;
        __n = 1;
      }
      lVar3 = __n + lVar3;
      param_1 = pcVar4;
    } while (lVar3 < param_2);
  }
  return lVar3;
}

