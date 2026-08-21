
/* std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t>
   >::seekp(std::__ndk1::fpos<mbstate_t>) */

long * std::__ndk1::basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::seekp
                 (long *param_1,undefined8 param_2,undefined8 param_3)

{
  ios_base *this;
  long lVar1;
  basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this_00;
  long extraout_x1;
  long lVar2;
  long *plVar3;
  uint uVar4;
  sentry local_48 [8];
  long *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_48[0] = (sentry)0x0;
  plVar3 = (long *)(*param_1 + -0x18);
  lVar2 = *plVar3;
  uVar4 = *(uint *)((long)param_1 + lVar2 + 0x20);
  local_40 = param_1;
  if (uVar4 == 0) {
    this_00 = *(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)
               ((long)param_1 + lVar2 + 0x88);
    if (this_00 != (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *)0x0) {
      flush(this_00);
      plVar3 = (long *)(*param_1 + -0x18);
    }
    local_48[0] = (sentry)0x1;
    lVar2 = *plVar3;
    uVar4 = *(uint *)((long)param_1 + lVar2 + 0x20);
  }
  if (((uVar4 & 5) == 0) &&
     (plVar3 = *(long **)((long)param_1 + lVar2 + 0x28),
     (**(code **)(*plVar3 + 0x28))(plVar3,param_2,param_3,0x10), extraout_x1 == -1)) {
    this = (ios_base *)((long)param_1 + *(long *)(*param_1 + -0x18));
    ios_base::clear(this,*(uint *)(this + 0x20) | 4);
  }
  sentry::~sentry(local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

