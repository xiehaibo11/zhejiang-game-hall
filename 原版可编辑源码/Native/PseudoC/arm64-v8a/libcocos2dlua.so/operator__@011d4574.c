
/* std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t>
   >::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_streambuf<wchar_t,
   std::__ndk1::char_traits<wchar_t> >*) */

basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> * __thiscall
std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::operator>>
          (basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,basic_streambuf *param_1)

{
  int *piVar1;
  int iVar2;
  long *plVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  
  *(undefined8 *)(this + 8) = 0;
  lVar5 = *(long *)(*(long *)this + -0x18);
  if (*(uint *)(this + lVar5 + 0x20) != 0) {
    uVar4 = *(uint *)(this + lVar5 + 0x20) | (uint)(*(long *)(this + lVar5 + 0x28) == 0) | 4;
    uVar6 = uVar4 & *(uint *)(this + lVar5 + 0x24);
    *(uint *)(this + lVar5 + 0x20) = uVar4;
    goto joined_r0x011d45c0;
  }
  if (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)(this + lVar5 + 0x88) !=
      (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *)0x0) {
    basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::flush
              (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)(this + lVar5 + 0x88));
    lVar5 = *(long *)(*(long *)this + -0x18);
    if (*(int *)(this + lVar5 + 0x20) != 0) {
      return this;
    }
  }
  if (param_1 != (basic_streambuf *)0x0) {
LAB_011d4604:
    plVar3 = *(long **)(this + lVar5 + 0x28);
    if ((int *)plVar3[3] == (int *)plVar3[4]) {
      iVar2 = (**(code **)(*plVar3 + 0x48))();
    }
    else {
      iVar2 = *(int *)plVar3[3];
    }
    if (iVar2 == -1) {
      uVar4 = 2;
      goto LAB_011d46bc;
    }
    piVar1 = *(int **)(param_1 + 0x30);
    if (piVar1 == *(int **)(param_1 + 0x38)) {
      iVar2 = (**(code **)(*(long *)param_1 + 0x68))(param_1);
      if (iVar2 == -1) goto LAB_011d46b8;
    }
    else {
      *(int **)(param_1 + 0x30) = piVar1 + 1;
      *piVar1 = iVar2;
    }
    lVar5 = *(long *)this;
    *(long *)(this + 8) = *(long *)(this + 8) + 1;
    plVar3 = *(long **)(this + *(long *)(lVar5 + -0x18) + 0x28);
    if (plVar3[3] == plVar3[4]) {
      (**(code **)(*plVar3 + 0x50))();
      lVar5 = *(long *)(*(long *)this + -0x18);
    }
    else {
      plVar3[3] = plVar3[3] + 4;
      lVar5 = *(long *)(lVar5 + -0x18);
    }
    goto LAB_011d4604;
  }
  uVar6 = 4;
  goto LAB_011d46cc;
LAB_011d46b8:
  uVar4 = 0;
LAB_011d46bc:
  uVar6 = uVar4 | 4;
  if (*(long *)(this + 8) != 0) {
    uVar6 = uVar4;
  }
LAB_011d46cc:
  lVar5 = *(long *)(*(long *)this + -0x18);
  uVar4 = *(uint *)(this + lVar5 + 0x20) | uVar6 | (uint)(*(long *)(this + lVar5 + 0x28) == 0);
  uVar6 = uVar4 & *(uint *)(this + lVar5 + 0x24);
  *(uint *)(this + lVar5 + 0x20) = uVar4;
joined_r0x011d45c0:
  if (uVar6 == 0) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  FUN_011dac54("ios_base::clear");
}

