
/* std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t> >::readsome(wchar_t*, long)
    */

undefined8 __thiscall
std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::readsome
          (basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,wchar_t *param_1,
          long param_2)

{
  ios_base *this_00;
  basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this_01;
  long *plVar1;
  long lVar2;
  uint uVar3;
  
  *(undefined8 *)(this + 8) = 0;
  lVar2 = *(long *)(*(long *)this + -0x18);
  this_00 = (ios_base *)(this + lVar2);
  if (*(uint *)(this_00 + 0x20) == 0) {
    if (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)(this_00 + 0x88) !=
        (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *)0x0) {
      basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::flush
                (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)(this_00 + 0x88));
      lVar2 = *(long *)(*(long *)this + -0x18);
      this_01 = this + lVar2;
      uVar3 = *(uint *)(this_01 + 0x20);
      if (uVar3 != 0) goto LAB_017f4820;
    }
    plVar1 = *(long **)(this + lVar2 + 0x28);
    if ((ulong)plVar1[3] < (ulong)plVar1[4]) {
      lVar2 = plVar1[4] - plVar1[3] >> 2;
    }
    else {
      lVar2 = (**(code **)(*plVar1 + 0x38))();
    }
    if (lVar2 == -1) {
      ios_base::clear((ios_base *)(this + *(long *)(*(long *)this + -0x18)),
                      *(uint *)((ios_base *)(this + *(long *)(*(long *)this + -0x18)) + 0x20) | 2);
    }
    else if (lVar2 != 0) {
      if (lVar2 <= param_2) {
        param_2 = lVar2;
      }
      read(this,param_1,param_2);
    }
  }
  else {
    ios_base::clear(this_00,*(uint *)(this_00 + 0x20) | 4);
    this_01 = this + *(long *)(*(long *)this + -0x18);
    uVar3 = *(uint *)(this_01 + 0x20);
LAB_017f4820:
    ios_base::clear((ios_base *)this_01,uVar3 | 4);
  }
  return *(undefined8 *)(this + 8);
}

