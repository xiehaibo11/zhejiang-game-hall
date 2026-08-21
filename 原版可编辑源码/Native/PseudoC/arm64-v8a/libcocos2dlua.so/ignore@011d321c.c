
/* std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >::ignore(long, int) */

basic_istream<char,std::__ndk1::char_traits<char>> * __thiscall
std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::ignore
          (basic_istream<char,std::__ndk1::char_traits<char>> *this,long param_1,int param_2)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  
  *(undefined8 *)(this + 8) = 0;
  lVar5 = *(long *)(*(long *)this + -0x18);
  if (*(uint *)(this + lVar5 + 0x20) != 0) {
    uVar3 = *(uint *)(this + lVar5 + 0x20) | (uint)(*(long *)(this + lVar5 + 0x28) == 0) | 4;
    uVar2 = uVar3 & *(uint *)(this + lVar5 + 0x24);
    *(uint *)(this + lVar5 + 0x20) = uVar3;
    goto joined_r0x011d3268;
  }
  if (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)(this + lVar5 + 0x88) !=
      (basic_ostream<char,std::__ndk1::char_traits<char>> *)0x0) {
    basic_ostream<char,std::__ndk1::char_traits<char>>::flush
              (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)(this + lVar5 + 0x88));
    lVar5 = *(long *)(*(long *)this + -0x18);
    if (*(int *)(this + lVar5 + 0x20) != 0) {
      return this;
    }
  }
  if (param_1 == 0x7fffffffffffffff) {
    while( true ) {
      plVar4 = *(long **)(this + lVar5 + 0x28);
      pbVar1 = (byte *)plVar4[3];
      if (pbVar1 == (byte *)plVar4[4]) {
        uVar3 = (**(code **)(*plVar4 + 0x50))();
        if (uVar3 == 0xffffffff) goto LAB_011d3370;
      }
      else {
        plVar4[3] = (long)(pbVar1 + 1);
        uVar3 = (uint)*pbVar1;
      }
      *(long *)(this + 8) = *(long *)(this + 8) + 1;
      if (uVar3 == param_2) break;
      lVar5 = *(long *)(*(long *)this + -0x18);
    }
  }
  else {
    lVar5 = *(long *)(this + 8);
    do {
      if (param_1 <= lVar5) break;
      plVar4 = *(long **)(this + *(long *)(*(long *)this + -0x18) + 0x28);
      pbVar1 = (byte *)plVar4[3];
      if (pbVar1 == (byte *)plVar4[4]) {
        uVar3 = (**(code **)(*plVar4 + 0x50))();
        if (uVar3 == 0xffffffff) goto LAB_011d3370;
        lVar5 = *(long *)(this + 8);
      }
      else {
        plVar4[3] = (long)(pbVar1 + 1);
        uVar3 = (uint)*pbVar1;
      }
      lVar5 = lVar5 + 1;
      *(long *)(this + 8) = lVar5;
    } while (uVar3 != param_2);
  }
  uVar3 = 0;
  goto LAB_011d3374;
LAB_011d3370:
  uVar3 = 2;
LAB_011d3374:
  lVar5 = *(long *)(*(long *)this + -0x18);
  uVar3 = *(uint *)(this + lVar5 + 0x20) | uVar3 | (uint)(*(long *)(this + lVar5 + 0x28) == 0);
  uVar2 = uVar3 & *(uint *)(this + lVar5 + 0x24);
  *(uint *)(this + lVar5 + 0x20) = uVar3;
joined_r0x011d3268:
  if (uVar2 == 0) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  FUN_011dac54("ios_base::clear");
}

