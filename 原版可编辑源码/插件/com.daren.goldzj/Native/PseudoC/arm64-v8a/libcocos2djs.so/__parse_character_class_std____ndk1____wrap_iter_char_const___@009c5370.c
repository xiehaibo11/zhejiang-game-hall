
/* std::__ndk1::__wrap_iter<char const*> std::__ndk1::basic_regex<char,
   std::__ndk1::regex_traits<char> >::__parse_character_class<std::__ndk1::__wrap_iter<char const*>
   >(std::__ndk1::__wrap_iter<char const*>, std::__ndk1::__wrap_iter<char const*>,
   std::__ndk1::__bracket_expression<char, std::__ndk1::regex_traits<char> >*) */

char * __thiscall
std::__ndk1::basic_regex<char,std::__ndk1::regex_traits<char>>::
__parse_character_class<std::__ndk1::__wrap_iter<char_const*>>
          (basic_regex<char,std::__ndk1::regex_traits<char>> *this,char *param_2,char *param_3,
          long param_4)

{
  char *pcVar1;
  long lVar2;
  ushort uVar3;
  long lVar4;
  char *pcVar5;
  undefined2 local_24 [2];
  
                    /* try { // try from 009c5388 to 00ac53a7 has its CatchHandler @ 009c5514 */
  local_24[0] = 0x5d3a;
  if ((1 < (long)param_3 - (long)param_2) && (param_3 + -1 != param_2)) {
    pcVar5 = param_2;
    do {
      if (*pcVar5 != ':') {
        pcVar1 = pcVar5 + 2;
        do {
          pcVar5 = pcVar1;
                    /* try { // try from 009c53c4 to 00ac5443 has its CatchHandler @ 009c553c */
          if (param_3 == pcVar5) goto LAB_009c5454;
          pcVar1 = pcVar5 + 1;
        } while (pcVar5[-1] != ':');
        pcVar5 = pcVar5 + -1;
      }
      lVar4 = 0;
      do {
        if (lVar4 == 1) {
          if (pcVar5 != param_3) {
            uVar3 = regex_traits<char>::__lookup_classname<std::__ndk1::__wrap_iter<char_const*>>
                              (this,param_2,pcVar5,*(uint *)(this + 0x18) & 1,0);
            if (uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00868cc8();
            }
            *(ushort *)(param_4 + 0xa0) = *(ushort *)(param_4 + 0xa0) | uVar3;
            return pcVar5 + 2;
          }
          goto LAB_009c5454;
        }
        lVar2 = lVar4 + 1;
        pcVar1 = (char *)(((ulong)local_24 | 1) + lVar4);
        lVar4 = lVar4 + 1;
      } while (pcVar5[lVar2] == *pcVar1);
      pcVar5 = pcVar5 + 1;
    } while (param_3 + -1 != pcVar5);
  }
LAB_009c5454:
                    /* WARNING: Subroutine does not return */
  FUN_00867568();
}

