
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
  char cVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  char *pcVar7;
  undefined2 local_54 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
                    /* catch() { ... } // from try @ 00f2a7fc with catch @ 00f2a844 */
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  local_54[0] = 0x5d2e;
  if ((1 < (long)param_3 - (long)param_2) && (param_3 + -1 != param_2)) {
    pcVar7 = param_2;
    do {
      cVar3 = *pcVar7;
      while (cVar3 != '.') {
        if (param_3 + -2 == pcVar7) goto LAB_00f2a990;
        pcVar1 = pcVar7 + 1;
        pcVar7 = pcVar7 + 1;
        cVar3 = *pcVar1;
      }
      lVar6 = 0;
      do {
        if (lVar6 == 1) {
          if (pcVar7 == param_3) goto LAB_00f2a990;
          regex_traits<char>::__lookup_collatename<std::__ndk1::__wrap_iter<char_const*>>
                    ((regex_traits<char> *)&local_50,this,param_2,pcVar7,0);
          if ((*param_4 & 1) == 0) {
            param_4[0] = 0;
            param_4[1] = 0;
          }
          else {
            **(undefined1 **)(param_4 + 0x10) = 0;
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
          if (1 < uVar2 - 1) goto LAB_00f2a994;
          if (*(long *)(lVar4 + 0x28) == local_38) {
            return pcVar7 + 2;
          }
          goto LAB_00f2a998;
        }
        lVar5 = lVar6 + 1;
        pcVar1 = (char *)(((ulong)local_54 | 1) + lVar6);
        lVar6 = lVar6 + 1;
      } while (pcVar7[lVar5] == *pcVar1);
      pcVar7 = pcVar7 + 1;
    } while (param_3 + -1 != pcVar7);
  }
LAB_00f2a990:
  FUN_00ead710();
LAB_00f2a994:
  FUN_00eaed70();
LAB_00f2a998:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

