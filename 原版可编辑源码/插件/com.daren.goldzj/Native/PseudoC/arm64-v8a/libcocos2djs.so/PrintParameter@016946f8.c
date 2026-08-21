
/* v8::internal::compiler::Operator1<double, v8::internal::compiler::OpEqualTo<double>,
   v8::internal::compiler::OpHash<double> >::PrintParameter(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::compiler::Operator::PrintVerbosity) const */

void v8::internal::compiler::
     Operator1<double,v8::internal::compiler::OpEqualTo<double>,v8::internal::compiler::OpHash<double>>
     ::PrintParameter(long param_1,basic_ostream *param_2)

{
  basic_ostream *pbVar1;
  
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_2,"[",1)
  ;
  pbVar1 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar1,
                      *(double *)(param_1 + 0x30));
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar1,"]",1);
  return;
}

