
/* std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char>
   >::seekg(std::__ndk1::fpos<mbstate_t>) */

long * std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::seekg
                 (long *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  basic_ostream<char,std::__ndk1::char_traits<char>> *this;
  long *plVar3;
  long extraout_x1;
  long lVar4;
  
  lVar4 = *(long *)(*param_1 + -0x18);
  uVar1 = *(uint *)((long)param_1 + lVar4 + 0x20) & 0xfffffffd;
  uVar2 = uVar1 | *(long *)((long)param_1 + lVar4 + 0x28) == 0;
  *(uint *)((long)param_1 + lVar4 + 0x20) = uVar2;
  if ((uVar2 & *(uint *)((long)param_1 + lVar4 + 0x24)) == 0) {
    lVar4 = *(long *)(*param_1 + -0x18);
    uVar2 = *(uint *)((long)param_1 + lVar4 + 0x20);
    if (uVar2 == 0) {
      this = *(basic_ostream<char,std::__ndk1::char_traits<char>> **)((long)param_1 + lVar4 + 0x88);
      if (this != (basic_ostream<char,std::__ndk1::char_traits<char>> *)0x0) {
        basic_ostream<char,std::__ndk1::char_traits<char>>::flush(this);
        lVar4 = *(long *)(*param_1 + -0x18);
        if (*(int *)((long)param_1 + lVar4 + 0x20) != 0) {
          return param_1;
        }
      }
      plVar3 = *(long **)((long)param_1 + lVar4 + 0x28);
      (**(code **)(*plVar3 + 0x28))(plVar3,param_2,param_3,8);
      uVar2 = uVar1 | 4;
      if (extraout_x1 != -1) {
        uVar2 = uVar1;
      }
      lVar4 = *(long *)(*param_1 + -0x18);
      uVar1 = *(uint *)((long)param_1 + lVar4 + 0x20) | uVar2 |
              (uint)(*(long *)((long)param_1 + lVar4 + 0x28) == 0);
      uVar2 = uVar1 & *(uint *)((long)param_1 + lVar4 + 0x24);
      *(uint *)((long)param_1 + lVar4 + 0x20) = uVar1;
    }
    else {
      uVar1 = uVar2 | *(long *)((long)param_1 + lVar4 + 0x28) == 0 | 4;
      uVar2 = uVar1 & *(uint *)((long)param_1 + lVar4 + 0x24);
      *(uint *)((long)param_1 + lVar4 + 0x20) = uVar1;
    }
    if (uVar2 == 0) {
      return param_1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_011dac54("ios_base::clear");
}

