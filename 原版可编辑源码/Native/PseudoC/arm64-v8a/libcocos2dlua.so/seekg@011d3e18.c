
/* std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >::seekg(long long,
   std::__ndk1::ios_base::seekdir) */

basic_istream<char,std::__ndk1::char_traits<char>> * __thiscall
std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::seekg
          (basic_istream<char,std::__ndk1::char_traits<char>> *this,undefined8 param_1,
          undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  long extraout_x1;
  long lVar3;
  
  lVar3 = *(long *)(*(long *)this + -0x18);
  uVar1 = *(uint *)(this + lVar3 + 0x20) & 0xfffffffd;
  uVar2 = uVar1 | *(long *)(this + lVar3 + 0x28) == 0;
  *(uint *)(this + lVar3 + 0x20) = uVar2;
  if ((uVar2 & *(uint *)(this + lVar3 + 0x24)) == 0) {
    lVar3 = *(long *)(*(long *)this + -0x18);
    if (*(uint *)(this + lVar3 + 0x20) == 0) {
      if (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)(this + lVar3 + 0x88) !=
          (basic_ostream<char,std::__ndk1::char_traits<char>> *)0x0) {
        basic_ostream<char,std::__ndk1::char_traits<char>>::flush
                  (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)(this + lVar3 + 0x88));
        lVar3 = *(long *)(*(long *)this + -0x18);
        if (*(int *)(this + lVar3 + 0x20) != 0) {
          return this;
        }
      }
      (**(code **)(**(long **)(this + lVar3 + 0x28) + 0x20))
                (*(long **)(this + lVar3 + 0x28),param_1,param_3,8);
      uVar2 = uVar1 | 4;
      if (extraout_x1 != -1) {
        uVar2 = uVar1;
      }
      lVar3 = *(long *)(*(long *)this + -0x18);
      uVar1 = *(uint *)(this + lVar3 + 0x20) | uVar2 | (uint)(*(long *)(this + lVar3 + 0x28) == 0);
      uVar2 = uVar1 & *(uint *)(this + lVar3 + 0x24);
      *(uint *)(this + lVar3 + 0x20) = uVar1;
    }
    else {
      uVar1 = *(uint *)(this + lVar3 + 0x20) | (uint)(*(long *)(this + lVar3 + 0x28) == 0) | 4;
      uVar2 = uVar1 & *(uint *)(this + lVar3 + 0x24);
      *(uint *)(this + lVar3 + 0x20) = uVar1;
    }
    if (uVar2 == 0) {
      return this;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_011dac54("ios_base::clear");
}

