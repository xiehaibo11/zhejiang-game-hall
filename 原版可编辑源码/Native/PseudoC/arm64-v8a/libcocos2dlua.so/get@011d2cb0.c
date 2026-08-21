
/* std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >::get(char*, long, char) */

basic_istream<char,std::__ndk1::char_traits<char>> * __thiscall
std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::get
          (basic_istream<char,std::__ndk1::char_traits<char>> *this,char *param_1,long param_2,
          char param_3)

{
  uint uVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  
  *(undefined8 *)(this + 8) = 0;
  lVar4 = *(long *)(*(long *)this + -0x18);
  if (*(uint *)(this + lVar4 + 0x20) == 0) {
    if (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)(this + lVar4 + 0x88) !=
        (basic_ostream<char,std::__ndk1::char_traits<char>> *)0x0) {
      basic_ostream<char,std::__ndk1::char_traits<char>>::flush
                (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)(this + lVar4 + 0x88));
      lVar4 = *(long *)(*(long *)this + -0x18);
      if (*(int *)(this + lVar4 + 0x20) != 0) goto LAB_011d2e58;
    }
    if (param_2 < 1) {
      uVar3 = 4;
    }
    else {
      lVar5 = *(long *)(this + 8);
      if (lVar5 < param_2 + -1) {
        while( true ) {
          plVar2 = *(long **)(this + lVar4 + 0x28);
          if ((byte *)plVar2[3] == (byte *)plVar2[4]) {
            uVar1 = (**(code **)(*plVar2 + 0x48))();
            if (uVar1 == 0xffffffff) {
              uVar1 = 2;
              goto LAB_011d2e14;
            }
          }
          else {
            uVar1 = (uint)*(byte *)plVar2[3];
          }
          if ((uVar1 & 0xff) == (uint)(byte)param_3) {
            uVar1 = 0;
            goto LAB_011d2e14;
          }
          *param_1 = (char)uVar1;
          lVar4 = *(long *)(this + 8) + 1;
          *(long *)(this + 8) = lVar4;
          plVar2 = *(long **)(this + *(long *)(*(long *)this + -0x18) + 0x28);
          if (plVar2[3] == plVar2[4]) {
            (**(code **)(*plVar2 + 0x50))();
            lVar4 = *(long *)(this + 8);
          }
          else {
            plVar2[3] = plVar2[3] + 1;
          }
          if (param_2 + -1 <= lVar4) break;
          lVar4 = *(long *)(*(long *)this + -0x18);
          param_1 = param_1 + 1;
        }
        uVar1 = 0;
        param_1 = param_1 + 1;
LAB_011d2e14:
        lVar5 = *(long *)(this + 8);
      }
      else {
        uVar1 = 0;
      }
      uVar3 = uVar1 | 4;
      if (lVar5 != 0) {
        uVar3 = uVar1;
      }
      *param_1 = '\0';
    }
    lVar4 = *(long *)(*(long *)this + -0x18);
    uVar1 = *(uint *)(this + lVar4 + 0x20) | uVar3 | (uint)(*(long *)(this + lVar4 + 0x28) == 0);
    uVar3 = uVar1 & *(uint *)(this + lVar4 + 0x24);
    *(uint *)(this + lVar4 + 0x20) = uVar1;
  }
  else {
    uVar1 = *(uint *)(this + lVar4 + 0x20) | (uint)(*(long *)(this + lVar4 + 0x28) == 0) | 4;
    uVar3 = uVar1 & *(uint *)(this + lVar4 + 0x24);
    *(uint *)(this + lVar4 + 0x20) = uVar1;
  }
  if (uVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_011dac54("ios_base::clear");
  }
LAB_011d2e58:
  if (0 < param_2) {
    *param_1 = '\0';
  }
  return this;
}

