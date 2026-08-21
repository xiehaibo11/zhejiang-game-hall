
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::compiler::PrintableLiveRange const&) */

basic_ostream *
v8::internal::compiler::operator<<(basic_ostream *param_1,PrintableLiveRange *param_2)

{
  char cVar1;
  basic_ostream *pbVar2;
  long *plVar3;
  undefined8 uVar4;
  InstructionOperand *pIVar5;
  uint uVar6;
  undefined8 *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  locale local_58 [8];
  
  piVar8 = *(int **)(param_2 + 8);
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"Range: ",7);
  pbVar2 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,
                      *(int *)(*(long *)(piVar8 + 8) + 0x5c));
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,":",1);
  pbVar2 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,*piVar8);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2," ",1);
  uVar6 = *(uint *)(*(long *)(piVar8 + 8) + 4);
  if ((uVar6 >> 3 & 1) != 0) {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"phi ",4);
    uVar6 = *(uint *)(*(long *)(piVar8 + 8) + 4);
  }
  if ((uVar6 >> 4 & 1) != 0) {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"nlphi ",6);
  }
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"{",1)
  ;
  std::__ndk1::ios_base::getloc();
  plVar3 = (long *)std::__ndk1::locale::use_facet(local_58,(id *)&std::__ndk1::ctype<char>::id);
  cVar1 = (**(code **)(*plVar3 + 0x38))(plVar3,10);
  std::__ndk1::locale::~locale(local_58);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,cVar1);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2);
  puVar9 = *(undefined4 **)(piVar8 + 4);
  puVar7 = *(undefined8 **)(piVar8 + 6);
  if (puVar7 != (undefined8 *)0x0) {
    pIVar5 = (InstructionOperand *)*puVar7;
    while( true ) {
      if (pIVar5 == (InstructionOperand *)0x0) {
        puVar7 = (undefined8 *)puVar7[2];
      }
      else {
        uVar4 = operator<<(param_1,pIVar5);
        pbVar2 = (basic_ostream *)operator<<(uVar4,*(undefined4 *)(puVar7 + 3));
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2," ",1);
        puVar7 = (undefined8 *)puVar7[2];
      }
      if (puVar7 == (undefined8 *)0x0) break;
      pIVar5 = (InstructionOperand *)*puVar7;
    }
  }
  std::__ndk1::ios_base::getloc();
  plVar3 = (long *)std::__ndk1::locale::use_facet(local_58,(id *)&std::__ndk1::ctype<char>::id);
  cVar1 = (**(code **)(*plVar3 + 0x38))(plVar3,10);
  std::__ndk1::locale::~locale(local_58);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_1,cVar1);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_1);
  for (; puVar9 != (undefined4 *)0x0; puVar9 = *(undefined4 **)(puVar9 + 2)) {
    local_58[0] = (locale)0x5b;
    pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,(char *)local_58,1);
    pbVar2 = (basic_ostream *)operator<<(pbVar2,*puVar9);
    pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar2,", ",2);
    pbVar2 = (basic_ostream *)operator<<(pbVar2,puVar9[1]);
    local_58[0] = (locale)0x29;
    pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar2,(char *)local_58,1);
    std::__ndk1::ios_base::getloc();
    plVar3 = (long *)std::__ndk1::locale::use_facet(local_58,(id *)&std::__ndk1::ctype<char>::id);
    cVar1 = (**(code **)(*plVar3 + 0x38))(plVar3,10);
    std::__ndk1::locale::~locale(local_58);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,cVar1);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2);
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"}",1);
  return param_1;
}

