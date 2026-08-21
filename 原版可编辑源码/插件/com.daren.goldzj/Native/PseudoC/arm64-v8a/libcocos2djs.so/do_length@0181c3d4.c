
/* std::__ndk1::codecvt<wchar_t, char, mbstate_t>::do_length(mbstate_t&, char const*, char const*,
   unsigned long) const */

int __thiscall
std::__ndk1::codecvt<wchar_t,char,mbstate_t>::do_length
          (codecvt<wchar_t,char,mbstate_t> *this,mbstate_t *param_1,char *param_2,char *param_3,
          ulong param_4)

{
  bool bVar1;
  __locale_t __dataset;
  size_t sVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  
  if ((param_2 != param_3) && (param_4 != 0)) {
    iVar4 = 0;
    uVar5 = 1;
    while( true ) {
      __dataset = uselocale(*(__locale_t *)(this + 0x10));
      sVar2 = mbrlen(param_2,(long)param_3 - (long)param_2,param_1);
      if (__dataset != (__locale_t)0x0) {
        uselocale(__dataset);
      }
      if (sVar2 == 0) {
        sVar2 = 1;
        iVar3 = 1;
      }
      else {
        if (sVar2 + 2 < 2) {
          return iVar4;
        }
        iVar3 = (int)sVar2;
      }
      param_2 = param_2 + sVar2;
      iVar4 = iVar3 + iVar4;
      if (param_2 == param_3) break;
      bVar1 = param_4 <= uVar5;
      uVar5 = uVar5 + 1;
      if (bVar1) {
        return iVar4;
      }
    }
    return iVar4;
  }
  return 0;
}

