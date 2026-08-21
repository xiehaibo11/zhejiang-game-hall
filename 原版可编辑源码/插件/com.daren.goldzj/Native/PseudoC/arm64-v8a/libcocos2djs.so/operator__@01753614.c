
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::compiler::CreateBoundFunctionParameters const&)
    */

basic_ostream *
v8::internal::compiler::operator<<(basic_ostream *param_1,CreateBoundFunctionParameters *param_2)

{
  basic_ostream *pbVar1;
  undefined8 local_28;
  
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_1,*(ulong *)param_2);
  if (*(long *)(param_2 + 8) != 0) {
    pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,", ",2);
    local_28 = **(undefined8 **)(param_2 + 8);
    internal::operator<<(pbVar1,(Brief *)&local_28);
  }
  return param_1;
}

