
/* std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t> >::seekp(long long,
   std::__ndk1::ios_base::seekdir) */

basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> * __thiscall
std::__ndk1::basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::seekp
          (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,undefined8 param_1,
          undefined4 param_3)

{
  long lVar1;
  long extraout_x1;
  long lVar2;
  long *plVar3;
  uint uVar4;
  sentry local_48 [8];
  basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_48[0] = (sentry)0x0;
  plVar3 = (long *)(*(long *)this + -0x18);
  lVar2 = *plVar3;
  uVar4 = *(uint *)(this + lVar2 + 0x20);
  local_40 = this;
  if (uVar4 == 0) {
    if (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)(this + lVar2 + 0x88) !=
        (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *)0x0) {
      flush(*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)(this + lVar2 + 0x88));
      plVar3 = (long *)(*(long *)this + -0x18);
    }
    local_48[0] = (sentry)0x1;
    lVar2 = *plVar3;
    uVar4 = *(uint *)(this + lVar2 + 0x20);
  }
  if (((uVar4 & 5) == 0) &&
     ((**(code **)(**(long **)(this + lVar2 + 0x28) + 0x20))
                (*(long **)(this + lVar2 + 0x28),param_1,param_3,0x10), extraout_x1 == -1)) {
    ios_base::clear((ios_base *)(this + *(long *)(*(long *)this + -0x18)),
                    *(uint *)((ios_base *)(this + *(long *)(*(long *)this + -0x18)) + 0x20) | 4);
  }
  sentry::~sentry(local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

