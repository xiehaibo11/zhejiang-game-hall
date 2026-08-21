
/* v8::internal::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::StringConstantBase const*) */

basic_ostream * v8::internal::operator<<(basic_ostream *param_1,StringConstantBase *param_2)

{
  int iVar1;
  basic_ostream *pbVar2;
  undefined8 local_28;
  
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (param_1,"DelayedStringConstant: ",0x17);
  iVar1 = *(int *)param_2;
  if (iVar1 == 2) {
    pbVar2 = (basic_ostream *)operator<<(param_1,*(StringConstantBase **)(param_2 + 0x10));
    pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar2,", ",2);
    operator<<(pbVar2,*(StringConstantBase **)(param_2 + 0x18));
  }
  else if (iVar1 == 1) {
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_1,
               *(double *)(param_2 + 0x10));
  }
  else if (iVar1 == 0) {
    local_28 = **(undefined8 **)(param_2 + 0x10);
    operator<<(param_1,(Brief *)&local_28);
  }
  return param_1;
}

