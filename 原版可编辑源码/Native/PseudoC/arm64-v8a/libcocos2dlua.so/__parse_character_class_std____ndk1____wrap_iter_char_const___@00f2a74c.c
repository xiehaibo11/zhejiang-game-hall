
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
  char cVar2;
  long lVar3;
  ushort uVar4;
  long lVar5;
  char *pcVar6;
  undefined2 local_24 [2];
  
  local_24[0] = 0x5d3a;
  if ((1 < (long)param_3 - (long)param_2) && (param_3 + -1 != param_2)) {
    pcVar6 = param_2;
    do {
      cVar2 = *pcVar6;
      while (cVar2 != ':') {
        if (param_3 + -2 == pcVar6) goto LAB_00f2a834;
        pcVar1 = pcVar6 + 1;
        pcVar6 = pcVar6 + 1;
        cVar2 = *pcVar1;
      }
      lVar5 = 0;
      do {
        if (lVar5 == 1) {
          if (pcVar6 == param_3) goto LAB_00f2a834;
                    /* try { // try from 00f2a7fc to 0102a803 has its CatchHandler @ 00f2a844 */
          uVar4 = regex_traits<char>::__lookup_classname<std::__ndk1::__wrap_iter<char_const*>>
                            (this,param_2,pcVar6,*(uint *)(this + 0x18) & 1,0);
          if (uVar4 != 0) {
                    /* try { // try from 00f2a818 to 0102a81b has its CatchHandler @ 00f2a834 */
                    /* try { // try from 00f2a81c to 0102a85f has its CatchHandler @ 00f2a7d8 */
            *(ushort *)(param_4 + 0xa0) = *(ushort *)(param_4 + 0xa0) | uVar4;
            return pcVar6 + 2;
          }
          goto LAB_00f2a838;
        }
        lVar3 = lVar5 + 1;
        pcVar1 = (char *)(((ulong)local_24 | 1) + lVar5);
        lVar5 = lVar5 + 1;
                    /* catch() { ... } // from try @ 00f2a81c with catch @ 00f2a7d8 */
      } while (pcVar6[lVar3] == *pcVar1);
      pcVar6 = pcVar6 + 1;
    } while (param_3 + -1 != pcVar6);
  }
LAB_00f2a834:
                    /* catch() { ... } // from try @ 00f2a818 with catch @ 00f2a834 */
  FUN_00ead710();
LAB_00f2a838:
                    /* WARNING: Subroutine does not return */
  FUN_00eaf2b4();
}

