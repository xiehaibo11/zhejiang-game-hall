
/* std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t> >::tellg() */

undefined8 __thiscall
std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::tellg
          (basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(*(long *)this + -0x18);
  if (*(uint *)(this + lVar3 + 0x20) == 0) {
    if (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)(this + lVar3 + 0x88) !=
        (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *)0x0) {
      basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::flush
                (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)(this + lVar3 + 0x88)
                );
      lVar3 = *(long *)(*(long *)this + -0x18);
      if (*(int *)(this + lVar3 + 0x20) != 0) goto LAB_011d7028;
    }
    uVar2 = (**(code **)(**(long **)(this + lVar3 + 0x28) + 0x20))
                      (*(long **)(this + lVar3 + 0x28),0,1,8);
    lVar3 = *(long *)(*(long *)this + -0x18);
    uVar1 = *(uint *)(this + lVar3 + 0x20) | (uint)(*(long *)(this + lVar3 + 0x28) == 0);
    *(uint *)(this + lVar3 + 0x20) = uVar1;
    if ((uVar1 & *(uint *)(this + lVar3 + 0x24)) != 0) {
LAB_011d70b8:
                    /* WARNING: Subroutine does not return */
      FUN_011dac54("ios_base::clear");
    }
  }
  else {
    uVar1 = *(uint *)(this + lVar3 + 0x20) | (uint)(*(long *)(this + lVar3 + 0x28) == 0) | 4;
    *(uint *)(this + lVar3 + 0x20) = uVar1;
    if ((uVar1 & *(uint *)(this + lVar3 + 0x24)) != 0) goto LAB_011d70b8;
LAB_011d7028:
    uVar2 = 0;
  }
  return uVar2;
}

