
/* std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t>
   >::get(std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t> >&, wchar_t) */

basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> * __thiscall
std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::get
          (basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,basic_streambuf *param_1,
          wchar_t param_2)

{
  wchar_t *pwVar1;
  uint uVar2;
  wchar_t wVar3;
  int iVar4;
  long *plVar5;
  uint uVar6;
  long lVar7;
  
  *(undefined8 *)(this + 8) = 0;
  lVar7 = *(long *)(*(long *)this + -0x18);
  if (*(uint *)(this + lVar7 + 0x20) == 0) {
    if (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)(this + lVar7 + 0x88) !=
        (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *)0x0) {
      basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::flush
                (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)(this + lVar7 + 0x88)
                );
      lVar7 = *(long *)(*(long *)this + -0x18);
      if (*(int *)(this + lVar7 + 0x20) != 0) {
        return this;
      }
    }
    while( true ) {
      plVar5 = *(long **)(this + lVar7 + 0x28);
      if ((wchar_t *)plVar5[3] == (wchar_t *)plVar5[4]) {
        wVar3 = (**(code **)(*plVar5 + 0x48))();
      }
      else {
        wVar3 = *(wchar_t *)plVar5[3];
      }
      if (wVar3 == L'\xffffffff') {
        uVar6 = 2;
        goto LAB_011d6180;
      }
      if (wVar3 == param_2) break;
      pwVar1 = *(wchar_t **)(param_1 + 0x30);
      if (pwVar1 == *(wchar_t **)(param_1 + 0x38)) {
        iVar4 = (**(code **)(*(long *)param_1 + 0x68))(param_1);
        if (iVar4 == -1) break;
      }
      else {
        *(wchar_t **)(param_1 + 0x30) = pwVar1 + 1;
        *pwVar1 = wVar3;
      }
      lVar7 = *(long *)this;
      *(long *)(this + 8) = *(long *)(this + 8) + 1;
      plVar5 = *(long **)(this + *(long *)(lVar7 + -0x18) + 0x28);
      if (plVar5[3] == plVar5[4]) {
        (**(code **)(*plVar5 + 0x50))();
        lVar7 = *(long *)(*(long *)this + -0x18);
      }
      else {
        plVar5[3] = plVar5[3] + 4;
        lVar7 = *(long *)(lVar7 + -0x18);
      }
    }
    uVar6 = 0;
LAB_011d6180:
    lVar7 = *(long *)(*(long *)this + -0x18);
    uVar2 = uVar6 | 4;
    if (*(long *)(this + 8) != 0) {
      uVar2 = uVar6;
    }
    uVar6 = *(uint *)(this + lVar7 + 0x20) | uVar2 | (uint)(*(long *)(this + lVar7 + 0x28) == 0);
    uVar2 = uVar6 & *(uint *)(this + lVar7 + 0x24);
    *(uint *)(this + lVar7 + 0x20) = uVar6;
  }
  else {
    uVar6 = *(uint *)(this + lVar7 + 0x20) | (uint)(*(long *)(this + lVar7 + 0x28) == 0) | 4;
    uVar2 = uVar6 & *(uint *)(this + lVar7 + 0x24);
    *(uint *)(this + lVar7 + 0x20) = uVar6;
  }
  if (uVar2 == 0) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  FUN_011dac54("ios_base::clear");
}

