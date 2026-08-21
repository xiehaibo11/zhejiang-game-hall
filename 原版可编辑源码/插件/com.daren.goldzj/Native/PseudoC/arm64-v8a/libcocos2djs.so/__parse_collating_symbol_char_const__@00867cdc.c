
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
  local_54[0] = 0x5d2e;
  if ((1 < (long)param_2 - (long)param_1) && (param_2 + -1 != param_1)) {
    pcVar6 = param_1;
    do {
      if (*pcVar6 != '.') {
        pcVar1 = pcVar6 + 2;
        do {
          pcVar6 = pcVar1;
          if (param_2 == pcVar6) goto LAB_00867e2c;
          pcVar1 = pcVar6 + 1;
        } while (pcVar6[-1] != '.');
        pcVar6 = pcVar6 + -1;
      }
      lVar5 = 0;
      do {
        if (lVar5 == 1) {
          if (pcVar6 != param_2) {
            regex_traits<char>::__lookup_collatename<char_const*>
                      ((regex_traits<char> *)this,param_1,pcVar6,'\0');
            if (((byte)*param_3 & 1) == 0) {
              *(undefined2 *)param_3 = 0;
            }
            else {
              **(undefined1 **)(param_3 + 0x10) = 0;
              *(undefined8 *)(param_3 + 8) = 0;
              if (((byte)*param_3 & 1) != 0) {
                operator_delete(*(void **)(param_3 + 0x10));
                *(undefined8 *)param_3 = 0;
              }
            }
            *(undefined8 *)(param_3 + 8) = uStack_48;
            *(undefined8 *)param_3 = local_50;
            *(undefined8 *)(param_3 + 0x10) = local_40;
            uVar2 = (ulong)((byte)*param_3 >> 1);
            if (((byte)*param_3 & 1) != 0) {
              uVar2 = *(ulong *)(param_3 + 8);
            }
            if (1 < uVar2 - 1) {
                    /* WARNING: Subroutine does not return */
              FUN_00868820();
            }
            if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
              __stack_chk_fail();
            }
            return pcVar6 + 2;
          }
          goto LAB_00867e2c;
        }
        lVar4 = lVar5 + 1;
        pcVar1 = (char *)(((ulong)local_54 | 1) + lVar5);
        lVar5 = lVar5 + 1;
      } while (pcVar6[lVar4] == *pcVar1);
      pcVar6 = pcVar6 + 1;
    } while (param_2 + -1 != pcVar6);
  }
LAB_00867e2c:
                    /* WARNING: Subroutine does not return */
  FUN_00867568();
}

