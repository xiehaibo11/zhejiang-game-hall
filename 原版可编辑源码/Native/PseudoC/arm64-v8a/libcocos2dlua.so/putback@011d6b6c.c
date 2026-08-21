
/* std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t> >::putback(wchar_t) */

basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> * __thiscall
std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::putback
          (basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,wchar_t param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  wchar_t *pwVar4;
  uint uVar5;
  
  uVar5 = *(uint *)(this + *(long *)(*(long *)this + -0x18) + 0x20);
  *(undefined8 *)(this + 8) = 0;
  lVar3 = *(long *)(*(long *)this + -0x18);
  uVar5 = uVar5 & 0xfffffffd;
  uVar1 = uVar5 | *(long *)(this + lVar3 + 0x28) == 0;
  *(uint *)(this + lVar3 + 0x20) = uVar1;
  if ((uVar1 & *(uint *)(this + lVar3 + 0x24)) != 0) goto LAB_011d6cbc;
  lVar3 = *(long *)(*(long *)this + -0x18);
  if (*(uint *)(this + lVar3 + 0x20) == 0) {
    if (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)(this + lVar3 + 0x88) !=
        (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *)0x0) {
      basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::flush
                (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)(this + lVar3 + 0x88)
                );
      lVar3 = *(long *)(*(long *)this + -0x18);
      if (*(int *)(this + lVar3 + 0x20) != 0) goto LAB_011d6bf8;
    }
    plVar2 = *(long **)(this + lVar3 + 0x28);
    if (plVar2 != (long *)0x0) {
      if ((plVar2[2] == plVar2[3]) || (pwVar4 = (wchar_t *)(plVar2[3] + -4), *pwVar4 != param_1)) {
        param_1 = (**(code **)(*plVar2 + 0x58))(plVar2,param_1);
      }
      else {
        plVar2[3] = (long)pwVar4;
      }
      if (param_1 != L'\xffffffff') goto LAB_011d6bfc;
    }
    uVar5 = uVar5 | 1;
  }
  else {
    uVar1 = *(uint *)(this + lVar3 + 0x20) | (uint)(*(long *)(this + lVar3 + 0x28) == 0) | 4;
    *(uint *)(this + lVar3 + 0x20) = uVar1;
    if ((uVar1 & *(uint *)(this + lVar3 + 0x24)) != 0) goto LAB_011d6cbc;
LAB_011d6bf8:
    uVar5 = uVar5 | 4;
  }
LAB_011d6bfc:
  lVar3 = *(long *)(*(long *)this + -0x18);
  uVar5 = *(uint *)(this + lVar3 + 0x20) | uVar5 | (uint)(*(long *)(this + lVar3 + 0x28) == 0);
  *(uint *)(this + lVar3 + 0x20) = uVar5;
  if ((uVar5 & *(uint *)(this + lVar3 + 0x24)) == 0) {
    return this;
  }
LAB_011d6cbc:
                    /* WARNING: Subroutine does not return */
  FUN_011dac54("ios_base::clear");
}

