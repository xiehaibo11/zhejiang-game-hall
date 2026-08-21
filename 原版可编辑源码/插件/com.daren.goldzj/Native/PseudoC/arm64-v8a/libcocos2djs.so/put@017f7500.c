
/* std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t> >::put(wchar_t) */

basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> * __thiscall
std::__ndk1::basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::put
          (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,wchar_t param_1)

{
  wchar_t *pwVar1;
  long lVar2;
  long *plVar3;
  basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this_00;
  sentry local_48 [8];
  basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_48[0] = (sentry)0x0;
  plVar3 = (long *)(*(long *)this + -0x18);
  local_40 = this;
  if (*(int *)(this + *plVar3 + 0x20) == 0) {
    if (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)(this + *plVar3 + 0x88) !=
        (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *)0x0) {
      flush(*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)(this + *plVar3 + 0x88));
      plVar3 = (long *)(*(long *)this + -0x18);
    }
    local_48[0] = (sentry)0x1;
    this_00 = this + *plVar3;
    plVar3 = *(long **)(this_00 + 0x28);
    if (plVar3 != (long *)0x0) {
      pwVar1 = (wchar_t *)plVar3[6];
      if (pwVar1 == (wchar_t *)plVar3[7]) {
        param_1 = (**(code **)(*plVar3 + 0x68))(plVar3,param_1);
      }
      else {
        plVar3[6] = (long)(pwVar1 + 1);
        *pwVar1 = param_1;
      }
      if (param_1 != L'\xffffffff') goto LAB_017f75cc;
      this_00 = this + *(long *)(*(long *)this + -0x18);
    }
    ios_base::clear((ios_base *)this_00,*(uint *)(this_00 + 0x20) | 1);
  }
LAB_017f75cc:
  sentry::~sentry(local_48);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

