
/* std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t> >::read(wchar_t*, long) */

basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> * __thiscall
std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::read
          (basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,wchar_t *param_1,
          long param_2)

{
  uint uVar1;
  long lVar2;
  
  *(undefined8 *)(this + 8) = 0;
  lVar2 = *(long *)(*(long *)this + -0x18);
  if (*(uint *)(this + lVar2 + 0x20) == 0) {
    if (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)(this + lVar2 + 0x88) !=
        (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *)0x0) {
      basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::flush
                (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)(this + lVar2 + 0x88)
                );
      lVar2 = *(long *)(*(long *)this + -0x18);
      if (*(int *)(this + lVar2 + 0x20) != 0) goto LAB_011d68c4;
    }
    lVar2 = (**(code **)(**(long **)(this + lVar2 + 0x28) + 0x40))
                      (*(long **)(this + lVar2 + 0x28),param_1,param_2);
    *(long *)(this + 8) = lVar2;
    uVar1 = 0;
    if (lVar2 != param_2) {
      uVar1 = 6;
    }
  }
  else {
    uVar1 = *(uint *)(this + lVar2 + 0x20) | (uint)(*(long *)(this + lVar2 + 0x28) == 0) | 4;
    *(uint *)(this + lVar2 + 0x20) = uVar1;
    if ((uVar1 & *(uint *)(this + lVar2 + 0x24)) != 0) goto LAB_011d6964;
LAB_011d68c4:
    uVar1 = 4;
  }
  lVar2 = *(long *)(*(long *)this + -0x18);
  uVar1 = *(uint *)(this + lVar2 + 0x20) | uVar1 | (uint)(*(long *)(this + lVar2 + 0x28) == 0);
  *(uint *)(this + lVar2 + 0x20) = uVar1;
  if ((uVar1 & *(uint *)(this + lVar2 + 0x24)) == 0) {
    return this;
  }
LAB_011d6964:
                    /* WARNING: Subroutine does not return */
  FUN_011dac54("ios_base::clear");
}

