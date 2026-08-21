
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::compiler::CreateFunctionContextParameters
   const&) */

void v8::internal::compiler::operator<<
               (basic_ostream *param_1,CreateFunctionContextParameters *param_2)

{
  basic_ostream *pbVar1;
  
  pbVar1 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_1,
                      *(int *)(param_2 + 8));
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar1,", ",2)
  ;
  internal::operator<<(pbVar1,param_2[0xc]);
  return;
}

