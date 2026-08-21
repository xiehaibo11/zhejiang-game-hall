
/* std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t> >::putback(wchar_t) */

basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> * __thiscall
std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::putback
          (basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,wchar_t param_1)

{
  basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this_00;
  uint uVar1;
  long *plVar2;
  wchar_t *pwVar3;
  
  *(undefined8 *)(this + 8) = 0;
  ios_base::clear((ios_base *)(this + *(long *)(*(long *)this + -0x18)),
                  *(uint *)((ios_base *)(this + *(long *)(*(long *)this + -0x18)) + 0x20) &
                  0xfffffffd);
  this_00 = this + *(long *)(*(long *)this + -0x18);
  if (*(uint *)(this_00 + 0x20) == 0) {
    if (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)(this_00 + 0x88) !=
        (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *)0x0) {
      basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::flush
                (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)(this_00 + 0x88));
      this_00 = this + *(long *)(*(long *)this + -0x18);
      uVar1 = *(uint *)(this_00 + 0x20);
      if (uVar1 != 0) goto LAB_017f497c;
    }
    plVar2 = *(long **)(this_00 + 0x28);
    if (plVar2 == (long *)0x0) {
      uVar1 = 1;
    }
    else {
      if ((plVar2[2] == plVar2[3]) || (pwVar3 = (wchar_t *)(plVar2[3] + -4), *pwVar3 != param_1)) {
        param_1 = (**(code **)(*plVar2 + 0x58))(plVar2,param_1);
      }
      else {
        plVar2[3] = (long)pwVar3;
      }
      if (param_1 != L'\xffffffff') {
        return this;
      }
      this_00 = this + *(long *)(*(long *)this + -0x18);
      uVar1 = *(uint *)(this_00 + 0x20) | 1;
    }
    ios_base::clear((ios_base *)this_00,uVar1);
  }
  else {
    ios_base::clear((ios_base *)this_00,*(uint *)(this_00 + 0x20) | 4);
    this_00 = this + *(long *)(*(long *)this + -0x18);
    uVar1 = *(uint *)(this_00 + 0x20);
LAB_017f497c:
    ios_base::clear((ios_base *)this_00,uVar1 | 4);
  }
  return this;
}

