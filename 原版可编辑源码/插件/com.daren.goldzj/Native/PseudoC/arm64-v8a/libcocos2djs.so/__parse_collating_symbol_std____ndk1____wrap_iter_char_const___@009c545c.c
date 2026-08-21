
/* std::__ndk1::__wrap_iter<char const*> std::__ndk1::basic_regex<char,
   std::__ndk1::regex_traits<char> >::__parse_collating_symbol<std::__ndk1::__wrap_iter<char const*>
   >(std::__ndk1::__wrap_iter<char const*>, std::__ndk1::__wrap_iter<char const*>,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&)
    */

char * __thiscall
std::__ndk1::basic_regex<char,std::__ndk1::regex_traits<char>>::
__parse_collating_symbol<std::__ndk1::__wrap_iter<char_const*>>
          (basic_regex<char,std::__ndk1::regex_traits<char>> *this,char *param_2,char *param_3,
          byte *param_4)

{
  char *pcVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  char *pcVar6;
  undefined2 local_54 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 009c547c to 00ac54bf has its CatchHandler @ 009c5514 */
  local_54[0] = 0x5d2e;
  if ((1 < (long)param_3 - (long)param_2) && (param_3 + -1 != param_2)) {
    pcVar6 = param_2;
    do {
      if (*pcVar6 != '.') {
        pcVar1 = pcVar6 + 2;
        do {
          pcVar6 = pcVar1;
                    /* try { // try from 009c54c0 to 00ac5593 has its CatchHandler @ 009c52bc */
          if (param_3 == pcVar6) goto LAB_009c55ac;
          pcVar1 = pcVar6 + 1;
        } while (pcVar6[-1] != '.');
        pcVar6 = pcVar6 + -1;
      }
      lVar5 = 0;
      do {
        if (lVar5 == 1) {
                    /* catch() { ... } // from try @ 009c533c with catch @ 009c550c */
                    /* catch() { ... } // from try @ 009c5330 with catch @ 009c5510 */
          if (pcVar6 != param_3) {
                    /* catch() { ... } // from try @ 009c5388 with catch @ 009c5514
                       catch() { ... } // from try @ 009c547c with catch @ 009c5514 */
            regex_traits<char>::__lookup_collatename<std::__ndk1::__wrap_iter<char_const*>>
                      ((regex_traits<char> *)&local_50,this,param_2,pcVar6,0);
            if ((*param_4 & 1) == 0) {
                    /* catch() { ... } // from try @ 009c5310 with catch @ 009c552c */
              param_4[0] = 0;
              param_4[1] = 0;
            }
            else {
              **(undefined1 **)(param_4 + 0x10) = 0;
                    /* catch() { ... } // from try @ 009c5348 with catch @ 009c553c
                       catch() { ... } // from try @ 009c53c4 with catch @ 009c553c */
              param_4[8] = 0;
              param_4[9] = 0;
              param_4[10] = 0;
              param_4[0xb] = 0;
              param_4[0xc] = 0;
              param_4[0xd] = 0;
              param_4[0xe] = 0;
              param_4[0xf] = 0;
              if ((*param_4 & 1) != 0) {
                operator_delete(*(void **)(param_4 + 0x10));
                param_4[0] = 0;
                param_4[1] = 0;
                param_4[2] = 0;
                param_4[3] = 0;
                param_4[4] = 0;
                param_4[5] = 0;
                param_4[6] = 0;
                param_4[7] = 0;
              }
            }
            *(undefined8 *)(param_4 + 8) = uStack_48;
            *(undefined8 *)param_4 = local_50;
            *(undefined8 *)(param_4 + 0x10) = local_40;
            uVar2 = (ulong)(*param_4 >> 1);
            if ((*param_4 & 1) != 0) {
              uVar2 = *(ulong *)(param_4 + 8);
            }
            if (1 < uVar2 - 1) {
                    /* WARNING: Subroutine does not return */
              FUN_00868820();
            }
            if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
              __stack_chk_fail();
            }
                    /* try { // try from 009c5594 to 00ac55eb has its CatchHandler @ 009c5594
                       catch() { ... } // from try @ 009c5594 with catch @ 009c5594
                       catch() { ... } // from try @ 009c575c with catch @ 009c5594 */
            return pcVar6 + 2;
          }
          goto LAB_009c55ac;
        }
        lVar4 = lVar5 + 1;
        pcVar1 = (char *)(((ulong)local_54 | 1) + lVar5);
        lVar5 = lVar5 + 1;
      } while (pcVar6[lVar4] == *pcVar1);
      pcVar6 = pcVar6 + 1;
    } while (param_3 + -1 != pcVar6);
  }
LAB_009c55ac:
                    /* WARNING: Subroutine does not return */
  FUN_00867568();
}

