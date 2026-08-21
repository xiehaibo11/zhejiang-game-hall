
/* std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >::putback(char) */

basic_istream<char,std::__ndk1::char_traits<char>> * __thiscall
std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::putback
          (basic_istream<char,std::__ndk1::char_traits<char>> *this,char param_1)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  char *pcVar5;
  uint uVar6;
  
  uVar6 = *(uint *)(this + *(long *)(*(long *)this + -0x18) + 0x20);
  *(undefined8 *)(this + 8) = 0;
  lVar4 = *(long *)(*(long *)this + -0x18);
  uVar6 = uVar6 & 0xfffffffd;
  uVar1 = uVar6 | *(long *)(this + lVar4 + 0x28) == 0;
  *(uint *)(this + lVar4 + 0x20) = uVar1;
  if ((uVar1 & *(uint *)(this + lVar4 + 0x24)) != 0) goto LAB_011d3850;
  lVar4 = *(long *)(*(long *)this + -0x18);
  if (*(uint *)(this + lVar4 + 0x20) == 0) {
    if (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)(this + lVar4 + 0x88) !=
        (basic_ostream<char,std::__ndk1::char_traits<char>> *)0x0) {
      basic_ostream<char,std::__ndk1::char_traits<char>>::flush
                (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)(this + lVar4 + 0x88));
      lVar4 = *(long *)(*(long *)this + -0x18);
      if (*(int *)(this + lVar4 + 0x20) != 0) goto LAB_011d3798;
    }
    plVar3 = *(long **)(this + lVar4 + 0x28);
    if (plVar3 == (long *)0x0) {
LAB_011d3848:
      uVar6 = uVar6 | 1;
    }
    else if ((plVar3[2] == plVar3[3]) || (pcVar5 = (char *)(plVar3[3] + -1), *pcVar5 != param_1)) {
      iVar2 = (**(code **)(*plVar3 + 0x58))(plVar3,param_1);
      if (iVar2 == -1) goto LAB_011d3848;
    }
    else {
      plVar3[3] = (long)pcVar5;
    }
  }
  else {
    uVar1 = *(uint *)(this + lVar4 + 0x20) | (uint)(*(long *)(this + lVar4 + 0x28) == 0) | 4;
    *(uint *)(this + lVar4 + 0x20) = uVar1;
    if ((uVar1 & *(uint *)(this + lVar4 + 0x24)) != 0) goto LAB_011d3850;
LAB_011d3798:
    uVar6 = uVar6 | 4;
  }
  lVar4 = *(long *)(*(long *)this + -0x18);
  uVar6 = *(uint *)(this + lVar4 + 0x20) | uVar6 | (uint)(*(long *)(this + lVar4 + 0x28) == 0);
  *(uint *)(this + lVar4 + 0x20) = uVar6;
  if ((uVar6 & *(uint *)(this + lVar4 + 0x24)) == 0) {
    return this;
  }
LAB_011d3850:
                    /* WARNING: Subroutine does not return */
  FUN_011dac54("ios_base::clear");
}

