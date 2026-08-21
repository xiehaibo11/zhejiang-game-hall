
/* v8::internal::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::StringCons const&) */

void v8::internal::operator<<(basic_ostream *param_1,StringCons *param_2)

{
  basic_ostream *pbVar1;
  
  pbVar1 = (basic_ostream *)operator<<(param_1,*(StringConstantBase **)(param_2 + 0x10));
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar1,", ",2)
  ;
  operator<<(pbVar1,*(StringConstantBase **)(param_2 + 0x18));
  return;
}

