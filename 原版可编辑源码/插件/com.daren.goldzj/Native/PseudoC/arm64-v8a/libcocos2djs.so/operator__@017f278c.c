
/* std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t>
   >::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_streambuf<wchar_t,
   std::__ndk1::char_traits<wchar_t> >*) */

basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> * __thiscall
std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::operator>>
          (basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,basic_streambuf *param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  ios_base *this_00;
  long *plVar4;
  uint uVar5;
  long lVar6;
  
  *(undefined8 *)(this + 8) = 0;
  lVar6 = *(long *)(*(long *)this + -0x18);
  this_00 = (ios_base *)(this + lVar6);
  if (*(uint *)(this_00 + 0x20) != 0) {
    ios_base::clear(this_00,*(uint *)(this_00 + 0x20) | 4);
    return this;
  }
  if (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)(this_00 + 0x88) !=
      (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *)0x0) {
    basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::flush
              (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)(this_00 + 0x88));
    lVar6 = *(long *)(*(long *)this + -0x18);
    this_00 = (ios_base *)(this + lVar6);
    if (*(int *)(this_00 + 0x20) != 0) {
      return this;
    }
  }
  if (param_1 == (basic_streambuf *)0x0) {
    ios_base::clear(this_00,4);
    return this;
  }
  while( true ) {
    plVar4 = *(long **)(this + lVar6 + 0x28);
    if ((int *)plVar4[3] == (int *)plVar4[4]) {
      iVar3 = (**(code **)(*plVar4 + 0x48))();
    }
    else {
      iVar3 = *(int *)plVar4[3];
    }
    if (iVar3 == -1) break;
    piVar2 = *(int **)(param_1 + 0x30);
    if (piVar2 == *(int **)(param_1 + 0x38)) {
      iVar3 = (**(code **)(*(long *)param_1 + 0x68))(param_1);
      if (iVar3 == -1) {
        uVar5 = 0;
LAB_017f28d0:
        uVar1 = uVar5 | 4;
        if (*(long *)(this + 8) != 0) {
          uVar1 = uVar5;
        }
        ios_base::clear((ios_base *)(this + *(long *)(*(long *)this + -0x18)),
                        *(uint *)((ios_base *)(this + *(long *)(*(long *)this + -0x18)) + 0x20) |
                        uVar1);
        return this;
      }
    }
    else {
      *(int **)(param_1 + 0x30) = piVar2 + 1;
      *piVar2 = iVar3;
    }
    lVar6 = *(long *)this;
    *(long *)(this + 8) = *(long *)(this + 8) + 1;
    plVar4 = *(long **)(this + *(long *)(lVar6 + -0x18) + 0x28);
    if (plVar4[3] == plVar4[4]) {
      (**(code **)(*plVar4 + 0x50))();
      lVar6 = *(long *)(*(long *)this + -0x18);
    }
    else {
      plVar4[3] = plVar4[3] + 4;
      lVar6 = *(long *)(lVar6 + -0x18);
    }
  }
  uVar5 = 2;
  goto LAB_017f28d0;
}

