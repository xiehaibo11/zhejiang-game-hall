
/* std::__ndk1::time_put<wchar_t, std::__ndk1::ostreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> > >::do_put(std::__ndk1::ostreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, std::__ndk1::ios_base&, wchar_t, tm const*, char, char)
   const */

long * __thiscall
std::__ndk1::
time_put<wchar_t,std::__ndk1::ostreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::
do_put(time_put<wchar_t,std::__ndk1::ostreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>
       *this,long *param_2,undefined8 param_3,undefined8 param_4,tm *param_5,char param_6,
      char param_7)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  long lVar3;
  long *plVar4;
  wchar_t *pwVar5;
  wchar_t wVar6;
  wchar_t *local_1e0;
  wchar_t awStack_1d8 [100];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  local_1e0 = (wchar_t *)&local_48;
  __time_put::__do_put((__time_put *)(this + 0x10),awStack_1d8,&local_1e0,param_5,param_6,param_7);
  pwVar5 = local_1e0;
  if (awStack_1d8 != local_1e0) {
    pwVar1 = awStack_1d8;
    plVar4 = param_2;
    do {
      param_2 = plVar4;
      if (plVar4 != (long *)0x0) {
        pwVar2 = (wchar_t *)plVar4[6];
        wVar6 = *pwVar1;
        if (pwVar2 == (wchar_t *)plVar4[7]) {
          wVar6 = (**(code **)(*plVar4 + 0x68))(plVar4);
        }
        else {
          plVar4[6] = (long)(pwVar2 + 1);
          *pwVar2 = wVar6;
        }
        param_2 = (long *)0x0;
        if (wVar6 != L'\xffffffff') {
          param_2 = plVar4;
        }
      }
      pwVar1 = pwVar1 + 1;
      plVar4 = param_2;
    } while (pwVar5 != pwVar1);
  }
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_2;
}

