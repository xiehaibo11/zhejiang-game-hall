
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::compiler::InstructionRangesAsJSON const&) */

basic_ostream *
v8::internal::compiler::operator<<(basic_ostream *param_1,InstructionRangesAsJSON *param_2)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  basic_ostream *pbVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  undefined4 local_68 [2];
  
  iVar2 = *(int *)(*(long *)param_2 + 0xb8);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (param_1,", \"nodeIdToInstructionRange\": {",0x1f);
  plVar7 = *(long **)(param_2 + 8);
  if (plVar7[1] != *plVar7) {
    lVar9 = 0;
    bVar5 = false;
    uVar8 = 0;
    do {
      iVar4 = *(int *)(*plVar7 + lVar9);
      if (iVar4 != -1) {
        iVar3 = *(int *)(*plVar7 + lVar9 + 4);
        if (bVar5) {
          std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,", ",2)
          ;
        }
        bVar5 = true;
        pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (param_1,"\"",1);
        pbVar6 = (basic_ostream *)
                 std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                           ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar6,uVar8);
        pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (pbVar6,"\": [",4);
        pbVar6 = (basic_ostream *)
                 std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                           ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar6,
                            iVar2 - iVar4);
        pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (pbVar6,", ",2);
        pbVar6 = (basic_ostream *)
                 std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                           ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar6,
                            iVar2 - iVar3);
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar6,"]",1);
        plVar7 = *(long **)(param_2 + 8);
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 8;
    } while (uVar8 < (ulong)(plVar7[1] - *plVar7 >> 3));
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"}",1);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (param_1,", \"blockIdtoInstructionRange\": {",0x20);
  plVar7 = (long *)**(long **)(*(long *)param_2 + 0x10);
  plVar1 = (long *)(*(long **)(*(long *)param_2 + 0x10))[1];
  if (plVar7 != plVar1) {
    lVar9 = *plVar7;
    pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,"\"",1);
    local_68[0] = *(undefined4 *)(lVar9 + 100);
    pbVar6 = (basic_ostream *)operator<<(pbVar6,(RpoNumber *)local_68);
    pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar6,"\": [",4);
    pbVar6 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar6,
                        *(int *)(lVar9 + 0x70));
    pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar6,", ",2);
    pbVar6 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar6,
                        *(int *)(lVar9 + 0x74));
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar6,"]",1);
    while (plVar7 = plVar7 + 1, plVar7 != plVar1) {
      lVar9 = *plVar7;
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,", ",2);
      pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_1,"\"",1);
      local_68[0] = *(undefined4 *)(lVar9 + 100);
      pbVar6 = (basic_ostream *)operator<<(pbVar6,(RpoNumber *)local_68);
      pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar6,"\": [",4);
      pbVar6 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar6,
                          *(int *)(lVar9 + 0x70));
      pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar6,", ",2);
      pbVar6 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar6,
                          *(int *)(lVar9 + 0x74));
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar6,"]",1);
    }
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"}",1);
  return param_1;
}

