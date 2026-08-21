
/* std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t> >::sputbackc(wchar_t) */

ulong __thiscall
std::__ndk1::basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>>::sputbackc
          (basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,wchar_t param_1)

{
  ulong uVar1;
  wchar_t *pwVar2;
  
  if ((*(long *)(this + 0x10) != *(long *)(this + 0x18)) &&
     (pwVar2 = (wchar_t *)(*(long *)(this + 0x18) + -4), *pwVar2 == param_1)) {
    *(wchar_t **)(this + 0x18) = pwVar2;
    return (ulong)(uint)param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x017ef180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(long *)this + 0x58))();
  return uVar1;
}

