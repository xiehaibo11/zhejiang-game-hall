
/* std::__ndk1::__wrap_iter<char const*> std::__ndk1::basic_regex<char,
   std::__ndk1::regex_traits<char> >::__parse_equivalence_class<std::__ndk1::__wrap_iter<char
   const*> >(std::__ndk1::__wrap_iter<char const*>, std::__ndk1::__wrap_iter<char const*>,
   std::__ndk1::__bracket_expression<char, std::__ndk1::regex_traits<char> >*) */

char * __thiscall
std::__ndk1::basic_regex<char,std::__ndk1::regex_traits<char>>::
__parse_equivalence_class<std::__ndk1::__wrap_iter<char_const*>>
          (basic_regex<char,std::__ndk1::regex_traits<char>> *this,char *param_2,char *param_3,
          long param_4)

{
  char *pcVar1;
  undefined1 *puVar2;
  ulong *puVar3;
  char cVar4;
  long lVar5;
  long lVar6;
  void *__src;
  long lVar7;
  char *pcVar8;
  undefined1 *puVar9;
  void *__dest;
  ulong uVar10;
  undefined2 local_8c [2];
  regex_traits<char> local_88;
  undefined7 uStack_87;
  ulong uStack_80;
  void *local_78;
  regex_traits<char> local_70 [8];
  ulong local_68;
  undefined1 *local_60;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  local_8c[0] = 0x5d3d;
  if ((1 < (long)param_3 - (long)param_2) && (param_3 + -1 != param_2)) {
    pcVar8 = param_2;
    do {
      cVar4 = *pcVar8;
      while (cVar4 != '=') {
        if (param_3 + -2 == pcVar8) goto LAB_00f2a6e0;
        pcVar1 = pcVar8 + 1;
        pcVar8 = pcVar8 + 1;
        cVar4 = *pcVar1;
      }
      lVar7 = 0;
      do {
        if (lVar7 == 1) {
          if (pcVar8 == param_3) goto LAB_00f2a6e0;
          regex_traits<char>::__lookup_collatename<std::__ndk1::__wrap_iter<char_const*>>
                    (local_70,this,param_2,pcVar8,0);
          uVar10 = (ulong)((byte)local_70[0] >> 1);
          if (((byte)local_70[0] & 1) != 0) {
            uVar10 = local_68;
          }
          if (uVar10 == 0) goto LAB_00f2a6e4;
          puVar9 = (undefined1 *)((ulong)local_70 | 1);
          puVar2 = puVar9;
          if (((byte)local_70[0] & 1) != 0) {
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
            uVar10 = (ulong)((byte)local_70[0] >> 1);
            if (((byte)local_70[0] & 1) != 0) {
              uVar10 = local_68;
            }
            if (uVar10 == 2) {
                    /* catch() { ... } // from try @ 00f2a668 with catch @ 00f2a678 */
              if (((byte)local_70[0] & 1) != 0) {
                puVar9 = local_60;
              }
              FUN_00eaec78(param_4,*puVar9,puVar9[1]);
            }
            else {
              if (uVar10 != 1) {
                FUN_00eaed70();
LAB_00f2a6f0:
                    /* WARNING: Subroutine does not return */
                __basic_string_common<true>::__throw_length_error();
              }
              if (((byte)local_70[0] & 1) != 0) {
                puVar9 = local_60;
              }
              FUN_00eac2e0(param_4,*puVar9);
            }
          }
          else {
            puVar3 = *(ulong **)(param_4 + 0x90);
            if (puVar3 == *(ulong **)(param_4 + 0x98)) {
              vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
              ::
              __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
                        ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                          *)(param_4 + 0x88),(basic_string *)&local_88);
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
                if (0xffffffffffffffef < uStack_80) goto LAB_00f2a6f0;
                if (uStack_80 < 0x17) {
                    /* try { // try from 00f2a668 to 0102a66b has its CatchHandler @ 00f2a678 */
                    /* try { // try from 00f2a66c to 0102a68b has its CatchHandler @ 00f2a640 */
                  __dest = (void *)((long)puVar3 + 1);
                  *(char *)puVar3 = (char)((int)uStack_80 << 1);
                  if (uStack_80 != 0) goto LAB_00f2a6b8;
                }
                else {
                  uVar10 = uStack_80 + 0x10 & 0xfffffffffffffff0;
                  __dest = operator_new(uVar10);
                  puVar3[1] = uStack_80;
                  puVar3[2] = (ulong)__dest;
                  *puVar3 = uVar10 | 1;
LAB_00f2a6b8:
                  memcpy(__dest,__src,uStack_80);
                }
                *(undefined1 *)((long)__dest + uStack_80) = 0;
              }
              *(ulong **)(param_4 + 0x90) = puVar3 + 3;
            }
          }
          if (((byte)local_88 & 1) != 0) {
            operator_delete(local_78);
          }
          if (((byte)local_70[0] & 1) != 0) {
            operator_delete(local_60);
          }
          if (*(long *)(lVar5 + 0x28) == local_58) {
                    /* try { // try from 00f2a640 to 0102a667 has its CatchHandler @ 00f2a640
                       catch() { ... } // from try @ 00f2a640 with catch @ 00f2a640
                       catch() { ... } // from try @ 00f2a66c with catch @ 00f2a640 */
            return pcVar8 + 2;
          }
          goto LAB_00f2a6e8;
        }
        lVar6 = lVar7 + 1;
        pcVar1 = (char *)(((ulong)local_8c | 1) + lVar7);
        lVar7 = lVar7 + 1;
      } while (pcVar8[lVar6] == *pcVar1);
      pcVar8 = pcVar8 + 1;
    } while (param_3 + -1 != pcVar8);
  }
LAB_00f2a6e0:
  FUN_00ead710();
LAB_00f2a6e4:
  FUN_00eaed70();
LAB_00f2a6e8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

