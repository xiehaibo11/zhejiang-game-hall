
/* std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >::get(char*, long, char) */

basic_istream<char,std::__ndk1::char_traits<char>> * __thiscall
std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::get
          (basic_istream<char,std::__ndk1::char_traits<char>> *this,char *param_1,long param_2,
          char param_3)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  basic_istream<char,std::__ndk1::char_traits<char>> *this_00;
  uint uVar4;
  long lVar5;
  long lVar6;
  
  *(undefined8 *)(this + 8) = 0;
  lVar5 = *(long *)(*(long *)this + -0x18);
  this_00 = this + lVar5;
  if (*(uint *)(this_00 + 0x20) == 0) {
    if (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)(this_00 + 0x88) !=
        (basic_ostream<char,std::__ndk1::char_traits<char>> *)0x0) {
      basic_ostream<char,std::__ndk1::char_traits<char>>::flush
                (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)(this_00 + 0x88));
      lVar5 = *(long *)(*(long *)this + -0x18);
      this_00 = this + lVar5;
      if (*(int *)(this_00 + 0x20) != 0) goto LAB_017f0f9c;
    }
    if (param_2 < 1) {
      ios_base::clear((ios_base *)this_00,4);
      return this;
    }
    lVar6 = *(long *)(this + 8);
    if (lVar6 < param_2 + -1) {
      while( true ) {
        plVar3 = *(long **)(this + lVar5 + 0x28);
        if ((byte *)plVar3[3] == (byte *)plVar3[4]) {
          uVar2 = (**(code **)(*plVar3 + 0x48))();
          if (uVar2 == 0xffffffff) {
            uVar2 = 2;
            goto LAB_017f10d0;
          }
        }
        else {
          uVar2 = (uint)*(byte *)plVar3[3];
        }
        if ((uVar2 & 0xff) == (uint)(byte)param_3) {
          uVar2 = 0;
          goto LAB_017f10d0;
        }
        *param_1 = (char)uVar2;
        lVar5 = *(long *)(this + 8) + 1;
        *(long *)(this + 8) = lVar5;
        plVar3 = *(long **)(this + *(long *)(*(long *)this + -0x18) + 0x28);
        if (plVar3[3] == plVar3[4]) {
          (**(code **)(*plVar3 + 0x50))();
          lVar5 = *(long *)(this + 8);
        }
        else {
          plVar3[3] = plVar3[3] + 1;
        }
        if (param_2 + -1 <= lVar5) break;
        lVar5 = *(long *)(*(long *)this + -0x18);
        param_1 = param_1 + 1;
      }
      uVar2 = 0;
      param_1 = param_1 + 1;
LAB_017f10d0:
      lVar6 = *(long *)(this + 8);
      this_00 = this + *(long *)(*(long *)this + -0x18);
      uVar4 = *(uint *)(this_00 + 0x20);
    }
    else {
      uVar4 = 0;
      uVar2 = 0;
    }
    uVar1 = uVar2 | 4;
    if (lVar6 != 0) {
      uVar1 = uVar2;
    }
    ios_base::clear((ios_base *)this_00,uVar4 | uVar1);
  }
  else {
    ios_base::clear((ios_base *)this_00,*(uint *)(this_00 + 0x20) | 4);
  }
LAB_017f0f9c:
  if (0 < param_2) {
    *param_1 = '\0';
  }
  return this;
}

