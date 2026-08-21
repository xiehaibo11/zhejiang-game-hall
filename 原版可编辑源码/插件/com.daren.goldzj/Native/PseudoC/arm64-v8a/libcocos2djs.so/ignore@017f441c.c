
/* std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t> >::ignore(long, unsigned
   int) */

basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> * __thiscall
std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::ignore
          (basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,long param_1,uint param_2)

{
  ios_base *this_00;
  uint *puVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  
  *(undefined8 *)(this + 8) = 0;
  lVar4 = *(long *)(*(long *)this + -0x18);
  this_00 = (ios_base *)(this + lVar4);
  if (*(uint *)(this_00 + 0x20) != 0) {
    ios_base::clear(this_00,*(uint *)(this_00 + 0x20) | 4);
    return this;
  }
  if (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)(this_00 + 0x88) !=
      (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *)0x0) {
    basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::flush
              (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)(this_00 + 0x88));
    lVar4 = *(long *)(*(long *)this + -0x18);
    if (*(int *)(this + lVar4 + 0x20) != 0) {
      return this;
    }
  }
  if (param_1 == 0x7fffffffffffffff) {
    while( true ) {
      plVar3 = *(long **)(this + lVar4 + 0x28);
      puVar1 = (uint *)plVar3[3];
      if (puVar1 == (uint *)plVar3[4]) {
        uVar2 = (**(code **)(*plVar3 + 0x50))();
      }
      else {
        plVar3[3] = (long)(puVar1 + 1);
        uVar2 = *puVar1;
      }
      if (uVar2 == 0xffffffff) goto LAB_017f4554;
      *(long *)(this + 8) = *(long *)(this + 8) + 1;
      if (uVar2 == param_2) break;
      lVar4 = *(long *)(*(long *)this + -0x18);
    }
  }
  else {
    lVar4 = *(long *)(this + 8);
    do {
      if (param_1 <= lVar4) break;
      plVar3 = *(long **)(this + *(long *)(*(long *)this + -0x18) + 0x28);
      puVar1 = (uint *)plVar3[3];
      if (puVar1 == (uint *)plVar3[4]) {
        uVar2 = (**(code **)(*plVar3 + 0x50))();
      }
      else {
        plVar3[3] = (long)(puVar1 + 1);
        uVar2 = *puVar1;
      }
      if (uVar2 == 0xffffffff) goto LAB_017f4554;
      lVar4 = *(long *)(this + 8) + 1;
      *(long *)(this + 8) = lVar4;
    } while (uVar2 != param_2);
  }
  uVar2 = 0;
LAB_017f4558:
  ios_base::clear((ios_base *)(this + *(long *)(*(long *)this + -0x18)),
                  *(uint *)((ios_base *)(this + *(long *)(*(long *)this + -0x18)) + 0x20) | uVar2);
  return this;
LAB_017f4554:
  uVar2 = 2;
  goto LAB_017f4558;
}

