
/* std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char>
   >::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >*)
    */

basic_istream<char,std::__ndk1::char_traits<char>> * __thiscall
std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::operator>>
          (basic_istream<char,std::__ndk1::char_traits<char>> *this,basic_streambuf *param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  uint uVar6;
  
  *(undefined8 *)(this + 8) = 0;
  lVar5 = *(long *)(*(long *)this + -0x18);
  if (*(uint *)(this + lVar5 + 0x20) != 0) {
    uVar2 = *(uint *)(this + lVar5 + 0x20) | (uint)(*(long *)(this + lVar5 + 0x28) == 0) | 4;
    uVar6 = uVar2 & *(uint *)(this + lVar5 + 0x24);
    *(uint *)(this + lVar5 + 0x20) = uVar2;
    goto joined_r0x011d185c;
  }
  if (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)(this + lVar5 + 0x88) !=
      (basic_ostream<char,std::__ndk1::char_traits<char>> *)0x0) {
    basic_ostream<char,std::__ndk1::char_traits<char>>::flush
              (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)(this + lVar5 + 0x88));
    lVar5 = *(long *)(*(long *)this + -0x18);
    if (*(int *)(this + lVar5 + 0x20) != 0) {
      return this;
    }
  }
  if (param_1 != (basic_streambuf *)0x0) {
LAB_011d18a0:
    plVar4 = *(long **)(this + lVar5 + 0x28);
    if ((byte *)plVar4[3] == (byte *)plVar4[4]) {
      uVar2 = (**(code **)(*plVar4 + 0x48))();
      if (uVar2 == 0xffffffff) {
        uVar2 = 2;
        goto LAB_011d1950;
      }
    }
    else {
      uVar2 = (uint)*(byte *)plVar4[3];
    }
    puVar1 = *(undefined1 **)(param_1 + 0x30);
    if (puVar1 == *(undefined1 **)(param_1 + 0x38)) {
      iVar3 = (**(code **)(*(long *)param_1 + 0x68))(param_1,uVar2 & 0xff);
      if (iVar3 == -1) goto LAB_011d194c;
    }
    else {
      *(undefined1 **)(param_1 + 0x30) = puVar1 + 1;
      *puVar1 = (char)uVar2;
    }
    lVar5 = *(long *)this;
    *(long *)(this + 8) = *(long *)(this + 8) + 1;
    plVar4 = *(long **)(this + *(long *)(lVar5 + -0x18) + 0x28);
    if (plVar4[3] == plVar4[4]) {
      (**(code **)(*plVar4 + 0x50))();
      lVar5 = *(long *)(*(long *)this + -0x18);
    }
    else {
      plVar4[3] = plVar4[3] + 1;
      lVar5 = *(long *)(lVar5 + -0x18);
    }
    goto LAB_011d18a0;
  }
  uVar6 = 4;
  goto LAB_011d1960;
LAB_011d194c:
  uVar2 = 0;
LAB_011d1950:
  uVar6 = uVar2 | 4;
  if (*(long *)(this + 8) != 0) {
    uVar6 = uVar2;
  }
LAB_011d1960:
  lVar5 = *(long *)(*(long *)this + -0x18);
  uVar2 = *(uint *)(this + lVar5 + 0x20) | uVar6 | (uint)(*(long *)(this + lVar5 + 0x28) == 0);
  uVar6 = uVar2 & *(uint *)(this + lVar5 + 0x24);
  *(uint *)(this + lVar5 + 0x20) = uVar2;
joined_r0x011d185c:
  if (uVar6 == 0) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  FUN_011dac54("ios_base::clear");
}

