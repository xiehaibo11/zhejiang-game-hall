
/* std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t> >::ignore(long, unsigned
   int) */

basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> * __thiscall
std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::ignore
          (basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,long param_1,uint param_2)

{
  uint *puVar1;
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
    goto joined_r0x011d66b0;
  }
  if (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)(this + lVar5 + 0x88) !=
      (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *)0x0) {
    basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::flush
              (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)(this + lVar5 + 0x88));
    lVar5 = *(long *)(*(long *)this + -0x18);
    if (*(int *)(this + lVar5 + 0x20) != 0) {
      return this;
    }
  }
  if (param_1 == 0x7fffffffffffffff) {
    while( true ) {
      plVar4 = *(long **)(this + lVar5 + 0x28);
      puVar1 = (uint *)plVar4[3];
      if (puVar1 == (uint *)plVar4[4]) {
        uVar3 = (**(code **)(*plVar4 + 0x50))();
      }
      else {
        plVar4[3] = (long)(puVar1 + 1);
        uVar3 = *puVar1;
      }
      if (uVar3 == 0xffffffff) goto LAB_011d6680;
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
      puVar1 = (uint *)plVar4[3];
      if (puVar1 == (uint *)plVar4[4]) {
        uVar3 = (**(code **)(*plVar4 + 0x50))();
      }
      else {
        plVar4[3] = (long)(puVar1 + 1);
        uVar3 = *puVar1;
      }
      if (uVar3 == 0xffffffff) goto LAB_011d6680;
      lVar5 = *(long *)(this + 8) + 1;
      *(long *)(this + 8) = lVar5;
    } while (uVar3 != param_2);
  }
  uVar3 = 0;
  goto LAB_011d6684;
LAB_011d6680:
  uVar3 = 2;
LAB_011d6684:
  lVar5 = *(long *)(*(long *)this + -0x18);
  uVar3 = *(uint *)(this + lVar5 + 0x20) | uVar3 | (uint)(*(long *)(this + lVar5 + 0x28) == 0);
  uVar2 = uVar3 & *(uint *)(this + lVar5 + 0x24);
  *(uint *)(this + lVar5 + 0x20) = uVar3;
joined_r0x011d66b0:
  if (uVar2 == 0) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  FUN_011dac54("ios_base::clear");
}

