
/* std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t> >::flush() */

basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> * __thiscall
std::__ndk1::basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::flush
          (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  sentry local_48 [8];
  basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar4 = *(long *)this;
  if (*(long *)(this + *(long *)(lVar4 + -0x18) + 0x28) != 0) {
    local_48[0] = (sentry)0x0;
    local_40 = this;
    if (*(int *)(this + *(long *)(lVar4 + -0x18) + 0x20) == 0) {
      if (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)
           (this + *(long *)(lVar4 + -0x18) + 0x88) !=
          (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *)0x0) {
        flush(*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)
               (this + *(long *)(lVar4 + -0x18) + 0x88));
        lVar4 = *(long *)this;
      }
      local_48[0] = (sentry)0x1;
      iVar3 = (**(code **)(**(long **)(this + *(long *)(lVar4 + -0x18) + 0x28) + 0x30))();
      if (iVar3 == -1) {
        lVar4 = *(long *)(*(long *)this + -0x18);
        uVar1 = *(uint *)(this + lVar4 + 0x20);
        *(uint *)(this + lVar4 + 0x20) = uVar1 | 1;
        if ((*(uint *)(this + lVar4 + 0x24) & (uVar1 | 1)) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_011dac54("ios_base::clear");
        }
      }
    }
    sentry::~sentry(local_48);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

