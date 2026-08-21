
/* char const* std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char>
   >::__parse_character_class<char const*>(char const*, char const*,
   std::__ndk1::__bracket_expression<char, std::__ndk1::regex_traits<char> >*) */

char * __thiscall
std::__ndk1::basic_regex<char,std::__ndk1::regex_traits<char>>::__parse_character_class<char_const*>
          (basic_regex<char,std::__ndk1::regex_traits<char>> *this,char *param_1,char *param_2,
          __bracket_expression *param_3)

{
  char *pcVar1;
  long lVar2;
  ushort uVar3;
  long lVar4;
  char *pcVar5;
  undefined2 local_24 [2];
  
  local_24[0] = 0x5d3a;
  if ((1 < (long)param_2 - (long)param_1) && (param_2 + -1 != param_1)) {
    pcVar5 = param_1;
    do {
      if (*pcVar5 != ':') {
        pcVar1 = pcVar5 + 2;
        do {
          pcVar5 = pcVar1;
          if (param_2 == pcVar5) goto LAB_00867cd4;
          pcVar1 = pcVar5 + 1;
        } while (pcVar5[-1] != ':');
        pcVar5 = pcVar5 + -1;
      }
      lVar4 = 0;
      do {
        if (lVar4 == 1) {
          if (pcVar5 != param_2) {
            uVar3 = regex_traits<char>::__lookup_classname<char_const*>
                              ((char *)this,param_1,SUB81(pcVar5,0),
                               (byte)*(undefined4 *)(this + 0x18) & 1);
            if (uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00868cc8();
            }
            *(ushort *)(param_3 + 0xa0) = *(ushort *)(param_3 + 0xa0) | uVar3;
            return pcVar5 + 2;
          }
          goto LAB_00867cd4;
        }
        lVar2 = lVar4 + 1;
        pcVar1 = (char *)(((ulong)local_24 | 1) + lVar4);
        lVar4 = lVar4 + 1;
      } while (pcVar5[lVar2] == *pcVar1);
      pcVar5 = pcVar5 + 1;
    } while (param_2 + -1 != pcVar5);
  }
LAB_00867cd4:
                    /* WARNING: Subroutine does not return */
  FUN_00867568();
}

