
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::compiler::GetTemplateObjectParameters const&) */

void v8::internal::compiler::operator<<(basic_ostream *param_1,GetTemplateObjectParameters *param_2)

{
  basic_ostream *pbVar1;
  undefined8 local_28;
  undefined8 local_8;
  
  local_8 = **(undefined8 **)param_2;
  pbVar1 = (basic_ostream *)internal::operator<<(param_1,(Brief *)&local_8);
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar1,", ",2)
  ;
  local_28 = **(undefined8 **)(param_2 + 8);
  internal::operator<<(pbVar1,(Brief *)&local_28);
  return;
}

