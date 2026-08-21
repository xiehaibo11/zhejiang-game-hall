
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::compiler::PrintableInstructionBlock const&) */

basic_ostream *
v8::internal::compiler::operator<<(basic_ostream *param_1,PrintableInstructionBlock *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  int *piVar4;
  long *plVar5;
  int iVar6;
  char cVar7;
  basic_ostream *pbVar8;
  long *plVar9;
  long *plVar10;
  int *piVar11;
  long lVar12;
  locale alStack_68 [8];
  
  puVar2 = *(undefined8 **)param_2;
  lVar3 = *(long *)(param_2 + 8);
  pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"B",1)
  ;
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar8,
             (long)*(int *)((long)puVar2 + 100));
  if (*(int *)(puVar2 + 0xc) < 0) {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,": AO#?",6);
    cVar7 = *(char *)(puVar2 + 0xf);
  }
  else {
    pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,": AO#",5);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar8,
               (long)*(int *)(puVar2 + 0xc));
    cVar7 = *(char *)(puVar2 + 0xf);
  }
  if (cVar7 != '\0') {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1," (deferred)",0xb);
  }
  if (*(char *)((long)puVar2 + 0x7c) == '\0') {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1," (no frame)",0xb);
    cVar7 = *(char *)((long)puVar2 + 0x7d);
  }
  else {
    cVar7 = *(char *)((long)puVar2 + 0x7d);
  }
  if (cVar7 != '\0') {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1," (construct frame)",0x12);
  }
  if (*(char *)((long)puVar2 + 0x7e) != '\0') {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1," (deconstruct frame)",0x14);
  }
  if (-1 < *(int *)((long)puVar2 + 0x6c)) {
    pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1," loop blocks: [",0xf);
    pbVar8 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar8,
                        (long)*(int *)((long)puVar2 + 100));
    pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar8,", ",2);
    pbVar8 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar8,
                        (long)*(int *)((long)puVar2 + 0x6c));
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar8,")",1);
  }
  pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"  instructions: [",0x11);
  pbVar8 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar8,
                      *(int *)(puVar2 + 0xe));
  pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar8,", ",2)
  ;
  pbVar8 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar8,
                      *(int *)((long)puVar2 + 0x74));
  pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar8,")",1);
  std::__ndk1::ios_base::getloc();
  plVar9 = (long *)std::__ndk1::locale::use_facet(alStack_68,(id *)&std::__ndk1::ctype<char>::id);
  cVar7 = (**(code **)(*plVar9 + 0x38))(plVar9,10);
  std::__ndk1::locale::~locale(alStack_68);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar8,cVar7);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar8);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (pbVar8," predecessors:",0xe);
  piVar4 = (int *)puVar2[5];
  for (piVar11 = (int *)puVar2[4]; piVar11 != piVar4; piVar11 = piVar11 + 1) {
    iVar6 = *piVar11;
    pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1," B",2);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar8,iVar6);
  }
  std::__ndk1::ios_base::getloc();
  plVar9 = (long *)std::__ndk1::locale::use_facet(alStack_68,(id *)&std::__ndk1::ctype<char>::id);
  cVar7 = (**(code **)(*plVar9 + 0x38))(plVar9,10);
  std::__ndk1::locale::~locale(alStack_68);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_1,cVar7);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_1);
  plVar5 = (long *)puVar2[9];
  for (plVar9 = (long *)puVar2[8]; plVar9 != plVar5; plVar9 = plVar9 + 1) {
    lVar12 = *plVar9;
    pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,"     phi: ",10);
    pbVar8 = (basic_ostream *)operator<<(pbVar8,(InstructionOperand *)(lVar12 + 8));
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar8," =",2);
    piVar4 = *(int **)(lVar12 + 0x18);
    for (piVar11 = *(int **)(lVar12 + 0x10); piVar11 != piVar4; piVar11 = piVar11 + 1) {
      iVar6 = *piVar11;
      pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_1," v",2);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar8,iVar6);
    }
    std::__ndk1::ios_base::getloc();
    plVar10 = (long *)std::__ndk1::locale::use_facet(alStack_68,(id *)&std::__ndk1::ctype<char>::id)
    ;
    cVar7 = (**(code **)(*plVar10 + 0x38))(plVar10,10);
    std::__ndk1::locale::~locale(alStack_68);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_1,cVar7);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_1);
  }
  lVar12 = (long)*(int *)(puVar2 + 0xe);
  if (*(int *)(puVar2 + 0xe) < *(int *)((long)puVar2 + 0x74)) {
    do {
      pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_1,"   ",3);
      *(undefined8 *)(pbVar8 + *(long *)(*(long *)pbVar8 + -0x18) + 0x18) = 5;
      pbVar8 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar8,(int)lVar12);
      pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar8,": ",2);
      uVar1 = lVar12 + *(long *)(lVar3 + 0xb0);
      operator<<(pbVar8,*(Instruction **)
                         (*(long *)(*(long *)(lVar3 + 0x88) + (uVar1 >> 6 & 0x3fffffffffffff8)) +
                         (uVar1 & 0x1ff) * 8));
      std::__ndk1::ios_base::getloc();
      plVar9 = (long *)std::__ndk1::locale::use_facet
                                 (alStack_68,(id *)&std::__ndk1::ctype<char>::id);
      cVar7 = (**(code **)(*plVar9 + 0x38))(plVar9,10);
      std::__ndk1::locale::~locale(alStack_68);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar8,cVar7);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar8);
      lVar12 = lVar12 + 1;
    } while (lVar12 < *(int *)((long)puVar2 + 0x74));
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (param_1," successors:",0xc);
  piVar4 = (int *)puVar2[1];
  for (piVar11 = (int *)*puVar2; piVar11 != piVar4; piVar11 = piVar11 + 1) {
    iVar6 = *piVar11;
    pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1," B",2);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar8,iVar6);
  }
  std::__ndk1::ios_base::getloc();
  plVar9 = (long *)std::__ndk1::locale::use_facet(alStack_68,(id *)&std::__ndk1::ctype<char>::id);
  cVar7 = (**(code **)(*plVar9 + 0x38))(plVar9,10);
  std::__ndk1::locale::~locale(alStack_68);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_1,cVar7);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_1);
  return param_1;
}

