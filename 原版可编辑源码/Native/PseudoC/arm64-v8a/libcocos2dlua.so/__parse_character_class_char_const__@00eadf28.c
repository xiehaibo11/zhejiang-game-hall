
/* char const* std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char>
   >::__parse_character_class<char const*>(char const*, char const*,
   std::__ndk1::__bracket_expression<char, std::__ndk1::regex_traits<char> >*) */

char * __thiscall
std::__ndk1::basic_regex<char,std::__ndk1::regex_traits<char>>::__parse_character_class<char_const*>
          (basic_regex<char,std::__ndk1::regex_traits<char>> *this,char *param_1,char *param_2,
          __bracket_expression *param_3)

{
  char *pcVar1;
  char cVar2;
  long lVar3;
  ushort uVar4;
  char *pcVar5;
  long lVar6;
  undefined2 local_24 [2];
  
                    /* try { // try from 00eadf30 to 00fadf7f has its CatchHandler @ 00eadf30
                       catch() { ... } // from try @ 00eadf30 with catch @ 00eadf30
                       catch() { ... } // from try @ 00eae0ac with catch @ 00eadf30 */
  local_24[0] = 0x5d3a;
  if ((1 < (long)param_2 - (long)param_1) && (param_2 + -1 != param_1)) {
    pcVar5 = param_1;
    do {
      cVar2 = *pcVar5;
      while (cVar2 != ':') {
                    /* try { // try from 00eadf80 to 00fadf8f has its CatchHandler @ 00eae148 */
        if (param_2 + -2 == pcVar5) goto LAB_00eae014;
        pcVar1 = pcVar5 + 1;
        pcVar5 = pcVar5 + 1;
        cVar2 = *pcVar1;
                    /* try { // try from 00eadf94 to 00fae05b has its CatchHandler @ 00eae150 */
      }
      lVar6 = 0;
      do {
        if (lVar6 == 1) {
          if (pcVar5 == param_2) goto LAB_00eae014;
          uVar4 = regex_traits<char>::__lookup_classname<char_const*>
                            ((char *)this,param_1,SUB81(pcVar5,0),
                             (byte)*(undefined4 *)(this + 0x18) & 1);
          if (uVar4 != 0) {
            *(ushort *)(param_3 + 0xa0) = *(ushort *)(param_3 + 0xa0) | uVar4;
            return pcVar5 + 2;
          }
          goto LAB_00eae018;
        }
        lVar3 = lVar6 + 1;
        pcVar1 = (char *)(((ulong)local_24 | 1) + lVar6);
        lVar6 = lVar6 + 1;
      } while (pcVar5[lVar3] == *pcVar1);
      pcVar5 = pcVar5 + 1;
    } while (param_2 + -1 != pcVar5);
  }
LAB_00eae014:
  FUN_00ead710();
LAB_00eae018:
                    /* WARNING: Subroutine does not return */
  FUN_00eaf2b4();
}

