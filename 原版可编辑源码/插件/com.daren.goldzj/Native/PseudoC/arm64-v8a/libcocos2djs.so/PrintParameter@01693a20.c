
/* v8::internal::compiler::Operator1<v8::internal::compiler::ParameterInfo,
   v8::internal::compiler::OpEqualTo<v8::internal::compiler::ParameterInfo>,
   v8::internal::compiler::OpHash<v8::internal::compiler::ParameterInfo>
   >::PrintParameter(std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >&,
   v8::internal::compiler::Operator::PrintVerbosity) const */

void v8::internal::compiler::
     Operator1<v8::internal::compiler::ParameterInfo,v8::internal::compiler::OpEqualTo<v8::internal::compiler::ParameterInfo>,v8::internal::compiler::OpHash<v8::internal::compiler::ParameterInfo>>
     ::PrintParameter(long param_1,basic_ostream *param_2)

{
  basic_ostream *this;
  basic_ostream *pbVar1;
  size_t sVar2;
  char *__s;
  
  this = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_2,"[",1);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)this,*(int *)(param_1 + 0x30));
  if (*(long *)(param_1 + 0x38) != 0) {
    pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (this,", debug name: ",0xe);
    __s = *(char **)(param_1 + 0x38);
    sVar2 = strlen(__s);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar1,__s,sVar2);
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(this,"]",1);
  return;
}

