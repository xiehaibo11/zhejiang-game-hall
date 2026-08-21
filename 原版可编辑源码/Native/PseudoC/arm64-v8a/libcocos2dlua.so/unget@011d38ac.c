
/* std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >::unget() */

basic_istream<char,std::__ndk1::char_traits<char>> * __thiscall
std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::unget
          (basic_istream<char,std::__ndk1::char_traits<char>> *this)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  uint uVar5;
  
  uVar5 = *(uint *)(this + *(long *)(*(long *)this + -0x18) + 0x20);
  *(undefined8 *)(this + 8) = 0;
  lVar4 = *(long *)(*(long *)this + -0x18);
  uVar5 = uVar5 & 0xfffffffd;
  uVar1 = uVar5 | *(long *)(this + lVar4 + 0x28) == 0;
  *(uint *)(this + lVar4 + 0x20) = uVar1;
  if ((uVar1 & *(uint *)(this + lVar4 + 0x24)) != 0) goto LAB_011d39dc;
  lVar4 = *(long *)(*(long *)this + -0x18);
  if (*(uint *)(this + lVar4 + 0x20) == 0) {
    if (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)(this + lVar4 + 0x88) !=
        (basic_ostream<char,std::__ndk1::char_traits<char>> *)0x0) {
      basic_ostream<char,std::__ndk1::char_traits<char>>::flush
                (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)(this + lVar4 + 0x88));
      lVar4 = *(long *)(*(long *)this + -0x18);
      if (*(int *)(this + lVar4 + 0x20) != 0) goto LAB_011d3934;
    }
    plVar3 = *(long **)(this + lVar4 + 0x28);
    if (plVar3 == (long *)0x0) {
LAB_011d39d4:
      uVar5 = uVar5 | 1;
    }
    else if (plVar3[2] == plVar3[3]) {
      iVar2 = (**(code **)(*plVar3 + 0x58))(plVar3,0xffffffff);
      if (iVar2 == -1) goto LAB_011d39d4;
    }
    else {
      plVar3[3] = plVar3[3] + -1;
    }
  }
  else {
    uVar1 = *(uint *)(this + lVar4 + 0x20) | (uint)(*(long *)(this + lVar4 + 0x28) == 0) | 4;
    *(uint *)(this + lVar4 + 0x20) = uVar1;
    if ((uVar1 & *(uint *)(this + lVar4 + 0x24)) != 0) goto LAB_011d39dc;
LAB_011d3934:
    uVar5 = uVar5 | 4;
  }
  lVar4 = *(long *)(*(long *)this + -0x18);
  uVar5 = *(uint *)(this + lVar4 + 0x20) | uVar5 | (uint)(*(long *)(this + lVar4 + 0x28) == 0);
  *(uint *)(this + lVar4 + 0x20) = uVar5;
  if ((uVar5 & *(uint *)(this + lVar4 + 0x24)) == 0) {
    return this;
  }
LAB_011d39dc:
                    /* WARNING: Subroutine does not return */
  FUN_011dac54("ios_base::clear");
}

