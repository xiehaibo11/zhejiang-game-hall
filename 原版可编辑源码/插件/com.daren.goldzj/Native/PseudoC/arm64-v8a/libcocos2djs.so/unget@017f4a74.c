
/* std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t> >::unget() */

basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> * __thiscall
std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::unget
          (basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this)

{
  long lVar1;
  int iVar2;
  basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this_00;
  uint uVar3;
  long *plVar4;
  
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
      uVar3 = *(uint *)(this_00 + 0x20);
      if (uVar3 != 0) goto LAB_017f4acc;
    }
    plVar4 = *(long **)(this_00 + 0x28);
    if (plVar4 == (long *)0x0) {
      uVar3 = 1;
    }
    else {
      lVar1 = plVar4[3];
      if (plVar4[2] == lVar1) {
        iVar2 = (**(code **)(*plVar4 + 0x58))(plVar4,0xffffffff);
      }
      else {
        plVar4[3] = lVar1 + -4;
        iVar2 = *(int *)(lVar1 + -4);
      }
      if (iVar2 != -1) {
        return this;
      }
      this_00 = this + *(long *)(*(long *)this + -0x18);
      uVar3 = *(uint *)(this_00 + 0x20) | 1;
    }
    ios_base::clear((ios_base *)this_00,uVar3);
  }
  else {
    ios_base::clear((ios_base *)this_00,*(uint *)(this_00 + 0x20) | 4);
    this_00 = this + *(long *)(*(long *)this + -0x18);
    uVar3 = *(uint *)(this_00 + 0x20);
LAB_017f4acc:
    ios_base::clear((ios_base *)this_00,uVar3 | 4);
  }
  return this;
}

