
/* std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t> >::peek() */

int __thiscall
std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::peek
          (basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  
  *(undefined8 *)(this + 8) = 0;
  lVar4 = *(long *)(*(long *)this + -0x18);
  if (*(uint *)(this + lVar4 + 0x20) == 0) {
    if (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)(this + lVar4 + 0x88) !=
        (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *)0x0) {
      basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::flush
                (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)(this + lVar4 + 0x88)
                );
      lVar4 = *(long *)(*(long *)this + -0x18);
      if (*(int *)(this + lVar4 + 0x20) != 0) goto LAB_011d6770;
    }
    plVar3 = *(long **)(this + lVar4 + 0x28);
    if ((int *)plVar3[3] == (int *)plVar3[4]) {
      iVar2 = (**(code **)(*plVar3 + 0x48))();
    }
    else {
      iVar2 = *(int *)plVar3[3];
    }
    lVar4 = *(long *)(*(long *)this + -0x18);
    uVar1 = *(uint *)(this + lVar4 + 0x20) | (uint)(iVar2 == -1) << 1 |
            (uint)(*(long *)(this + lVar4 + 0x28) == 0);
    *(uint *)(this + lVar4 + 0x20) = uVar1;
    if ((uVar1 & *(uint *)(this + lVar4 + 0x24)) != 0) {
LAB_011d6814:
                    /* WARNING: Subroutine does not return */
      FUN_011dac54("ios_base::clear");
    }
  }
  else {
    uVar1 = *(uint *)(this + lVar4 + 0x20) | (uint)(*(long *)(this + lVar4 + 0x28) == 0) | 4;
    *(uint *)(this + lVar4 + 0x20) = uVar1;
    if ((uVar1 & *(uint *)(this + lVar4 + 0x24)) != 0) goto LAB_011d6814;
LAB_011d6770:
    iVar2 = -1;
  }
  return iVar2;
}

