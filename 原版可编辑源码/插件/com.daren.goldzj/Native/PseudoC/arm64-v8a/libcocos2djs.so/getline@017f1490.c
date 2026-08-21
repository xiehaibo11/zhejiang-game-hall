
/* std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >::getline(char*, long, char) */

basic_istream<char,std::__ndk1::char_traits<char>> * __thiscall
std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::getline
          (basic_istream<char,std::__ndk1::char_traits<char>> *this,char *param_1,long param_2,
          char param_3)

{
  ios_base *this_00;
  uint uVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  *(undefined8 *)(this + 8) = 0;
  lVar4 = *(long *)(*(long *)this + -0x18);
  this_00 = (ios_base *)(this + lVar4);
  if (*(uint *)(this_00 + 0x20) == 0) {
    if (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)(this_00 + 0x88) !=
        (basic_ostream<char,std::__ndk1::char_traits<char>> *)0x0) {
      basic_ostream<char,std::__ndk1::char_traits<char>>::flush
                (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)(this_00 + 0x88));
      lVar4 = *(long *)(*(long *)this + -0x18);
      if (*(int *)(this + lVar4 + 0x20) != 0) goto LAB_017f1620;
    }
    while( true ) {
      plVar3 = *(long **)(this + lVar4 + 0x28);
      if ((byte *)plVar3[3] == (byte *)plVar3[4]) {
        uVar2 = (**(code **)(*plVar3 + 0x48))();
        if (uVar2 == 0xffffffff) {
          lVar4 = *(long *)(this + 8);
          uVar2 = 2;
          goto LAB_017f15fc;
        }
      }
      else {
        uVar2 = (uint)*(byte *)plVar3[3];
      }
      if ((uVar2 & 0xff) == (uint)(byte)param_3) {
        plVar3 = *(long **)(this + *(long *)(*(long *)this + -0x18) + 0x28);
        if (plVar3[3] == plVar3[4]) {
          (**(code **)(*plVar3 + 0x50))();
        }
        else {
          plVar3[3] = plVar3[3] + 1;
        }
        uVar2 = 0;
        lVar4 = *(long *)(this + 8) + 1;
        *(long *)(this + 8) = lVar4;
        goto LAB_017f15fc;
      }
      lVar4 = *(long *)(this + 8);
      if (param_2 + -1 <= lVar4) break;
      *param_1 = (char)uVar2;
      plVar5 = (long *)(*(long *)this + -0x18);
      plVar3 = *(long **)(this + *plVar5 + 0x28);
      if (plVar3[3] == plVar3[4]) {
        (**(code **)(*plVar3 + 0x50))();
        plVar5 = (long *)(*(long *)this + -0x18);
      }
      else {
        plVar3[3] = plVar3[3] + 1;
      }
      *(long *)(this + 8) = *(long *)(this + 8) + 1;
      lVar4 = *plVar5;
      param_1 = param_1 + 1;
    }
    uVar2 = 4;
LAB_017f15fc:
    uVar1 = uVar2 | 4;
    if (lVar4 != 0) {
      uVar1 = uVar2;
    }
    ios_base::clear((ios_base *)(this + *(long *)(*(long *)this + -0x18)),
                    *(uint *)((ios_base *)(this + *(long *)(*(long *)this + -0x18)) + 0x20) | uVar1)
    ;
  }
  else {
    ios_base::clear(this_00,*(uint *)(this_00 + 0x20) | 4);
  }
LAB_017f1620:
  if (0 < param_2) {
    *param_1 = '\0';
  }
  return this;
}

