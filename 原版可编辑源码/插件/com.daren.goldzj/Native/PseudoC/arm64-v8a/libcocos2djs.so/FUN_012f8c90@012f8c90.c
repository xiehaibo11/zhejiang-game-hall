
void FUN_012f8c90(long param_1,basic_ostream *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  basic_ostream *pbVar3;
  undefined8 local_30;
  undefined8 local_28;
  
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_2,"[",1)
  ;
  puVar1 = *(undefined8 **)(param_1 + 0x30);
  puVar2 = *(undefined8 **)(param_1 + 0x38);
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar3,"fast-map",8);
  local_28 = *puVar2;
  pbVar3 = (basic_ostream *)v8::internal::operator<<(pbVar3,(Brief *)&local_28);
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar3," double-map",0xb);
  local_30 = *puVar1;
  pbVar3 = (basic_ostream *)v8::internal::operator<<(pbVar3,(Brief *)&local_30);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3,"]",1);
  return;
}

