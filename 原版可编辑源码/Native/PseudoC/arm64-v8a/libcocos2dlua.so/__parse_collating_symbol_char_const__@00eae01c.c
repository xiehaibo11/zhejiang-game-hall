
/* char const* std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char>
   >::__parse_collating_symbol<char const*>(char const*, char const*,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&)
    */

char * __thiscall
std::__ndk1::basic_regex<char,std::__ndk1::regex_traits<char>>::
__parse_collating_symbol<char_const*>
          (basic_regex<char,std::__ndk1::regex_traits<char>> *this,char *param_1,char *param_2,
          basic_string *param_3)

{
  char *pcVar1;
  ulong uVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  char *pcVar6;
  long lVar7;
  undefined2 local_54 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  local_54[0] = 0x5d2e;
  if ((1 < (long)param_2 - (long)param_1) && (param_2 + -1 != param_1)) {
                    /* try { // try from 00eae060 to 00fae063 has its CatchHandler @ 00eae130 */
                    /* try { // try from 00eae06c to 00fae073 has its CatchHandler @ 00eae150 */
    pcVar6 = param_1;
    do {
      cVar3 = *pcVar6;
                    /* try { // try from 00eae078 to 00fae07f has its CatchHandler @ 00eae118 */
      while (cVar3 != '.') {
                    /* try { // try from 00eae084 to 00fae08b has its CatchHandler @ 00eae108 */
        if (param_2 + -2 == pcVar6) goto LAB_00eae174;
        pcVar1 = pcVar6 + 1;
        pcVar6 = pcVar6 + 1;
        cVar3 = *pcVar1;
                    /* try { // try from 00eae090 to 00fae097 has its CatchHandler @ 00eae0f8 */
      }
                    /* try { // try from 00eae09c to 00fae0a3 has its CatchHandler @ 00eae0e8 */
      lVar7 = 0;
      do {
                    /* try { // try from 00eae0a8 to 00fae0ab has its CatchHandler @ 00eae0d4 */
        if (lVar7 == 1) {
                    /* catch() { ... } // from try @ 00eae0a8 with catch @ 00eae0d4 */
          if (pcVar6 == param_2) goto LAB_00eae174;
                    /* catch() { ... } // from try @ 00eae09c with catch @ 00eae0e8 */
          regex_traits<char>::__lookup_collatename<char_const*>
                    ((regex_traits<char> *)this,param_1,pcVar6,'\0');
          if (((byte)*param_3 & 1) == 0) {
            *(undefined2 *)param_3 = 0;
                    /* catch() { ... } // from try @ 00eae090 with catch @ 00eae0f8 */
          }
          else {
            **(undefined1 **)(param_3 + 0x10) = 0;
                    /* catch() { ... } // from try @ 00eae084 with catch @ 00eae108 */
            *(undefined8 *)(param_3 + 8) = 0;
            if (((byte)*param_3 & 1) != 0) {
              operator_delete(*(void **)(param_3 + 0x10));
                    /* catch() { ... } // from try @ 00eae078 with catch @ 00eae118 */
              *(undefined8 *)param_3 = 0;
            }
          }
          *(undefined8 *)(param_3 + 8) = uStack_48;
          *(undefined8 *)param_3 = local_50;
                    /* catch() { ... } // from try @ 00eae060 with catch @ 00eae130 */
          *(undefined8 *)(param_3 + 0x10) = local_40;
          uVar2 = (ulong)((byte)*param_3 >> 1);
          if (((byte)*param_3 & 1) != 0) {
            uVar2 = *(ulong *)(param_3 + 8);
          }
                    /* catch() { ... } // from try @ 00eadf80 with catch @ 00eae148 */
          if (1 < uVar2 - 1) goto LAB_00eae178;
                    /* catch() { ... } // from try @ 00eadf94 with catch @ 00eae150
                       catch() { ... } // from try @ 00eae06c with catch @ 00eae150 */
          if (*(long *)(lVar4 + 0x28) == local_38) {
            return pcVar6 + 2;
          }
          goto LAB_00eae17c;
        }
        lVar5 = lVar7 + 1;
                    /* try { // try from 00eae0ac to 00fae19f has its CatchHandler @ 00eadf30 */
        pcVar1 = (char *)(((ulong)local_54 | 1) + lVar7);
        lVar7 = lVar7 + 1;
      } while (pcVar6[lVar5] == *pcVar1);
      pcVar6 = pcVar6 + 1;
    } while (param_2 + -1 != pcVar6);
  }
LAB_00eae174:
  FUN_00ead710();
LAB_00eae178:
  FUN_00eaed70();
LAB_00eae17c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

