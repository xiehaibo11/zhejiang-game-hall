
/* std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >&
   std::__ndk1::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, char const*) */

basic_ostream * std::__ndk1::operator<<(basic_ostream *param_1,char *param_2)

{
  size_t sVar1;
  basic_ostream *pbVar2;
  
  sVar1 = strlen(param_2);
  pbVar2 = __put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,param_2,sVar1);
  return pbVar2;
}

