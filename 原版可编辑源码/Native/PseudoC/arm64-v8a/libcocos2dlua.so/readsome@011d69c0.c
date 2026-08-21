
/* std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t> >::readsome(wchar_t*, long)
    */

undefined8 __thiscall
std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::readsome
          (basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,wchar_t *param_1,
          long param_2)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  
  *(undefined8 *)(this + 8) = 0;
  lVar3 = *(long *)(*(long *)this + -0x18);
  if (*(uint *)(this + lVar3 + 0x20) == 0) {
    if (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)(this + lVar3 + 0x88) !=
        (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *)0x0) {
      basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::flush
                (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)(this + lVar3 + 0x88)
                );
      lVar3 = *(long *)(*(long *)this + -0x18);
      if (*(int *)(this + lVar3 + 0x20) != 0) goto LAB_011d6a10;
    }
    plVar1 = *(long **)(this + lVar3 + 0x28);
    if ((ulong)plVar1[3] < (ulong)plVar1[4]) {
      lVar3 = plVar1[4] - plVar1[3] >> 2;
    }
    else {
      lVar3 = (**(code **)(*plVar1 + 0x38))();
    }
    if (lVar3 == -1) {
      uVar2 = 2;
    }
    else if (lVar3 == 0) {
      uVar2 = 0;
    }
    else {
      if (lVar3 <= param_2) {
        param_2 = lVar3;
      }
      lVar3 = (**(code **)(**(long **)(this + *(long *)(*(long *)this + -0x18) + 0x28) + 0x40))
                        (*(long **)(this + *(long *)(*(long *)this + -0x18) + 0x28),param_1,param_2)
      ;
      *(long *)(this + 8) = lVar3;
      uVar2 = 0;
      if (lVar3 != param_2) {
        uVar2 = 6;
      }
    }
  }
  else {
    uVar2 = *(uint *)(this + lVar3 + 0x20) | (uint)(*(long *)(this + lVar3 + 0x28) == 0) | 4;
    *(uint *)(this + lVar3 + 0x20) = uVar2;
    if ((uVar2 & *(uint *)(this + lVar3 + 0x24)) != 0) goto LAB_011d6b10;
LAB_011d6a10:
    uVar2 = 4;
  }
  lVar3 = *(long *)(*(long *)this + -0x18);
  uVar2 = *(uint *)(this + lVar3 + 0x20) | uVar2 | (uint)(*(long *)(this + lVar3 + 0x28) == 0);
  *(uint *)(this + lVar3 + 0x20) = uVar2;
  if ((uVar2 & *(uint *)(this + lVar3 + 0x24)) == 0) {
    return *(undefined8 *)(this + 8);
  }
LAB_011d6b10:
                    /* WARNING: Subroutine does not return */
  FUN_011dac54("ios_base::clear");
}

