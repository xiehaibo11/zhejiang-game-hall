
/* v8::internal::compiler::Operator1<v8::internal::compiler::StackSlotRepresentation,
   v8::internal::compiler::OpEqualTo<v8::internal::compiler::StackSlotRepresentation>,
   v8::internal::compiler::OpHash<v8::internal::compiler::StackSlotRepresentation>
   >::PrintParameter(std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >&,
   v8::internal::compiler::Operator::PrintVerbosity) const */

void v8::internal::compiler::
     Operator1<v8::internal::compiler::StackSlotRepresentation,v8::internal::compiler::OpEqualTo<v8::internal::compiler::StackSlotRepresentation>,v8::internal::compiler::OpHash<v8::internal::compiler::StackSlotRepresentation>>
     ::PrintParameter(long param_1,basic_ostream *param_2)

{
  int iVar1;
  basic_ostream *pbVar2;
  
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_2,"[",1)
  ;
  iVar1 = *(int *)(param_1 + 0x30);
  pbVar2 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,
                      *(int *)(param_1 + 0x2c));
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,", ",2)
  ;
  pbVar2 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,iVar1);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,"]",1);
  return;
}

