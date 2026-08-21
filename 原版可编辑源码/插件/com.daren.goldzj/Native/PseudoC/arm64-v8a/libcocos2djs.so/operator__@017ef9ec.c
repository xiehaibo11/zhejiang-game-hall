
/* std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char>
   >::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >*)
    */

basic_istream<char,std::__ndk1::char_traits<char>> * __thiscall
std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::operator>>
          (basic_istream<char,std::__ndk1::char_traits<char>> *this,basic_streambuf *param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  ios_base *this_00;
  long *plVar5;
  long lVar6;
  
  *(undefined8 *)(this + 8) = 0;
  lVar6 = *(long *)(*(long *)this + -0x18);
  this_00 = (ios_base *)(this + lVar6);
  if (*(uint *)(this_00 + 0x20) != 0) {
    ios_base::clear(this_00,*(uint *)(this_00 + 0x20) | 4);
    return this;
  }
  if (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)(this_00 + 0x88) !=
      (basic_ostream<char,std::__ndk1::char_traits<char>> *)0x0) {
    basic_ostream<char,std::__ndk1::char_traits<char>>::flush
              (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)(this_00 + 0x88));
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
  do {
    plVar5 = *(long **)(this + lVar6 + 0x28);
    if ((byte *)plVar5[3] == (byte *)plVar5[4]) {
      uVar3 = (**(code **)(*plVar5 + 0x48))();
      if (uVar3 == 0xffffffff) {
        uVar3 = 2;
        goto LAB_017efb28;
      }
    }
    else {
      uVar3 = (uint)*(byte *)plVar5[3];
    }
    puVar2 = *(undefined1 **)(param_1 + 0x30);
    if (puVar2 == *(undefined1 **)(param_1 + 0x38)) {
      iVar4 = (**(code **)(*(long *)param_1 + 0x68))(param_1,uVar3 & 0xff);
      if (iVar4 == -1) {
        uVar3 = 0;
LAB_017efb28:
        uVar1 = uVar3 | 4;
        if (*(long *)(this + 8) != 0) {
          uVar1 = uVar3;
        }
        ios_base::clear((ios_base *)(this + *(long *)(*(long *)this + -0x18)),
                        *(uint *)((ios_base *)(this + *(long *)(*(long *)this + -0x18)) + 0x20) |
                        uVar1);
        return this;
      }
    }
    else {
      *(undefined1 **)(param_1 + 0x30) = puVar2 + 1;
      *puVar2 = (char)uVar3;
    }
    lVar6 = *(long *)this;
    *(long *)(this + 8) = *(long *)(this + 8) + 1;
    plVar5 = *(long **)(this + *(long *)(lVar6 + -0x18) + 0x28);
    if (plVar5[3] == plVar5[4]) {
      (**(code **)(*plVar5 + 0x50))();
      lVar6 = *(long *)(*(long *)this + -0x18);
    }
    else {
      plVar5[3] = plVar5[3] + 1;
      lVar6 = *(long *)(lVar6 + -0x18);
    }
  } while( true );
}

