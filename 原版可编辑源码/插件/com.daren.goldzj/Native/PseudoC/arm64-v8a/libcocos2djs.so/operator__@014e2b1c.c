
/* v8::internal::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::ExternalReference) */

basic_ostream<char,std::__ndk1::char_traits<char>> *
v8::internal::operator<<(basic_ostream<char,std::__ndk1::char_traits<char>> *param_1,void *param_2)

{
  long lVar1;
  basic_ostream *pbVar2;
  size_t sVar3;
  char *__s;
  
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<(param_1,param_2);
  lVar1 = Runtime::FunctionForEntry((ulong)param_2);
  if (lVar1 != 0) {
    pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)param_1,"<",1);
    __s = *(char **)(lVar1 + 8);
    sVar3 = strlen(__s);
    pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar2,__s,sVar3);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,".entry>",7);
  }
  return param_1;
}

