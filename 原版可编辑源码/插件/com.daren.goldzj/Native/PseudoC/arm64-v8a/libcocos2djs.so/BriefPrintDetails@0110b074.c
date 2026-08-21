
/* v8::internal::ClassPositions::BriefPrintDetails(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) */

void __thiscall
v8::internal::ClassPositions::BriefPrintDetails(ClassPositions *this,basic_ostream *param_1)

{
  basic_ostream *pbVar1;
  
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1," ",1)
  ;
  pbVar1 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar1,
                      *(int *)(*(long *)this + 3) >> 1);
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar1,", ",2)
  ;
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar1,
             *(int *)(*(long *)this + 7) >> 1);
  return;
}

