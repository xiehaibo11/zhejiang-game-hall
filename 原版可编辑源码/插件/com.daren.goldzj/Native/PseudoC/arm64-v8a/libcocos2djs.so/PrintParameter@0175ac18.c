
/* v8::internal::compiler::Operator1<v8::internal::compiler::LoadGlobalParameters,
   v8::internal::compiler::OpEqualTo<v8::internal::compiler::LoadGlobalParameters>,
   v8::internal::compiler::OpHash<v8::internal::compiler::LoadGlobalParameters>
   >::PrintParameter(std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >&,
   v8::internal::compiler::Operator::PrintVerbosity) const */

void v8::internal::compiler::
     Operator1<v8::internal::compiler::LoadGlobalParameters,v8::internal::compiler::OpEqualTo<v8::internal::compiler::LoadGlobalParameters>,v8::internal::compiler::OpHash<v8::internal::compiler::LoadGlobalParameters>>
     ::PrintParameter(long param_1,basic_ostream *param_2)

{
  basic_ostream *pbVar1;
  undefined8 local_8;
  
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_2,"[",1)
  ;
  local_8 = **(undefined8 **)(param_1 + 0x30);
  pbVar1 = (basic_ostream *)internal::operator<<(pbVar1,(Brief *)&local_8);
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar1,", ",2)
  ;
  pbVar1 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar1,
                      *(int *)(param_1 + 0x48));
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar1,"]",1);
  return;
}

