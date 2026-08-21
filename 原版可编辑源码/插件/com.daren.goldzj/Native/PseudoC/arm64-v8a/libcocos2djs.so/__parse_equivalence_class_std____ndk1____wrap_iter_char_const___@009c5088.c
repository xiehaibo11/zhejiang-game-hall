
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
  long lVar4;
  long lVar5;
  void *__src;
  long lVar6;
  char *pcVar7;
  void *__dest;
  undefined1 *puVar8;
  ulong uVar9;
  undefined2 local_8c [2];
  regex_traits<char> local_88;
  undefined7 uStack_87;
  ulong uStack_80;
  void *local_78;
  regex_traits<char> local_70 [8];
  ulong local_68;
  undefined1 *local_60;
  long local_58;
  
                    /* try { // try from 009c5090 to 00ac509b has its CatchHandler @ 009c524c */
                    /* try { // try from 009c509c to 00ac51d3 has its CatchHandler @ 009c5264 */
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  local_8c[0] = 0x5d3d;
  if ((1 < (long)param_3 - (long)param_2) && (param_3 + -1 != param_2)) {
    pcVar7 = param_2;
    do {
      if (*pcVar7 != '=') {
        pcVar1 = pcVar7 + 2;
        do {
          pcVar7 = pcVar1;
          if (param_3 == pcVar7) goto LAB_009c5318;
          pcVar1 = pcVar7 + 1;
        } while (pcVar7[-1] != '=');
        pcVar7 = pcVar7 + -1;
      }
      lVar6 = 0;
      do {
        if (lVar6 == 1) {
          if (pcVar7 != param_3) {
            regex_traits<char>::__lookup_collatename<std::__ndk1::__wrap_iter<char_const*>>
                      (local_70,this,param_2,pcVar7,0);
            uVar9 = (ulong)((byte)local_70[0] >> 1);
            if (((byte)local_70[0] & 1) != 0) {
              uVar9 = local_68;
            }
            if (uVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00868820();
            }
            puVar8 = (undefined1 *)((ulong)local_70 | 1);
            puVar2 = puVar8;
            if (((byte)local_70[0] & 1) != 0) {
              puVar2 = local_60;
            }
            regex_traits<char>::__transform_primary<std::__ndk1::__wrap_iter<char*>>
                      (&local_88,this,puVar2,puVar2 + uVar9,0);
            __src = local_78;
            uVar9 = (ulong)((byte)local_88 >> 1);
            if (((byte)local_88 & 1) != 0) {
              uVar9 = uStack_80;
            }
            if (uVar9 == 0) {
              uVar9 = (ulong)((byte)local_70[0] >> 1);
              if (((byte)local_70[0] & 1) != 0) {
                uVar9 = local_68;
              }
              if (uVar9 == 2) {
                if (((byte)local_70[0] & 1) != 0) {
                  puVar8 = local_60;
                }
                    /* try { // try from 009c52bc to 00ac530f has its CatchHandler @ 009c52bc
                       catch() { ... } // from try @ 009c52bc with catch @ 009c52bc
                       catch() { ... } // from try @ 009c54c0 with catch @ 009c52bc */
                FUN_00868720(param_4,*puVar8,puVar8[1]);
              }
              else {
                if (uVar9 != 1) {
                    /* WARNING: Subroutine does not return */
                  FUN_00868820();
                }
                if (((byte)local_70[0] & 1) != 0) {
                  puVar8 = local_60;
                }
                FUN_008662f0(param_4,*puVar8);
              }
              goto joined_r0x009c5238;
            }
            puVar3 = *(ulong **)(param_4 + 0x90);
            if (puVar3 == *(ulong **)(param_4 + 0x98)) {
              vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
              ::
              __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
                        ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                          *)(param_4 + 0x88),(basic_string *)&local_88);
              goto joined_r0x009c5238;
            }
            puVar3[1] = 0;
            puVar3[2] = 0;
            *puVar3 = 0;
            if (((byte)local_88 & 1) == 0) {
                    /* try { // try from 009c51d4 to 00ac52bb has its CatchHandler @ 009c500c */
              puVar3[2] = (ulong)local_78;
              puVar3[1] = uStack_80;
              *puVar3 = CONCAT71(uStack_87,local_88);
            }
            else {
              if (0xffffffffffffffef < uStack_80) {
                    /* WARNING: Subroutine does not return */
                __basic_string_common<true>::__throw_length_error();
              }
              if (uStack_80 < 0x17) {
                __dest = (void *)((long)puVar3 + 1);
                *(char *)puVar3 = (char)((int)uStack_80 << 1);
                if (uStack_80 != 0) goto LAB_009c52ec;
              }
              else {
                uVar9 = uStack_80 + 0x10 & 0xfffffffffffffff0;
                __dest = operator_new(uVar9);
                puVar3[1] = uStack_80;
                puVar3[2] = (ulong)__dest;
                *puVar3 = uVar9 | 1;
LAB_009c52ec:
                memcpy(__dest,__src,uStack_80);
              }
              *(undefined1 *)((long)__dest + uStack_80) = 0;
            }
            *(long *)(param_4 + 0x90) = *(long *)(param_4 + 0x90) + 0x18;
                    /* try { // try from 009c5310 to 00ac5327 has its CatchHandler @ 009c552c */
joined_r0x009c5238:
            if (((byte)local_88 & 1) != 0) {
              operator_delete(local_78);
            }
            if (((byte)local_70[0] & 1) != 0) {
                    /* catch() { ... } // from try @ 009c5090 with catch @ 009c524c */
                    /* catch() { ... } // from try @ 009c5084 with catch @ 009c5250 */
              operator_delete(local_60);
            }
                    /* catch() { ... } // from try @ 009c5064 with catch @ 009c5254 */
            if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
              __stack_chk_fail();
            }
                    /* catch() { ... } // from try @ 009c509c with catch @ 009c5264 */
            return pcVar7 + 2;
          }
          goto LAB_009c5318;
        }
        lVar5 = lVar6 + 1;
        pcVar1 = (char *)(((ulong)local_8c | 1) + lVar6);
        lVar6 = lVar6 + 1;
      } while (pcVar7[lVar5] == *pcVar1);
      pcVar7 = pcVar7 + 1;
    } while (param_3 + -1 != pcVar7);
  }
LAB_009c5318:
                    /* WARNING: Subroutine does not return */
  FUN_00867568();
}

