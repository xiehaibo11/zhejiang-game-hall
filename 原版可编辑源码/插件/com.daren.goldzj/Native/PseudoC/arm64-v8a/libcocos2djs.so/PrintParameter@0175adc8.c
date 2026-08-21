
/* v8::internal::compiler::Operator1<v8::internal::compiler::StoreGlobalParameters,
   v8::internal::compiler::OpEqualTo<v8::internal::compiler::StoreGlobalParameters>,
   v8::internal::compiler::OpHash<v8::internal::compiler::StoreGlobalParameters>
   >::PrintParameter(std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >&,
   v8::internal::compiler::Operator::PrintVerbosity) const */

void v8::internal::compiler::
     Operator1<v8::internal::compiler::StoreGlobalParameters,v8::internal::compiler::OpEqualTo<v8::internal::compiler::StoreGlobalParameters>,v8::internal::compiler::OpHash<v8::internal::compiler::StoreGlobalParameters>>
     ::PrintParameter(long param_1,basic_ostream *param_2)

{
  char *pcVar1;
  basic_ostream *pbVar2;
  undefined8 local_8;
  
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_2,"[",1)
  ;
  pcVar1 = "sloppy";
  if (*(char *)(param_1 + 0x30) != '\0') {
    pcVar1 = "strict";
  }
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar2,pcVar1,6);
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,", ",2)
  ;
  local_8 = **(undefined8 **)(param_1 + 0x38);
  pbVar2 = (basic_ostream *)internal::operator<<(pbVar2,(Brief *)&local_8);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,"]",1);
  return;
}

