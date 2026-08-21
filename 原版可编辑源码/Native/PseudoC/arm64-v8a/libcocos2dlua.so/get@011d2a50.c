
/* std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >::get() */

uint __thiscall
std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::get
          (basic_istream<char,std::__ndk1::char_traits<char>> *this)

{
  byte *pbVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  
  *(undefined8 *)(this + 8) = 0;
  lVar4 = *(long *)(*(long *)this + -0x18);
  if (*(uint *)(this + lVar4 + 0x20) != 0) {
    uVar3 = *(uint *)(this + lVar4 + 0x20) | (uint)(*(long *)(this + lVar4 + 0x28) == 0) | 4;
    *(uint *)(this + lVar4 + 0x20) = uVar3;
    if ((uVar3 & *(uint *)(this + lVar4 + 0x24)) == 0) {
      return 0xffffffff;
    }
    goto LAB_011d2b54;
  }
  if (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)(this + lVar4 + 0x88) !=
      (basic_ostream<char,std::__ndk1::char_traits<char>> *)0x0) {
    basic_ostream<char,std::__ndk1::char_traits<char>>::flush
              (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)(this + lVar4 + 0x88));
    lVar4 = *(long *)(*(long *)this + -0x18);
    if (*(int *)(this + lVar4 + 0x20) != 0) {
      return 0xffffffff;
    }
  }
  plVar2 = *(long **)(this + lVar4 + 0x28);
  pbVar1 = (byte *)plVar2[3];
  if (pbVar1 == (byte *)plVar2[4]) {
    uVar3 = (**(code **)(*plVar2 + 0x50))();
    if (uVar3 != 0xffffffff) goto LAB_011d2b00;
    uVar5 = 6;
  }
  else {
    plVar2[3] = (long)(pbVar1 + 1);
    uVar3 = (uint)*pbVar1;
LAB_011d2b00:
    uVar5 = 0;
    *(undefined8 *)(this + 8) = 1;
  }
  lVar4 = *(long *)(*(long *)this + -0x18);
  uVar5 = *(uint *)(this + lVar4 + 0x20) | uVar5 | (uint)(*(long *)(this + lVar4 + 0x28) == 0);
  *(uint *)(this + lVar4 + 0x20) = uVar5;
  if ((uVar5 & *(uint *)(this + lVar4 + 0x24)) == 0) {
    return uVar3;
  }
LAB_011d2b54:
                    /* WARNING: Subroutine does not return */
  FUN_011dac54("ios_base::clear");
}

