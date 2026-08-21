
/* std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t> >::read(wchar_t*, long) */

basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> * __thiscall
std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::read
          (basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,wchar_t *param_1,
          long param_2)

{
  ios_base *this_00;
  basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this_01;
  long lVar1;
  uint uVar2;
  
  *(undefined8 *)(this + 8) = 0;
  lVar1 = *(long *)(*(long *)this + -0x18);
  this_00 = (ios_base *)(this + lVar1);
  if (*(uint *)(this_00 + 0x20) == 0) {
    if (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)(this_00 + 0x88) !=
        (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *)0x0) {
      basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::flush
                (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)(this_00 + 0x88));
      lVar1 = *(long *)(*(long *)this + -0x18);
      this_01 = this + lVar1;
      uVar2 = *(uint *)(this_01 + 0x20);
      if (uVar2 != 0) goto LAB_017f4710;
    }
    lVar1 = (**(code **)(**(long **)(this + lVar1 + 0x28) + 0x40))
                      (*(long **)(this + lVar1 + 0x28),param_1,param_2);
    *(long *)(this + 8) = lVar1;
    if (lVar1 != param_2) {
      ios_base::clear((ios_base *)(this + *(long *)(*(long *)this + -0x18)),
                      *(uint *)((ios_base *)(this + *(long *)(*(long *)this + -0x18)) + 0x20) | 6);
    }
  }
  else {
    ios_base::clear(this_00,*(uint *)(this_00 + 0x20) | 4);
    this_01 = this + *(long *)(*(long *)this + -0x18);
    uVar2 = *(uint *)(this_01 + 0x20);
LAB_017f4710:
    ios_base::clear((ios_base *)this_01,uVar2 | 4);
  }
  return this;
}

