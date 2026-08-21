
/* std::__ndk1::time_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> > >::__get_year(int&, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >&, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, unsigned int&, std::__ndk1::ctype<wchar_t> const&) const */

void __thiscall
std::__ndk1::
time_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::
__get_year(undefined8 param_1_00,int *param_1,undefined8 param_2,undefined8 param_4,byte *param_5,
          undefined8 param_6)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_018093f4(param_2,param_4,param_5,param_6,4);
  if ((*param_5 >> 2 & 1) == 0) {
    if (iVar1 < 0x45) {
      iVar2 = iVar1 + 2000;
    }
    else {
      iVar2 = iVar1 + 0x76c;
      if (99 < iVar1) {
        iVar2 = iVar1;
      }
    }
    *param_1 = iVar2 + -0x76c;
  }
  return;
}

