
/* std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t> >::put(wchar_t) */

basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> * __thiscall
std::__ndk1::basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::put
          (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,wchar_t param_1)

{
  uint uVar1;
  wchar_t *pwVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  sentry local_48 [8];
  basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  local_48[0] = (sentry)0x0;
  lVar5 = *(long *)this;
  local_40 = this;
  if (*(int *)(this + *(long *)(lVar5 + -0x18) + 0x20) == 0) {
    if (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)
         (this + *(long *)(lVar5 + -0x18) + 0x88) !=
        (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *)0x0) {
      flush(*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)
             (this + *(long *)(lVar5 + -0x18) + 0x88));
      lVar5 = *(long *)this;
    }
    local_48[0] = (sentry)0x1;
    lVar5 = *(long *)(lVar5 + -0x18);
    plVar4 = *(long **)(this + lVar5 + 0x28);
    if (plVar4 != (long *)0x0) {
      pwVar2 = (wchar_t *)plVar4[6];
      if (pwVar2 == (wchar_t *)plVar4[7]) {
        param_1 = (**(code **)(*plVar4 + 0x68))(plVar4,param_1);
      }
      else {
        plVar4[6] = (long)(pwVar2 + 1);
        *pwVar2 = param_1;
      }
      if (param_1 != L'\xffffffff') goto LAB_011da020;
      lVar5 = *(long *)(*(long *)this + -0x18);
    }
    uVar1 = *(uint *)(this + lVar5 + 0x20);
    *(uint *)(this + lVar5 + 0x20) = uVar1 | 1;
    if ((*(uint *)(this + lVar5 + 0x24) & (uVar1 | 1)) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_011dac54("ios_base::clear");
    }
  }
LAB_011da020:
  sentry::~sentry(local_48);
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

