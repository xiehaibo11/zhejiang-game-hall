
/* std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t> >::get(wchar_t*, long,
   wchar_t) */

basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> * __thiscall
std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::get
          (basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,wchar_t *param_1,
          long param_2,wchar_t param_3)

{
  wchar_t wVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  
  *(undefined8 *)(this + 8) = 0;
  lVar5 = *(long *)(*(long *)this + -0x18);
  if (*(uint *)(this + lVar5 + 0x20) == 0) {
    if (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)(this + lVar5 + 0x88) !=
        (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *)0x0) {
      basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::flush
                (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)(this + lVar5 + 0x88)
                );
      lVar5 = *(long *)(*(long *)this + -0x18);
      if (*(int *)(this + lVar5 + 0x20) != 0) goto LAB_011d5ef0;
    }
    if (param_2 < 1) {
      uVar4 = 4;
    }
    else {
      lVar6 = *(long *)(this + 8);
      if (lVar6 < param_2 + -1) {
        while( true ) {
          plVar2 = *(long **)(this + lVar5 + 0x28);
          if ((wchar_t *)plVar2[3] == (wchar_t *)plVar2[4]) {
            wVar1 = (**(code **)(*plVar2 + 0x48))();
          }
          else {
            wVar1 = *(wchar_t *)plVar2[3];
          }
          if (wVar1 == L'\xffffffff') {
            uVar3 = 2;
            goto LAB_011d5eac;
          }
          if (wVar1 == param_3) {
            uVar3 = 0;
            goto LAB_011d5eac;
          }
          *param_1 = wVar1;
          lVar5 = *(long *)(this + 8) + 1;
          *(long *)(this + 8) = lVar5;
          plVar2 = *(long **)(this + *(long *)(*(long *)this + -0x18) + 0x28);
          if (plVar2[3] == plVar2[4]) {
            (**(code **)(*plVar2 + 0x50))();
            lVar5 = *(long *)(this + 8);
          }
          else {
            plVar2[3] = plVar2[3] + 4;
          }
          if (param_2 + -1 <= lVar5) break;
          lVar5 = *(long *)(*(long *)this + -0x18);
          param_1 = param_1 + 1;
        }
        uVar3 = 0;
        param_1 = param_1 + 1;
LAB_011d5eac:
        lVar6 = *(long *)(this + 8);
      }
      else {
        uVar3 = 0;
      }
      uVar4 = uVar3 | 4;
      if (lVar6 != 0) {
        uVar4 = uVar3;
      }
      *param_1 = L'\0';
    }
    lVar5 = *(long *)(*(long *)this + -0x18);
    uVar3 = *(uint *)(this + lVar5 + 0x20) | uVar4 | (uint)(*(long *)(this + lVar5 + 0x28) == 0);
    uVar4 = uVar3 & *(uint *)(this + lVar5 + 0x24);
    *(uint *)(this + lVar5 + 0x20) = uVar3;
  }
  else {
    uVar3 = *(uint *)(this + lVar5 + 0x20) | (uint)(*(long *)(this + lVar5 + 0x28) == 0) | 4;
    uVar4 = uVar3 & *(uint *)(this + lVar5 + 0x24);
    *(uint *)(this + lVar5 + 0x20) = uVar3;
  }
  if (uVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_011dac54("ios_base::clear");
  }
LAB_011d5ef0:
  if (0 < param_2) {
    *param_1 = L'\0';
  }
  return this;
}

