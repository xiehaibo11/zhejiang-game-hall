
/* std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t> >::write(wchar_t const*,
   long) */

basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> * __thiscall
std::__ndk1::basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::write
          (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,wchar_t *param_1,
          long param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  sentry local_48 [8];
  basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_48[0] = (sentry)0x0;
  local_40 = this;
  if (*(int *)(this + *(long *)(*(long *)this + -0x18) + 0x20) == 0) {
    if (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)
         (this + *(long *)(*(long *)this + -0x18) + 0x88) !=
        (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *)0x0) {
      flush(*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)
             (this + *(long *)(*(long *)this + -0x18) + 0x88));
    }
    local_48[0] = (sentry)0x1;
    if ((param_2 != 0) &&
       (lVar3 = (**(code **)(**(long **)(this + *(long *)(*(long *)this + -0x18) + 0x28) + 0x60))
                          (*(long **)(this + *(long *)(*(long *)this + -0x18) + 0x28),param_1,
                           param_2), lVar3 != param_2)) {
      lVar3 = *(long *)(*(long *)this + -0x18);
      uVar1 = *(uint *)(this + lVar3 + 0x20);
      *(uint *)(this + lVar3 + 0x20) = uVar1 | 1;
      if ((*(uint *)(this + lVar3 + 0x24) & (uVar1 | 1)) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_011dac54("ios_base::clear");
      }
    }
  }
  sentry::~sentry(local_48);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

