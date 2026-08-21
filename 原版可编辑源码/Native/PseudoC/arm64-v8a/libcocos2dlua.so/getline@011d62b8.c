
/* std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t> >::getline(wchar_t*, long,
   wchar_t) */

basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> * __thiscall
std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::getline
          (basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,wchar_t *param_1,
          long param_2,wchar_t param_3)

{
  uint uVar1;
  wchar_t wVar2;
  long *plVar3;
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
      if (*(int *)(this + lVar5 + 0x20) != 0) goto LAB_011d6318;
    }
    while( true ) {
      plVar3 = *(long **)(this + lVar5 + 0x28);
      if ((wchar_t *)plVar3[3] == (wchar_t *)plVar3[4]) {
        wVar2 = (**(code **)(*plVar3 + 0x48))();
      }
      else {
        wVar2 = *(wchar_t *)plVar3[3];
      }
      if (wVar2 == L'\xffffffff') {
        uVar4 = 2;
        goto joined_r0x011d64a8;
      }
      if (wVar2 == param_3) {
        plVar3 = *(long **)(this + *(long *)(*(long *)this + -0x18) + 0x28);
        if (plVar3[3] == plVar3[4]) {
          (**(code **)(*plVar3 + 0x50))();
        }
        else {
          plVar3[3] = plVar3[3] + 4;
        }
        uVar4 = 0;
        *(long *)(this + 8) = *(long *)(this + 8) + 1;
        goto joined_r0x011d64a8;
      }
      lVar5 = *(long *)(this + 8);
      if (param_2 + -1 <= lVar5) break;
      *param_1 = wVar2;
      lVar6 = *(long *)this;
      plVar3 = *(long **)(this + *(long *)(lVar6 + -0x18) + 0x28);
      if (plVar3[3] == plVar3[4]) {
        (**(code **)(*plVar3 + 0x50))();
        lVar6 = *(long *)this;
        lVar5 = *(long *)(this + 8);
      }
      else {
        plVar3[3] = plVar3[3] + 4;
      }
      *(long *)(this + 8) = lVar5 + 1;
      lVar5 = *(long *)(lVar6 + -0x18);
      param_1 = param_1 + 1;
    }
    uVar4 = 4;
  }
  else {
    uVar4 = *(uint *)(this + lVar5 + 0x20) | (uint)(*(long *)(this + lVar5 + 0x28) == 0) | 4;
    *(uint *)(this + lVar5 + 0x20) = uVar4;
    if ((uVar4 & *(uint *)(this + lVar5 + 0x24)) != 0) goto LAB_011d64b0;
LAB_011d6318:
    uVar4 = 0;
  }
joined_r0x011d64a8:
  if (0 < param_2) {
    *param_1 = L'\0';
  }
  lVar5 = *(long *)(*(long *)this + -0x18);
  uVar1 = uVar4 | 4;
  if (*(long *)(this + 8) != 0) {
    uVar1 = uVar4;
  }
  uVar4 = *(uint *)(this + lVar5 + 0x20) | uVar1 | (uint)(*(long *)(this + lVar5 + 0x28) == 0);
  *(uint *)(this + lVar5 + 0x20) = uVar4;
  if ((uVar4 & *(uint *)(this + lVar5 + 0x24)) == 0) {
    return this;
  }
LAB_011d64b0:
                    /* WARNING: Subroutine does not return */
  FUN_011dac54("ios_base::clear");
}

