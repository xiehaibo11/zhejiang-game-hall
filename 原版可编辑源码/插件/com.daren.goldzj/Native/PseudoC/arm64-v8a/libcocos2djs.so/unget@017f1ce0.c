
/* std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >::unget() */

basic_istream<char,std::__ndk1::char_traits<char>> * __thiscall
std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::unget
          (basic_istream<char,std::__ndk1::char_traits<char>> *this)

{
  int iVar1;
  basic_istream<char,std::__ndk1::char_traits<char>> *this_00;
  uint uVar2;
  long *plVar3;
  
  *(undefined8 *)(this + 8) = 0;
  ios_base::clear((ios_base *)(this + *(long *)(*(long *)this + -0x18)),
                  *(uint *)((ios_base *)(this + *(long *)(*(long *)this + -0x18)) + 0x20) &
                  0xfffffffd);
  this_00 = this + *(long *)(*(long *)this + -0x18);
  if (*(uint *)(this_00 + 0x20) == 0) {
    if (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)(this_00 + 0x88) !=
        (basic_ostream<char,std::__ndk1::char_traits<char>> *)0x0) {
      basic_ostream<char,std::__ndk1::char_traits<char>>::flush
                (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)(this_00 + 0x88));
      this_00 = this + *(long *)(*(long *)this + -0x18);
      uVar2 = *(uint *)(this_00 + 0x20);
      if (uVar2 != 0) goto LAB_017f1d38;
    }
    plVar3 = *(long **)(this_00 + 0x28);
    if (plVar3 == (long *)0x0) {
      uVar2 = 1;
    }
    else {
      if (plVar3[2] != plVar3[3]) {
        plVar3[3] = plVar3[3] + -1;
        return this;
      }
      iVar1 = (**(code **)(*plVar3 + 0x58))(plVar3,0xffffffff);
      if (iVar1 != -1) {
        return this;
      }
      this_00 = this + *(long *)(*(long *)this + -0x18);
      uVar2 = *(uint *)(this_00 + 0x20) | 1;
    }
    ios_base::clear((ios_base *)this_00,uVar2);
    return this;
  }
  ios_base::clear((ios_base *)this_00,*(uint *)(this_00 + 0x20) | 4);
  this_00 = this + *(long *)(*(long *)this + -0x18);
  uVar2 = *(uint *)(this_00 + 0x20);
LAB_017f1d38:
  ios_base::clear((ios_base *)this_00,uVar2 | 4);
  return this;
}

