
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::compiler::NamedAccess const&) */

void v8::internal::compiler::operator<<(basic_ostream *param_1,NamedAccess *param_2)

{
  char *pcVar1;
  basic_ostream *pbVar2;
  undefined8 local_8;
  
  local_8 = **(undefined8 **)param_2;
  pbVar2 = (basic_ostream *)internal::operator<<(param_1,(Brief *)&local_8);
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,", ",2)
  ;
  pcVar1 = "sloppy";
  if (param_2[0x18] != (NamedAccess)0x0) {
    pcVar1 = "strict";
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,pcVar1,6);
  return;
}

