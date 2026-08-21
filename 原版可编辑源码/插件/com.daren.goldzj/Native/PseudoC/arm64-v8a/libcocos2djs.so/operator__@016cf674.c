
/* WARNING: Removing unreachable block (ram,0x016cf8e0) */
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::compiler::InstructionBlockAsJSON const&) */

basic_ostream *
v8::internal::compiler::operator<<(basic_ostream *param_1,InstructionBlockAsJSON *param_2)

{
  ulong uVar1;
  char *pcVar2;
  long *plVar3;
  int *piVar4;
  long lVar5;
  int *piVar6;
  long *plVar7;
  int iVar8;
  bool bVar9;
  basic_ostream *pbVar10;
  long lVar11;
  long *plVar12;
  int local_88 [2];
  undefined8 local_80;
  long lStack_78;
  long local_70;
  long lStack_68;
  
  plVar3 = *(long **)param_2;
  lVar5 = *(long *)(param_2 + 8);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"{",1);
  pbVar10 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                      (param_1,"\"id\": ",6);
  local_88[0] = *(int *)((long)plVar3 + 100);
  pbVar10 = (basic_ostream *)operator<<(pbVar10,(RpoNumber *)local_88);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar10,",",1);
  pbVar10 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                      (param_1,"\"deferred\": ",0xc);
  bVar9 = (char)plVar3[0xf] != '\0';
  pcVar2 = "false";
  if (bVar9) {
    pcVar2 = "true";
  }
  uVar1 = 4;
  if (!bVar9) {
    uVar1 = 5;
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar10,pcVar2,uVar1);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,",",1);
  pbVar10 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                      (param_1,"\"loop_header\": ",0xf);
  pbVar10 = (basic_ostream *)
            std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                      ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar10,
                       (bool)((byte)~(byte)((uint)*(undefined4 *)((long)plVar3 + 0x6c) >> 0x18) >> 7
                             ));
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar10,",",1);
  if (-1 < *(int *)((long)plVar3 + 0x6c)) {
    pbVar10 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                        (param_1,"\"loop_end\": ",0xc);
    local_88[0] = *(int *)((long)plVar3 + 0x6c);
    pbVar10 = (basic_ostream *)operator<<(pbVar10,(RpoNumber *)local_88);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar10,",",1);
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (param_1,"\"predecessors\": [",0x11);
  piVar4 = (int *)plVar3[4];
  piVar6 = (int *)plVar3[5];
  if (piVar4 != piVar6) {
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_1,*piVar4);
    while (piVar4 = piVar4 + 1, piVar4 != piVar6) {
      iVar8 = *piVar4;
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,",",1);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_1,iVar8);
    }
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"],",2);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (param_1,"\"successors\": [",0xf);
  piVar4 = (int *)*plVar3;
  piVar6 = (int *)plVar3[1];
  if (piVar4 != piVar6) {
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_1,*piVar4);
    while (piVar4 = piVar4 + 1, piVar4 != piVar6) {
      iVar8 = *piVar4;
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,",",1);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_1,iVar8);
    }
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"],",2);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (param_1,"\"phis\": [",9);
  local_70 = 0;
  plVar12 = (long *)plVar3[8];
  plVar7 = (long *)plVar3[9];
  lStack_68 = lVar5;
  if (plVar12 != plVar7) {
    lVar11 = *plVar12;
    while( true ) {
      local_70 = lVar11 + 8;
      pbVar10 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                          (param_1,"{\"output\" : ",0xc);
      pbVar10 = (basic_ostream *)operator<<(pbVar10,(InstructionOperandAsJSON *)&local_70);
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar10,",",1);
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                (param_1,"\"operands\": [",0xd);
      piVar4 = *(int **)(lVar11 + 0x10);
      piVar6 = *(int **)(lVar11 + 0x18);
      if (piVar4 != piVar6) {
        iVar8 = *piVar4;
        pbVar10 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                            (param_1,"\"v",2);
        pbVar10 = (basic_ostream *)
                  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar10,iVar8);
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar10,"\"",1);
        while (piVar4 = piVar4 + 1, piVar4 != piVar6) {
          iVar8 = *piVar4;
          std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,",",1);
          pbVar10 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                              (param_1,"\"v",2);
          pbVar10 = (basic_ostream *)
                    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar10,iVar8);
          std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar10,"\"",1)
          ;
        }
      }
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"]}",2);
      plVar12 = plVar12 + 1;
      if (plVar12 == plVar7) break;
      lVar11 = *plVar12;
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,",",1);
    }
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"],",2);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (param_1,"\"instructions\": [",0x11);
  local_88[0] = -1;
  local_80 = 0;
  iVar8 = (int)plVar3[0xe];
  lStack_78 = lVar5;
  if (iVar8 < *(int *)((long)plVar3 + 0x74)) {
    uVar1 = *(long *)(lVar5 + 0xb0) + (long)iVar8;
    local_80 = *(undefined8 *)
                (*(long *)(*(long *)(lVar5 + 0x88) + (uVar1 >> 6 & 0x3fffffffffffff8)) +
                (uVar1 & 0x1ff) * 8);
    local_88[0] = iVar8;
    operator<<(param_1,(InstructionAsJSON *)local_88);
    lVar11 = (long)iVar8 + 1;
    if (lVar11 < *(int *)((long)plVar3 + 0x74)) {
      do {
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,",",1);
        local_88[0] = (int)lVar11;
        uVar1 = lVar11 + *(long *)(lVar5 + 0xb0);
        local_80 = *(undefined8 *)
                    (*(long *)(*(long *)(lVar5 + 0x88) + (uVar1 >> 6 & 0x3fffffffffffff8)) +
                    (uVar1 & 0x1ff) * 8);
        operator<<(param_1,(InstructionAsJSON *)local_88);
        lVar11 = lVar11 + 1;
      } while (lVar11 < *(int *)((long)plVar3 + 0x74));
    }
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"]",1);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"}",1);
  return param_1;
}

