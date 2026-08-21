
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::compiler::ReferenceMap const&) */

void v8::internal::compiler::operator<<(basic_ostream *param_1,ReferenceMap *param_2)

{
  InstructionOperand *pIVar1;
  InstructionOperand *pIVar2;
  basic_ostream *pbVar3;
  
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"{",1);
  pIVar1 = *(InstructionOperand **)param_2;
  pIVar2 = *(InstructionOperand **)(param_2 + 8);
  if (pIVar1 != pIVar2) {
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,"",0);
    operator<<(pbVar3,pIVar1);
    while (pIVar1 = pIVar1 + 8, pIVar1 != pIVar2) {
      pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_1,";",1);
      operator<<(pbVar3,pIVar1);
    }
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"}",1);
  return;
}

