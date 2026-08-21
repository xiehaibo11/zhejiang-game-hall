
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
  byte local_70 [8];
  ulong local_68;
  undefined1 *local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  local_8c[0] = 0x5d3d;
  if ((1 < (long)param_2 - (long)param_1) && (param_2 + -1 != param_1)) {
    pcVar7 = param_1;
    do {
      if (*pcVar7 != '=') {
        pcVar1 = pcVar7 + 2;
        do {
          pcVar7 = pcVar1;
          if (param_2 == pcVar7) goto LAB_00867be0;
          pcVar1 = pcVar7 + 1;
        } while (pcVar7[-1] != '=');
        pcVar7 = pcVar7 + -1;
      }
      lVar6 = 0;
      do {
        if (lVar6 == 1) {
          if (pcVar7 != param_2) {
            regex_traits<char>::__lookup_collatename<char_const*>
                      ((regex_traits<char> *)this,param_1,pcVar7,'\0');
            uVar9 = (ulong)(local_70[0] >> 1);
            if ((local_70[0] & 1) != 0) {
              uVar9 = local_68;
            }
            if (uVar9 == 0) {
LAB_00867be4:
                    /* WARNING: Subroutine does not return */
              FUN_00868820();
            }
            puVar8 = (undefined1 *)((ulong)local_70 | 1);
            puVar2 = puVar8;
            if ((local_70[0] & 1) != 0) {
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
              uVar9 = (ulong)(local_70[0] >> 1);
              if ((local_70[0] & 1) != 0) {
                uVar9 = local_68;
              }
              if (uVar9 == 2) {
                if ((local_70[0] & 1) != 0) {
                  puVar8 = local_60;
                }
                FUN_00868720(param_3,*puVar8,puVar8[1]);
              }
              else {
                if (uVar9 != 1) goto LAB_00867be4;
                if ((local_70[0] & 1) != 0) {
                  puVar8 = local_60;
                }
                FUN_008662f0(param_3,*puVar8);
              }
              goto joined_r0x00867ae0;
            }
            puVar3 = *(ulong **)(param_3 + 0x90);
            if (puVar3 == *(ulong **)(param_3 + 0x98)) {
              vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
              ::
              __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
                        ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                          *)(param_3 + 0x88),(basic_string *)&local_88);
              goto joined_r0x00867ae0;
            }
            puVar3[1] = 0;
            puVar3[2] = 0;
            *puVar3 = 0;
            if (((byte)local_88 & 1) == 0) {
              puVar3[2] = (ulong)local_78;
              puVar3[1] = uStack_80;
              *puVar3 = CONCAT71(uStack_87,local_88);
            }
            else {
              if (0xffffffffffffffef < uStack_80) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              if (uStack_80 < 0x17) {
                __dest = (void *)((long)puVar3 + 1);
                *(char *)puVar3 = (char)((int)uStack_80 << 1);
                if (uStack_80 != 0) goto LAB_00867b70;
              }
              else {
                uVar9 = uStack_80 + 0x10 & 0xfffffffffffffff0;
                __dest = operator_new(uVar9);
                puVar3[1] = uStack_80;
                puVar3[2] = (ulong)__dest;
                *puVar3 = uVar9 | 1;
LAB_00867b70:
                memcpy(__dest,__src,uStack_80);
              }
              *(undefined1 *)((long)__dest + uStack_80) = 0;
            }
            *(long *)(param_3 + 0x90) = *(long *)(param_3 + 0x90) + 0x18;
joined_r0x00867ae0:
            if (((byte)local_88 & 1) != 0) {
              operator_delete(local_78);
            }
            if ((local_70[0] & 1) != 0) {
              operator_delete(local_60);
            }
            if (*(long *)(lVar4 + 0x28) == local_58) {
              return pcVar7 + 2;
            }
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          goto LAB_00867be0;
        }
        lVar5 = lVar6 + 1;
        pcVar1 = (char *)(((ulong)local_8c | 1) + lVar6);
        lVar6 = lVar6 + 1;
      } while (pcVar7[lVar5] == *pcVar1);
      pcVar7 = pcVar7 + 1;
    } while (param_2 + -1 != pcVar7);
  }
LAB_00867be0:
                    /* WARNING: Subroutine does not return */
  FUN_00867568();
}

