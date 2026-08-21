
/* std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t> >::flush() */

basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> * __thiscall
std::__ndk1::basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::flush
          (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  sentry local_48 [8];
  basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)(*(long *)this + -0x18);
  if (*(long *)(this + *plVar3 + 0x28) != 0) {
    local_48[0] = (sentry)0x0;
    local_40 = this;
    if (*(int *)(this + *plVar3 + 0x20) == 0) {
      if (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)(this + *plVar3 + 0x88) !=
          (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *)0x0) {
        flush(*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)(this + *plVar3 + 0x88))
        ;
        plVar3 = (long *)(*(long *)this + -0x18);
      }
      local_48[0] = (sentry)0x1;
      iVar2 = (**(code **)(**(long **)(this + *plVar3 + 0x28) + 0x30))();
      if (iVar2 == -1) {
        ios_base::clear((ios_base *)(this + *(long *)(*(long *)this + -0x18)),
                        *(uint *)((ios_base *)(this + *(long *)(*(long *)this + -0x18)) + 0x20) | 1)
        ;
      }
    }
    sentry::~sentry(local_48);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

