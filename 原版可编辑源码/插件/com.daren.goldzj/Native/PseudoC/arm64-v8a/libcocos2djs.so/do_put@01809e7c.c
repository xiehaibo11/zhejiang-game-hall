
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
  long lVar2;
  wchar_t *pwVar3;
  wchar_t wVar4;
  long *plVar5;
  wchar_t *pwVar6;
  wchar_t *local_1e0;
  wchar_t local_1d8 [100];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_1e0 = (wchar_t *)&local_48;
  __time_put::__do_put((__time_put *)(this + 0x10),local_1d8,&local_1e0,param_5,param_6,param_7);
  pwVar3 = local_1e0;
  if (local_1d8 != local_1e0) {
    pwVar6 = local_1d8;
    plVar5 = param_2;
    do {
      param_2 = plVar5;
      if (plVar5 != (long *)0x0) {
        pwVar1 = (wchar_t *)plVar5[6];
        wVar4 = *pwVar6;
        if (pwVar1 == (wchar_t *)plVar5[7]) {
          wVar4 = (**(code **)(*plVar5 + 0x68))(plVar5);
        }
        else {
          plVar5[6] = (long)(pwVar1 + 1);
          *pwVar1 = wVar4;
        }
        param_2 = (long *)0x0;
        if (wVar4 != L'\xffffffff') {
          param_2 = plVar5;
        }
      }
      pwVar6 = pwVar6 + 1;
      plVar5 = param_2;
    } while (pwVar3 != pwVar6);
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_2;
}

