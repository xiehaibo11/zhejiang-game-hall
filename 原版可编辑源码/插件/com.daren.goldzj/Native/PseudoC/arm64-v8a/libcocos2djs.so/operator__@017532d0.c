
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::compiler::StoreGlobalParameters const&) */

void v8::internal::compiler::operator<<(basic_ostream *param_1,StoreGlobalParameters *param_2)

{
  char *pcVar1;
  basic_ostream *pbVar2;
  undefined8 local_8;
  
  pcVar1 = "sloppy";
  if (*param_2 != (StoreGlobalParameters)0x0) {
    pcVar1 = "strict";
  }
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,pcVar1,6);
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,", ",2)
  ;
  local_8 = **(undefined8 **)(param_2 + 8);
  internal::operator<<(pbVar2,(Brief *)&local_8);
  return;
}

