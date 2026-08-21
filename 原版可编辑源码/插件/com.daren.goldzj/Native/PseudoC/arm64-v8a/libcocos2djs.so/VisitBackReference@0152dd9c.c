
/* v8::internal::RegExpUnparser::VisitBackReference(v8::internal::RegExpBackReference*, void*) */

undefined8
v8::internal::RegExpUnparser::VisitBackReference(RegExpBackReference *param_1,void *param_2)

{
  basic_ostream *pbVar1;
  
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (*(basic_ostream **)(param_1 + 8),"(<- ",4);
  pbVar1 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar1,
                      *(int *)(*(long *)((long)param_2 + 8) + 0x10));
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar1,")",1);
  return 0;
}

