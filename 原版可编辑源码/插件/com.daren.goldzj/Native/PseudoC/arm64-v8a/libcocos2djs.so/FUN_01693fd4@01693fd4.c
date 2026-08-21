
void FUN_01693fd4(long param_1,basic_ostream *param_2)

{
  basic_ostream *pbVar1;
  
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_2,"[",1)
  ;
  pbVar1 = (basic_ostream *)
           v8::internal::compiler::operator<<(pbVar1,*(CallDescriptor **)(param_1 + 0x30));
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar1,"]",1);
  return;
}

