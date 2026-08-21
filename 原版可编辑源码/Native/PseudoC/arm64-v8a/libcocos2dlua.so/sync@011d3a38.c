
/* std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >::sync() */

undefined4 __thiscall
std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::sync
          (basic_istream<char,std::__ndk1::char_traits<char>> *this)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  
  lVar4 = *(long *)(*(long *)this + -0x18);
  if (*(uint *)(this + lVar4 + 0x20) == 0) {
    if (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)(this + lVar4 + 0x88) !=
        (basic_ostream<char,std::__ndk1::char_traits<char>> *)0x0) {
      basic_ostream<char,std::__ndk1::char_traits<char>>::flush
                (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)(this + lVar4 + 0x88));
      lVar4 = *(long *)(*(long *)this + -0x18);
      if (*(int *)(this + lVar4 + 0x20) != 0) {
        return 0;
      }
    }
    if ((*(long **)(this + lVar4 + 0x28) == (long *)0x0) ||
       (iVar3 = (**(code **)(**(long **)(this + lVar4 + 0x28) + 0x30))(), iVar3 == -1)) {
      return 0xffffffff;
    }
    lVar4 = *(long *)(*(long *)this + -0x18);
    uVar1 = *(uint *)(this + lVar4 + 0x20) | (uint)(*(long *)(this + lVar4 + 0x28) == 0);
    uVar2 = uVar1 & *(uint *)(this + lVar4 + 0x24);
    *(uint *)(this + lVar4 + 0x20) = uVar1;
  }
  else {
    uVar1 = *(uint *)(this + lVar4 + 0x20) | (uint)(*(long *)(this + lVar4 + 0x28) == 0) | 4;
    uVar2 = uVar1 & *(uint *)(this + lVar4 + 0x24);
    *(uint *)(this + lVar4 + 0x20) = uVar1;
  }
  if (uVar2 == 0) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_011dac54("ios_base::clear");
}

