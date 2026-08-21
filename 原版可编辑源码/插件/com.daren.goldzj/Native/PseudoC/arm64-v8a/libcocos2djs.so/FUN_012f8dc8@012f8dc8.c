
void FUN_012f8dc8(long param_1,basic_ostream *param_2)

{
  basic_ostream *pbVar1;
  undefined8 *puVar2;
  undefined8 local_8;
  
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_2,"[",1)
  ;
  puVar2 = *(undefined8 **)(param_1 + 0x30);
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar1,"double-map",10);
  local_8 = *puVar2;
  pbVar1 = (basic_ostream *)v8::internal::operator<<(pbVar1,(Brief *)&local_8);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar1,"]",1);
  return;
}

