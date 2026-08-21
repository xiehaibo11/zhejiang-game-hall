
/* std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t> >::unget() */

basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> * __thiscall
std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::unget
          (basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this)

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
  if ((uVar1 & *(uint *)(this + lVar4 + 0x24)) != 0) goto LAB_011d6e54;
  lVar4 = *(long *)(*(long *)this + -0x18);
  if (*(uint *)(this + lVar4 + 0x20) == 0) {
    if (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)(this + lVar4 + 0x88) !=
        (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *)0x0) {
      basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::flush
                (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)(this + lVar4 + 0x88)
                );
      lVar4 = *(long *)(*(long *)this + -0x18);
      if (*(int *)(this + lVar4 + 0x20) != 0) goto LAB_011d6da0;
    }
    plVar3 = *(long **)(this + lVar4 + 0x28);
    if (plVar3 != (long *)0x0) {
      lVar4 = plVar3[3];
      if (plVar3[2] == lVar4) {
        iVar2 = (**(code **)(*plVar3 + 0x58))(plVar3,0xffffffff);
      }
      else {
        plVar3[3] = lVar4 + -4;
        iVar2 = *(int *)(lVar4 + -4);
      }
      if (iVar2 != -1) goto LAB_011d6da4;
    }
    uVar5 = uVar5 | 1;
  }
  else {
    uVar1 = *(uint *)(this + lVar4 + 0x20) | (uint)(*(long *)(this + lVar4 + 0x28) == 0) | 4;
    *(uint *)(this + lVar4 + 0x20) = uVar1;
    if ((uVar1 & *(uint *)(this + lVar4 + 0x24)) != 0) goto LAB_011d6e54;
LAB_011d6da0:
    uVar5 = uVar5 | 4;
  }
LAB_011d6da4:
  lVar4 = *(long *)(*(long *)this + -0x18);
  uVar5 = *(uint *)(this + lVar4 + 0x20) | uVar5 | (uint)(*(long *)(this + lVar4 + 0x28) == 0);
  *(uint *)(this + lVar4 + 0x20) = uVar5;
  if ((uVar5 & *(uint *)(this + lVar4 + 0x24)) == 0) {
    return this;
  }
LAB_011d6e54:
                    /* WARNING: Subroutine does not return */
  FUN_011dac54("ios_base::clear");
}

