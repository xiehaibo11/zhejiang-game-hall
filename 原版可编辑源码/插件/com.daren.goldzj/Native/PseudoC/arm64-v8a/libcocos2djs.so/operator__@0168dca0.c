
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::compiler::ParameterInfo const&) */

basic_ostream * v8::internal::compiler::operator<<(basic_ostream *param_1,ParameterInfo *param_2)

{
  basic_ostream *pbVar1;
  size_t sVar2;
  char *__s;
  
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_1,*(int *)param_2);
  if (*(long *)(param_2 + 8) != 0) {
    pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,", debug name: ",0xe);
    __s = *(char **)(param_2 + 8);
    sVar2 = strlen(__s);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar1,__s,sVar2);
  }
  return param_1;
}

