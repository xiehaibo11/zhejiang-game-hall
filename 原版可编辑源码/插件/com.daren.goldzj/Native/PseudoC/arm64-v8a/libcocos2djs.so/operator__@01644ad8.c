
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::compiler::MoveOperands const&) */

void v8::internal::compiler::operator<<(basic_ostream *param_1,MoveOperands *param_2)

{
  basic_ostream *pbVar1;
  
  operator<<(param_1,(InstructionOperand *)(param_2 + 8));
  if (*(long *)param_2 != *(long *)(param_2 + 8)) {
    pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1," = ",3);
    operator<<(pbVar1,(InstructionOperand *)param_2);
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,";",1);
  return;
}

