
/* std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char>
   >::seekg(std::__ndk1::fpos<mbstate_t>) */

long * std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::seekg
                 (long *param_1,undefined8 param_2,undefined8 param_3)

{
  ios_base *piVar1;
  long *plVar2;
  long extraout_x1;
  long lVar3;
  
  piVar1 = (ios_base *)((long)param_1 + *(long *)(*param_1 + -0x18));
  ios_base::clear(piVar1,*(uint *)(piVar1 + 0x20) & 0xfffffffd);
  lVar3 = *(long *)(*param_1 + -0x18);
  piVar1 = (ios_base *)((long)param_1 + lVar3);
  if (*(uint *)(piVar1 + 0x20) == 0) {
    if (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)(piVar1 + 0x88) !=
        (basic_ostream<char,std::__ndk1::char_traits<char>> *)0x0) {
      basic_ostream<char,std::__ndk1::char_traits<char>>::flush
                (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)(piVar1 + 0x88));
      lVar3 = *(long *)(*param_1 + -0x18);
      if (*(int *)((long)param_1 + lVar3 + 0x20) != 0) {
        return param_1;
      }
    }
    plVar2 = *(long **)((long)param_1 + lVar3 + 0x28);
    (**(code **)(*plVar2 + 0x28))(plVar2,param_2,param_3,8);
    if (extraout_x1 == -1) {
      piVar1 = (ios_base *)((long)param_1 + *(long *)(*param_1 + -0x18));
      ios_base::clear(piVar1,*(uint *)(piVar1 + 0x20) | 4);
    }
  }
  else {
    ios_base::clear(piVar1,*(uint *)(piVar1 + 0x20) | 4);
  }
  return param_1;
}

