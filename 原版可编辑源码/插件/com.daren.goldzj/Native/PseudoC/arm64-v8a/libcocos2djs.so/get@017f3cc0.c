
/* std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t> >::get(wchar_t*, long,
   wchar_t) */

basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> * __thiscall
std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::get
          (basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,wchar_t *param_1,
          long param_2,wchar_t param_3)

{
  uint uVar1;
  wchar_t wVar2;
  long *plVar3;
  basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this_00;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  
  *(undefined8 *)(this + 8) = 0;
  lVar6 = *(long *)(*(long *)this + -0x18);
  this_00 = this + lVar6;
  if (*(uint *)(this_00 + 0x20) == 0) {
    if (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)(this_00 + 0x88) !=
        (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *)0x0) {
      basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::flush
                (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)(this_00 + 0x88));
      lVar6 = *(long *)(*(long *)this + -0x18);
      this_00 = this + lVar6;
      if (*(int *)(this_00 + 0x20) != 0) goto LAB_017f3d04;
    }
    if (param_2 < 1) {
      ios_base::clear((ios_base *)this_00,4);
      return this;
    }
    lVar7 = *(long *)(this + 8);
    if (lVar7 < param_2 + -1) {
      while( true ) {
        plVar3 = *(long **)(this + lVar6 + 0x28);
        if ((wchar_t *)plVar3[3] == (wchar_t *)plVar3[4]) {
          wVar2 = (**(code **)(*plVar3 + 0x48))();
        }
        else {
          wVar2 = *(wchar_t *)plVar3[3];
        }
        if (wVar2 == L'\xffffffff') {
          uVar4 = 2;
          goto LAB_017f3e3c;
        }
        if (wVar2 == param_3) {
          uVar4 = 0;
          goto LAB_017f3e3c;
        }
        *param_1 = wVar2;
        lVar6 = *(long *)(this + 8) + 1;
        *(long *)(this + 8) = lVar6;
        plVar3 = *(long **)(this + *(long *)(*(long *)this + -0x18) + 0x28);
        if (plVar3[3] == plVar3[4]) {
          (**(code **)(*plVar3 + 0x50))();
          lVar6 = *(long *)(this + 8);
        }
        else {
          plVar3[3] = plVar3[3] + 4;
        }
        if (param_2 + -1 <= lVar6) break;
        lVar6 = *(long *)(*(long *)this + -0x18);
        param_1 = param_1 + 1;
      }
      uVar4 = 0;
      param_1 = param_1 + 1;
LAB_017f3e3c:
      lVar7 = *(long *)(this + 8);
      this_00 = this + *(long *)(*(long *)this + -0x18);
      uVar5 = *(uint *)(this_00 + 0x20);
    }
    else {
      uVar5 = 0;
      uVar4 = 0;
    }
    uVar1 = uVar4 | 4;
    if (lVar7 != 0) {
      uVar1 = uVar4;
    }
    ios_base::clear((ios_base *)this_00,uVar5 | uVar1);
  }
  else {
    ios_base::clear((ios_base *)this_00,*(uint *)(this_00 + 0x20) | 4);
  }
LAB_017f3d04:
  if (0 < param_2) {
    *param_1 = L'\0';
  }
  return this;
}

