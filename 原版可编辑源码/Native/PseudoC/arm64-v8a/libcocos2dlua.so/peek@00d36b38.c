
/* std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >::peek() */

uint __thiscall
std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::peek
          (basic_istream<char,std::__ndk1::char_traits<char>> *this)

{
  ios_base *this_00;
  long *plVar1;
  long lVar2;
  uint uVar3;
  
  *(undefined8 *)(this + 8) = 0;
  lVar2 = *(long *)(*(long *)this + -0x18);
  this_00 = (ios_base *)(this + lVar2);
  if (*(uint *)(this_00 + 0x20) == 0) {
    if (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)(this_00 + 0x88) !=
        (basic_ostream<char,std::__ndk1::char_traits<char>> *)0x0) {
      basic_ostream<char,std::__ndk1::char_traits<char>>::flush
                (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)(this_00 + 0x88));
      lVar2 = *(long *)(*(long *)this + -0x18);
      if (*(int *)(this + lVar2 + 0x20) != 0) goto LAB_00d36b68;
    }
    plVar1 = *(long **)(this + lVar2 + 0x28);
    if ((byte *)plVar1[3] == (byte *)plVar1[4]) {
      uVar3 = (**(code **)(*plVar1 + 0x48))();
    }
    else {
      uVar3 = (uint)*(byte *)plVar1[3];
    }
                    /* catch() { ... } // from try @ 00d36b20 with catch @ 00d36bc8 */
    ios_base::clear((ios_base *)(this + *(long *)(*(long *)this + -0x18)),
                    *(uint *)((ios_base *)(this + *(long *)(*(long *)this + -0x18)) + 0x20) |
                    (uint)(uVar3 == 0xffffffff) << 1);
  }
  else {
    ios_base::clear(this_00,*(uint *)(this_00 + 0x20) | 4);
LAB_00d36b68:
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

