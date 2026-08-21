
/* char const* std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char>
   >::__parse_equivalence_class<char const*>(char const*, char const*,
   std::__ndk1::__bracket_expression<char, std::__ndk1::regex_traits<char> >*) */

char * __thiscall
std::__ndk1::basic_regex<char,std::__ndk1::regex_traits<char>>::
__parse_equivalence_class<char_const*>
          (basic_regex<char,std::__ndk1::regex_traits<char>> *this,char *param_1,char *param_2,
          __bracket_expression *param_3)

{
  char *pcVar1;
  undefined1 *puVar2;
  ulong *puVar3;
  char cVar4;
  long lVar5;
  long lVar6;
  void *__src;
  char *pcVar7;
  long lVar8;
  undefined1 *puVar9;
  void *__dest;
  ulong uVar10;
  undefined2 local_8c [2];
  regex_traits<char> local_88;
  undefined7 uStack_87;
  ulong uStack_80;
  void *local_78;
  byte local_70 [8];
  ulong local_68;
  undefined1 *local_60;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  local_8c[0] = 0x5d3d;
  if ((1 < (long)param_2 - (long)param_1) && (param_2 + -1 != param_1)) {
    pcVar7 = param_1;
    do {
      cVar4 = *pcVar7;
      while (cVar4 != '=') {
        if (param_2 + -2 == pcVar7) goto LAB_00eadeb4;
        pcVar1 = pcVar7 + 1;
        pcVar7 = pcVar7 + 1;
        cVar4 = *pcVar1;
      }
      lVar8 = 0;
      do {
        if (lVar8 == 1) {
          if (pcVar7 == param_2) goto LAB_00eadeb4;
          regex_traits<char>::__lookup_collatename<char_const*>
                    ((regex_traits<char> *)this,param_1,pcVar7,'\0');
          uVar10 = (ulong)(local_70[0] >> 1);
          if ((local_70[0] & 1) != 0) {
            uVar10 = local_68;
          }
          if (uVar10 == 0) goto LAB_00eadeb8;
          puVar9 = (undefined1 *)((ulong)local_70 | 1);
          puVar2 = puVar9;
          if ((local_70[0] & 1) != 0) {
            puVar2 = local_60;
          }
          regex_traits<char>::__transform_primary<std::__ndk1::__wrap_iter<char*>>
                    (&local_88,this,puVar2,puVar2 + uVar10,0);
          __src = local_78;
          uVar10 = (ulong)((byte)local_88 >> 1);
          if (((byte)local_88 & 1) != 0) {
            uVar10 = uStack_80;
          }
          if (uVar10 == 0) {
            uVar10 = (ulong)(local_70[0] >> 1);
            if ((local_70[0] & 1) != 0) {
              uVar10 = local_68;
            }
            if (uVar10 == 2) {
              if ((local_70[0] & 1) != 0) {
                puVar9 = local_60;
              }
              FUN_00eaec78(param_3,*puVar9,puVar9[1]);
            }
            else {
              if (uVar10 != 1) {
                FUN_00eaed70();
LAB_00eadec4:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00eadec8 to 00fadecf has its CatchHandler @ 00eadf14 */
                __basic_string_common<true>::__throw_length_error();
              }
              if ((local_70[0] & 1) != 0) {
                puVar9 = local_60;
              }
              FUN_00eac2e0(param_3,*puVar9);
            }
          }
          else {
            puVar3 = *(ulong **)(param_3 + 0x90);
            if (puVar3 == *(ulong **)(param_3 + 0x98)) {
              vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
              ::
              __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
                        ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                          *)(param_3 + 0x88),(basic_string *)&local_88);
            }
            else {
              *puVar3 = 0;
              puVar3[1] = 0;
              puVar3[2] = 0;
              if (((byte)local_88 & 1) == 0) {
                puVar3[2] = (ulong)local_78;
                puVar3[1] = uStack_80;
                *puVar3 = CONCAT71(uStack_87,local_88);
              }
              else {
                if (0xffffffffffffffef < uStack_80) goto LAB_00eadec4;
                if (uStack_80 < 0x17) {
                    /* try { // try from 00eade3c to 00fade43 has its CatchHandler @ 00eade88 */
                  __dest = (void *)((long)puVar3 + 1);
                  *(char *)puVar3 = (char)((int)uStack_80 << 1);
                    /* try { // try from 00eade44 to 00fadea3 has its CatchHandler @ 00eade18 */
                  if (uStack_80 != 0) goto LAB_00eade8c;
                }
                else {
                  uVar10 = uStack_80 + 0x10 & 0xfffffffffffffff0;
                  __dest = operator_new(uVar10);
                  puVar3[1] = uStack_80;
                  puVar3[2] = (ulong)__dest;
                    /* catch() { ... } // from try @ 00eade3c with catch @ 00eade88 */
                  *puVar3 = uVar10 | 1;
LAB_00eade8c:
                  memcpy(__dest,__src,uStack_80);
                }
                *(undefined1 *)((long)__dest + uStack_80) = 0;
              }
                    /* catch() { ... } // from try @ 00eaded0 with catch @ 00eadea4 */
              *(ulong **)(param_3 + 0x90) = puVar3 + 3;
            }
          }
          if (((byte)local_88 & 1) != 0) {
            operator_delete(local_78);
          }
          if ((local_70[0] & 1) != 0) {
            operator_delete(local_60);
          }
          if (*(long *)(lVar5 + 0x28) == local_58) {
                    /* catch() { ... } // from try @ 00eade44 with catch @ 00eade18 */
            return pcVar7 + 2;
          }
          goto LAB_00eadebc;
        }
        lVar6 = lVar8 + 1;
        pcVar1 = (char *)(((ulong)local_8c | 1) + lVar8);
        lVar8 = lVar8 + 1;
      } while (pcVar7[lVar6] == *pcVar1);
      pcVar7 = pcVar7 + 1;
    } while (param_2 + -1 != pcVar7);
  }
LAB_00eadeb4:
  FUN_00ead710();
LAB_00eadeb8:
  FUN_00eaed70();
LAB_00eadebc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

