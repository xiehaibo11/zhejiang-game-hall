
/* std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t> >::getline(wchar_t*, long,
   wchar_t) */

basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> * __thiscall
std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::getline
          (basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,wchar_t *param_1,
          long param_2,wchar_t param_3)

{
  ios_base *this_00;
  uint uVar1;
  wchar_t wVar2;
  long *plVar3;
  long lVar4;
  uint uVar5;
  long *plVar6;
  
  *(undefined8 *)(this + 8) = 0;
  lVar4 = *(long *)(*(long *)this + -0x18);
  this_00 = (ios_base *)(this + lVar4);
  if (*(uint *)(this_00 + 0x20) == 0) {
    if (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)(this_00 + 0x88) !=
        (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *)0x0) {
      basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::flush
                (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)(this_00 + 0x88));
      lVar4 = *(long *)(*(long *)this + -0x18);
      if (*(int *)(this + lVar4 + 0x20) != 0) goto LAB_017f4390;
    }
    while( true ) {
      plVar3 = *(long **)(this + lVar4 + 0x28);
      if ((wchar_t *)plVar3[3] == (wchar_t *)plVar3[4]) {
        wVar2 = (**(code **)(*plVar3 + 0x48))();
      }
      else {
        wVar2 = *(wchar_t *)plVar3[3];
      }
      if (wVar2 == L'\xffffffff') {
        lVar4 = *(long *)(this + 8);
        uVar5 = 2;
        goto LAB_017f436c;
      }
      if (wVar2 == param_3) {
        plVar3 = *(long **)(this + *(long *)(*(long *)this + -0x18) + 0x28);
        if (plVar3[3] == plVar3[4]) {
          (**(code **)(*plVar3 + 0x50))();
        }
        else {
          plVar3[3] = plVar3[3] + 4;
        }
        uVar5 = 0;
        lVar4 = *(long *)(this + 8) + 1;
        *(long *)(this + 8) = lVar4;
        goto LAB_017f436c;
      }
      lVar4 = *(long *)(this + 8);
      if (param_2 + -1 <= lVar4) break;
      *param_1 = wVar2;
      plVar6 = (long *)(*(long *)this + -0x18);
      plVar3 = *(long **)(this + *plVar6 + 0x28);
      if (plVar3[3] == plVar3[4]) {
        (**(code **)(*plVar3 + 0x50))();
        lVar4 = *(long *)(this + 8);
        plVar6 = (long *)(*(long *)this + -0x18);
      }
      else {
        plVar3[3] = plVar3[3] + 4;
      }
      *(long *)(this + 8) = lVar4 + 1;
      lVar4 = *plVar6;
      param_1 = param_1 + 1;
    }
    uVar5 = 4;
LAB_017f436c:
    uVar1 = uVar5 | 4;
    if (lVar4 != 0) {
      uVar1 = uVar5;
    }
    ios_base::clear((ios_base *)(this + *(long *)(*(long *)this + -0x18)),
                    *(uint *)((ios_base *)(this + *(long *)(*(long *)this + -0x18)) + 0x20) | uVar1)
    ;
  }
  else {
    ios_base::clear(this_00,*(uint *)(this_00 + 0x20) | 4);
  }
LAB_017f4390:
  if (0 < param_2) {
    *param_1 = L'\0';
  }
  return this;
}

