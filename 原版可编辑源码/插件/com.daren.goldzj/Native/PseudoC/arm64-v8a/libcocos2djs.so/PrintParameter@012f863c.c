
/* v8::internal::compiler::Operator1<v8::internal::compiler::AllocateParameters,
   v8::internal::compiler::OpEqualTo<v8::internal::compiler::AllocateParameters>,
   v8::internal::compiler::OpHash<v8::internal::compiler::AllocateParameters>
   >::PrintParameter(std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >&,
   v8::internal::compiler::Operator::PrintVerbosity) const */

void v8::internal::compiler::
     Operator1<v8::internal::compiler::AllocateParameters,v8::internal::compiler::OpEqualTo<v8::internal::compiler::AllocateParameters>,v8::internal::compiler::OpHash<v8::internal::compiler::AllocateParameters>>
     ::PrintParameter(long param_1,basic_ostream *param_2)

{
  basic_ostream *pbVar1;
  
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_2,"[",1)
  ;
  pbVar1 = (basic_ostream *)
           compiler::operator<<
                     ((compiler *)pbVar1,*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(param_1 + 0x38));
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar1,"]",1);
  return;
}

