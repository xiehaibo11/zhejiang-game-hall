
/* std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >::get() */

ulong __thiscall
std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::get
          (basic_istream<char,std::__ndk1::char_traits<char>> *this)

{
  ios_base *this_00;
  byte *pbVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  
  *(undefined8 *)(this + 8) = 0;
  lVar4 = *(long *)(*(long *)this + -0x18);
  this_00 = (ios_base *)(this + lVar4);
  if (*(uint *)(this_00 + 0x20) == 0) {
    if (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)(this_00 + 0x88) !=
        (basic_ostream<char,std::__ndk1::char_traits<char>> *)0x0) {
      basic_ostream<char,std::__ndk1::char_traits<char>>::flush
                (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)(this_00 + 0x88));
      lVar4 = *(long *)(*(long *)this + -0x18);
      if (*(int *)(this + lVar4 + 0x20) != 0) goto LAB_017f0d88;
    }
    plVar3 = *(long **)(this + lVar4 + 0x28);
    pbVar1 = (byte *)plVar3[3];
    if (pbVar1 == (byte *)plVar3[4]) {
      uVar2 = (**(code **)(*plVar3 + 0x50))();
      if ((int)uVar2 == -1) {
        ios_base::clear((ios_base *)(this + *(long *)(*(long *)this + -0x18)),
                        *(uint *)((ios_base *)(this + *(long *)(*(long *)this + -0x18)) + 0x20) | 6)
        ;
        goto LAB_017f0d88;
      }
    }
    else {
      plVar3[3] = (long)(pbVar1 + 1);
      uVar2 = (ulong)*pbVar1;
    }
    *(undefined8 *)(this + 8) = 1;
  }
  else {
    ios_base::clear(this_00,*(uint *)(this_00 + 0x20) | 4);
LAB_017f0d88:
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

