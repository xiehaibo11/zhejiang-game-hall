
void FUN_012f8f24(long param_1,basic_ostream *param_2)

{
  undefined8 *puVar1;
  basic_ostream *pbVar2;
  undefined8 local_28;
  
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_2,"[",1)
  ;
  puVar1 = *(undefined8 **)(param_1 + 0x30);
  pbVar2 = (basic_ostream *)
           v8::internal::compiler::operator<<(pbVar2,*(undefined8 *)(param_1 + 0x38));
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar2,", fast-map",10);
  local_28 = *puVar1;
  pbVar2 = (basic_ostream *)v8::internal::operator<<(pbVar2,(Brief *)&local_28);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,"]",1);
  return;
}

