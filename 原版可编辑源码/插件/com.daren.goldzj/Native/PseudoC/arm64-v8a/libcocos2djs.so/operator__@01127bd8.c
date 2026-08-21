
/* v8::internal::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::PropertyAttributes const&) */

basic_ostream * v8::internal::operator<<(basic_ostream *param_1,PropertyAttributes *param_2)

{
  char *pcVar1;
  char *pcVar2;
  
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"[",1);
  pcVar1 = "_";
  pcVar2 = "W";
  if ((*(uint *)param_2 & 1) != 0) {
    pcVar2 = pcVar1;
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,pcVar2,1);
  pcVar2 = "E";
  if ((*(uint *)param_2 & 2) != 0) {
    pcVar2 = pcVar1;
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,pcVar2,1);
  pcVar2 = "C";
  if ((*(uint *)param_2 & 4) != 0) {
    pcVar2 = pcVar1;
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,pcVar2,1);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"]",1);
  return param_1;
}

