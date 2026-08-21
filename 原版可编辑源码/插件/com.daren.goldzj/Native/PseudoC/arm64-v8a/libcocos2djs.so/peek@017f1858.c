
/* std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >::peek() */

ulong __thiscall
std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::peek
          (basic_istream<char,std::__ndk1::char_traits<char>> *this)

{
  ios_base *this_00;
  long *plVar1;
  ulong uVar2;
  long lVar3;
  
  *(undefined8 *)(this + 8) = 0;
  lVar3 = *(long *)(*(long *)this + -0x18);
  this_00 = (ios_base *)(this + lVar3);
  if (*(uint *)(this_00 + 0x20) == 0) {
    if (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)(this_00 + 0x88) !=
        (basic_ostream<char,std::__ndk1::char_traits<char>> *)0x0) {
      basic_ostream<char,std::__ndk1::char_traits<char>>::flush
                (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)(this_00 + 0x88));
      lVar3 = *(long *)(*(long *)this + -0x18);
      if (*(int *)(this + lVar3 + 0x20) != 0) {
        return 0xffffffff;
      }
    }
    plVar1 = *(long **)(this + lVar3 + 0x28);
    if ((byte *)plVar1[3] != (byte *)plVar1[4]) {
      return (ulong)*(byte *)plVar1[3];
    }
    uVar2 = (**(code **)(*plVar1 + 0x48))();
    if ((int)uVar2 != -1) {
      return uVar2;
    }
    ios_base::clear((ios_base *)(this + *(long *)(*(long *)this + -0x18)),
                    *(uint *)((ios_base *)(this + *(long *)(*(long *)this + -0x18)) + 0x20) | 2);
  }
  else {
    ios_base::clear(this_00,*(uint *)(this_00 + 0x20) | 4);
  }
  return 0xffffffff;
}

