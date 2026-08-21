
/* std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t> >::get() */

int __thiscall
std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::get
          (basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this)

{
  int *piVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  uint uVar5;
  
  *(undefined8 *)(this + 8) = 0;
  lVar4 = *(long *)(*(long *)this + -0x18);
  if (*(uint *)(this + lVar4 + 0x20) != 0) {
    uVar5 = *(uint *)(this + lVar4 + 0x20) | (uint)(*(long *)(this + lVar4 + 0x28) == 0) | 4;
    *(uint *)(this + lVar4 + 0x20) = uVar5;
    if ((uVar5 & *(uint *)(this + lVar4 + 0x24)) == 0) {
      return -1;
    }
    goto LAB_011d5be8;
  }
  if (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)(this + lVar4 + 0x88) !=
      (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *)0x0) {
    basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::flush
              (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)(this + lVar4 + 0x88));
    lVar4 = *(long *)(*(long *)this + -0x18);
    if (*(int *)(this + lVar4 + 0x20) != 0) {
      return -1;
    }
  }
  plVar3 = *(long **)(this + lVar4 + 0x28);
  piVar1 = (int *)plVar3[3];
  if (piVar1 == (int *)plVar3[4]) {
    iVar2 = (**(code **)(*plVar3 + 0x50))();
    if (iVar2 == -1) goto LAB_011d5ba4;
LAB_011d5b7c:
    uVar5 = 0;
    *(undefined8 *)(this + 8) = 1;
  }
  else {
    plVar3[3] = (long)(piVar1 + 1);
    iVar2 = *piVar1;
    if (iVar2 != -1) goto LAB_011d5b7c;
LAB_011d5ba4:
    uVar5 = 6;
  }
  lVar4 = *(long *)(*(long *)this + -0x18);
  uVar5 = *(uint *)(this + lVar4 + 0x20) | uVar5 | (uint)(*(long *)(this + lVar4 + 0x28) == 0);
  *(uint *)(this + lVar4 + 0x20) = uVar5;
  if ((uVar5 & *(uint *)(this + lVar4 + 0x24)) == 0) {
    return iVar2;
  }
LAB_011d5be8:
                    /* WARNING: Subroutine does not return */
  FUN_011dac54("ios_base::clear");
}

